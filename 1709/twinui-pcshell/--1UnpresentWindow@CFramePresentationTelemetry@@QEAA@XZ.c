/*
 * XREFs of ??1UnpresentWindow@CFramePresentationTelemetry@@QEAA@XZ @ 0x18007067C
 * Callers:
 *     _CFrameApplicationPresentation::UnpresentWindow_::_1_::dtor$0 @ 0x1801E9250 (_CFrameApplicationPresentation--UnpresentWindow_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800271B8 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 */

void __fastcall CFramePresentationTelemetry::UnpresentWindow::~UnpresentWindow(
        CFramePresentationTelemetry::UnpresentWindow *this)
{
  *(_QWORD *)this = &CFramePresentationTelemetry::UnpresentWindow::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
