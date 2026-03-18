/*
 * XREFs of PiEnumerateProviderListEntry @ 0x1407237FC
 * Callers:
 *     IopSortRelationListForRemove @ 0x1405C80DC (IopSortRelationListForRemove.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1405CABD8 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x1405CE3A4 (PipCheckForUnsatisfiedDependencies.c)
 *     PiQueryPowerDependencyRelations @ 0x140603B68 (PiQueryPowerDependencyRelations.c)
 *     IopCheckIfMergeRequired @ 0x140739CA4 (IopCheckIfMergeRequired.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x14023A524 (PiListEntryToDependencyEdge.c)
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
