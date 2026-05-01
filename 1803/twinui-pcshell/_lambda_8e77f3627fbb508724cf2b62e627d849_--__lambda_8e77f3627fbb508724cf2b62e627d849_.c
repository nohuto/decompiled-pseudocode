/*
 * XREFs of _lambda_8e77f3627fbb508724cf2b62e627d849_::__lambda_8e77f3627fbb508724cf2b62e627d849_ @ 0x1800F97F4
 * Callers:
 *     _CFrameApplicationPresentation::_AddTaskToQueue__lambda_8e77f3627fbb508724cf2b62e627d849____::_1_::dtor$0 @ 0x1800B1500 (_CFrameApplicationPresentation--_AddTaskToQueue__lambda_8e77f3627fbb508724cf2b62e627d849____--_1.c)
 * Callees:
 *     ??1PresentWindow@CFramePresentationTelemetry@@QEAA@XZ @ 0x1800F6594 (--1PresentWindow@CFramePresentationTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_8e77f3627fbb508724cf2b62e627d849_::__lambda_8e77f3627fbb508724cf2b62e627d849_(__int64 *a1)
{
  CFramePresentationTelemetry::PresentWindow::~PresentWindow((CFramePresentationTelemetry::PresentWindow *)(a1 + 2));
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
}
