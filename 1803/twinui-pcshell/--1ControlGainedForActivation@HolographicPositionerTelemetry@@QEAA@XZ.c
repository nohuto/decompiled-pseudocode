/*
 * XREFs of ??1ControlGainedForActivation@HolographicPositionerTelemetry@@QEAA@XZ @ 0x1801ACF3C
 * Callers:
 *     ?ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1801ADB50 (-ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER.c)
 *     _HolographicPositioner::ControlGainedForActivation_::_1_::dtor$0 @ 0x1801ADE58 (_HolographicPositioner--ControlGainedForActivation_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801AE118 (-Destroy@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_P.c)
 */

void __fastcall HolographicPositionerTelemetry::ControlGainedForActivation::~ControlGainedForActivation(
        HolographicPositionerTelemetry::ControlGainedForActivation *this)
{
  *(_QWORD *)this = &HolographicPositionerTelemetry::ControlGainedForActivation::`vftable';
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
