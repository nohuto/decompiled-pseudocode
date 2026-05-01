/*
 * XREFs of ??1GetWindowAndPrepareForActivation@CImmersiveAppTelemetry@@QEAA@XZ @ 0x1800608E4
 * Callers:
 *     _CImmersiveApp::GetWindowAndPrepareForActivation_::_1_::dtor$0 @ 0x18019A412 (_CImmersiveApp--GetWindowAndPrepareForActivation_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180026A48 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 */

void __fastcall CImmersiveAppTelemetry::GetWindowAndPrepareForActivation::~GetWindowAndPrepareForActivation(
        CImmersiveAppTelemetry::GetWindowAndPrepareForActivation *this)
{
  *(_QWORD *)this = &CImmersiveAppTelemetry::GetWindowAndPrepareForActivation::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
