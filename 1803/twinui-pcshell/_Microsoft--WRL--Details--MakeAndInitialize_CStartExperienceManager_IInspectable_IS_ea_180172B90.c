/*
 * XREFs of _Microsoft::WRL::Details::MakeAndInitialize_CStartExperienceManager_IInspectable_IServiceProvider_____ptr64_&___ptr64__::_1_::dtor$1 @ 0x180172B90
 * Callers:
 *     <none>
 * Callees:
 *     ?AnimateHiddenElement@ItemAnimationCoordinatorBase@@MEAAXAEBUComponentInfo@1@@Z @ 0x18001A2F0 (-AnimateHiddenElement@ItemAnimationCoordinatorBase@@MEAAXAEBUComponentInfo@1@@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAndInitialize_CStartExperienceManager_IInspectable_IServiceProvider_____ptr64_____ptr64__::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  ItemAnimationCoordinatorBase::AnimateHiddenElement(
    *(ItemAnimationCoordinatorBase **)(a2 + 104),
    *(const struct ItemAnimationCoordinatorBase::ComponentInfo **)(a2 + 96));
}
