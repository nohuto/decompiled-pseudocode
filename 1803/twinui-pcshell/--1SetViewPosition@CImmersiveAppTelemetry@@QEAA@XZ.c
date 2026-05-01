/*
 * XREFs of ??1SetViewPosition@CImmersiveAppTelemetry@@QEAA@XZ @ 0x1800F65BC
 * Callers:
 *     _CImmersiveApp::SetViewPosition_::_1_::dtor$0 @ 0x1800B4230 (_CImmersiveApp--SetViewPosition_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180010008 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 */

void __fastcall CImmersiveAppTelemetry::SetViewPosition::~SetViewPosition(
        CImmersiveAppTelemetry::SetViewPosition *this)
{
  *(_QWORD *)this = &CImmersiveAppTelemetry::SetViewPosition::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
