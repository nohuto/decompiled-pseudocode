/*
 * XREFs of ??1ApplicationViewBackedViewHostItem_put_Visibility@HolographicPositionerTelemetry@@QEAA@XZ @ 0x18010C74C
 * Callers:
 *     _ApplicationViewBackedViewHostItem::put_Visibility_::_1_::dtor$0 @ 0x1801ED9AA (_ApplicationViewBackedViewHostItem--put_Visibility_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180101B90 (-Destroy@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_P.c)
 */

void __fastcall HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_put_Visibility::~ApplicationViewBackedViewHostItem_put_Visibility(
        HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_put_Visibility *this)
{
  *(_QWORD *)this = &HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_put_Visibility::`vftable';
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
