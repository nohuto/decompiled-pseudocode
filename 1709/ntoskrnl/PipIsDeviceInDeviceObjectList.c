/*
 * XREFs of PipIsDeviceInDeviceObjectList @ 0x14055C820
 * Callers:
 *     IopSortRelationListForRemove @ 0x14055C1D0 (IopSortRelationListForRemove.c)
 *     PipVisitDeviceObjectListEntry @ 0x14055C388 (PipVisitDeviceObjectListEntry.c)
 *     PnpProcessRelation @ 0x14055C464 (PnpProcessRelation.c)
 *     IopAddRelationToList @ 0x14055C790 (IopAddRelationToList.c)
 *     PnpDeleteLockedDeviceNodes @ 0x14055D2E8 (PnpDeleteLockedDeviceNodes.c)
 *     IopIsDescendantNode @ 0x14055D918 (IopIsDescendantNode.c)
 *     IopSetRelationsTag @ 0x1405E4690 (IopSetRelationsTag.c)
 *     IopCheckIfMergeRequired @ 0x1406D2258 (IopCheckIfMergeRequired.c)
 * Callees:
 *     PipDeviceObjectListIndexOf @ 0x14055C840 (PipDeviceObjectListIndexOf.c)
 */

bool __fastcall PipIsDeviceInDeviceObjectList(unsigned int *a1, __int64 a2, __int64 a3)
{
  return (unsigned int)PipDeviceObjectListIndexOf(a1, a2, *a1, a3) != -1;
}
