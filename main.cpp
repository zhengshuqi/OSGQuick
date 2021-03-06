#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "OSGItem.h"
#include "RenderView.h"

int main(int argc, char *argv[])
{
	QGuiApplication app(argc, argv);

	qmlRegisterType<OSGItem>("OSGQuick.OSGItem", 1, 0, "OSGItem");
	qmlRegisterType<RenderView>("OSGQuick.RenderView", 1, 0, "RenderView");
	QQmlApplicationEngine engine;
	engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
	return app.exec();
}
