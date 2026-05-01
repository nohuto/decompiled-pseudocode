/*
 * XREFs of _Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::AddSwitchItem_::_1_::dtor$1 @ 0x180208EC8
 * Callers:
 *     <none>
 * Callees:
 *     ?AnimateHiddenElement@ItemAnimationCoordinatorBase@@MEAAXAEBUComponentInfo@1@@Z @ 0x18001A2F0 (-AnimateHiddenElement@ItemAnimationCoordinatorBase@@MEAAXAEBUComponentInfo@1@@Z.c)
 */

void __fastcall Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::AddSwitchItem_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  ItemAnimationCoordinatorBase::AnimateHiddenElement(
    *(ItemAnimationCoordinatorBase **)(a2 + 176),
    (const struct ItemAnimationCoordinatorBase::ComponentInfo *)0x130);
}
