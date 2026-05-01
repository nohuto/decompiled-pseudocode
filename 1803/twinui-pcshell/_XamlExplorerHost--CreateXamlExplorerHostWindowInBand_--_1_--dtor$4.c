/*
 * XREFs of _XamlExplorerHost::CreateXamlExplorerHostWindowInBand_::_1_::dtor$4 @ 0x1801FAB51
 * Callers:
 *     <none>
 * Callees:
 *     ?AnimateHiddenElement@ItemAnimationCoordinatorBase@@MEAAXAEBUComponentInfo@1@@Z @ 0x18001A2F0 (-AnimateHiddenElement@ItemAnimationCoordinatorBase@@MEAAXAEBUComponentInfo@1@@Z.c)
 */

void __fastcall XamlExplorerHost::CreateXamlExplorerHostWindowInBand_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  ItemAnimationCoordinatorBase::AnimateHiddenElement(
    *(ItemAnimationCoordinatorBase **)(a2 + 56),
    (const struct ItemAnimationCoordinatorBase::ComponentInfo *)0x140);
}
