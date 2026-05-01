/*
 * XREFs of _PeoplePaneViewManager::LaunchPeopleShare_::_1_::dtor$12 @ 0x1801C3F25
 * Callers:
 *     <none>
 * Callees:
 *     ?AnimateHiddenElement@ItemAnimationCoordinatorBase@@MEAAXAEBUComponentInfo@1@@Z @ 0x18001A2F0 (-AnimateHiddenElement@ItemAnimationCoordinatorBase@@MEAAXAEBUComponentInfo@1@@Z.c)
 */

void __fastcall PeoplePaneViewManager::LaunchPeopleShare_::_1_::dtor_12(__int64 a1, __int64 a2)
{
  ItemAnimationCoordinatorBase::AnimateHiddenElement(
    *(ItemAnimationCoordinatorBase **)(a2 + 88),
    (const struct ItemAnimationCoordinatorBase::ComponentInfo *)(*(_QWORD *)(a2 + 128) + 16LL));
}
