/*
 * XREFs of PiGetProviderList @ 0x140527DB0
 * Callers:
 *     PipCheckForUnsatisfiedDependencies @ 0x140527D68 (PipCheckForUnsatisfiedDependencies.c)
 *     PipNotifyDeviceDependencyList @ 0x14055293C (PipNotifyDeviceDependencyList.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1405529D8 (PipProcessRebuildPowerRelationsQueue.c)
 *     IopSortRelationListForRemove @ 0x14055C1D0 (IopSortRelationListForRemove.c)
 *     PiQueryPowerDependencyRelations @ 0x14055F3B0 (PiQueryPowerDependencyRelations.c)
 *     PnpGetDeviceDependencyList @ 0x1406BF19C (PnpGetDeviceDependencyList.c)
 *     IopCheckIfMergeRequired @ 0x1406D2258 (IopCheckIfMergeRequired.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall PiGetProviderList(__int64 a1)
{
  __int64 v1; // rax

  if ( a1 )
    v1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 80LL);
  else
    v1 = 0LL;
  if ( v1 )
    return (__int64 *)(v1 + 16);
  else
    return &PiDependencyNodeEmptyList;
}
