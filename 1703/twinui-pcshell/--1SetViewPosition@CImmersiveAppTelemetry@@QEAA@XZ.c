/*
 * XREFs of ??1SetViewPosition@CImmersiveAppTelemetry@@QEAA@XZ @ 0x1800611B4
 * Callers:
 *     _CImmersiveApp::SetViewPosition_::_1_::dtor$0 @ 0x18019A3B2 (_CImmersiveApp--SetViewPosition_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180026A48 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 */

void __fastcall CImmersiveAppTelemetry::SetViewPosition::~SetViewPosition(
        CImmersiveAppTelemetry::SetViewPosition *this)
{
  *(_QWORD *)this = &CImmersiveAppTelemetry::SetViewPosition::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
