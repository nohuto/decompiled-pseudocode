/*
 * XREFs of PipIsDeviceInDeviceObjectList @ 0x14056F9B0
 * Callers:
 *     IopSetRelationsTag @ 0x14056D3D0 (IopSetRelationsTag.c)
 *     IopSortRelationListForRemove @ 0x14056F378 (IopSortRelationListForRemove.c)
 *     PipVisitDeviceObjectListEntry @ 0x14056F530 (PipVisitDeviceObjectListEntry.c)
 *     PnpProcessRelation @ 0x14056F60C (PnpProcessRelation.c)
 *     IopAddRelationToList @ 0x14056F8B4 (IopAddRelationToList.c)
 *     PnpDeleteLockedDeviceNodes @ 0x14056FE2C (PnpDeleteLockedDeviceNodes.c)
 *     IopIsDescendantNode @ 0x1405703D4 (IopIsDescendantNode.c)
 *     IopCheckIfMergeRequired @ 0x1406A750C (IopCheckIfMergeRequired.c)
 * Callees:
 *     PipDeviceObjectListIndexOf @ 0x14056F9D0 (PipDeviceObjectListIndexOf.c)
 */

bool __fastcall PipIsDeviceInDeviceObjectList(unsigned int *a1, __int64 a2, __int64 a3)
{
  return (unsigned int)PipDeviceObjectListIndexOf(a1, a2, *a1, a3) != -1;
}
