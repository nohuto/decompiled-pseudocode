/*
 * XREFs of ??1ReconcileApplicationViewState@CFramePresentationTelemetry@@QEAA@XZ @ 0x1800F656C
 * Callers:
 *     _CFrameApplicationPresentation::ReconcileApplicationViewState_::_1_::dtor$0 @ 0x1800B1630 (_CFrameApplicationPresentation--ReconcileApplicationViewState_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180010008 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 */

void __fastcall CFramePresentationTelemetry::ReconcileApplicationViewState::~ReconcileApplicationViewState(
        CFramePresentationTelemetry::ReconcileApplicationViewState *this)
{
  *(_QWORD *)this = &CFramePresentationTelemetry::ReconcileApplicationViewState::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
