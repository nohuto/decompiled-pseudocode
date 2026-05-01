/*
 * XREFs of ??1SetPendingApplicationWindow@CImmersiveAppTelemetry@@QEAA@XZ @ 0x18005F024
 * Callers:
 *     _CImmersiveApp::CImmersiveWindowCollection::SetPendingApplicationWindow_::_1_::dtor$0 @ 0x18019A58A (_CImmersiveApp--CImmersiveWindowCollection--SetPendingApplicationWindow_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180026A48 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 */

void __fastcall CImmersiveAppTelemetry::SetPendingApplicationWindow::~SetPendingApplicationWindow(
        CImmersiveAppTelemetry::SetPendingApplicationWindow *this)
{
  *(_QWORD *)this = &CImmersiveAppTelemetry::SetPendingApplicationWindow::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
