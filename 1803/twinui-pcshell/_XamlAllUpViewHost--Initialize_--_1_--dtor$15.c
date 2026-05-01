/*
 * XREFs of _XamlAllUpViewHost::Initialize_::_1_::dtor$15 @ 0x18020C4B2
 * Callers:
 *     <none>
 * Callees:
 *     ?AnimateHiddenElement@ItemAnimationCoordinatorBase@@MEAAXAEBUComponentInfo@1@@Z @ 0x18001A2F0 (-AnimateHiddenElement@ItemAnimationCoordinatorBase@@MEAAXAEBUComponentInfo@1@@Z.c)
 */

void __fastcall XamlAllUpViewHost::Initialize_::_1_::dtor_15(__int64 a1, __int64 a2)
{
  ItemAnimationCoordinatorBase::AnimateHiddenElement(
    *(ItemAnimationCoordinatorBase **)(a2 + 72),
    (const struct ItemAnimationCoordinatorBase::ComponentInfo *)0x130);
}
