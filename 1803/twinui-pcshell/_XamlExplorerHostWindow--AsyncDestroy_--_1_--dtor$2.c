/*
 * XREFs of _XamlExplorerHostWindow::AsyncDestroy_::_1_::dtor$2 @ 0x180201652
 * Callers:
 *     <none>
 * Callees:
 *     ?AnimateHiddenElement@ItemAnimationCoordinatorBase@@MEAAXAEBUComponentInfo@1@@Z @ 0x18001A2F0 (-AnimateHiddenElement@ItemAnimationCoordinatorBase@@MEAAXAEBUComponentInfo@1@@Z.c)
 */

void __fastcall XamlExplorerHostWindow::AsyncDestroy_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  ItemAnimationCoordinatorBase::AnimateHiddenElement(
    *(ItemAnimationCoordinatorBase **)(a2 + 112),
    (const struct ItemAnimationCoordinatorBase::ComponentInfo *)0x130);
}
