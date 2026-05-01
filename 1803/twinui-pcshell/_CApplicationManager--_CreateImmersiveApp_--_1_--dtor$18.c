/*
 * XREFs of _CApplicationManager::_CreateImmersiveApp_::_1_::dtor$18 @ 0x1800B3B08
 * Callers:
 *     <none>
 * Callees:
 *     ?AnimateHiddenElement@ItemAnimationCoordinatorBase@@MEAAXAEBUComponentInfo@1@@Z @ 0x18001A2F0 (-AnimateHiddenElement@ItemAnimationCoordinatorBase@@MEAAXAEBUComponentInfo@1@@Z.c)
 */

void __fastcall CApplicationManager::_CreateImmersiveApp_::_1_::dtor_18(__int64 a1, __int64 a2)
{
  ItemAnimationCoordinatorBase::AnimateHiddenElement(
    *(ItemAnimationCoordinatorBase **)(a2 + 272),
    *(const struct ItemAnimationCoordinatorBase::ComponentInfo **)(a2 + 280));
}
