/*
 * XREFs of KeResetEvent @ 0x1400241B0
 * Callers:
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140006590 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14000B530 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreHelperWorker @ 0x14000C8E0 (SmKmStoreHelperWorker.c)
 *     MiFreePagedPoolPages @ 0x140035950 (MiFreePagedPoolPages.c)
 *     CcUnmapVacbArray @ 0x140062A30 (CcUnmapVacbArray.c)
 *     MiRetryNonPagedAllocation @ 0x140089300 (MiRetryNonPagedAllocation.c)
 *     MiAllocatePagedPoolPages @ 0x14009B1E0 (MiAllocatePagedPoolPages.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x1400B1CA8 (PopUpdateWatchdogNoWorkersEvent.c)
 *     PopFxAllocatePowerIrp @ 0x1400B420C (PopFxAllocatePowerIrp.c)
 *     PopFxIdleWorker @ 0x1400FE0E4 (PopFxIdleWorker.c)
 *     PnpRequestDeviceAction @ 0x1400FF444 (PnpRequestDeviceAction.c)
 *     MiIssueSynchronousFlush @ 0x14011A188 (MiIssueSynchronousFlush.c)
 *     PopPepUpdateConstraints @ 0x1401235A0 (PopPepUpdateConstraints.c)
 *     PnpLockDeviceActionQueue @ 0x140129204 (PnpLockDeviceActionQueue.c)
 *     ExUnregisterCallback @ 0x140131CC0 (ExUnregisterCallback.c)
 *     MiOkToZeroNextLargePage @ 0x14013516C (MiOkToZeroNextLargePage.c)
 *     MiZeroPageThread @ 0x140135630 (MiZeroPageThread.c)
 *     MiUpdateAvailableEvents @ 0x140137060 (MiUpdateAvailableEvents.c)
 *     MiSignalNonPagedPoolWatchers @ 0x1401398B4 (MiSignalNonPagedPoolWatchers.c)
 *     MiDereferenceSegmentThread @ 0x14014B2F0 (MiDereferenceSegmentThread.c)
 *     MiProcessDereferenceList @ 0x14014B46C (MiProcessDereferenceList.c)
 *     MiSyncCommitSignals @ 0x14014FEC8 (MiSyncCommitSignals.c)
 *     ExpLicensingWorker @ 0x140158B10 (ExpLicensingWorker.c)
 *     MiModifiedPageWriter @ 0x14015BF80 (MiModifiedPageWriter.c)
 *     MiStoreEvictThread @ 0x1401DF9C0 (MiStoreEvictThread.c)
 *     MiQueueWorkingSetRequest @ 0x14021DD3C (MiQueueWorkingSetRequest.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140226E40 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MmStoreFlushOutstandingEvictions @ 0x14022D948 (MmStoreFlushOutstandingEvictions.c)
 *     MiWaitForAvailablePages @ 0x14023050C (MiWaitForAvailablePages.c)
 *     MiWaitForFreePage @ 0x14023059C (MiWaitForFreePage.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x14023E334 (PopFxIssueComponentPerfStateChanges.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x14024417C (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140265030 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140265730 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreHelperWaitForCommand @ 0x140273AB4 (SmKmStoreHelperWaitForCommand.c)
 *     IoShutdownSystem @ 0x14042A6B4 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x14042A9E4 (IopShutdownBaseFileSystems.c)
 *     PfpScenCtxPrefetchWait @ 0x140430E90 (PfpScenCtxPrefetchWait.c)
 *     PfpScenCtxQueryScenarioInformation @ 0x140431098 (PfpScenCtxQueryScenarioInformation.c)
 *     PopNewWakeInfo @ 0x140431C7C (PopNewWakeInfo.c)
 *     NtSetEaFile @ 0x14044F5E0 (NtSetEaFile.c)
 *     CmUnloadKey @ 0x14046DF74 (CmUnloadKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x14047A598 (NtNotifyChangeMultipleKeys.c)
 *     IopQueryXxxInformation @ 0x14048FF44 (IopQueryXxxInformation.c)
 *     NtQueryVolumeInformationFile @ 0x140490C90 (NtQueryVolumeInformationFile.c)
 *     IopGetSetSecurityObject @ 0x140491160 (IopGetSetSecurityObject.c)
 *     NtLockFile @ 0x1404924A0 (NtLockFile.c)
 *     NtQueryInformationFile @ 0x14049A060 (NtQueryInformationFile.c)
 *     IopXxxControlFile @ 0x1404AD980 (IopXxxControlFile.c)
 *     IopCloseFile @ 0x1404BAD60 (IopCloseFile.c)
 *     IopDeleteFile @ 0x1404BB010 (IopDeleteFile.c)
 *     BuildQueryDirectoryIrp @ 0x1404CB2D0 (BuildQueryDirectoryIrp.c)
 *     CmpLockRegistryFreezeAware @ 0x1404E3B7C (CmpLockRegistryFreezeAware.c)
 *     CmpLinkHiveToMaster @ 0x1404E46C4 (CmpLinkHiveToMaster.c)
 *     EtwpStopTrace @ 0x1404F0484 (EtwpStopTrace.c)
 *     MiCreateImageFileMap @ 0x1404F8B90 (MiCreateImageFileMap.c)
 *     NtWriteFile @ 0x140505350 (NtWriteFile.c)
 *     NtSetInformationJobObject @ 0x140510C80 (NtSetInformationJobObject.c)
 *     EtwpLogger @ 0x140531E30 (EtwpLogger.c)
 *     SPCallServerHandleQueryPolicy @ 0x140536700 (SPCallServerHandleQueryPolicy.c)
 *     PnpInsertEventInQueue @ 0x14054DDBC (PnpInsertEventInQueue.c)
 *     ArbArbiterHandler @ 0x14055A9B0 (ArbArbiterHandler.c)
 *     IopMountVolume @ 0x14055FFAC (IopMountVolume.c)
 *     NtReadFileScatter @ 0x1405616E4 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x140561D0C (NtWriteFileGather.c)
 *     NtReadFile @ 0x140562BE0 (NtReadFile.c)
 *     IopCancelIrpsInThreadList @ 0x140568328 (IopCancelIrpsInThreadList.c)
 *     NtClearEvent @ 0x14056C9E0 (NtClearEvent.c)
 *     NtUnlockFile @ 0x14056D1B0 (NtUnlockFile.c)
 *     NtQueryEaFile @ 0x140572CD0 (NtQueryEaFile.c)
 *     NtFlushBuffersFileEx @ 0x140575154 (NtFlushBuffersFileEx.c)
 *     WmipCopyFromEventQueues @ 0x14057A6A8 (WmipCopyFromEventQueues.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140582FC0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtResetEvent @ 0x14058F150 (NtResetEvent.c)
 *     EtwpSynchronizeWithLogger @ 0x140595F24 (EtwpSynchronizeWithLogger.c)
 *     IoSetInformation @ 0x14059BCF0 (IoSetInformation.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1405C8240 (IoRegisterFsRegistrationChangeMountAware.c)
 *     IopCreateArcName @ 0x1405C8AA8 (IopCreateArcName.c)
 *     PfTInitialize @ 0x1405DC060 (PfTInitialize.c)
 *     NtSetVolumeInformationFile @ 0x1405E06C0 (NtSetVolumeInformationFile.c)
 *     IopInvalidateVolumesForDevice @ 0x1405E359C (IopInvalidateVolumesForDevice.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x1405EB240 (SPCallServerHandleWaitForDisplayWindow.c)
 *     PfTLoggingWorker @ 0x140687320 (PfTLoggingWorker.c)
 *     NtWaitForDebugEvent @ 0x1406AB918 (NtWaitForDebugEvent.c)
 *     DbgkpRemoveErrorPort @ 0x1406AC1FC (DbgkpRemoveErrorPort.c)
 *     IopSendMessageToTrackService @ 0x1406B5B58 (IopSendMessageToTrackService.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1406B5E40 (IopSetEaOrQuotaInformationFile.c)
 *     IoCancelFileOpen @ 0x1406B6F90 (IoCancelFileOpen.c)
 *     NtQueryQuotaInformationFile @ 0x1406B9540 (NtQueryQuotaInformationFile.c)
 *     IopFreeBandwidthContract @ 0x1406BD638 (IopFreeBandwidthContract.c)
 *     PfGenerateTrace @ 0x1406F3AD4 (PfGenerateTrace.c)
 *     PoUnregisterPowerSettingCallback @ 0x1406FA220 (PoUnregisterPowerSettingCallback.c)
 *     PopSetSystemAwayMode @ 0x1406FD890 (PopSetSystemAwayMode.c)
 *     PopQueueBatteryStatusTimeout @ 0x1406FEEFC (PopQueueBatteryStatusTimeout.c)
 *     PopThermalReadCounters @ 0x1406FFF30 (PopThermalReadCounters.c)
 *     TtmiRetrieveEventFromQueue @ 0x140710EB4 (TtmiRetrieveEventFromQueue.c)
 *     RawQueryFsSizeInfo @ 0x14071D5D0 (RawQueryFsSizeInfo.c)
 *     sub_14076B714 @ 0x14076B714 (sub_14076B714.c)
 *     AnFwDisplayFade @ 0x1407CEDC0 (AnFwDisplayFade.c)
 *     MiInitializePagedPoolEvents @ 0x140828D10 (MiInitializePagedPoolEvents.c)
 *     IopGetBootDiskInformation @ 0x140869F24 (IopGetBootDiskInformation.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 */

LONG __stdcall KeResetEvent(PRKEVENT Event)
{
  unsigned __int8 CurrentIrql; // di
  LONG result; // eax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v4 = 0;
  while ( _interlockedbittestandset(&Event->Header.Lock, 7u) )
  {
    do
      KeYieldProcessorEx(&v4);
    while ( (Event->Header.LockNV & 0x80u) != 0 );
  }
  result = Event->Header.SignalState;
  Event->Header.SignalState = 0;
  _InterlockedAnd(&Event->Header.Lock, 0xFFFFFF7F);
  __writecr8(CurrentIrql);
  return result;
}
