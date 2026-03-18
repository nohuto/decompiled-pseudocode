/*
 * XREFs of PnpAcquireDependencyRelationsLock @ 0x14050D26C
 * Callers:
 *     IoResolveDependency @ 0x14017D9C0 (IoResolveDependency.c)
 *     PnpDeleteAllDependencyRelations @ 0x140578104 (PnpDeleteAllDependencyRelations.c)
 *     PnpRequestDeviceRemoval @ 0x1405C75A4 (PnpRequestDeviceRemoval.c)
 *     IopSortRelationListForRemove @ 0x1405C80DC (IopSortRelationListForRemove.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1405C87FC (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1405C91F4 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpProcessDependencyRelations @ 0x1405CA0BC (PnpProcessDependencyRelations.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1405CABD8 (PipProcessRebuildPowerRelationsQueue.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x1405CC040 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1405CC0D8 (PnpNewDeviceNodeDependencyCheck.c)
 *     PipNotifyDeviceDependencyList @ 0x1405CC14C (PipNotifyDeviceDependencyList.c)
 *     PnpCheckForActiveDependencies @ 0x1405CE34C (PnpCheckForActiveDependencies.c)
 *     PiQueryPowerDependencyRelations @ 0x140603B68 (PiQueryPowerDependencyRelations.c)
 *     IoDuplicateDependency @ 0x140723570 (IoDuplicateDependency.c)
 *     IoReserveDependency @ 0x1407236A0 (IoReserveDependency.c)
 *     IoSetDependency @ 0x140723730 (IoSetDependency.c)
 *     PnpGetDeviceDependencyList @ 0x140723F90 (PnpGetDeviceDependencyList.c)
 *     PiDeviceDependencyInit @ 0x1408BBDBC (PiDeviceDependencyInit.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     PpDevNodeLockTree @ 0x14050BFCC (PpDevNodeLockTree.c)
 */

BOOLEAN __fastcall PnpAcquireDependencyRelationsLock(char a1)
{
  PpDevNodeLockTree(0);
  if ( a1 )
    return ExAcquireResourceExclusiveLite(&PiDependencyRelationsLock, 1u);
  else
    return ExAcquireResourceSharedLite(&PiDependencyRelationsLock, 1u);
}
