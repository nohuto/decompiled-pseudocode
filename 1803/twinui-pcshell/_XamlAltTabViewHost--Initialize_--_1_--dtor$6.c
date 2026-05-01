/*
 * XREFs of _XamlAltTabViewHost::Initialize_::_1_::dtor$6 @ 0x1802173BF
 * Callers:
 *     <none>
 * Callees:
 *     ?AnimateHiddenElement@ItemAnimationCoordinatorBase@@MEAAXAEBUComponentInfo@1@@Z @ 0x18001A2F0 (-AnimateHiddenElement@ItemAnimationCoordinatorBase@@MEAAXAEBUComponentInfo@1@@Z.c)
 */

void __fastcall XamlAltTabViewHost::Initialize_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  ItemAnimationCoordinatorBase::AnimateHiddenElement(
    *(ItemAnimationCoordinatorBase **)(a2 + 144),
    (const struct ItemAnimationCoordinatorBase::ComponentInfo *)0xA8);
}
