/*
 * XREFs of PnpAcquireDependencyRelationsLock @ 0x14048AC20
 * Callers:
 *     IoResolveDependency @ 0x14015F160 (IoResolveDependency.c)
 *     PnpDeleteAllDependencyRelations @ 0x14044C29C (PnpDeleteAllDependencyRelations.c)
 *     PnpCheckForActiveDependencies @ 0x14048BE70 (PnpCheckForActiveDependencies.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x1404A7520 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1404D9E10 (PnpNewDeviceNodeDependencyCheck.c)
 *     PipNotifyDeviceDependencyList @ 0x1404D9E84 (PipNotifyDeviceDependencyList.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1404D9F20 (PipProcessRebuildPowerRelationsQueue.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14056D768 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x14056D958 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpRequestDeviceRemoval @ 0x14056DB8C (PnpRequestDeviceRemoval.c)
 *     IopSortRelationListForRemove @ 0x14056F378 (IopSortRelationListForRemove.c)
 *     PnpProcessDependencyRelations @ 0x14056F7E0 (PnpProcessDependencyRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x1405C2B80 (PiQueryPowerDependencyRelations.c)
 *     IoDuplicateDependency @ 0x140692840 (IoDuplicateDependency.c)
 *     IoReserveDependency @ 0x140692970 (IoReserveDependency.c)
 *     IoSetDependency @ 0x140692A00 (IoSetDependency.c)
 *     PnpGetDeviceDependencyList @ 0x1406934F8 (PnpGetDeviceDependencyList.c)
 *     PiDeviceDependencyInit @ 0x140819A3C (PiDeviceDependencyInit.c)
 * Callees:
 *     PpDevNodeLockTree @ 0x14048AC58 (PpDevNodeLockTree.c)
 */

BOOLEAN __fastcall PnpAcquireDependencyRelationsLock(char a1)
{
  PpDevNodeLockTree(0LL);
  if ( a1 )
    return ExAcquireResourceExclusiveLite(&PiDependencyRelationsLock, 1u);
  else
    return ExAcquireResourceSharedLite(&PiDependencyRelationsLock, 1u);
}
