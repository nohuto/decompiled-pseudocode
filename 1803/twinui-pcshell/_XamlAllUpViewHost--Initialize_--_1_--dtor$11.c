/*
 * XREFs of _XamlAllUpViewHost::Initialize_::_1_::dtor$11 @ 0x18020C47D
 * Callers:
 *     <none>
 * Callees:
 *     ?AnimateHiddenElement@ItemAnimationCoordinatorBase@@MEAAXAEBUComponentInfo@1@@Z @ 0x18001A2F0 (-AnimateHiddenElement@ItemAnimationCoordinatorBase@@MEAAXAEBUComponentInfo@1@@Z.c)
 */

void __fastcall XamlAllUpViewHost::Initialize_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  ItemAnimationCoordinatorBase::AnimateHiddenElement(
    *(ItemAnimationCoordinatorBase **)(a2 + 64),
    (const struct ItemAnimationCoordinatorBase::ComponentInfo *)0x130);
}
