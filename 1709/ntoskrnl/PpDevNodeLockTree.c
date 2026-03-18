/*
 * XREFs of PpDevNodeLockTree @ 0x14052717C
 * Callers:
 *     PnpDeviceActionWorker @ 0x1400FF730 (PnpDeviceActionWorker.c)
 *     PnpLockDeviceActionQueue @ 0x140129204 (PnpLockDeviceActionQueue.c)
 *     IoTranslateBusAddress @ 0x1401FE440 (IoTranslateBusAddress.c)
 *     PnpRestartDeviceNode @ 0x14045077C (PnpRestartDeviceNode.c)
 *     IoGetLegacyVetoList @ 0x1404E8A2C (IoGetLegacyVetoList.c)
 *     PiControlGetSetDeviceStatus @ 0x140526EE0 (PiControlGetSetDeviceStatus.c)
 *     PnpAcquireDependencyRelationsLock @ 0x140527148 (PnpAcquireDependencyRelationsLock.c)
 *     PipProcessDevNodeTree @ 0x140527614 (PipProcessDevNodeTree.c)
 *     PiGetRelatedDevice @ 0x140556A98 (PiGetRelatedDevice.c)
 *     PiControlGetPropertyData @ 0x140556C60 (PiControlGetPropertyData.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x14055761C (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14055CA4C (PnpProcessQueryRemoveAndEject.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x14055CF88 (PnpUnlinkDeviceRemovalRelations.c)
 *     PiQueryPowerRelations @ 0x14055EFD0 (PiQueryPowerRelations.c)
 *     PipForDeviceNodeSubtree @ 0x14055F440 (PipForDeviceNodeSubtree.c)
 *     PiGetDeviceDepth @ 0x14058B5B8 (PiGetDeviceDepth.c)
 *     IopQueryInterfaceRecurseUp @ 0x14059C284 (IopQueryInterfaceRecurseUp.c)
 *     IoReportDetectedDevice @ 0x1405DF730 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x1405E3820 (IoReportRootDevice.c)
 *     PnpDelayedRemoveWorker @ 0x1405E4580 (PnpDelayedRemoveWorker.c)
 *     PiPagePathSetState @ 0x1405F037C (PiPagePathSetState.c)
 *     IopRetryDeviceRemovalForReset @ 0x1406C0A00 (IopRetryDeviceRemovalForReset.c)
 *     PnpDiagRundownRegisterCallback @ 0x1406C0D60 (PnpDiagRundownRegisterCallback.c)
 *     PnpProcessCompletedEject @ 0x1406C1CC0 (PnpProcessCompletedEject.c)
 *     PnpQueuePendingEject @ 0x1406C1DFC (PnpQueuePendingEject.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x1406CA4C0 (PiProfileUpdateDeviceTreeWorker.c)
 *     PiCMCreateDevice @ 0x1406CF00C (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x1406CF9C8 (PiCMDeleteDevice.c)
 *     PpResetProblemDevices @ 0x1406D1E9C (PpResetProblemDevices.c)
 *     PiControlQueryConflictList @ 0x1406D3010 (PiControlQueryConflictList.c)
 *     PiInitializeDevice @ 0x1406D3418 (PiInitializeDevice.c)
 *     PiQueryDeviceRelations @ 0x1406D3858 (PiQueryDeviceRelations.c)
 *     IopWarmEjectDevice @ 0x1406D3C00 (IopWarmEjectDevice.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140081010 (ExIsResourceAcquiredSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
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
