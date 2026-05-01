/*
 * XREFs of ??1ApplicationViewBackedViewHostItem_put_Visibility@HolographicPositionerTelemetry@@QEAA@XZ @ 0x1801BB454
 * Callers:
 *     ?put_Visibility@ApplicationViewBackedViewHostItem@@UEAAJE@Z @ 0x1801BE450 (-put_Visibility@ApplicationViewBackedViewHostItem@@UEAAJE@Z.c)
 *     _ApplicationViewBackedViewHostItem::put_Visibility_::_1_::dtor$0 @ 0x1801BE752 (_ApplicationViewBackedViewHostItem--put_Visibility_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801AE118 (-Destroy@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_P.c)
 */

void __fastcall HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_put_Visibility::~ApplicationViewBackedViewHostItem_put_Visibility(
        HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_put_Visibility *this)
{
  *(_QWORD *)this = &HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_put_Visibility::`vftable';
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
