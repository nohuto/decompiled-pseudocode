/*
 * XREFs of PpDevNodeLockTree @ 0x14050BFCC
 * Callers:
 *     PnpLockDeviceActionQueue @ 0x1400C89A8 (PnpLockDeviceActionQueue.c)
 *     PnpDeviceActionWorker @ 0x140145DC0 (PnpDeviceActionWorker.c)
 *     IoTranslateBusAddress @ 0x14023AE10 (IoTranslateBusAddress.c)
 *     PiControlGetSetDeviceStatus @ 0x14050BD60 (PiControlGetSetDeviceStatus.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14050D26C (PnpAcquireDependencyRelationsLock.c)
 *     IoGetLegacyVetoList @ 0x14051CFCC (IoGetLegacyVetoList.c)
 *     PiControlGetPropertyData @ 0x140525790 (PiControlGetPropertyData.c)
 *     PiGetRelatedDevice @ 0x140525AFC (PiGetRelatedDevice.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x1405263FC (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1405C79A8 (PnpProcessQueryRemoveAndEject.c)
 *     PnpDelayedRemoveWorker @ 0x1405C86A0 (PnpDelayedRemoveWorker.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1405C9074 (PnpUnlinkDeviceRemovalRelations.c)
 *     PipForDeviceNodeSubtree @ 0x1405CA500 (PipForDeviceNodeSubtree.c)
 *     PipProcessDevNodeTree @ 0x1405CDC7C (PipProcessDevNodeTree.c)
 *     PiGetDeviceDepth @ 0x1405E5458 (PiGetDeviceDepth.c)
 *     PiQueryPowerRelations @ 0x140603784 (PiQueryPowerRelations.c)
 *     PpDevCfgProcessDevices @ 0x1406246C4 (PpDevCfgProcessDevices.c)
 *     IopQueryInterfaceRecurseUp @ 0x140647E40 (IopQueryInterfaceRecurseUp.c)
 *     IoReportDetectedDevice @ 0x1406482A0 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14064B860 (IoReportRootDevice.c)
 *     PiPagePathSetState @ 0x14064FDDC (PiPagePathSetState.c)
 *     PnpRestartDeviceNode @ 0x140651E64 (PnpRestartDeviceNode.c)
 *     IopRetryDeviceRemovalForReset @ 0x140726440 (IopRetryDeviceRemovalForReset.c)
 *     PnpDiagRundownRegisterCallback @ 0x140726A40 (PnpDiagRundownRegisterCallback.c)
 *     PnpProcessCompletedEject @ 0x140727B00 (PnpProcessCompletedEject.c)
 *     PnpQueuePendingEject @ 0x140727D9C (PnpQueuePendingEject.c)
 *     PipSetDevNodeStateFlags @ 0x140727DF4 (PipSetDevNodeStateFlags.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x140731B00 (PiProfileUpdateDeviceTreeWorker.c)
 *     PiCMCreateDevice @ 0x140735F78 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x140736980 (PiCMDeleteDevice.c)
 *     PpResetProblemDevices @ 0x1407399A8 (PpResetProblemDevices.c)
 *     PiControlQueryConflictList @ 0x14073AF00 (PiControlQueryConflictList.c)
 *     PiInitializeDevice @ 0x14073B304 (PiInitializeDevice.c)
 *     PiQueryDeviceRelations @ 0x14073B744 (PiQueryDeviceRelations.c)
 *     IopWarmEjectDevice @ 0x14073C044 (IopWarmEjectDevice.c)
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x1400FDA10 (ExIsResourceAcquiredSharedLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 */

char __fastcall PpDevNodeLockTree(int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v2; // bl
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  ULONG IsResourceAcquiredSharedLite; // edi
  ULONG i; // esi

  CurrentThread = KeGetCurrentThread();
  v2 = 1;
  --CurrentThread->KernelApcDisable;
  if ( !a1 )
    goto LABEL_2;
  v4 = a1 - 1;
  if ( !v4 )
  {
    ExAcquireResourceExclusiveLite(&PiEngineLock, 1u);
LABEL_2:
    ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
    return v2;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    if ( !ExAcquireResourceExclusiveLite(&PiEngineLock, 0) )
    {
      v2 = 0;
      KeLeaveCriticalRegion();
      return v2;
    }
    goto LABEL_2;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite(&IopDeviceTreeLock);
      for ( i = IsResourceAcquiredSharedLite; i; --i )
        ExReleaseResourceLite(&IopDeviceTreeLock);
      for ( ; IsResourceAcquiredSharedLite; --IsResourceAcquiredSharedLite )
        ExAcquireResourceExclusiveLite(&IopDeviceTreeLock, 1u);
    }
  }
  else
  {
    ExAcquireResourceExclusiveLite(&PiEngineLock, 1u);
    ExAcquireResourceExclusiveLite(&IopDeviceTreeLock, 1u);
  }
  return v2;
}
