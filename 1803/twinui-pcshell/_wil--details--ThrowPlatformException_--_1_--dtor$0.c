/*
 * XREFs of _wil::details::ThrowPlatformException_::_1_::dtor$0 @ 0x1801F9BF2
 * Callers:
 *     <none>
 * Callees:
 *     ?AnimateHiddenElement@ItemAnimationCoordinatorBase@@MEAAXAEBUComponentInfo@1@@Z @ 0x18001A2F0 (-AnimateHiddenElement@ItemAnimationCoordinatorBase@@MEAAXAEBUComponentInfo@1@@Z.c)
 */

void __fastcall wil::details::ThrowPlatformException_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ItemAnimationCoordinatorBase::AnimateHiddenElement(
    *(ItemAnimationCoordinatorBase **)(a2 + 80),
    (const struct ItemAnimationCoordinatorBase::ComponentInfo *)0x38);
}
