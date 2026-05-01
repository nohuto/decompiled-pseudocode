/*
 * XREFs of _MonitorFrame::DismissAnimated_::_1_::dtor$3 @ 0x18020AA2F
 * Callers:
 *     <none>
 * Callees:
 *     ?AnimateHiddenElement@ItemAnimationCoordinatorBase@@MEAAXAEBUComponentInfo@1@@Z @ 0x18001A2F0 (-AnimateHiddenElement@ItemAnimationCoordinatorBase@@MEAAXAEBUComponentInfo@1@@Z.c)
 */

void __fastcall MonitorFrame::DismissAnimated_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  ItemAnimationCoordinatorBase::AnimateHiddenElement(
    *(ItemAnimationCoordinatorBase **)(a2 + 216),
    (const struct ItemAnimationCoordinatorBase::ComponentInfo *)0x130);
}
