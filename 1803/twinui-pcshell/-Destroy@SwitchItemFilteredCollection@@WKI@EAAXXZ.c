/*
 * XREFs of ?Destroy@SwitchItemFilteredCollection@@WKI@EAAXXZ @ 0x1800AE200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SwitchItemFilteredCollection::Destroy(
        __int64 a1,
        const struct ItemAnimationCoordinatorBase::ComponentInfo *a2)
{
  ItemAnimationCoordinatorBase::AnimateHiddenElement((ItemAnimationCoordinatorBase *)(a1 - 168), a2);
}
