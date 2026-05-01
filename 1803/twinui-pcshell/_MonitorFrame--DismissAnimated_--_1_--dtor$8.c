/*
 * XREFs of _MonitorFrame::DismissAnimated_::_1_::dtor$8 @ 0x18020AA8B
 * Callers:
 *     <none>
 * Callees:
 *     ?AnimateHiddenElement@ItemAnimationCoordinatorBase@@MEAAXAEBUComponentInfo@1@@Z @ 0x18001A2F0 (-AnimateHiddenElement@ItemAnimationCoordinatorBase@@MEAAXAEBUComponentInfo@1@@Z.c)
 */

void __fastcall MonitorFrame::DismissAnimated_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  ItemAnimationCoordinatorBase::AnimateHiddenElement(
    *(ItemAnimationCoordinatorBase **)(a2 + 40),
    (const struct ItemAnimationCoordinatorBase::ComponentInfo *)0x130);
}
