/*
 * XREFs of KeWaitForSingleObject @ 0x14006D2F0
 * Callers:
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140004560 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreHelperCleanup @ 0x140004964 (SmKmStoreHelperCleanup.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x1400050EC (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     SmKmStoreHelperWorker @ 0x14000C8E0 (SmKmStoreHelperWorker.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x14000C970 (SmKmStoreDeleteWhenEmpty.c)
 *     PpmTryAcquireLock @ 0x14000DCA0 (PpmTryAcquireLock.c)
 *     FsRtlpWaitOnIrp @ 0x14000E0E8 (FsRtlpWaitOnIrp.c)
 *     IopLoadDriverImage @ 0x1400157D8 (IopLoadDriverImage.c)
 *     CcWriteBehind @ 0x140022B24 (CcWriteBehind.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x140028D80 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     MiWaitForInPageComplete @ 0x14002D860 (MiWaitForInPageComplete.c)
 *     ExfAcquirePushLockSharedEx @ 0x14005D4E0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14005D890 (ExfAcquirePushLockExclusiveEx.c)
 *     NtSetInformationFile @ 0x14005F8B0 (NtSetInformationFile.c)
 *     IopWaitForSynchronousIo @ 0x140061054 (IopWaitForSynchronousIo.c)
 *     CcUnmapVacbArray @ 0x140062A30 (CcUnmapVacbArray.c)
 *     CcInitializeCacheMapEx @ 0x1400636F0 (CcInitializeCacheMapEx.c)
 *     AlpcpSignalAndWait @ 0x14006B0B0 (AlpcpSignalAndWait.c)
 *     ExpWaitForResource @ 0x14006B490 (ExpWaitForResource.c)
 *     KeWaitForMultipleObjects @ 0x14006B570 (KeWaitForMultipleObjects.c)
 *     MiRetryNonPagedAllocation @ 0x140089300 (MiRetryNonPagedAllocation.c)
 *     KiSchedulerApc @ 0x1400A9D00 (KiSchedulerApc.c)
 *     PpmAcquireLock @ 0x1400AF45C (PpmAcquireLock.c)
 *     CmpFileReadEx @ 0x1400AF4A4 (CmpFileReadEx.c)
 *     PopSetWatchdog @ 0x1400B1A00 (PopSetWatchdog.c)
 *     ExpAcquireFastMutexContended @ 0x1400BAC30 (ExpAcquireFastMutexContended.c)
 *     ExpUnblockPushLock @ 0x1400BBEE8 (ExpUnblockPushLock.c)
 *     ExTimedWaitForUnblockPushLock @ 0x1400BD7E0 (ExTimedWaitForUnblockPushLock.c)
 *     LdrpGetFromMUIMemCache @ 0x1400DBFB0 (LdrpGetFromMUIMemCache.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1400DD510 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     CcSetValidData @ 0x1400DE714 (CcSetValidData.c)
 *     WmipFindRegEntryByProviderId @ 0x1400DEAE4 (WmipFindRegEntryByProviderId.c)
 *     PpmCheckPeriodicStart @ 0x1400E46C0 (PpmCheckPeriodicStart.c)
 *     CcCanIWrite @ 0x1400F4620 (CcCanIWrite.c)
 *     IopCompleteUnloadOrDelete @ 0x1400FAE1C (IopCompleteUnloadOrDelete.c)
 *     PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x1400FBBE0 (PnpDeviceCompletionQueueRemoveCompletedRequest.c)
 *     PopFxActivateDevice @ 0x1400FC950 (PopFxActivateDevice.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x1400FCFD0 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     PopFxActivateComponent @ 0x1400FD6FC (PopFxActivateComponent.c)
 *     IopWaitForLockAlertable @ 0x1400FFEDC (IopWaitForLockAlertable.c)
 *     FsRtlpWaitForIoAtEof @ 0x140100900 (FsRtlpWaitForIoAtEof.c)
 *     ExfWaitForRundownProtectionRelease @ 0x140106FF0 (ExfWaitForRundownProtectionRelease.c)
 *     PopExecuteOnTargetProcessors @ 0x1401173B0 (PopExecuteOnTargetProcessors.c)
 *     MiIssueSynchronousFlush @ 0x14011A188 (MiIssueSynchronousFlush.c)
 *     AlpcpWaitForSingleObject @ 0x14011BDFC (AlpcpWaitForSingleObject.c)
 *     VslpEnterIumSecureMode @ 0x14011D800 (VslpEnterIumSecureMode.c)
 *     MiZeroPageWrite @ 0x14011F014 (MiZeroPageWrite.c)
 *     WmipReceiveNotifications @ 0x14011FCA4 (WmipReceiveNotifications.c)
 *     CcWaitForUninitializeCacheMap @ 0x140121200 (CcWaitForUninitializeCacheMap.c)
 *     PopPepUpdateConstraints @ 0x1401235A0 (PopPepUpdateConstraints.c)
 *     WmipAllocRegEntry @ 0x140123F48 (WmipAllocRegEntry.c)
 *     WmipFindRegEntryByDevice @ 0x14012402C (WmipFindRegEntryByDevice.c)
 *     WmipDeregisterRegEntry @ 0x1401240E0 (WmipDeregisterRegEntry.c)
 *     MiWaitForCollidedFaultComplete @ 0x140125424 (MiWaitForCollidedFaultComplete.c)
 *     IoSynchronousCallDriver @ 0x140125800 (IoSynchronousCallDriver.c)
 *     PnpLockDeviceActionQueue @ 0x140129204 (PnpLockDeviceActionQueue.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x14012B770 (FsRtlGetVirtualDiskNestingLevel.c)
 *     PnpDeviceCompletionQueueGetCompletedRequest @ 0x14012EA1C (PnpDeviceCompletionQueueGetCompletedRequest.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14012F768 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14013044C (LdrUnloadAlternateResourceModuleEx.c)
 *     ExUnregisterCallback @ 0x140131CC0 (ExUnregisterCallback.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x140132450 (IoReleaseRemoveLockAndWaitEx.c)
 *     MiOkToZeroNextLargePage @ 0x14013516C (MiOkToZeroNextLargePage.c)
 *     MiZeroPageThread @ 0x140135630 (MiZeroPageThread.c)
 *     KeSwapProcessOrStack @ 0x140142E10 (KeSwapProcessOrStack.c)
 *     CcQueueLazyWriteScanThread @ 0x140148AC0 (CcQueueLazyWriteScanThread.c)
 *     WheapAddErrorSource @ 0x140150D28 (WheapAddErrorSource.c)
 *     CmpLazyWriteWorker @ 0x140151BE0 (CmpLazyWriteWorker.c)
 *     PopIrpWorker @ 0x140151D80 (PopIrpWorker.c)
 *     PopIrpWorkerControl @ 0x140155FA0 (PopIrpWorkerControl.c)
 *     PnpLockMountableDevice @ 0x1401589AC (PnpLockMountableDevice.c)
 *     ExpLicensingWorker @ 0x140158B10 (ExpLicensingWorker.c)
 *     CcWaitForCurrentLazyWriterActivityInternal @ 0x14015A53C (CcWaitForCurrentLazyWriterActivityInternal.c)
 *     PnpSerializeBoot @ 0x14015B924 (PnpSerializeBoot.c)
 *     MiModifiedPageWriter @ 0x14015BF80 (MiModifiedPageWriter.c)
 *     MiStoreEvictThread @ 0x1401DF9C0 (MiStoreEvictThread.c)
 *     CcDeleteSectionsForPartition @ 0x1401E22D8 (CcDeleteSectionsForPartition.c)
 *     FsFilterAllocateCompletionStack @ 0x1401E855C (FsFilterAllocateCompletionStack.c)
 *     FsRtlpPostStackOverflow @ 0x1401E95A4 (FsRtlpPostStackOverflow.c)
 *     IopAllocateBackpocketIrp @ 0x1401F4878 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1401F4B5C (IopAllocateReserveIrp.c)
 *     PnprQuiesce @ 0x14020017C (PnprQuiesce.c)
 *     PnpProcessRebalance @ 0x140201004 (PnpProcessRebalance.c)
 *     KiAcquireSecondaryPassiveConnectLock @ 0x140206E90 (KiAcquireSecondaryPassiveConnectLock.c)
 *     KiInvokeInterruptServiceRoutine @ 0x14020B154 (KiInvokeInterruptServiceRoutine.c)
 *     KiSignalWaitDisconnectLock @ 0x14020B4C0 (KiSignalWaitDisconnectLock.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x14020B4F0 (KiSynchronizePassiveInterruptExecution.c)
 *     KiParkUmsThread @ 0x14020E3B0 (KiParkUmsThread.c)
 *     MiProcessDeleteOnClose @ 0x1402113D0 (MiProcessDeleteOnClose.c)
 *     MiMakeOutswappedPageResident @ 0x1402125D4 (MiMakeOutswappedPageResident.c)
 *     MmReleaseCommitForMemResetPages @ 0x1402137F4 (MmReleaseCommitForMemResetPages.c)
 *     MiPfCompleteCoalescedIo @ 0x14021BACC (MiPfCompleteCoalescedIo.c)
 *     MiQueueWorkingSetRequest @ 0x14021DD3C (MiQueueWorkingSetRequest.c)
 *     MiDeletePartition @ 0x14021F520 (MiDeletePartition.c)
 *     MiApplyCommitDelay @ 0x1402221A8 (MiApplyCommitDelay.c)
 *     MiIssuePageExtendRequest @ 0x1402266AC (MiIssuePageExtendRequest.c)
 *     MiQueueSyncModifiedWriterApc @ 0x140226BFC (MiQueueSyncModifiedWriterApc.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140226E40 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MmStoreFlushOutstandingEvictions @ 0x14022D948 (MmStoreFlushOutstandingEvictions.c)
 *     MiWaitForAvailablePages @ 0x14023050C (MiWaitForAvailablePages.c)
 *     MiWaitForFreePage @ 0x14023059C (MiWaitForFreePage.c)
 *     MiContractWsSwapPageFileWorker @ 0x140230AC0 (MiContractWsSwapPageFileWorker.c)
 *     NtSignalAndWaitForSingleObject @ 0x1402391E0 (NtSignalAndWaitForSingleObject.c)
 *     PopHaltDeviceIdle @ 0x14023D4BC (PopHaltDeviceIdle.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x14023E334 (PopFxIssueComponentPerfStateChanges.c)
 *     PopTimeoutWakeTracking @ 0x140241468 (PopTimeoutWakeTracking.c)
 *     PopIgnoreBatteryStatusChange @ 0x14024240C (PopIgnoreBatteryStatusChange.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x140244110 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopWdiTimerWorkerThread @ 0x140248670 (PopWdiTimerWorkerThread.c)
 *     PopRunMaximumIrpWorkers @ 0x1402490CC (PopRunMaximumIrpWorkers.c)
 *     PspIumFreePartitionState @ 0x14024F968 (PspIumFreePartitionState.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140265030 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x140265110 (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140265730 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x140265D68 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x140267B4C (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     SmKmStoreHelperWaitForCommand @ 0x140273AB4 (SmKmStoreHelperWaitForCommand.c)
 *     SmpFpWaitForResource @ 0x1402746D4 (SmpFpWaitForResource.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x140275660 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     SmWaitForSyncIo @ 0x140276318 (SmWaitForSyncIo.c)
 *     WmiQueryTraceProviderCount @ 0x140279EB0 (WmiQueryTraceProviderCount.c)
 *     WmipBuildTraceDeviceList @ 0x140279F5C (WmipBuildTraceDeviceList.c)
 *     EtwpTraceThreadRundownWithStack @ 0x14027F20C (EtwpTraceThreadRundownWithStack.c)
 *     ExRegisterBootDevice @ 0x140284090 (ExRegisterBootDevice.c)
 *     ExpWaitForBootDevices @ 0x1402842A0 (ExpWaitForBootDevices.c)
 *     WheapProcessWorkQueueItem @ 0x140289820 (WheapProcessWorkQueueItem.c)
 *     IoShutdownSystem @ 0x14042A6B4 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x14042A9E4 (IopShutdownBaseFileSystems.c)
 *     PnprInitiateReplaceOperation @ 0x14042C2C0 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x14042D5E0 (PnprQuiesceWorker.c)
 *     MiZeroAllPageFiles @ 0x14042EDB4 (MiZeroAllPageFiles.c)
 *     MmDuplicateMemory @ 0x14042F6D8 (MmDuplicateMemory.c)
 *     PfpScenCtxPrefetchWait @ 0x140430E90 (PfpScenCtxPrefetchWait.c)
 *     PopCaptureTimeOnProcZero @ 0x1404314C4 (PopCaptureTimeOnProcZero.c)
 *     PopGracefulShutdown @ 0x140431740 (PopGracefulShutdown.c)
 *     PopEndMirroring @ 0x140432FE0 (PopEndMirroring.c)
 *     PopTransitionToSleep @ 0x140435830 (PopTransitionToSleep.c)
 *     PopFlushVolumes @ 0x140436890 (PopFlushVolumes.c)
 *     PopBuildDeviceNotifyList @ 0x140437204 (PopBuildDeviceNotifyList.c)
 *     PopSleepDeviceList @ 0x140437778 (PopSleepDeviceList.c)
 *     PopWakeDeviceList @ 0x140437D84 (PopWakeDeviceList.c)
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 *     MiInSwapStore @ 0x1404443BC (MiInSwapStore.c)
 *     PiQueueDeviceRequest @ 0x14044E618 (PiQueueDeviceRequest.c)
 *     IopUnloadDriver @ 0x14046EF24 (IopUnloadDriver.c)
 *     NtNotifyChangeMultipleKeys @ 0x14047A598 (NtNotifyChangeMultipleKeys.c)
 *     IopGetFileInformation @ 0x14048FE14 (IopGetFileInformation.c)
 *     IopQueryXxxInformation @ 0x14048FF44 (IopQueryXxxInformation.c)
 *     IopGetSetSecurityObject @ 0x140491160 (IopGetSetSecurityObject.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404921A4 (EtwpAcquireLoggerContextByLoggerId.c)
 *     NtQueryInformationFile @ 0x14049A060 (NtQueryInformationFile.c)
 *     NtWaitForSingleObject @ 0x1404A3A80 (NtWaitForSingleObject.c)
 *     CmpParseKey @ 0x1404A9210 (CmpParseKey.c)
 *     IopSynchronousServiceTail @ 0x1404AD220 (IopSynchronousServiceTail.c)
 *     IopParseDevice @ 0x1404B86A0 (IopParseDevice.c)
 *     IopCloseFile @ 0x1404BAD60 (IopCloseFile.c)
 *     IopDeleteFile @ 0x1404BB010 (IopDeleteFile.c)
 *     MmCleanProcessAddressSpace @ 0x1404D2F70 (MmCleanProcessAddressSpace.c)
 *     PspExitThread @ 0x1404D5FB4 (PspExitThread.c)
 *     CmpOpenHiveFile @ 0x1404E0664 (CmpOpenHiveFile.c)
 *     CmLoadAppKey @ 0x1404E13B4 (CmLoadAppKey.c)
 *     CmpLockRegistryFreezeAware @ 0x1404E3B7C (CmpLockRegistryFreezeAware.c)
 *     CmpFileFlushAndPurge @ 0x1404E410C (CmpFileFlushAndPurge.c)
 *     CmpGetVolumeClusterSize @ 0x1404E4280 (CmpGetVolumeClusterSize.c)
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 *     IopDestroyActiveConnectBlock @ 0x1404EC298 (IopDestroyActiveConnectBlock.c)
 *     EtwpStartLogger @ 0x1404ECD4C (EtwpStartLogger.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1404ED968 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpDisableTraceProviders @ 0x1404EF090 (EtwpDisableTraceProviders.c)
 *     EtwpStopTrace @ 0x1404F0484 (EtwpStopTrace.c)
 *     EtwpCrimsonProvEnableCallback @ 0x1404F2400 (EtwpCrimsonProvEnableCallback.c)
 *     NtGetMUIRegistryInfo @ 0x1404F25F8 (NtGetMUIRegistryInfo.c)
 *     NtMapCMFModule @ 0x1404F2994 (NtMapCMFModule.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1404F4CA0 (FsRtlCancellableWaitForMultipleObjects.c)
 *     MiCreateImageFileMap @ 0x1404F8B90 (MiCreateImageFileMap.c)
 *     FsRtlGetFileSize @ 0x1404FA2F0 (FsRtlGetFileSize.c)
 *     MmAcquireLoadLock @ 0x140515A20 (MmAcquireLoadLock.c)
 *     PnpQueryInterface @ 0x14051AEB4 (PnpQueryInterface.c)
 *     WmipEnableCollectionForNewGuid @ 0x14051C2C4 (WmipEnableCollectionForNewGuid.c)
 *     IopSynchronousCall @ 0x14051CF64 (IopSynchronousCall.c)
 *     WmipIsQuerySetGuid @ 0x14051EA94 (WmipIsQuerySetGuid.c)
 *     WmipDeleteMethod @ 0x14051EB00 (WmipDeleteMethod.c)
 *     WmipEnableCollectOrEvent @ 0x14051EBF8 (WmipEnableCollectOrEvent.c)
 *     WmipUnreferenceEntry @ 0x14051EF80 (WmipUnreferenceEntry.c)
 *     WmipForwardWmiIrp @ 0x14051F140 (WmipForwardWmiIrp.c)
 *     WmipPrepareWnodeSI @ 0x14051F40C (WmipPrepareWnodeSI.c)
 *     WmipOpenBlock @ 0x14051FDE8 (WmipOpenBlock.c)
 *     WmipFindGEByGuid @ 0x14051FFE0 (WmipFindGEByGuid.c)
 *     PiControlGetSetDeviceStatus @ 0x140526EE0 (PiControlGetSetDeviceStatus.c)
 *     EtwpLogger @ 0x140531E30 (EtwpLogger.c)
 *     PiDrvDbLoadNode @ 0x140533E84 (PiDrvDbLoadNode.c)
 *     SPCallServerHandleQueryPolicy @ 0x140536700 (SPCallServerHandleQueryPolicy.c)
 *     PspUserThreadStartup @ 0x14053F9C0 (PspUserThreadStartup.c)
 *     WmipAddDataSource @ 0x140545304 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x140545978 (WmipDetermineInstanceBaseIndex.c)
 *     WmipFindISinGEbyName @ 0x140545B38 (WmipFindISinGEbyName.c)
 *     PnpDeviceEventWorker @ 0x14054B420 (PnpDeviceEventWorker.c)
 *     PnpStartDeviceNode @ 0x140552F08 (PnpStartDeviceNode.c)
 *     IopUncacheInterfaceInformation @ 0x140553CA8 (IopUncacheInterfaceInformation.c)
 *     PnpAllocateResources @ 0x140554F4C (PnpAllocateResources.c)
 *     IopFilterResourceRequirementsCall @ 0x1405580F0 (IopFilterResourceRequirementsCall.c)
 *     IopGetSetObjectId @ 0x140558E64 (IopGetSetObjectId.c)
 *     ArbArbiterHandler @ 0x14055A9B0 (ArbArbiterHandler.c)
 *     IopLegacyResourceAllocation @ 0x14055B6A0 (IopLegacyResourceAllocation.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14055B814 (PnpQueueQueryAndRemoveEvent.c)
 *     PopFxUnregisterDeviceOrWait @ 0x14055E898 (PopFxUnregisterDeviceOrWait.c)
 *     PiIrpQueryRemoveDevice @ 0x14055E96C (PiIrpQueryRemoveDevice.c)
 *     ExpHwidSendSynchronousIrpToDevice @ 0x14055FE74 (ExpHwidSendSynchronousIrpToDevice.c)
 *     IopMountVolume @ 0x14055FFAC (IopMountVolume.c)
 *     IoVolumeDeviceToGuidPath @ 0x140560690 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1405607E0 (IoVolumeDeviceNameToGuidPath.c)
 *     IoVolumeDeviceToDosName @ 0x140560B00 (IoVolumeDeviceToDosName.c)
 *     AlpcpWaitForPortReferences @ 0x140562884 (AlpcpWaitForPortReferences.c)
 *     RtlDecompressBufferLZNT1 @ 0x140563620 (RtlDecompressBufferLZNT1.c)
 *     RtlDecompressFragmentLZNT1 @ 0x1405637D0 (RtlDecompressFragmentLZNT1.c)
 *     WmipProcessEvent @ 0x140567EA4 (WmipProcessEvent.c)
 *     IopCancelIrpsInThreadList @ 0x140568328 (IopCancelIrpsInThreadList.c)
 *     FsRtlSetKernelEaFile @ 0x14056B890 (FsRtlSetKernelEaFile.c)
 *     FsRtlSetFileSize @ 0x14056C05C (FsRtlSetFileSize.c)
 *     FsRtlKernelFsControlFile @ 0x14056C170 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x14056C480 (FsRtlQueryKernelEaFile.c)
 *     IopSynchronousApiServiceTail @ 0x1405753C0 (IopSynchronousApiServiceTail.c)
 *     WmipEnumerateMofResources @ 0x14057A510 (WmipEnumerateMofResources.c)
 *     WmipDeregisterDevice @ 0x14057F230 (WmipDeregisterDevice.c)
 *     IoWMIRegistrationControl @ 0x14057F320 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x14057F3F8 (WmipRegisterDevice.c)
 *     WmipQueueRegWork @ 0x14057F56C (WmipQueueRegWork.c)
 *     WmipUpdateDeviceStackSize @ 0x14057F644 (WmipUpdateDeviceStackSize.c)
 *     WmipPrepareForWnodeAD @ 0x140588B24 (WmipPrepareForWnodeAD.c)
 *     FsRtlIssueDeviceIoControl @ 0x140589080 (FsRtlIssueDeviceIoControl.c)
 *     WmipRegistrationWorker @ 0x14058E000 (WmipRegistrationWorker.c)
 *     IoDisconnectInterrupt @ 0x14058E500 (IoDisconnectInterrupt.c)
 *     WmipDSCleanup @ 0x1405905A0 (WmipDSCleanup.c)
 *     NtWaitForKeyedEvent @ 0x140590C6C (NtWaitForKeyedEvent.c)
 *     NtReleaseKeyedEvent @ 0x140590F8C (NtReleaseKeyedEvent.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140593B58 (WmipDisableCollectionForRemovedGuid.c)
 *     EtwpSynchronizeWithLogger @ 0x140595F24 (EtwpSynchronizeWithLogger.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x140596CD8 (EtwpUpdateGlobalGroupMasks.c)
 *     FsRtlQueryCachedVdl @ 0x140598F30 (FsRtlQueryCachedVdl.c)
 *     IoReportTargetDeviceChange @ 0x14059A790 (IoReportTargetDeviceChange.c)
 *     IoSetInformation @ 0x14059BCF0 (IoSetInformation.c)
 *     WmipDisableCollectOrEvent @ 0x14059D448 (WmipDisableCollectOrEvent.c)
 *     EtwpStartTrace @ 0x14059D5E4 (EtwpStartTrace.c)
 *     FsRtlBalanceReads @ 0x14059D8C0 (FsRtlBalanceReads.c)
 *     SepRmCommandServerThread @ 0x1405A76C0 (SepRmCommandServerThread.c)
 *     PoInitHiberServices @ 0x1405AD774 (PoInitHiberServices.c)
 *     CmpLoadHiveThread @ 0x1405BE770 (CmpLoadHiveThread.c)
 *     CmpFinishSystemHivesLoad @ 0x1405C09E0 (CmpFinishSystemHivesLoad.c)
 *     WmipAddMofResource @ 0x1405C7E4C (WmipAddMofResource.c)
 *     WmipFindMRByNames @ 0x1405C808C (WmipFindMRByNames.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1405C8240 (IoRegisterFsRegistrationChangeMountAware.c)
 *     IopCreateArcName @ 0x1405C8AA8 (IopCreateArcName.c)
 *     PnpWaitForEmptyDeviceEventQueue @ 0x1405C92A4 (PnpWaitForEmptyDeviceEventQueue.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x1405C92D0 (PnpWaitForEmptyDeviceActionQueue.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x1405C9450 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     PopBatteryWorker @ 0x1405C9580 (PopBatteryWorker.c)
 *     ArbBuildAssignmentOrdering @ 0x1405CEFB8 (ArbBuildAssignmentOrdering.c)
 *     IopAllocateBootResources @ 0x1405D1E70 (IopAllocateBootResources.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x1405D4884 (FsRtlIssueFileNotificationFsctl.c)
 *     MiZeroPageFileFirstPage @ 0x1405D4E68 (MiZeroPageFileFirstPage.c)
 *     WmipSendEnableDisableRequest @ 0x1405D5EF0 (WmipSendEnableDisableRequest.c)
 *     IopInsertLegacyBusDeviceNode @ 0x1405DE778 (IopInsertLegacyBusDeviceNode.c)
 *     WmipSetTraceNotify @ 0x1405DF154 (WmipSetTraceNotify.c)
 *     NtNotifyChangeSession @ 0x1405E12D0 (NtNotifyChangeSession.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x1405E1B70 (IopAcquireReleaseConnectLockInternal.c)
 *     WmipLegacyEtwWorker @ 0x1405E1EA0 (WmipLegacyEtwWorker.c)
 *     WmipProcessLegacyEtwRegister @ 0x1405E1FB8 (WmipProcessLegacyEtwRegister.c)
 *     IopInvalidateVolumesForDevice @ 0x1405E359C (IopInvalidateVolumesForDevice.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x1405E5038 (WmipGetGuidObjectInstanceInfo.c)
 *     FsRtlpRegisterUncProvider @ 0x1405E5684 (FsRtlpRegisterUncProvider.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x1405EB240 (SPCallServerHandleWaitForDisplayWindow.c)
 *     IopCancelAlertedRequest @ 0x1405EF31C (IopCancelAlertedRequest.c)
 *     WheapEtwEnableCallback @ 0x1405F0150 (WheapEtwEnableCallback.c)
 *     PiPagePathSetState @ 0x1405F037C (PiPagePathSetState.c)
 *     RtlpRunOnceWaitForInit @ 0x1405F0AD4 (RtlpRunOnceWaitForInit.c)
 *     IoWMISetNotificationCallback @ 0x1405F1540 (IoWMISetNotificationCallback.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x1405F1818 (PnpSynchronizeDeviceEventQueue.c)
 *     IopLoadFileSystemDriver @ 0x1405F28C8 (IopLoadFileSystemDriver.c)
 *     FsRtlWaitForSmssEvent @ 0x1405F2C70 (FsRtlWaitForSmssEvent.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140693AF0 (CmpWaitOnHiveWriteQueue.c)
 *     CmpTouchFile @ 0x1406950E4 (CmpTouchFile.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x1406A94F4 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     DbgkpQueueMessage @ 0x1406AAA14 (DbgkpQueueMessage.c)
 *     NtWaitForDebugEvent @ 0x1406AB918 (NtWaitForDebugEvent.c)
 *     DbgkpSendErrorMessage @ 0x1406AC4FC (DbgkpSendErrorMessage.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x1406AD4F4 (DbgkpLkmdLaunchSnapApc.c)
 *     EmPowerPagingEnabled @ 0x1406AF450 (EmPowerPagingEnabled.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x1406AFDC8 (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlDeregisterUncProvider @ 0x1406B08A0 (FsRtlDeregisterUncProvider.c)
 *     FsRtlQueryInformationFile @ 0x1406B0F60 (FsRtlQueryInformationFile.c)
 *     IopGetVolumeId @ 0x1406B5074 (IopGetVolumeId.c)
 *     IopHardErrorThread @ 0x1406B51B0 (IopHardErrorThread.c)
 *     IopSendMessageToTrackService @ 0x1406B5B58 (IopSendMessageToTrackService.c)
 *     IopSetRemoteLink @ 0x1406B670C (IopSetRemoteLink.c)
 *     IoCancelFileOpen @ 0x1406B6F90 (IoCancelFileOpen.c)
 *     IoVerifyVolume @ 0x1406B7D20 (IoVerifyVolume.c)
 *     IopIssueSystemEnvironmentRequest @ 0x1406BCE54 (IopIssueSystemEnvironmentRequest.c)
 *     IopFreeBandwidthContract @ 0x1406BD638 (IopFreeBandwidthContract.c)
 *     PnpShutdownDevices @ 0x1406BDC40 (PnpShutdownDevices.c)
 *     IoReplacePartitionUnit @ 0x1406BF4D0 (IoReplacePartitionUnit.c)
 *     PnpRequestHwProfileChangeNotification @ 0x1406BFE20 (PnpRequestHwProfileChangeNotification.c)
 *     IopAcquireReleaseDispatcherLock @ 0x1406C0FCC (IopAcquireReleaseDispatcherLock.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x1406CA6F4 (PpProfileBeginHardwareProfileTransition.c)
 *     PnpReplacePartitionUnit @ 0x1406CB3C0 (PnpReplacePartitionUnit.c)
 *     PnpReallocateResources @ 0x1406D2960 (PnpReallocateResources.c)
 *     IopWarmEjectDevice @ 0x1406D3C00 (IopWarmEjectDevice.c)
 *     IopQueryConflictList @ 0x1406D681C (IopQueryConflictList.c)
 *     ObWaitForSingleObject @ 0x1406F0010 (ObWaitForSingleObject.c)
 *     PfTCleanup @ 0x1406F3D88 (PfTCleanup.c)
 *     PopCoolingExtensionPnpNotification @ 0x1406F6F60 (PopCoolingExtensionPnpNotification.c)
 *     PopDeactiveThermalRequest @ 0x1406F70BC (PopDeactiveThermalRequest.c)
 *     PopFxUnregisterDevice @ 0x1406F944C (PopFxUnregisterDevice.c)
 *     PoUnregisterPowerSettingCallback @ 0x1406FA220 (PoUnregisterPowerSettingCallback.c)
 *     PopGetWakeSource @ 0x1406FA664 (PopGetWakeSource.c)
 *     PopClearHiberFileSignature @ 0x1406FB3D4 (PopClearHiberFileSignature.c)
 *     PopCreateHiberFile @ 0x1406FB4BC (PopCreateHiberFile.c)
 *     PopResizeHiberFile @ 0x1406FC068 (PopResizeHiberFile.c)
 *     PopSanityCheckHiberFile @ 0x1406FC1F4 (PopSanityCheckHiberFile.c)
 *     PopSetSystemAwayMode @ 0x1406FD890 (PopSetSystemAwayMode.c)
 *     PopBatteryRemove @ 0x1406FE840 (PopBatteryRemove.c)
 *     PopPepUnregisterDevice @ 0x1406FEF48 (PopPepUnregisterDevice.c)
 *     PopThermalZoneRemove @ 0x140700820 (PopThermalZoneRemove.c)
 *     NtInitiatePowerAction @ 0x140700C9C (NtInitiatePowerAction.c)
 *     PopAcquireTransitionLock @ 0x140700EEC (PopAcquireTransitionLock.c)
 *     PopInitSystemSleeperThread @ 0x1407010A0 (PopInitSystemSleeperThread.c)
 *     PopDiagNextCsSleepStudySession @ 0x1407014E4 (PopDiagNextCsSleepStudySession.c)
 *     PopDiagStopCsSleepStudySession @ 0x1407016F4 (PopDiagStopCsSleepStudySession.c)
 *     PopSleepStudyTaskClientTimerWorker @ 0x140706190 (PopSleepStudyTaskClientTimerWorker.c)
 *     PopNotifyPolicyDevice @ 0x140706F40 (PopNotifyPolicyDevice.c)
 *     PopFanRemove @ 0x140707300 (PopFanRemove.c)
 *     PspQueueDeferredWorkAndWait @ 0x1407154E4 (PspQueueDeferredWorkAndWait.c)
 *     PsWaitForAllProcesses @ 0x140718F50 (PsWaitForAllProcesses.c)
 *     PspWaitForUsermodeExit @ 0x1407193A8 (PspWaitForUsermodeExit.c)
 *     PspTeardownPartition @ 0x14071B190 (PspTeardownPartition.c)
 *     PsCallEnclave @ 0x14071B2E0 (PsCallEnclave.c)
 *     PsTerminateVsmEnclave @ 0x14071C150 (PsTerminateVsmEnclave.c)
 *     RawPerformDevIoCtrl @ 0x14071D494 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x14071D5D0 (RawQueryFsSizeInfo.c)
 *     RawQueryFileSystemInformation @ 0x14071D9F8 (RawQueryFileSystemInformation.c)
 *     SmProcessResizeRequest @ 0x1407389CC (SmProcessResizeRequest.c)
 *     SmProcessStatsRequest @ 0x140738AC4 (SmProcessStatsRequest.c)
 *     SmStoreCompressionStop @ 0x140738F5C (SmStoreCompressionStop.c)
 *     SmStorePhysicalRequestIssue @ 0x14073921C (SmStorePhysicalRequestIssue.c)
 *     SmKmIsVolumeIoPossible @ 0x14073A558 (SmKmIsVolumeIoPossible.c)
 *     SmKmSendDeviceControl @ 0x14073AD7C (SmKmSendDeviceControl.c)
 *     SmKmSendUsageNotification @ 0x14073AE30 (SmKmSendUsageNotification.c)
 *     SmKmStoreFileCreate @ 0x14073AEF4 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x14073B5F8 (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x14073B688 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileWriteHeader @ 0x14073BCF4 (SmKmStoreFileWriteHeader.c)
 *     IoWMIAllocateInstanceIds @ 0x140740400 (IoWMIAllocateInstanceIds.c)
 *     WmipGetSysIds @ 0x14074107C (WmipGetSysIds.c)
 *     WmipDereferenceEvent @ 0x140741814 (WmipDereferenceEvent.c)
 *     WmipEnumerateGuids @ 0x140741A38 (WmipEnumerateGuids.c)
 *     WmipIncludeStaticNames @ 0x140741BCC (WmipIncludeStaticNames.c)
 *     WmipQueryGuidInfo @ 0x140742174 (WmipQueryGuidInfo.c)
 *     WmipLegacyEtwCallback @ 0x140742AF0 (WmipLegacyEtwCallback.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140742D38 (WmipSendWmiIrpToTraceDeviceList.c)
 *     WmipUpdateDataSource @ 0x14074326C (WmipUpdateDataSource.c)
 *     WmipWaitForCollectionEnabled @ 0x1407437D8 (WmipWaitForCollectionEnabled.c)
 *     EtwpEnableDisableUMGL @ 0x140743D7C (EtwpEnableDisableUMGL.c)
 *     EtwpUpdatePerProcessTracing @ 0x140743FB4 (EtwpUpdatePerProcessTracing.c)
 *     EtwpSetPmcProfileSource @ 0x14074764C (EtwpSetPmcProfileSource.c)
 *     EtwSetPerformanceTraceInformation @ 0x140748538 (EtwSetPerformanceTraceInformation.c)
 *     EtwDereferenceSpinLockCounters @ 0x14074AD54 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x14074ADB0 (EtwReferenceSpinLockCounters.c)
 *     EtwpSampledProfileRunDown @ 0x14074E9E4 (EtwpSampledProfileRunDown.c)
 *     EtwpUpdateDisallowedGuids @ 0x140751C2C (EtwpUpdateDisallowedGuids.c)
 *     EtwpKsrCallback @ 0x140752AF0 (EtwpKsrCallback.c)
 *     ExSwapinWorkerThreads @ 0x14075E51C (ExSwapinWorkerThreads.c)
 *     ExpWorkQueueDestroy @ 0x14075EB14 (ExpWorkQueueDestroy.c)
 *     NtStartProfile @ 0x140760AE4 (NtStartProfile.c)
 *     NtStopProfile @ 0x140760D44 (NtStopProfile.c)
 *     WheaAttemptPhysicalPageOffline @ 0x140762DF0 (WheaAttemptPhysicalPageOffline.c)
 *     sub_14076B714 @ 0x14076B714 (sub_14076B714.c)
 *     sub_14076D484 @ 0x14076D484 (sub_14076D484.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x140788EBC (CancelTimerCallbacksAndDeleteTimer.c)
 *     VhdiVerifyBootDisk @ 0x140789BCC (VhdiVerifyBootDisk.c)
 *     VfDriverLock @ 0x1407A2530 (VfDriverLock.c)
 *     IovpUnloadDriver @ 0x1407A5848 (IovpUnloadDriver.c)
 *     VfIrpSendSynchronousIrp @ 0x1407B09A0 (VfIrpSendSynchronousIrp.c)
 *     ViPendingCompleteAfterWait @ 0x1407B3C38 (ViPendingCompleteAfterWait.c)
 *     ViPendingWorkerThread @ 0x1407B3FB0 (ViPendingWorkerThread.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x1407B7890 (ViPoolDelayFreeTrimThreadRoutine.c)
 *     ViFilterDispatchPnp @ 0x1407C2D20 (ViFilterDispatchPnp.c)
 *     AnFwFadeCompletion @ 0x1407CF3B8 (AnFwFadeCompletion.c)
 *     IopAssignBootDriveLetter @ 0x14084468C (IopAssignBootDriveLetter.c)
 *     IopCreateArcNamesCd @ 0x140851E2C (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x140869F24 (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x14086DB14 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x14086E400 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x14086E5E8 (SbpStartLanman.c)
 *     SbpWaitForVmbus @ 0x14086E978 (SbpWaitForVmbus.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiCommitThreadWait @ 0x14006DBD0 (KiCommitThreadWait.c)
 *     KiAbProcessContextSwitch @ 0x14006F610 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14006FCC0 (KiDeliverApc.c)
 *     KiEndThreadCycleAccumulation @ 0x14008DB10 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x14008E6F0 (KiQueueReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x140093244 (KiRequestSoftwareInterrupt.c)
 *     KiReadyDeferredReadyList @ 0x1400A8694 (KiReadyDeferredReadyList.c)
 *     KiSelectNextThread @ 0x1400A89A0 (KiSelectNextThread.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     KiFastExitThreadWait @ 0x14011B0BC (KiFastExitThreadWait.c)
 *     HvlNotifyLongSpinWait @ 0x140153060 (HvlNotifyLongSpinWait.c)
 *     KiSwapContext @ 0x140187F20 (KiSwapContext.c)
 */

NTSTATUS __stdcall KeWaitForSingleObject(
        PVOID Object,
        KWAIT_REASON WaitReason,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // al
  LONGLONG QuadPart; // rdx
  unsigned __int8 WaitIrql; // si
  $1ECCCAC64BBEFA1EE7C7E5BC0BEBC7F8 *v11; // r12
  unsigned __int8 v12; // r15
  __int64 v13; // r8
  NTSTATUS v14; // r14d
  unsigned int v15; // esi
  struct _KPRCB *CurrentPrcb; // r9
  LONGLONG v17; // r8
  unsigned __int64 v18; // rax
  PVOID *v19; // rcx
  NTSTATUS result; // eax
  unsigned __int8 v21; // al
  unsigned __int8 v22; // di
  _KWAIT_STATUS_REGISTER v23; // al
  int v24; // eax
  int v25; // eax
  struct _KPRCB *v26; // r9
  volatile unsigned __int8 DpcRoutineActive; // cl
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v29; // rcx
  __int64 v30; // r8
  volatile __int64 WaitStatus; // rdi
  unsigned __int8 v32; // si
  _KWAIT_STATUS_REGISTER v33; // al
  unsigned __int64 v34; // rcx
  unsigned __int8 *v35; // rcx
  struct _KPRCB *v36; // rbx
  _KTHREAD *v37; // rsi
  unsigned __int8 v38; // r15
  _KTHREAD *v39; // rbx
  struct _KPRCB *v40; // rcx
  _KTHREAD *v41; // r14
  _KTHREAD *v42; // rbx
  struct _KPRCB *v43; // r15
  _KTHREAD *v44; // rsi
  struct _KPRCB *v45; // r15
  _KTHREAD *v46; // rdi
  __int64 v47; // r8
  bool v48; // zf
  struct _KPRCB *v49; // r15
  _KTHREAD *v50; // rbx
  _KTHREAD *v51; // r14
  struct _KPRCB *v52; // rcx
  _KTHREAD *v53; // rbx
  struct _KPRCB *v54; // r15
  _KTHREAD *v55; // rsi
  __int64 v56; // r8
  struct _KPRCB *v57; // r15
  _KTHREAD *NextThread; // r14
  struct _KPRCB *v59; // rdi
  signed __int32 v60[8]; // [rsp+0h] [rbp-81h] BYREF
  unsigned __int8 v61; // [rsp+20h] [rbp-61h]
  struct _KPRCB *v62; // [rsp+28h] [rbp-59h]
  int v63; // [rsp+30h] [rbp-51h] BYREF
  int v64; // [rsp+34h] [rbp-4Dh] BYREF
  int v65; // [rsp+38h] [rbp-49h] BYREF
  int v66; // [rsp+3Ch] [rbp-45h] BYREF
  int v67; // [rsp+40h] [rbp-41h] BYREF
  int v68; // [rsp+44h] [rbp-3Dh] BYREF
  int v69; // [rsp+48h] [rbp-39h] BYREF
  int v70; // [rsp+4Ch] [rbp-35h] BYREF
  int v71; // [rsp+50h] [rbp-31h] BYREF
  int v72; // [rsp+54h] [rbp-2Dh] BYREF
  int v73; // [rsp+58h] [rbp-29h] BYREF
  int v74; // [rsp+5Ch] [rbp-25h] BYREF
  LONGLONG v75; // [rsp+60h] [rbp-21h]
  __int64 v76; // [rsp+68h] [rbp-19h] BYREF
  __int64 v77; // [rsp+70h] [rbp-11h] BYREF
  int v78; // [rsp+78h] [rbp-9h]
  int v80; // [rsp+E0h] [rbp+5Fh]
  unsigned __int8 v81; // [rsp+E8h] [rbp+67h]
  unsigned __int8 v83; // [rsp+F0h] [rbp+6Fh]
  unsigned __int8 v84; // [rsp+F8h] [rbp+77h]
  unsigned int Timeouta; // [rsp+100h] [rbp+7Fh]

  v81 = WaitReason;
  CurrentThread = KeGetCurrentThread();
  v61 = _bittestandreset((signed __int32 *)&CurrentThread->116, 2u);
  if ( !v61 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentThread->WaitIrql = CurrentIrql;
  }
  QuadPart = 0xFFFFF78000000008uLL;
  if ( Timeout )
  {
    if ( Timeout->HighPart < 0 )
    {
      Timeouta = 2;
      QuadPart = MEMORY[0xFFFFF78000000008]
               - MEMORY[0xFFFFF780000003B0]
               - (Timeout->QuadPart
                + CurrentThread->RelativeTimerBias);
      v75 = QuadPart;
    }
    else
    {
      QuadPart = Timeout->QuadPart;
      v75 = Timeout->QuadPart;
      Timeouta = 1;
    }
  }
  else
  {
    Timeouta = 0;
  }
  while ( 1 )
  {
    WaitIrql = CurrentThread->WaitIrql;
    v84 = WaitIrql;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = WaitMode;
      if ( Alertable )
        CurrentThread->MiscFlags |= 0x10u;
      v63 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v63);
        while ( CurrentThread->ThreadLock );
      }
      if ( !CurrentThread->ApcState.KernelApcPending || WaitIrql || CurrentThread->SpecialApcDisable )
        break;
      CurrentThread->ThreadLock = 0LL;
      __writecr8(1uLL);
      KiDeliverApc(0LL, 0LL, 0LL);
      KeGetCurrentIrql();
      __writecr8(2uLL);
      CurrentThread->WaitIrql = 0;
    }
    v11 = &CurrentThread->320;
    v12 = v61;
    if ( !Alertable )
    {
      if ( CurrentThread->ApcState.UserApcPending && WaitMode )
        goto LABEL_75;
      goto LABEL_13;
    }
    v35 = &CurrentThread->Alerted[WaitMode];
    if ( *v35 )
    {
      *v35 = 0;
      LODWORD(WaitStatus) = 257;
      goto LABEL_76;
    }
    if ( WaitMode && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
      break;
    if ( CurrentThread->Alerted[0] )
    {
      CurrentThread->Alerted[0] = 0;
      LODWORD(WaitStatus) = 257;
      goto LABEL_76;
    }
LABEL_13:
    v13 = 0LL;
    CurrentThread->WaitBlockFill6[68] = 5;
    v14 = 0;
    CurrentThread->WaitReason = v81;
    v15 = 0;
    CurrentThread->ThreadLock = 0LL;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentThread->WaitBlock[0].WaitType = 1;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].WaitKey = 0;
    CurrentThread->WaitBlock[0].Object = Object;
    v62 = CurrentPrcb;
    if ( _interlockedbittestandset((volatile signed __int32 *)Object, 7u) )
    {
      do
      {
        if ( (++v15 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v15);
      }
      while ( (*(_DWORD *)Object & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)Object, 7u) );
      CurrentPrcb = v62;
      v13 = 0LL;
    }
    if ( (*(_BYTE *)Object & 0x7F) != 2 )
    {
      QuadPart = *((unsigned int *)Object + 1);
      if ( (int)QuadPart <= 0 )
        goto LABEL_16;
      if ( (*(_BYTE *)Object & 7) == 1 )
      {
        *((_DWORD *)Object + 1) = 0;
      }
      else if ( (*(_BYTE *)Object & 0x7F) == 5 )
      {
        *((_DWORD *)Object + 1) = QuadPart - 1;
      }
LABEL_24:
      _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
      goto LABEL_25;
    }
    if ( *((int *)Object + 1) > 0
      || CurrentThread == *((struct _KTHREAD **)Object + 5) && *((_BYTE *)Object + 2) == CurrentPrcb->DpcRoutineActive )
    {
      v24 = *((_DWORD *)Object + 1);
      if ( v24 == 0x80000000 )
      {
        _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
        KiFastExitThreadWait(CurrentPrcb, CurrentThread, v12);
        RtlRaiseStatus(-1073741423);
      }
      v25 = v24 - 1;
      *((_DWORD *)Object + 1) = v25;
      if ( v25 )
        goto LABEL_24;
      CurrentThread->WaitStatus = 0LL;
      v65 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v65);
        while ( CurrentThread->ThreadLock );
      }
      v26 = v62;
      CurrentThread->KernelApcDisable -= *((unsigned __int8 *)Object + 49);
      if ( v26->CurrentThread == CurrentThread )
        DpcRoutineActive = v26->DpcRoutineActive;
      else
        DpcRoutineActive = 0;
      v78 = *(_DWORD *)Object;
      BYTE2(v78) = DpcRoutineActive;
      *(_DWORD *)Object = v78;
      *((_QWORD *)Object + 5) = CurrentThread;
      if ( *((_BYTE *)Object + 48) )
      {
        *((_BYTE *)Object + 48) = 0;
        CurrentThread->WaitStatus |= 0x80uLL;
      }
      Blink = CurrentThread->MutantListHead.Blink;
      v29 = (struct _LIST_ENTRY *)((char *)Object + 24);
      if ( Blink->Flink != &CurrentThread->MutantListHead )
        __fastfail(3u);
      v29->Flink = &CurrentThread->MutantListHead;
      *((_QWORD *)Object + 4) = Blink;
      Blink->Flink = v29;
      CurrentThread->MutantListHead.Blink = v29;
      _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
      CurrentThread->WaitBlockFill6[68] = 2;
      v30 = 0LL;
      CurrentThread->ThreadLock = 0LL;
      WaitStatus = CurrentThread->WaitStatus;
      v32 = CurrentThread->WaitIrql;
      v33.Flags = (unsigned __int8)CurrentThread->WaitRegister;
      v80 = WaitStatus;
      if ( (v33.Flags & 0x38) == 0 )
      {
        if ( !v12 )
          goto LABEL_48;
        if ( v32 < 2u )
        {
          v50 = v26->CurrentThread;
          if ( v26->NextThread )
          {
            KiAbProcessContextSwitch(v26->CurrentThread, 0LL);
            v57 = v62;
            v69 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)&v62->PrcbLock, 0LL) )
            {
              do
                KeYieldProcessorEx(&v69);
              while ( v62->PrcbLock );
            }
            NextThread = v62->NextThread;
            v62->NextThread = 0LL;
            _disable();
            KiEndThreadCycleAccumulation(v57, v50, 0LL);
            _enable();
            v57->CurrentThread = NextThread;
            if ( NextThread->WaitBlockFill6[68] == 1 )
              NextThread->ReadyTime = NextThread->ReadyTime
                                    - NextThread->WaitBlock[2].SpareLong
                                    + MEMORY[0xFFFFF78000000320];
            NextThread->WaitBlockFill6[68] = 2;
            v50->WaitReason = 32;
            v50->WaitIrql = v32;
            KiQueueReadyThread(v57, v50);
            if ( (unsigned __int8)KiSwapContext(v50, NextThread, v32) )
              goto LABEL_186;
          }
          else if ( (v50->MiscFlags & 0x40) != 0 )
          {
            goto LABEL_186;
          }
          goto LABEL_48;
        }
        if ( v26->NextThread && !v26->DpcRoutineActive )
        {
          v52 = v26;
          goto LABEL_190;
        }
        return WaitStatus;
      }
      if ( (v33.Flags & 0x18) != 0 )
      {
        if ( (v33.Flags & 8) != 0 )
          _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xCu);
        v76 = 0LL;
        WaitStatus = (volatile __int64)v26;
        v66 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(WaitStatus + 48), 0LL) )
        {
          do
            KeYieldProcessorEx(&v66);
          while ( *(_QWORD *)(WaitStatus + 48) );
        }
        v48 = *(_QWORD *)(WaitStatus + 16) == 0LL;
        LODWORD(WaitStatus) = v80;
        v49 = v62;
        if ( v48 )
          KiSelectNextThread(v62, &v76, v30, v26);
        _InterlockedAnd64((volatile signed __int64 *)&v62->PrcbLock, 0LL);
        KiReadyDeferredReadyList(v62, &v76, v30, v26);
        if ( v32 >= 2u )
        {
          if ( v62->NextThread && !v62->DpcRoutineActive )
          {
            v52 = v62;
LABEL_190:
            LOBYTE(Blink) = 2;
            KiRequestSoftwareInterrupt(v52, Blink);
            return WaitStatus;
          }
        }
        else
        {
          v50 = v62->CurrentThread;
          if ( v62->NextThread )
          {
            KiAbProcessContextSwitch(v62->CurrentThread, 0LL);
            v67 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)&v62->PrcbLock, 0LL) )
            {
              do
                KeYieldProcessorEx(&v67);
              while ( v62->PrcbLock );
            }
            v51 = v62->NextThread;
            v62->NextThread = 0LL;
            _disable();
            KiEndThreadCycleAccumulation(v49, v50, 0LL);
            _enable();
            v49->CurrentThread = v51;
            if ( v51->WaitBlockFill6[68] == 1 )
              v51->ReadyTime = v51->ReadyTime - v51->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
            v51->WaitBlockFill6[68] = 2;
            v50->WaitReason = 32;
            v50->WaitIrql = v32;
            KiQueueReadyThread(v49, v50);
            if ( (unsigned __int8)KiSwapContext(v50, v51, v32) )
            {
LABEL_186:
              __writecr8(1uLL);
              v50->MiscFlags &= ~0x40u;
              KiDeliverApc(0LL, 0LL, 0LL);
            }
          }
          else if ( (v50->MiscFlags & 0x40) != 0 )
          {
            goto LABEL_186;
          }
LABEL_48:
          __writecr8(v32);
        }
        return WaitStatus;
      }
      v53 = v26->CurrentThread;
      if ( v26->NextThread )
      {
        KiAbProcessContextSwitch(v26->CurrentThread, 0LL);
        v54 = v62;
        v68 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&v62->PrcbLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&v68);
          while ( v62->PrcbLock );
        }
        v55 = v62->NextThread;
        v62->NextThread = 0LL;
        _disable();
        KiEndThreadCycleAccumulation(v54, v53, 0LL);
        _enable();
        v54->CurrentThread = v55;
        if ( v55->WaitBlockFill6[68] == 1 )
          v55->ReadyTime = v55->ReadyTime - v55->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
        v55->WaitBlockFill6[68] = 2;
        v53->WaitReason = 32;
        v53->WaitIrql = 1;
        KiQueueReadyThread(v54, v53);
        LOBYTE(v56) = 1;
        if ( (unsigned __int8)KiSwapContext(v53, v55, v56) )
        {
LABEL_173:
          __writecr8(1uLL);
          v53->MiscFlags &= ~0x40u;
          KiDeliverApc(0LL, 0LL, 0LL);
        }
      }
      else if ( (v53->MiscFlags & 0x40) != 0 )
      {
        goto LABEL_173;
      }
      __writecr8(1uLL);
      KiDeliverApc(0LL, 0LL, 0LL);
      __writecr8(0LL);
      return WaitStatus;
    }
LABEL_16:
    v17 = v75;
    v18 = v75;
    if ( Timeouta == 2 )
    {
      QuadPart = CurrentThread->ThreadTimerDelay;
      v34 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
      v18 = v75;
      if ( CurrentThread->WaitMode
        && !CurrentThread->WaitBlock[3].SpareLong
        && !CurrentThread->WaitIrql
        && !CurrentThread->ApcState.InProgressFlags
        && (_DWORD)QuadPart )
      {
        v18 = v75 + QuadPart;
      }
    }
    else
    {
      if ( !Timeouta )
        goto LABEL_18;
      if ( !v75 )
        goto LABEL_34;
      v34 = MEMORY[0xFFFFF78000000014];
    }
    if ( v34 > v18 )
    {
LABEL_34:
      _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
      v14 = 258;
      v13 = 0LL;
LABEL_25:
      CurrentThread->WaitBlockFill6[68] = 2;
      _InterlockedOr(v60, 0);
      if ( CurrentThread->ThreadLock )
      {
        v70 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&v70);
          while ( CurrentThread->ThreadLock );
        }
        CurrentPrcb = v62;
        v13 = 0LL;
        CurrentThread->ThreadLock = 0LL;
      }
      v22 = CurrentThread->WaitIrql;
      v23.Flags = (unsigned __int8)CurrentThread->WaitRegister;
      v83 = v22;
      if ( (v23.Flags & 0x38) == 0 )
      {
        if ( !v12 )
          goto LABEL_28;
        if ( v22 < 2u )
        {
          v39 = CurrentPrcb->CurrentThread;
          if ( !CurrentPrcb->NextThread )
            goto LABEL_97;
          KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
          v43 = v62;
          v74 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&v43->PrcbLock, 0LL) )
          {
            do
              KeYieldProcessorEx(&v74);
            while ( v43->PrcbLock );
          }
          v44 = v43->NextThread;
          v43->NextThread = 0LL;
          _disable();
          KiEndThreadCycleAccumulation(v43, v39, 0LL);
          _enable();
          v43->CurrentThread = v44;
          if ( v44->WaitBlockFill6[68] != 1 )
          {
LABEL_123:
            v44->WaitBlockFill6[68] = 2;
            v39->WaitReason = 32;
            v39->WaitIrql = v22;
            KiQueueReadyThread(v43, v39);
            if ( (unsigned __int8)KiSwapContext(v39, v44, v22) )
              goto LABEL_124;
            goto LABEL_28;
          }
LABEL_204:
          v44->ReadyTime = v44->ReadyTime - v44->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
          goto LABEL_123;
        }
        if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
        {
          v40 = CurrentPrcb;
          goto LABEL_102;
        }
        return v14;
      }
      if ( (v23.Flags & 0x18) != 0 )
      {
        if ( (v23.Flags & 8) != 0 )
          _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xCu);
        v59 = v62;
        v77 = 0LL;
        v71 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&v59->PrcbLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&v71);
          while ( v59->PrcbLock );
        }
        v48 = v59->NextThread == 0LL;
        v22 = v83;
        v43 = v62;
        if ( v48 )
          KiSelectNextThread(v62, &v77, v13, CurrentPrcb);
        _InterlockedAnd64((volatile signed __int64 *)&v43->PrcbLock, 0LL);
        KiReadyDeferredReadyList(v43, &v77, v13, CurrentPrcb);
        if ( v83 >= 2u )
        {
          if ( v43->NextThread && !v43->DpcRoutineActive )
          {
            v40 = v43;
LABEL_102:
            LOBYTE(QuadPart) = 2;
            KiRequestSoftwareInterrupt(v40, QuadPart);
          }
        }
        else
        {
          v39 = v43->CurrentThread;
          if ( v43->NextThread )
          {
            KiAbProcessContextSwitch(v43->CurrentThread, 0LL);
            v72 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)&v43->PrcbLock, 0LL) )
            {
              do
                KeYieldProcessorEx(&v72);
              while ( v43->PrcbLock );
            }
            v44 = v43->NextThread;
            v43->NextThread = 0LL;
            _disable();
            KiEndThreadCycleAccumulation(v43, v39, 0LL);
            _enable();
            v43->CurrentThread = v44;
            if ( v44->WaitBlockFill6[68] != 1 )
              goto LABEL_123;
            goto LABEL_204;
          }
LABEL_97:
          if ( (v39->MiscFlags & 0x40) != 0 )
          {
LABEL_124:
            __writecr8(1uLL);
            v39->MiscFlags &= ~0x40u;
            KiDeliverApc(0LL, 0LL, 0LL);
          }
LABEL_28:
          __writecr8(v22);
        }
        return v14;
      }
      v42 = CurrentPrcb->CurrentThread;
      if ( CurrentPrcb->NextThread )
      {
        KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
        v45 = v62;
        v73 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&v45->PrcbLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&v73);
          while ( v45->PrcbLock );
        }
        v46 = v45->NextThread;
        v45->NextThread = 0LL;
        _disable();
        KiEndThreadCycleAccumulation(v45, v42, 0LL);
        _enable();
        v45->CurrentThread = v46;
        if ( v46->WaitBlockFill6[68] == 1 )
          v46->ReadyTime = v46->ReadyTime - v46->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
        v46->WaitBlockFill6[68] = 2;
        v42->WaitReason = 32;
        v42->WaitIrql = 1;
        KiQueueReadyThread(v45, v42);
        LOBYTE(v47) = 1;
        if ( (unsigned __int8)KiSwapContext(v42, v46, v47) )
        {
LABEL_114:
          __writecr8(1uLL);
          v42->MiscFlags &= ~0x40u;
          KiDeliverApc(0LL, 0LL, 0LL);
        }
      }
      else if ( (v42->MiscFlags & 0x40) != 0 )
      {
        goto LABEL_114;
      }
      __writecr8(1uLL);
      KiDeliverApc(0LL, 0LL, 0LL);
      __writecr8(0LL);
      return v14;
    }
LABEL_18:
    v19 = (PVOID *)*((_QWORD *)Object + 2);
    if ( *v19 != (char *)Object + 8 )
      __fastfail(3u);
    v11->WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)((char *)Object + 8);
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = (struct _LIST_ENTRY *)v19;
    *v19 = v11;
    *((_QWORD *)Object + 2) = v11;
    _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    result = KiCommitThreadWait(CurrentThread, &CurrentThread->320, Timeouta, v17);
    if ( result != 256 )
      return result;
    v61 = 0;
    v21 = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentThread->WaitIrql = v21;
  }
  CurrentThread->ApcState.UserApcPending = 1;
LABEL_75:
  LODWORD(WaitStatus) = 192;
LABEL_76:
  CurrentThread->ThreadLock = 0LL;
  v36 = KeGetCurrentPrcb();
  if ( WaitIrql >= 2u )
  {
    if ( v36->NextThread && !v36->DpcRoutineActive )
    {
      LOBYTE(QuadPart) = 2;
      KiRequestSoftwareInterrupt(v36, QuadPart);
    }
    return WaitStatus;
  }
  v37 = v36->CurrentThread;
  if ( !v36->NextThread )
  {
    if ( (v37->MiscFlags & 0x40) != 0 )
    {
      __writecr8(1uLL);
      v37->MiscFlags &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
    }
    v38 = v84;
    goto LABEL_81;
  }
  KiAbProcessContextSwitch(v36->CurrentThread, 0LL);
  v64 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&v36->PrcbLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v64);
    while ( v36->PrcbLock );
  }
  v41 = v36->NextThread;
  v36->NextThread = 0LL;
  _disable();
  KiEndThreadCycleAccumulation(v36, v37, 0LL);
  _enable();
  v36->CurrentThread = v41;
  if ( v41->WaitBlockFill6[68] == 1 )
    v41->ReadyTime = v41->ReadyTime - v41->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
  v38 = v84;
  v41->WaitBlockFill6[68] = 2;
  v37->WaitIrql = v84;
  v37->WaitReason = 32;
  KiQueueReadyThread(v36, v37);
  if ( (unsigned __int8)KiSwapContext(v37, v41, v84) )
  {
    __writecr8(1uLL);
    v37->MiscFlags &= ~0x40u;
    KiDeliverApc(0LL, 0LL, 0LL);
    __writecr8(v84);
    return WaitStatus;
  }
  else
  {
LABEL_81:
    __writecr8(v38);
    return WaitStatus;
  }
}
