/*
 * XREFs of _XamlAllUpViewHost::Show_::_1_::dtor$6 @ 0x18020F52B
 * Callers:
 *     <none>
 * Callees:
 *     ?AnimateHiddenElement@ItemAnimationCoordinatorBase@@MEAAXAEBUComponentInfo@1@@Z @ 0x18001A2F0 (-AnimateHiddenElement@ItemAnimationCoordinatorBase@@MEAAXAEBUComponentInfo@1@@Z.c)
 */

void __fastcall XamlAllUpViewHost::Show_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  ItemAnimationCoordinatorBase::AnimateHiddenElement(
    *(ItemAnimationCoordinatorBase **)(a2 + 104),
    (const struct ItemAnimationCoordinatorBase::ComponentInfo *)0xD8);
}
