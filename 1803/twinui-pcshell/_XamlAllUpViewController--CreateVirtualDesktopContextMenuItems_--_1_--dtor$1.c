/*
 * XREFs of _XamlAllUpViewController::CreateVirtualDesktopContextMenuItems_::_1_::dtor$1 @ 0x18021CEEC
 * Callers:
 *     <none>
 * Callees:
 *     ?AnimateHiddenElement@ItemAnimationCoordinatorBase@@MEAAXAEBUComponentInfo@1@@Z @ 0x18001A2F0 (-AnimateHiddenElement@ItemAnimationCoordinatorBase@@MEAAXAEBUComponentInfo@1@@Z.c)
 */

void __fastcall XamlAllUpViewController::CreateVirtualDesktopContextMenuItems_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ItemAnimationCoordinatorBase::AnimateHiddenElement(
    *(ItemAnimationCoordinatorBase **)(a2 + 40),
    (const struct ItemAnimationCoordinatorBase::ComponentInfo *)0xB0);
}
