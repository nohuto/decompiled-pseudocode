/*
 * XREFs of PnpAcquireDependencyRelationsLock @ 0x140527148
 * Callers:
 *     IoResolveDependency @ 0x14014E140 (IoResolveDependency.c)
 *     PnpCheckForActiveDependencies @ 0x140527D10 (PnpCheckForActiveDependencies.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x14055285C (PnpStartedDeviceNodeDependencyCheck.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1405528C8 (PnpNewDeviceNodeDependencyCheck.c)
 *     PipNotifyDeviceDependencyList @ 0x14055293C (PipNotifyDeviceDependencyList.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1405529D8 (PipProcessRebuildPowerRelationsQueue.c)
 *     IopSortRelationListForRemove @ 0x14055C1D0 (IopSortRelationListForRemove.c)
 *     PnpProcessDependencyRelations @ 0x14055C6B8 (PnpProcessDependencyRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x14055F3B0 (PiQueryPowerDependencyRelations.c)
 *     PnpDeleteAllDependencyRelations @ 0x1405888B0 (PnpDeleteAllDependencyRelations.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1405E9D90 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1405EAA48 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpRequestDeviceRemoval @ 0x1405EDBB0 (PnpRequestDeviceRemoval.c)
 *     IoDuplicateDependency @ 0x1406BE4F0 (IoDuplicateDependency.c)
 *     IoReserveDependency @ 0x1406BE620 (IoReserveDependency.c)
 *     IoSetDependency @ 0x1406BE6B0 (IoSetDependency.c)
 *     PnpGetDeviceDependencyList @ 0x1406BF19C (PnpGetDeviceDependencyList.c)
 *     PiDeviceDependencyInit @ 0x140849EFC (PiDeviceDependencyInit.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     PpDevNodeLockTree @ 0x14052717C (PpDevNodeLockTree.c)
 */

BOOLEAN __fastcall PnpAcquireDependencyRelationsLock(char a1)
{
  PpDevNodeLockTree(0LL);
  if ( a1 )
    return ExAcquireResourceExclusiveLite(&PiDependencyRelationsLock, 1u);
  else
    return ExAcquireResourceSharedLite(&PiDependencyRelationsLock, 1u);
}
