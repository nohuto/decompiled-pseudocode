/*
 * XREFs of PiGetProviderList @ 0x14048C0EC
 * Callers:
 *     PipCheckForUnsatisfiedDependencies @ 0x14048C0A4 (PipCheckForUnsatisfiedDependencies.c)
 *     PipNotifyDeviceDependencyList @ 0x1404D9E84 (PipNotifyDeviceDependencyList.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1404D9F20 (PipProcessRebuildPowerRelationsQueue.c)
 *     IopSortRelationListForRemove @ 0x14056F378 (IopSortRelationListForRemove.c)
 *     PiQueryPowerDependencyRelations @ 0x1405C2B80 (PiQueryPowerDependencyRelations.c)
 *     PnpGetDeviceDependencyList @ 0x1406934F8 (PnpGetDeviceDependencyList.c)
 *     IopCheckIfMergeRequired @ 0x1406A750C (IopCheckIfMergeRequired.c)
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
