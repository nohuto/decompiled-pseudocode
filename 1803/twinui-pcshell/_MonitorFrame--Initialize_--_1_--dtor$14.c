/*
 * XREFs of _MonitorFrame::Initialize_::_1_::dtor$14 @ 0x18020BE8D
 * Callers:
 *     <none>
 * Callees:
 *     ?AnimateHiddenElement@ItemAnimationCoordinatorBase@@MEAAXAEBUComponentInfo@1@@Z @ 0x18001A2F0 (-AnimateHiddenElement@ItemAnimationCoordinatorBase@@MEAAXAEBUComponentInfo@1@@Z.c)
 */

void __fastcall MonitorFrame::Initialize_::_1_::dtor_14(__int64 a1, __int64 a2)
{
  ItemAnimationCoordinatorBase::AnimateHiddenElement(
    *(ItemAnimationCoordinatorBase **)(a2 + 144),
    (const struct ItemAnimationCoordinatorBase::ComponentInfo *)0x130);
}
