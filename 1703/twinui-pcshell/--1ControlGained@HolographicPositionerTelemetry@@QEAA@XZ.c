/*
 * XREFs of ??1ControlGained@HolographicPositionerTelemetry@@QEAA@XZ @ 0x1800D6318
 * Callers:
 *     _HolographicPositioner::ControlGained_::_1_::dtor$4 @ 0x18019D4C8 (_HolographicPositioner--ControlGained_--_1_--dtor$4.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800DD3C0 (-Destroy@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_P.c)
 */

void __fastcall HolographicPositionerTelemetry::ControlGained::~ControlGained(
        HolographicPositionerTelemetry::ControlGained *this)
{
  *(_QWORD *)this = &HolographicPositionerTelemetry::ControlGained::`vftable';
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(this);
}
