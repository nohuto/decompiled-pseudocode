/*
 * XREFs of _lambda_b5b3b11bf504546ef5d7da292238c7b0_::__lambda_b5b3b11bf504546ef5d7da292238c7b0_ @ 0x1800F9848
 * Callers:
 *     _CFrameApplicationPresentation::_AddTaskToQueue__lambda_8e77f3627fbb508724cf2b62e627d849____::_1_::dtor$2 @ 0x1800B1518 (_CFrameApplicationPresentation--_AddTaskToQueue__lambda_8e77f3627fbb508724cf2b62e62_ea_1800B1518.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1PresentWindow@CFramePresentationTelemetry@@QEAA@XZ @ 0x1800F6594 (--1PresentWindow@CFramePresentationTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_b5b3b11bf504546ef5d7da292238c7b0_::__lambda_b5b3b11bf504546ef5d7da292238c7b0_(__int64 *a1)
{
  CFramePresentationTelemetry::PresentWindow::~PresentWindow((CFramePresentationTelemetry::PresentWindow *)(a1 + 4));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 2);
  return Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::InternalRelease(a1);
}
