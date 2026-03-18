/*
 * XREFs of PiGetProviderList @ 0x1405CE3EC
 * Callers:
 *     IopSortRelationListForRemove @ 0x1405C80DC (IopSortRelationListForRemove.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1405CABD8 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipNotifyDeviceDependencyList @ 0x1405CC14C (PipNotifyDeviceDependencyList.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x1405CE3A4 (PipCheckForUnsatisfiedDependencies.c)
 *     PiQueryPowerDependencyRelations @ 0x140603B68 (PiQueryPowerDependencyRelations.c)
 *     PnpGetDeviceDependencyList @ 0x140723F90 (PnpGetDeviceDependencyList.c)
 *     IopCheckIfMergeRequired @ 0x140739CA4 (IopCheckIfMergeRequired.c)
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
