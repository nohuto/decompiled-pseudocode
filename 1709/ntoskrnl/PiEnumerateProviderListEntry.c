/*
 * XREFs of PiEnumerateProviderListEntry @ 0x1406BE790
 * Callers:
 *     PipCheckForUnsatisfiedDependencies @ 0x140527D68 (PipCheckForUnsatisfiedDependencies.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1405529D8 (PipProcessRebuildPowerRelationsQueue.c)
 *     IopSortRelationListForRemove @ 0x14055C1D0 (IopSortRelationListForRemove.c)
 *     PiQueryPowerDependencyRelations @ 0x14055F3B0 (PiQueryPowerDependencyRelations.c)
 *     IopCheckIfMergeRequired @ 0x1406D2258 (IopCheckIfMergeRequired.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x1401FDADC (PiListEntryToDependencyEdge.c)
 */

__int64 __fastcall PiEnumerateProviderListEntry(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v2; // r8
  _QWORD *v3; // r10

  result = PiListEntryToDependencyEdge(a1, 0);
  *v3 = *(_QWORD *)(*(_QWORD *)(result + 32) + 48LL);
  if ( v2 )
  {
    result = *(unsigned int *)(result + 48);
    *v2 = result;
  }
  return result;
}
