/*
 * XREFs of PipIsDeviceInDeviceObjectList @ 0x1405CA290
 * Callers:
 *     IopSortRelationListForRemove @ 0x1405C80DC (IopSortRelationListForRemove.c)
 *     IopIsDescendantNode @ 0x1405C9028 (IopIsDescendantNode.c)
 *     PnpDeleteLockedDeviceNodes @ 0x1405C9760 (PnpDeleteLockedDeviceNodes.c)
 *     PnpProcessRelation @ 0x1405C9EB4 (PnpProcessRelation.c)
 *     IopAddRelationToList @ 0x1405CA1B4 (IopAddRelationToList.c)
 *     IopSetRelationsTag @ 0x1405CA244 (IopSetRelationsTag.c)
 *     PipVisitDeviceObjectListEntry @ 0x1405CA38C (PipVisitDeviceObjectListEntry.c)
 *     IopCheckIfMergeRequired @ 0x140739CA4 (IopCheckIfMergeRequired.c)
 * Callees:
 *     PipDeviceObjectListIndexOf @ 0x1405CA2B0 (PipDeviceObjectListIndexOf.c)
 */

bool __fastcall PipIsDeviceInDeviceObjectList(unsigned int *a1, __int64 a2, __int64 a3)
{
  return (unsigned int)PipDeviceObjectListIndexOf(a1, a2, *a1, a3) != -1;
}
