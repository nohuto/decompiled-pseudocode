/*
 * XREFs of _Microsoft::WRL::Details::MakeAndInitialize_ViewPresentationMediator_IUnknown__::_1_::dtor$1 @ 0x1801F5B4F
 * Callers:
 *     <none>
 * Callees:
 *     ?AnimateHiddenElement@ItemAnimationCoordinatorBase@@MEAAXAEBUComponentInfo@1@@Z @ 0x18001A2F0 (-AnimateHiddenElement@ItemAnimationCoordinatorBase@@MEAAXAEBUComponentInfo@1@@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAndInitialize_ViewPresentationMediator_IUnknown__::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  ItemAnimationCoordinatorBase::AnimateHiddenElement(
    *(ItemAnimationCoordinatorBase **)(a2 + 96),
    *(const struct ItemAnimationCoordinatorBase::ComponentInfo **)(a2 + 88));
}
