/*
 * XREFs of PiEnumerateProviderListEntry @ 0x140692AE0
 * Callers:
 *     PipCheckForUnsatisfiedDependencies @ 0x14048C0A4 (PipCheckForUnsatisfiedDependencies.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1404D9F20 (PipProcessRebuildPowerRelationsQueue.c)
 *     IopSortRelationListForRemove @ 0x14056F378 (IopSortRelationListForRemove.c)
 *     PiQueryPowerDependencyRelations @ 0x1405C2B80 (PiQueryPowerDependencyRelations.c)
 *     IopCheckIfMergeRequired @ 0x1406A750C (IopCheckIfMergeRequired.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x1401F7AC0 (PiListEntryToDependencyEdge.c)
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
