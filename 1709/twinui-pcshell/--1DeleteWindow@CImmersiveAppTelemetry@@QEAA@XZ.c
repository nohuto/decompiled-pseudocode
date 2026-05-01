/*
 * XREFs of ??1DeleteWindow@CImmersiveAppTelemetry@@QEAA@XZ @ 0x180060FE4
 * Callers:
 *     _CImmersiveApp::CImmersiveWindowCollection::DeleteWindow_::_1_::dtor$0 @ 0x1801E9008 (_CImmersiveApp--CImmersiveWindowCollection--DeleteWindow_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800271B8 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 */

void __fastcall CImmersiveAppTelemetry::DeleteWindow::~DeleteWindow(CImmersiveAppTelemetry::DeleteWindow *this)
{
  *(_QWORD *)this = &CImmersiveAppTelemetry::DeleteWindow::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
