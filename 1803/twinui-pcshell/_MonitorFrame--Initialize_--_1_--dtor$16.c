/*
 * XREFs of _MonitorFrame::Initialize_::_1_::dtor$16 @ 0x18020BEB9
 * Callers:
 *     <none>
 * Callees:
 *     ?AnimateHiddenElement@ItemAnimationCoordinatorBase@@MEAAXAEBUComponentInfo@1@@Z @ 0x18001A2F0 (-AnimateHiddenElement@ItemAnimationCoordinatorBase@@MEAAXAEBUComponentInfo@1@@Z.c)
 */

void __fastcall MonitorFrame::Initialize_::_1_::dtor_16(__int64 a1, __int64 a2)
{
  ItemAnimationCoordinatorBase::AnimateHiddenElement(
    *(ItemAnimationCoordinatorBase **)(a2 + 144),
    (const struct ItemAnimationCoordinatorBase::ComponentInfo *)0x130);
}
