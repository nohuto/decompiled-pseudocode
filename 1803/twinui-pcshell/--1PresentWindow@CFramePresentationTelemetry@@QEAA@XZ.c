/*
 * XREFs of ??1PresentWindow@CFramePresentationTelemetry@@QEAA@XZ @ 0x1800F6594
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_8e77f3627fbb508724cf2b62e627d849___ @ 0x180012700 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_8e77f3627fbb508724cf2b62e627d849___.c)
 *     _CFrameApplicationPresentation::PresentWindow_::_1_::dtor$0 @ 0x1800B1670 (_CFrameApplicationPresentation--PresentWindow_--_1_--dtor$0.c)
 *     _lambda_8e77f3627fbb508724cf2b62e627d849_::__lambda_8e77f3627fbb508724cf2b62e627d849_ @ 0x1800F97F4 (_lambda_8e77f3627fbb508724cf2b62e627d849_--__lambda_8e77f3627fbb508724cf2b62e627d849_.c)
 *     _lambda_b5b3b11bf504546ef5d7da292238c7b0_::__lambda_b5b3b11bf504546ef5d7da292238c7b0_ @ 0x1800F9848 (_lambda_b5b3b11bf504546ef5d7da292238c7b0_--__lambda_b5b3b11bf504546ef5d7da292238c7b0_.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180010008 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 */

void __fastcall CFramePresentationTelemetry::PresentWindow::~PresentWindow(
        CFramePresentationTelemetry::PresentWindow *this)
{
  *(_QWORD *)this = &CFramePresentationTelemetry::PresentWindow::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
