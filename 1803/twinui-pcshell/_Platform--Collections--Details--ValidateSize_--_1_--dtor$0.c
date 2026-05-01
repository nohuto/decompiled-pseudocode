/*
 * XREFs of _Platform::Collections::Details::ValidateSize_::_1_::dtor$0 @ 0x180210953
 * Callers:
 *     <none>
 * Callees:
 *     ?AnimateHiddenElement@ItemAnimationCoordinatorBase@@MEAAXAEBUComponentInfo@1@@Z @ 0x18001A2F0 (-AnimateHiddenElement@ItemAnimationCoordinatorBase@@MEAAXAEBUComponentInfo@1@@Z.c)
 */

void __fastcall Platform::Collections::Details::ValidateSize_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ItemAnimationCoordinatorBase::AnimateHiddenElement(
    *(ItemAnimationCoordinatorBase **)(a2 + 72),
    (const struct ItemAnimationCoordinatorBase::ComponentInfo *)0x90);
}
