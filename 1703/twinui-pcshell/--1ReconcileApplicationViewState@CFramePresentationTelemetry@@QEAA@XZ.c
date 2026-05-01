/*
 * XREFs of ??1ReconcileApplicationViewState@CFramePresentationTelemetry@@QEAA@XZ @ 0x18006E024
 * Callers:
 *     _CFrameApplicationPresentation::ReconcileApplicationViewState_::_1_::dtor$0 @ 0x18019A8AD (_CFrameApplicationPresentation--ReconcileApplicationViewState_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180026A48 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 */

void __fastcall CFramePresentationTelemetry::ReconcileApplicationViewState::~ReconcileApplicationViewState(
        CFramePresentationTelemetry::ReconcileApplicationViewState *this)
{
  *(_QWORD *)this = &CFramePresentationTelemetry::ReconcileApplicationViewState::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
