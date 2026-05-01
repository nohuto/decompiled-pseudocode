/*
 * XREFs of _Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::AddSwitchItem_::_1_::dtor$5 @ 0x180208F2C
 * Callers:
 *     <none>
 * Callees:
 *     ?AnimateHiddenElement@ItemAnimationCoordinatorBase@@MEAAXAEBUComponentInfo@1@@Z @ 0x18001A2F0 (-AnimateHiddenElement@ItemAnimationCoordinatorBase@@MEAAXAEBUComponentInfo@1@@Z.c)
 */

void __fastcall Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::AddSwitchItem_::_1_::dtor_5(
        __int64 a1,
        __int64 a2)
{
  ItemAnimationCoordinatorBase::AnimateHiddenElement(
    *(ItemAnimationCoordinatorBase **)(a2 + 192),
    (const struct ItemAnimationCoordinatorBase::ComponentInfo *)0x50);
}
