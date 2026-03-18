/*
 * XREFs of KeWaitForSingleObject @ 0x1400F5B20
 * Callers:
 *     IopWaitForLockAlertable @ 0x1400061DC (IopWaitForLockAlertable.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x140006980 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     CmpDoFileRead @ 0x140006B1C (CmpDoFileRead.c)
 *     CcSetValidData @ 0x1400074E4 (CcSetValidData.c)
 *     ExpAcquireFastMutexContended @ 0x140007DA0 (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockSharedEx @ 0x140008790 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     PpmCheckPeriodicStart @ 0x140036130 (PpmCheckPeriodicStart.c)
 *     PopExecuteOnTargetProcessors @ 0x140038E58 (PopExecuteOnTargetProcessors.c)
 *     KiSchedulerApc @ 0x140041440 (KiSchedulerApc.c)
 *     CcWriteBehind @ 0x140042EF0 (CcWriteBehind.c)
 *     MiWaitForInPageComplete @ 0x1400583A0 (MiWaitForInPageComplete.c)
 *     AlpcpSignalAndWait @ 0x1400601C0 (AlpcpSignalAndWait.c)
 *     PpmAcquireLock @ 0x14007385C (PpmAcquireLock.c)
 *     WmipFindRegEntryByProviderId @ 0x1400739DC (WmipFindRegEntryByProviderId.c)
 *     PnpDisablePnpEventWorkerWatchdog @ 0x1400753DC (PnpDisablePnpEventWorkerWatchdog.c)
 *     PopSetWatchdog @ 0x1400754B0 (PopSetWatchdog.c)
 *     PopFxActivateComponent @ 0x1400780EC (PopFxActivateComponent.c)
 *     FsRtlpWaitForIoAtEof @ 0x14007C42C (FsRtlpWaitForIoAtEof.c)
 *     MiWaitForCollidedFaultComplete @ 0x14007C9F8 (MiWaitForCollidedFaultComplete.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x14007D9A8 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x140083570 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     MmStoreFlushOutstandingEvictions @ 0x1400837DC (MmStoreFlushOutstandingEvictions.c)
 *     VslpEnterIumSecureMode @ 0x140084A44 (VslpEnterIumSecureMode.c)
 *     CcCanIWrite @ 0x140089AA0 (CcCanIWrite.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x14008E990 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x14008EF6C (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     SmKmStoreHelperWorker @ 0x1400969F0 (SmKmStoreHelperWorker.c)
 *     SmKmStoreHelperWaitForCommand @ 0x140097B68 (SmKmStoreHelperWaitForCommand.c)
 *     MiZeroPageWrite @ 0x1400990E8 (MiZeroPageWrite.c)
 *     SmKmStoreHelperCleanup @ 0x140099E74 (SmKmStoreHelperCleanup.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140099EC4 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     IopCompleteUnloadOrDelete @ 0x14009FB48 (IopCompleteUnloadOrDelete.c)
 *     ExTimedWaitForUnblockPushLock @ 0x1400A1DC0 (ExTimedWaitForUnblockPushLock.c)
 *     ExpUnblockPushLock @ 0x1400A20F4 (ExpUnblockPushLock.c)
 *     ExfWaitForRundownProtectionRelease @ 0x1400A9C20 (ExfWaitForRundownProtectionRelease.c)
 *     MiIssueSynchronousFlush @ 0x1400B8D58 (MiIssueSynchronousFlush.c)
 *     AlpcpWaitForSingleObject @ 0x1400BB220 (AlpcpWaitForSingleObject.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x1400BC874 (SmKmStoreDeleteWhenEmpty.c)
 *     CcWaitForUninitializeCacheMap @ 0x1400BF4BC (CcWaitForUninitializeCacheMap.c)
 *     IoSynchronousCallDriver @ 0x1400C4040 (IoSynchronousCallDriver.c)
 *     PnpLockDeviceActionQueue @ 0x1400C89A8 (PnpLockDeviceActionQueue.c)
 *     WmipReceiveNotifications @ 0x1400CDDCC (WmipReceiveNotifications.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x1400D151C (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@.c)
 *     CcUnmapVacbArray @ 0x1400DCE30 (CcUnmapVacbArray.c)
 *     CcInitializeCacheMapEx @ 0x1400DF8F0 (CcInitializeCacheMapEx.c)
 *     NtSetInformationFile @ 0x1400ECB00 (NtSetInformationFile.c)
 *     IopWaitForSynchronousIo @ 0x1400EE730 (IopWaitForSynchronousIo.c)
 *     MiRetryNonPagedAllocation @ 0x1400F0A50 (MiRetryNonPagedAllocation.c)
 *     ExpWaitForResource @ 0x1400F3F20 (ExpWaitForResource.c)
 *     MiWaitForFreePagesToZero @ 0x1400FEE90 (MiWaitForFreePagesToZero.c)
 *     KeWaitForMultipleObjects @ 0x1400FF3A0 (KeWaitForMultipleObjects.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x14012FA80 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x14013D39C (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x14013DE98 (LdrpGetFromMUIMemCache.c)
 *     PpmTryAcquireLock @ 0x1401442A4 (PpmTryAcquireLock.c)
 *     PnpDisableDeviceCompletionQueueWatchdog @ 0x1401468A8 (PnpDisableDeviceCompletionQueueWatchdog.c)
 *     PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x140146B20 (PnpDeviceCompletionQueueRemoveCompletedRequest.c)
 *     PopFxActivateDevice @ 0x140146BBC (PopFxActivateDevice.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x14014BCC0 (FsRtlGetVirtualDiskNestingLevel.c)
 *     CcWaitForCurrentLazyWriterActivityInternal @ 0x14014D16C (CcWaitForCurrentLazyWriterActivityInternal.c)
 *     PopHaltDeviceIdle @ 0x140153AFC (PopHaltDeviceIdle.c)
 *     PopTimeoutWakeTracking @ 0x140154DF4 (PopTimeoutWakeTracking.c)
 *     PopRunMaximumIrpWorkers @ 0x140155118 (PopRunMaximumIrpWorkers.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x140156204 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopIgnoreBatteryStatusChange @ 0x1401562A4 (PopIgnoreBatteryStatusChange.c)
 *     PnpLockMountableDevice @ 0x14015E398 (PnpLockMountableDevice.c)
 *     FsRtlpWaitOnIrp @ 0x14015EB9C (FsRtlpWaitOnIrp.c)
 *     IopLoadDriverImage @ 0x140160304 (IopLoadDriverImage.c)
 *     WmipFindRegEntryByDevice @ 0x140161EC8 (WmipFindRegEntryByDevice.c)
 *     WmipAllocRegEntry @ 0x140161F7C (WmipAllocRegEntry.c)
 *     WmipDeregisterRegEntry @ 0x140162060 (WmipDeregisterRegEntry.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14016399C (LdrUnloadAlternateResourceModuleEx.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x140164020 (IoReleaseRemoveLockAndWaitEx.c)
 *     PopIrpWorker @ 0x140166750 (PopIrpWorker.c)
 *     PopPepUpdateConstraints @ 0x140166FE0 (PopPepUpdateConstraints.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14016B088 (LdrpSetAlternateResourceModuleHandle.c)
 *     MiQueueWorkingSetRequest @ 0x14016D3A0 (MiQueueWorkingSetRequest.c)
 *     ExUnregisterCallback @ 0x14016DE80 (ExUnregisterCallback.c)
 *     KeSwapProcessOrStack @ 0x140176C50 (KeSwapProcessOrStack.c)
 *     CcQueueLazyWriteScanThread @ 0x140177AA0 (CcQueueLazyWriteScanThread.c)
 *     MiOkToZeroNextLargePage @ 0x14017B760 (MiOkToZeroNextLargePage.c)
 *     MiModifiedPageWriter @ 0x14017CFC0 (MiModifiedPageWriter.c)
 *     CmpLazyWriteWorker @ 0x14017ECA0 (CmpLazyWriteWorker.c)
 *     MiStoreEvictThread @ 0x14017ED50 (MiStoreEvictThread.c)
 *     WmipBuildTraceDeviceList @ 0x1401819A0 (WmipBuildTraceDeviceList.c)
 *     WheapAddErrorSource @ 0x140182110 (WheapAddErrorSource.c)
 *     PnpDeviceCompletionQueueGetCompletedRequest @ 0x140182530 (PnpDeviceCompletionQueueGetCompletedRequest.c)
 *     WmiQueryTraceProviderCount @ 0x1401826B4 (WmiQueryTraceProviderCount.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1401828E0 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PopIrpWorkerControl @ 0x140185100 (PopIrpWorkerControl.c)
 *     PnpSerializeBoot @ 0x1401863D4 (PnpSerializeBoot.c)
 *     CcDeleteSectionsForPartition @ 0x140220EE8 (CcDeleteSectionsForPartition.c)
 *     FsFilterAllocateCompletionStack @ 0x140225CBC (FsFilterAllocateCompletionStack.c)
 *     FsRtlpPostStackOverflow @ 0x1402266E4 (FsRtlpPostStackOverflow.c)
 *     IopAllocateBackpocketIrp @ 0x140231DA8 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x14023208C (IopAllocateReserveIrp.c)
 *     PnpDisableDelayedRemoveWorkerWatchdog @ 0x14023C64C (PnpDisableDelayedRemoveWorkerWatchdog.c)
 *     PnprQuiesce @ 0x14023CF5C (PnprQuiesce.c)
 *     PnpProcessRebalance @ 0x14023E0DC (PnpProcessRebalance.c)
 *     KiAcquireSecondaryPassiveConnectLock @ 0x140244AB0 (KiAcquireSecondaryPassiveConnectLock.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1402494EC (KiInvokeInterruptServiceRoutine.c)
 *     KiSignalWaitDisconnectLock @ 0x140249860 (KiSignalWaitDisconnectLock.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x140249890 (KiSynchronizePassiveInterruptExecution.c)
 *     KiParkUmsThread @ 0x14024C690 (KiParkUmsThread.c)
 *     MiMakeOutswappedPageResident @ 0x140250B10 (MiMakeOutswappedPageResident.c)
 *     MmReleaseCommitForMemResetPages @ 0x140251BF0 (MmReleaseCommitForMemResetPages.c)
 *     MiPfCompleteCoalescedIo @ 0x140257C70 (MiPfCompleteCoalescedIo.c)
 *     MiIssuePageExtendRequest @ 0x14025F94C (MiIssuePageExtendRequest.c)
 *     MiQueueSyncModifiedWriterApc @ 0x14025FE10 (MiQueueSyncModifiedWriterApc.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14025FF60 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiApplyCommitDelay @ 0x140265768 (MiApplyCommitDelay.c)
 *     MiWaitForAvailablePages @ 0x14026B820 (MiWaitForAvailablePages.c)
 *     MiWaitForFreePage @ 0x14026B8B0 (MiWaitForFreePage.c)
 *     MiContractWsSwapPageFileWorker @ 0x14026BA30 (MiContractWsSwapPageFileWorker.c)
 *     MiDrainCrossPartitionUsage @ 0x14026EF90 (MiDrainCrossPartitionUsage.c)
 *     NtSignalAndWaitForSingleObject @ 0x140270CA0 (NtSignalAndWaitForSingleObject.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1402756D4 (PopFxIssueComponentPerfStateChanges.c)
 *     PopWdiTimerWorkerThread @ 0x14027E770 (PopWdiTimerWorkerThread.c)
 *     PspIumFreePartitionState @ 0x14028542C (PspIumFreePartitionState.c)
 *     SmpFpWaitForResource @ 0x1402A80D8 (SmpFpWaitForResource.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x1402A8A68 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     SmWaitForSyncIo @ 0x1402A93A4 (SmWaitForSyncIo.c)
 *     EtwpTraceThreadRundownWithStack @ 0x1402B20B8 (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureContextStop @ 0x1402B4C98 (EtwpCovSampCaptureContextStop.c)
 *     ExRegisterBootDevice @ 0x1402B86B0 (ExRegisterBootDevice.c)
 *     ExpWaitForBootDevices @ 0x1402B88C0 (ExpWaitForBootDevices.c)
 *     WheapProcessWorkQueueItem @ 0x1402BED90 (WheapProcessWorkQueueItem.c)
 *     sub_1402C0DB0 @ 0x1402C0DB0 (sub_1402C0DB0.c)
 *     PopFlushVolumes @ 0x140470660 (PopFlushVolumes.c)
 *     PopCaptureTimeOnProcZero @ 0x140470D0C (PopCaptureTimeOnProcZero.c)
 *     PfpScenCtxPrefetchWait @ 0x140471324 (PfpScenCtxPrefetchWait.c)
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 *     PopWakeDeviceList @ 0x140472790 (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x1404728F4 (PopSleepDeviceList.c)
 *     PopBuildDeviceNotifyList @ 0x140475B44 (PopBuildDeviceNotifyList.c)
 *     PopTransitionToSleep @ 0x140476910 (PopTransitionToSleep.c)
 *     MmDuplicateMemory @ 0x140476A94 (MmDuplicateMemory.c)
 *     PopEndMirroring @ 0x140476E00 (PopEndMirroring.c)
 *     IoShutdownSystem @ 0x1404812F8 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x140481518 (IopShutdownBaseFileSystems.c)
 *     PnprInitiateReplaceOperation @ 0x140482E4C (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x140484180 (PnprQuiesceWorker.c)
 *     MiZeroAllPageFiles @ 0x140485208 (MiZeroAllPageFiles.c)
 *     PopGracefulShutdown @ 0x140485D40 (PopGracefulShutdown.c)
 *     IopMountVolume @ 0x140493C24 (IopMountVolume.c)
 *     IoVolumeDeviceToGuidPath @ 0x140495E00 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x140495F50 (IoVolumeDeviceNameToGuidPath.c)
 *     IoVolumeDeviceToDosName @ 0x140496270 (IoVolumeDeviceToDosName.c)
 *     CmpGetVolumeClusterSize @ 0x140499488 (CmpGetVolumeClusterSize.c)
 *     CmpFileFlushAndPurge @ 0x14049968C (CmpFileFlushAndPurge.c)
 *     IopSynchronousCall @ 0x140499818 (IopSynchronousCall.c)
 *     CmpLockRegistryFreezeAware @ 0x14049BC3C (CmpLockRegistryFreezeAware.c)
 *     CmLoadAppKey @ 0x14049C2A8 (CmLoadAppKey.c)
 *     CmpOpenHiveFile @ 0x14049E1B8 (CmpOpenHiveFile.c)
 *     NtNotifyChangeMultipleKeys @ 0x1404A26F0 (NtNotifyChangeMultipleKeys.c)
 *     IopQueryXxxInformation @ 0x1404A51B8 (IopQueryXxxInformation.c)
 *     IopGetFileInformation @ 0x1404A5514 (IopGetFileInformation.c)
 *     SPCallServerHandleQueryPolicy @ 0x1404AFD24 (SPCallServerHandleQueryPolicy.c)
 *     PspUserThreadStartup @ 0x1404B8600 (PspUserThreadStartup.c)
 *     PspExitThread @ 0x1404B8D70 (PspExitThread.c)
 *     FsRtlGetFileSize @ 0x1404BF2F0 (FsRtlGetFileSize.c)
 *     MiCreateImageFileMap @ 0x1404BF468 (MiCreateImageFileMap.c)
 *     IopGetSetSecurityObject @ 0x1404D2090 (IopGetSetSecurityObject.c)
 *     WmipFindGEByGuid @ 0x140501D60 (WmipFindGEByGuid.c)
 *     WmipOpenBlock @ 0x140501E4C (WmipOpenBlock.c)
 *     PiControlGetSetDeviceStatus @ 0x14050BD60 (PiControlGetSetDeviceStatus.c)
 *     WmipPrepareForWnodeAD @ 0x14051AB9C (WmipPrepareForWnodeAD.c)
 *     WmipDeleteMethod @ 0x14051B000 (WmipDeleteMethod.c)
 *     WmipUnreferenceEntry @ 0x14051B374 (WmipUnreferenceEntry.c)
 *     WmipPrepareWnodeSI @ 0x14051B448 (WmipPrepareWnodeSI.c)
 *     WmipForwardWmiIrp @ 0x14051BADC (WmipForwardWmiIrp.c)
 *     PnpDeviceEventWorker @ 0x14051FE70 (PnpDeviceEventWorker.c)
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 *     MiInSwapStore @ 0x14052C4A8 (MiInSwapStore.c)
 *     SmStoreCompressionStop @ 0x14052D2E0 (SmStoreCompressionStop.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x14054B3E0 (FsRtlCancellableWaitForMultipleObjects.c)
 *     AlpcpWaitForPortReferences @ 0x140551EEC (AlpcpWaitForPortReferences.c)
 *     FsRtlSetFileSize @ 0x1405558FC (FsRtlSetFileSize.c)
 *     FsRtlSetKernelEaFile @ 0x140555A10 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140555BA0 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140555EA0 (FsRtlQueryKernelEaFile.c)
 *     IopCancelIrpsInThreadList @ 0x14055C648 (IopCancelIrpsInThreadList.c)
 *     IopSynchronousApiServiceTail @ 0x1405610F8 (IopSynchronousApiServiceTail.c)
 *     PiDrvDbLoadNode @ 0x140565274 (PiDrvDbLoadNode.c)
 *     NtGetMUIRegistryInfo @ 0x140568A90 (NtGetMUIRegistryInfo.c)
 *     WmipEnableCollectOrEvent @ 0x14056A0C4 (WmipEnableCollectOrEvent.c)
 *     RtlDecompressFragmentLZNT1 @ 0x14056D1C0 (RtlDecompressFragmentLZNT1.c)
 *     WmipIsQuerySetGuid @ 0x140571D28 (WmipIsQuerySetGuid.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x14057B938 (EtwpUpdateGlobalGroupMasks.c)
 *     EtwpCrimsonProvEnableCallback @ 0x14057D0A0 (EtwpCrimsonProvEnableCallback.c)
 *     IopGetSetObjectId @ 0x14057E900 (IopGetSetObjectId.c)
 *     EtwpSynchronizeWithLogger @ 0x140580194 (EtwpSynchronizeWithLogger.c)
 *     WmipEnumerateMofResources @ 0x140580F50 (WmipEnumerateMofResources.c)
 *     NtNotifyChangeSession @ 0x140582640 (NtNotifyChangeSession.c)
 *     WmipDisableCollectOrEvent @ 0x140582EB4 (WmipDisableCollectOrEvent.c)
 *     CmpWaitOnHiveWriteQueue @ 0x1405848F4 (CmpWaitOnHiveWriteQueue.c)
 *     EtwpStartTrace @ 0x140588150 (EtwpStartTrace.c)
 *     EtwpStopTrace @ 0x140589108 (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x14058A5A4 (EtwpStartLogger.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x14058E3AC (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpLogger @ 0x14058EB20 (EtwpLogger.c)
 *     EtwpDisableTraceProviders @ 0x14058EF9C (EtwpDisableTraceProviders.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140590D94 (EtwpAcquireLoggerContextByLoggerId.c)
 *     MmCleanProcessAddressSpace @ 0x140595928 (MmCleanProcessAddressSpace.c)
 *     NtQueryInformationFile @ 0x140596F20 (NtQueryInformationFile.c)
 *     NtWaitForSingleObject @ 0x14059C7D0 (NtWaitForSingleObject.c)
 *     IopSynchronousServiceTail @ 0x14059D990 (IopSynchronousServiceTail.c)
 *     CmpParseKey @ 0x14059EF70 (CmpParseKey.c)
 *     IopCloseFile @ 0x1405B12E0 (IopCloseFile.c)
 *     IopDeleteFile @ 0x1405B15A0 (IopDeleteFile.c)
 *     IopParseDevice @ 0x1405B17F0 (IopParseDevice.c)
 *     MmAcquireLoadLock @ 0x1405BC900 (MmAcquireLoadLock.c)
 *     NtReleaseKeyedEvent @ 0x1405BD078 (NtReleaseKeyedEvent.c)
 *     NtWaitForKeyedEvent @ 0x1405BE16C (NtWaitForKeyedEvent.c)
 *     RtlDecompressBufferLZNT1 @ 0x1405C4600 (RtlDecompressBufferLZNT1.c)
 *     PnpQueryInterface @ 0x1405C5140 (PnpQueryInterface.c)
 *     PopFxUnregisterDeviceOrWait @ 0x1405C81EC (PopFxUnregisterDeviceOrWait.c)
 *     PnpStartDeviceNode @ 0x1405D5A08 (PnpStartDeviceNode.c)
 *     IopUncacheInterfaceInformation @ 0x1405D5CF4 (IopUncacheInterfaceInformation.c)
 *     PnpAllocateResources @ 0x1405DB260 (PnpAllocateResources.c)
 *     IopFilterResourceRequirementsCall @ 0x1405DBF84 (IopFilterResourceRequirementsCall.c)
 *     FsRtlIssueDeviceIoControl @ 0x1405E1EB0 (FsRtlIssueDeviceIoControl.c)
 *     ExpHwidSendSynchronousIrpToDevice @ 0x1405E3C04 (ExpHwidSendSynchronousIrpToDevice.c)
 *     IoReportTargetDeviceChange @ 0x1405E5D70 (IoReportTargetDeviceChange.c)
 *     FsRtlQueryCachedVdl @ 0x1405E60C0 (FsRtlQueryCachedVdl.c)
 *     IoSetInformation @ 0x1405E7BF0 (IoSetInformation.c)
 *     PoUnregisterPowerSettingCallback @ 0x1405E8D90 (PoUnregisterPowerSettingCallback.c)
 *     FsRtlBalanceReads @ 0x1405E9190 (FsRtlBalanceReads.c)
 *     PopInitSystemSleeperThread @ 0x1405EA6E0 (PopInitSystemSleeperThread.c)
 *     NtInitiatePowerAction @ 0x1405EB5AC (NtInitiatePowerAction.c)
 *     EmPowerPagingEnabled @ 0x1405EC984 (EmPowerPagingEnabled.c)
 *     PopGetWakeSource @ 0x1405EDDD4 (PopGetWakeSource.c)
 *     ObWaitForSingleObject @ 0x1405EE9B0 (ObWaitForSingleObject.c)
 *     PopAcquireTransitionLock @ 0x1405EF3F4 (PopAcquireTransitionLock.c)
 *     ExSwapinWorkerThreads @ 0x1405EF4EC (ExSwapinWorkerThreads.c)
 *     PopResizeHiberFile @ 0x1405F0590 (PopResizeHiberFile.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x1405F2000 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopInvalidateVolumesForDevice @ 0x1405F212C (IopInvalidateVolumesForDevice.c)
 *     NtMapCMFModule @ 0x1405F39CC (NtMapCMFModule.c)
 *     IopLoadFileSystemDriver @ 0x1405F3F9C (IopLoadFileSystemDriver.c)
 *     IopUnloadDriver @ 0x1405F5EC0 (IopUnloadDriver.c)
 *     WmipAddDataSource @ 0x1405FE7D0 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x1405FEF7C (WmipDetermineInstanceBaseIndex.c)
 *     WmipEnableCollectionForNewGuid @ 0x1405FF1F0 (WmipEnableCollectionForNewGuid.c)
 *     WmipProcessEvent @ 0x1405FF418 (WmipProcessEvent.c)
 *     WmipFindISinGEbyName @ 0x1405FF918 (WmipFindISinGEbyName.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x14060002C (WmipDisableCollectionForRemovedGuid.c)
 *     WmipDeregisterDevice @ 0x1406007DC (WmipDeregisterDevice.c)
 *     IoWMIRegistrationControl @ 0x140600880 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x140600958 (WmipRegisterDevice.c)
 *     WmipQueueRegWork @ 0x140600AC4 (WmipQueueRegWork.c)
 *     WmipUpdateDeviceStackSize @ 0x140600B9C (WmipUpdateDeviceStackSize.c)
 *     WmipSetTraceNotify @ 0x140600BEC (WmipSetTraceNotify.c)
 *     WmipSendEnableDisableRequest @ 0x140602608 (WmipSendEnableDisableRequest.c)
 *     IopCreateArcName @ 0x1406031D8 (IopCreateArcName.c)
 *     WmipRegistrationWorker @ 0x1406045B0 (WmipRegistrationWorker.c)
 *     WmipDSCleanup @ 0x140604960 (WmipDSCleanup.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x140605ABC (PnpSynchronizeDeviceEventQueue.c)
 *     IoWMISetNotificationCallback @ 0x140605FF0 (IoWMISetNotificationCallback.c)
 *     IoDisconnectInterrupt @ 0x14060B8E0 (IoDisconnectInterrupt.c)
 *     IopDestroyActiveConnectBlock @ 0x14060C0EC (IopDestroyActiveConnectBlock.c)
 *     PopBatteryWorker @ 0x140610630 (PopBatteryWorker.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x140612428 (SPCallServerHandleWaitForDisplayWindow.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x1406130F8 (WmipGetGuidObjectInstanceInfo.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140613450 (FsRtlIssueFileNotificationFsctl.c)
 *     PopSanityCheckHiberFile @ 0x140613D44 (PopSanityCheckHiberFile.c)
 *     PopClearHiberFileSignature @ 0x14061422C (PopClearHiberFileSignature.c)
 *     IopAllocateBootResources @ 0x140615F90 (IopAllocateBootResources.c)
 *     ArbArbiterHandler @ 0x140617B90 (ArbArbiterHandler.c)
 *     ArbBuildAssignmentOrdering @ 0x14061888C (ArbBuildAssignmentOrdering.c)
 *     WmipAddMofResource @ 0x140620EBC (WmipAddMofResource.c)
 *     WmipFindMRByNames @ 0x1406210F4 (WmipFindMRByNames.c)
 *     CmCompleteRegistryInitialization @ 0x140624A30 (CmCompleteRegistryInitialization.c)
 *     PoInitHiberServices @ 0x140624CC8 (PoInitHiberServices.c)
 *     PopCreateHiberFile @ 0x140625404 (PopCreateHiberFile.c)
 *     PopNotifyPolicyDevice @ 0x140626B50 (PopNotifyPolicyDevice.c)
 *     CmpFinishSystemHivesLoad @ 0x14062E4B0 (CmpFinishSystemHivesLoad.c)
 *     SepRmCommandServerThread @ 0x1406316F0 (SepRmCommandServerThread.c)
 *     CmpLoadHiveThread @ 0x140632C90 (CmpLoadHiveThread.c)
 *     PnpWaitForEmptyDeviceEventQueue @ 0x140634424 (PnpWaitForEmptyDeviceEventQueue.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x140634450 (PnpWaitForEmptyDeviceActionQueue.c)
 *     MiZeroPageFileFirstPage @ 0x14063CD20 (MiZeroPageFileFirstPage.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x1406464B0 (WmipSendWmiIrpToTraceDeviceList.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x140649214 (IopAcquireReleaseConnectLockInternal.c)
 *     WmipLegacyEtwWorker @ 0x1406493E0 (WmipLegacyEtwWorker.c)
 *     WmipProcessLegacyEtwRegister @ 0x14064953C (WmipProcessLegacyEtwRegister.c)
 *     IopInsertLegacyBusDeviceNode @ 0x14064AC54 (IopInsertLegacyBusDeviceNode.c)
 *     FsRtlpRegisterUncProvider @ 0x14064BAE4 (FsRtlpRegisterUncProvider.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x14064DD40 (IoRegisterFsRegistrationChangeMountAware.c)
 *     PiPagePathSetState @ 0x14064FDDC (PiPagePathSetState.c)
 *     IopLegacyResourceAllocation @ 0x140650B94 (IopLegacyResourceAllocation.c)
 *     WheapEtwEnableCallback @ 0x140653460 (WheapEtwEnableCallback.c)
 *     RtlpRunOnceWaitForInit @ 0x140654594 (RtlpRunOnceWaitForInit.c)
 *     CmpDummyThreadRoutine @ 0x140655880 (CmpDummyThreadRoutine.c)
 *     FsRtlWaitForSmssEvent @ 0x140655AA0 (FsRtlWaitForSmssEvent.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x14070DC20 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     DbgkpQueueMessage @ 0x14070F184 (DbgkpQueueMessage.c)
 *     NtWaitForDebugEvent @ 0x140710080 (NtWaitForDebugEvent.c)
 *     DbgkpSendErrorMessage @ 0x140710E28 (DbgkpSendErrorMessage.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x140711DA4 (DbgkpLkmdLaunchSnapApc.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x140714570 (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlDeregisterUncProvider @ 0x140715040 (FsRtlDeregisterUncProvider.c)
 *     FsRtlQueryInformationFile @ 0x140715A40 (FsRtlQueryInformationFile.c)
 *     IopCancelAlertedRequest @ 0x14071957C (IopCancelAlertedRequest.c)
 *     IopGetVolumeId @ 0x140719D20 (IopGetVolumeId.c)
 *     IopHardErrorThread @ 0x140719E60 (IopHardErrorThread.c)
 *     IopSendMessageToTrackService @ 0x14071A854 (IopSendMessageToTrackService.c)
 *     IopSetRemoteLink @ 0x14071B3F8 (IopSetRemoteLink.c)
 *     IoCancelFileOpen @ 0x14071BC10 (IoCancelFileOpen.c)
 *     IoVerifyVolume @ 0x14071C9D0 (IoVerifyVolume.c)
 *     IopIssueSystemEnvironmentRequest @ 0x140721E04 (IopIssueSystemEnvironmentRequest.c)
 *     IopFreeBandwidthContract @ 0x1407225F8 (IopFreeBandwidthContract.c)
 *     PnpShutdownDevices @ 0x140722CB0 (PnpShutdownDevices.c)
 *     IoReplacePartitionUnit @ 0x1407242C0 (IoReplacePartitionUnit.c)
 *     PnpRequestHwProfileChangeNotification @ 0x140725874 (PnpRequestHwProfileChangeNotification.c)
 *     IopAcquireReleaseDispatcherLock @ 0x140726CAC (IopAcquireReleaseDispatcherLock.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x140731D34 (PpProfileBeginHardwareProfileTransition.c)
 *     PnpReplacePartitionUnit @ 0x140732D40 (PnpReplacePartitionUnit.c)
 *     PiIrpQueryRemoveDevice @ 0x14073A3B0 (PiIrpQueryRemoveDevice.c)
 *     PnpReallocateResources @ 0x14073A4F4 (PnpReallocateResources.c)
 *     PiQueueDeviceRequest @ 0x14073B9A0 (PiQueueDeviceRequest.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14073BAFC (PnpQueueQueryAndRemoveEvent.c)
 *     IopWarmEjectDevice @ 0x14073C044 (IopWarmEjectDevice.c)
 *     IopQueryConflictList @ 0x140740684 (IopQueryConflictList.c)
 *     PfTCleanup @ 0x14075C578 (PfTCleanup.c)
 *     PopCoolingExtensionPnpNotification @ 0x14075E730 (PopCoolingExtensionPnpNotification.c)
 *     PopDeactiveThermalRequest @ 0x14075E88C (PopDeactiveThermalRequest.c)
 *     PopFxUnregisterDevice @ 0x140760910 (PopFxUnregisterDevice.c)
 *     PopDirectedDripsPdcResiliencyNotification @ 0x140761BB8 (PopDirectedDripsPdcResiliencyNotification.c)
 *     PopDirectedDripsProcessWork @ 0x140761C98 (PopDirectedDripsProcessWork.c)
 *     PopDirectedDripsWorkerRoutine @ 0x140761F50 (PopDirectedDripsWorkerRoutine.c)
 *     PopSetSystemAwayMode @ 0x140762D10 (PopSetSystemAwayMode.c)
 *     PopThermalZoneRemove @ 0x140763260 (PopThermalZoneRemove.c)
 *     PopBatteryRemove @ 0x1407640B0 (PopBatteryRemove.c)
 *     PopPepUnregisterDevice @ 0x140764870 (PopPepUnregisterDevice.c)
 *     PopDiagNextCsSleepStudySession @ 0x1407658EC (PopDiagNextCsSleepStudySession.c)
 *     PopDiagStopCsSleepStudySession @ 0x140765B10 (PopDiagStopCsSleepStudySession.c)
 *     PopSleepStudyTaskClientTimerWorker @ 0x140769F90 (PopSleepStudyTaskClientTimerWorker.c)
 *     PopFanRemove @ 0x14076B300 (PopFanRemove.c)
 *     PspQueueDeferredWorkAndWait @ 0x140779674 (PspQueueDeferredWorkAndWait.c)
 *     PsWaitForAllProcesses @ 0x14077CF24 (PsWaitForAllProcesses.c)
 *     PspWaitForUsermodeExit @ 0x14077D264 (PspWaitForUsermodeExit.c)
 *     PspTeardownPartition @ 0x14077EC60 (PspTeardownPartition.c)
 *     PsCallEnclave @ 0x14077EDB0 (PsCallEnclave.c)
 *     PsTerminateVsmEnclave @ 0x14077FC80 (PsTerminateVsmEnclave.c)
 *     RawPerformDevIoCtrl @ 0x140780CC4 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x140780E00 (RawQueryFsSizeInfo.c)
 *     RawQueryFileSystemInformation @ 0x140781188 (RawQueryFileSystemInformation.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x14078AE30 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
 *     SmProcessResizeRequest @ 0x14079BEA0 (SmProcessResizeRequest.c)
 *     SmProcessStatsRequest @ 0x14079BF90 (SmProcessStatsRequest.c)
 *     SmStorePhysicalRequestIssue @ 0x14079C468 (SmStorePhysicalRequestIssue.c)
 *     SmKmIsVolumeIoPossible @ 0x14079D55C (SmKmIsVolumeIoPossible.c)
 *     SmKmSendDeviceControl @ 0x14079DD80 (SmKmSendDeviceControl.c)
 *     SmKmSendUsageNotification @ 0x14079DE34 (SmKmSendUsageNotification.c)
 *     SmKmStoreFileCreate @ 0x14079DEF8 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x14079E600 (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x14079E690 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileWriteHeader @ 0x14079ECF8 (SmKmStoreFileWriteHeader.c)
 *     IoWMIAllocateInstanceIds @ 0x1407A22C0 (IoWMIAllocateInstanceIds.c)
 *     WmipGetSysIds @ 0x1407A313C (WmipGetSysIds.c)
 *     WmipDereferenceEvent @ 0x1407A38F0 (WmipDereferenceEvent.c)
 *     WmipEnumerateGuids @ 0x1407A3B04 (WmipEnumerateGuids.c)
 *     WmipIncludeStaticNames @ 0x1407A3C9C (WmipIncludeStaticNames.c)
 *     WmipQueryGuidInfo @ 0x1407A4254 (WmipQueryGuidInfo.c)
 *     WmipLegacyEtwCallback @ 0x1407A4A70 (WmipLegacyEtwCallback.c)
 *     WmipUpdateDataSource @ 0x1407A4EA0 (WmipUpdateDataSource.c)
 *     WmipWaitForCollectionEnabled @ 0x1407A5400 (WmipWaitForCollectionEnabled.c)
 *     EtwpEnableDisableUMGL @ 0x1407A5A5C (EtwpEnableDisableUMGL.c)
 *     EtwpUpdatePerProcessTracing @ 0x1407A5C94 (EtwpUpdatePerProcessTracing.c)
 *     EtwpSetPmcProfileSource @ 0x1407A8D78 (EtwpSetPmcProfileSource.c)
 *     EtwSetPerformanceTraceInformation @ 0x1407A9CB0 (EtwSetPerformanceTraceInformation.c)
 *     EtwDereferenceSpinLockCounters @ 0x1407AD204 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x1407AD260 (EtwReferenceSpinLockCounters.c)
 *     EtwpSampledProfileRunDown @ 0x1407AFC84 (EtwpSampledProfileRunDown.c)
 *     EtwpUpdateDisallowedGuids @ 0x1407B2A2C (EtwpUpdateDisallowedGuids.c)
 *     EtwpCovSampCaptureFlush @ 0x1407B3B50 (EtwpCovSampCaptureFlush.c)
 *     EtwpKsrCallback @ 0x1407B9880 (EtwpKsrCallback.c)
 *     ExpWorkQueueDestroy @ 0x1407C5894 (ExpWorkQueueDestroy.c)
 *     NtStartProfile @ 0x1407C7D2C (NtStartProfile.c)
 *     NtStopProfile @ 0x1407C7F8C (NtStopProfile.c)
 *     WheaAttemptPhysicalPageOffline @ 0x1407CAA50 (WheaAttemptPhysicalPageOffline.c)
 *     sub_1407D2744 @ 0x1407D2744 (sub_1407D2744.c)
 *     sub_1407D4598 @ 0x1407D4598 (sub_1407D4598.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1407F5684 (CancelTimerCallbacksAndDeleteTimer.c)
 *     VhdiVerifyBootDisk @ 0x1407F608C (VhdiVerifyBootDisk.c)
 *     VfDriverLock @ 0x14080F570 (VfDriverLock.c)
 *     IovpUnloadDriver @ 0x140812818 (IovpUnloadDriver.c)
 *     VfIrpSendSynchronousIrp @ 0x14081DB4C (VfIrpSendSynchronousIrp.c)
 *     ViPendingCompleteAfterWait @ 0x140820DE8 (ViPendingCompleteAfterWait.c)
 *     ViPendingWorkerThread @ 0x140821160 (ViPendingWorkerThread.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x140824AF0 (ViPoolDelayFreeTrimThreadRoutine.c)
 *     ViFilterDispatchPnp @ 0x1408302A0 (ViFilterDispatchPnp.c)
 *     AnFwFadeCompletion @ 0x14083B3E4 (AnFwFadeCompletion.c)
 *     IopAssignBootDriveLetter @ 0x1408B73FC (IopAssignBootDriveLetter.c)
 *     IopCreateArcNamesCd @ 0x1408C4DE0 (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x1408DE714 (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x1408E2874 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x1408E3160 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x1408E3348 (SbpStartLanman.c)
 *     SbpWaitForVmbus @ 0x1408E3720 (SbpWaitForVmbus.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiEndThreadCycleAccumulation @ 0x140060730 (KiEndThreadCycleAccumulation.c)
 *     KiRequestSoftwareInterrupt @ 0x14007C130 (KiRequestSoftwareInterrupt.c)
 *     KiFastExitThreadWait @ 0x140088FE4 (KiFastExitThreadWait.c)
 *     KiSelectNextThread @ 0x1400A70C0 (KiSelectNextThread.c)
 *     KiReadyDeferredReadyList @ 0x1400EAA70 (KiReadyDeferredReadyList.c)
 *     KiQueueReadyThread @ 0x1400EC480 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiCommitThreadWait @ 0x1400F64C0 (KiCommitThreadWait.c)
 *     KiAbProcessContextSwitch @ 0x1400F83C0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400F8A70 (KiDeliverApc.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     HvlNotifyLongSpinWait @ 0x14015AFE0 (HvlNotifyLongSpinWait.c)
 *     KiSwapContext @ 0x1401B1B40 (KiSwapContext.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
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
  unsigned __int8 WaitIrql; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  unsigned __int8 v11; // r13
  $73ACCD497C6E10005445ED6B0DEFBC9F *v12; // r12
  _QWORD *v13; // r11
  struct _KPRCB *v14; // rcx
  _DWORD *v15; // rdx
  NTSTATUS v16; // esi
  unsigned int v17; // r14d
  struct _KPRCB *v18; // r15
  __int64 ThreadTimerDelay; // rdx
  LONGLONG v20; // r8
  unsigned __int64 v21; // rax
  PVOID *v22; // rcx
  NTSTATUS result; // eax
  unsigned __int8 v24; // al
  unsigned __int8 v25; // di
  _KWAIT_STATUS_REGISTER v26; // al
  int v27; // eax
  int v28; // eax
  struct _KPRCB *v29; // rsi
  _DWORD *v30; // rcx
  volatile unsigned __int8 DpcRoutineActive; // cl
  bool v32; // zf
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v34; // rcx
  _KTHREAD *v35; // r11
  struct _KPRCB *v36; // rcx
  _DWORD *v37; // rdx
  volatile __int64 WaitStatus; // rdi
  unsigned __int8 v39; // si
  _KWAIT_STATUS_REGISTER v40; // al
  unsigned __int64 v41; // rcx
  struct _KPRCB *v42; // rbx
  __int64 v43; // rsi
  __int64 v44; // rdx
  struct _KPRCB *v45; // rdi
  __int64 v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // rdx
  struct _KPRCB *v49; // r14
  _KTHREAD *v50; // r14
  __int64 v51; // r8
  __int64 v52; // rdx
  struct _KPRCB *v53; // r14
  __int64 v54; // rbx
  __int64 v55; // rdx
  struct _KPRCB *v56; // rdi
  _KTHREAD *v57; // rdi
  __int64 v58; // r8
  __int64 v59; // r8
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  struct _KPRCB *v64; // rbx
  __int64 v65; // r8
  _KTHREAD *v66; // rax
  __int64 v67; // rbx
  __int64 v68; // rdx
  struct _KPRCB *v69; // r14
  _KTHREAD *v70; // r14
  __int64 v71; // r8
  int v72; // eax
  __int64 v73; // rbx
  __int64 v74; // rdx
  struct _KPRCB *v75; // rsi
  _KTHREAD *v76; // rsi
  __int64 v77; // r8
  __int64 v78; // r8
  __int64 v79; // rdx
  struct _KPRCB *v80; // r14
  struct _KPRCB *v81; // rbx
  __int64 v82; // r8
  _KTHREAD *v83; // rax
  __int64 v84; // rdx
  struct _KPRCB *v85; // r14
  _KTHREAD *NextThread; // r14
  __int64 v87; // r8
  signed __int32 v88[8]; // [rsp+0h] [rbp-81h] BYREF
  unsigned __int8 v89; // [rsp+20h] [rbp-61h]
  int v90; // [rsp+24h] [rbp-5Dh] BYREF
  int v91; // [rsp+28h] [rbp-59h] BYREF
  int v92; // [rsp+2Ch] [rbp-55h] BYREF
  int v93; // [rsp+30h] [rbp-51h] BYREF
  int v94; // [rsp+34h] [rbp-4Dh] BYREF
  int v95; // [rsp+38h] [rbp-49h] BYREF
  int v96; // [rsp+3Ch] [rbp-45h] BYREF
  int v97; // [rsp+40h] [rbp-41h] BYREF
  int v98; // [rsp+44h] [rbp-3Dh] BYREF
  int v99; // [rsp+48h] [rbp-39h] BYREF
  int v100; // [rsp+4Ch] [rbp-35h] BYREF
  int v101; // [rsp+50h] [rbp-31h] BYREF
  LONGLONG QuadPart; // [rsp+58h] [rbp-29h]
  _KTHREAD *v103; // [rsp+60h] [rbp-21h] BYREF
  _QWORD *v104; // [rsp+68h] [rbp-19h] BYREF
  int v105; // [rsp+70h] [rbp-11h]
  unsigned __int8 v107; // [rsp+E8h] [rbp+67h]
  unsigned int Timeouta; // [rsp+100h] [rbp+7Fh]

  v107 = WaitReason;
  CurrentThread = KeGetCurrentThread();
  v89 = _bittestandreset((signed __int32 *)&CurrentThread->116, 2u);
  if ( !v89 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentThread->WaitIrql = CurrentIrql;
  }
  if ( Timeout )
  {
    if ( Timeout->HighPart < 0 )
    {
      Timeouta = 2;
      QuadPart = MEMORY[0xFFFFF78000000008]
               - MEMORY[0xFFFFF780000003B0]
               - (Timeout->QuadPart
                + CurrentThread->RelativeTimerBias);
    }
    else
    {
      QuadPart = Timeout->QuadPart;
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
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = WaitMode;
      if ( Alertable )
        CurrentThread->MiscFlags |= 0x10u;
      CurrentPrcb = KeGetCurrentPrcb();
      v90 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v60 = SchedulerAssist[5];
          SchedulerAssist[5] = v60 + 1;
          if ( v60 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
            KiPerformUnboostKick(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
        do
          KeYieldProcessorEx(&v90);
        while ( CurrentThread->ThreadLock );
        LOBYTE(v44) = 1;
        KiSetVpThreadSpinLockCount(CurrentPrcb, v44);
      }
      if ( !CurrentThread->ApcState.KernelApcPending || WaitIrql || CurrentThread->SpecialApcDisable )
        break;
      KiReleaseThreadLockSafe((__int64)CurrentThread);
      __writecr8(1uLL);
      KiDeliverApc(0LL, 0LL, 0LL);
      KeGetCurrentIrql();
      __writecr8(2uLL);
      CurrentThread->WaitIrql = 0;
    }
    v11 = v89;
    v12 = &CurrentThread->320;
    if ( !Alertable )
    {
      if ( CurrentThread->ApcState.UserApcPending && WaitMode )
        goto LABEL_66;
      goto LABEL_13;
    }
    if ( CurrentThread->Alerted[WaitMode] )
    {
      CurrentThread->Alerted[WaitMode] = 0;
      LODWORD(WaitStatus) = 257;
      goto LABEL_67;
    }
    if ( WaitMode && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
      break;
    if ( CurrentThread->Alerted[0] )
    {
      CurrentThread->Alerted[0] = 0;
      LODWORD(WaitStatus) = 257;
      goto LABEL_67;
    }
LABEL_13:
    v13 = 0LL;
    CurrentThread->WaitBlockFill6[68] = 5;
    CurrentThread->WaitReason = v107;
    CurrentThread->ThreadLock = 0LL;
    v14 = KeGetCurrentPrcb();
    v15 = v14->SchedulerAssist;
    if ( v15 )
    {
      if ( v14->NestingLevel <= 1u )
      {
        v61 = v15[5] - 1;
        v15[5] = v61;
        if ( !v61 && !*((_BYTE *)v15 + 25) && !*((_BYTE *)v15 + 27) )
          KiPerformUnboostKick(v14);
      }
    }
    v16 = (int)v13;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    v17 = (unsigned int)v13;
    v18 = KeGetCurrentPrcb();
    CurrentThread->WaitBlock[0].WaitType = 1;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].WaitKey = (unsigned __int16)v13;
    CurrentThread->WaitBlock[0].Object = Object;
    if ( _interlockedbittestandset((volatile signed __int32 *)Object, 7u) )
    {
      do
      {
        if ( (++v17 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v17);
      }
      while ( (*(_DWORD *)Object & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)Object, 7u) );
      v13 = 0LL;
    }
    ThreadTimerDelay = *((unsigned int *)Object + 1);
    if ( (*(_BYTE *)Object & 0x7F) != 2 )
    {
      if ( (int)ThreadTimerDelay <= 0 )
        goto LABEL_17;
      if ( (*(_BYTE *)Object & 7) == 1 )
      {
        *((_DWORD *)Object + 1) = (_DWORD)v13;
      }
      else if ( (*(_BYTE *)Object & 0x7F) == 5 )
      {
        *((_DWORD *)Object + 1) = ThreadTimerDelay - 1;
      }
LABEL_25:
      _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
      CurrentThread->WaitBlockFill6[68] = 2;
      _InterlockedOr(v88, 0);
      if ( CurrentThread->ThreadLock )
      {
        v45 = KeGetCurrentPrcb();
        v97 = (int)v13;
        while ( 1 )
        {
          LOBYTE(ThreadTimerDelay) = 1;
          KiSetVpThreadSpinLockCount(v45, ThreadTimerDelay);
          if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
            break;
          KiSetVpThreadSpinLockCount(v45, 0LL);
          do
            KeYieldProcessorEx(&v97);
          while ( CurrentThread->ThreadLock );
        }
        KiReleaseThreadLockSafe((__int64)CurrentThread);
        v13 = 0LL;
      }
      v25 = CurrentThread->WaitIrql;
      v26.Flags = (unsigned __int8)CurrentThread->WaitRegister;
      if ( (v26.Flags & 0x38) == 0 )
      {
        if ( !v11 )
        {
LABEL_28:
          __writecr8(v25);
          return v16;
        }
        if ( v25 < 2u )
        {
          v46 = (__int64)v18->CurrentThread;
          if ( !v18->NextThread )
            goto LABEL_95;
          KiAbProcessContextSwitch(v18->CurrentThread, 0LL);
          v53 = KeGetCurrentPrcb();
          v101 = 0;
          while ( 1 )
          {
            LOBYTE(v52) = 1;
            KiSetVpThreadSpinLockCount(v53, v52);
            if ( !_interlockedbittestandset64((volatile signed __int32 *)&v18->PrcbLock, 0LL) )
              break;
            KiSetVpThreadSpinLockCount(v53, 0LL);
            do
              KeYieldProcessorEx(&v101);
            while ( v18->PrcbLock );
          }
          NextThread = v18->NextThread;
          v18->NextThread = 0LL;
          _disable();
          KiEndThreadCycleAccumulation((__int64)v18, v46, 0LL);
          _enable();
          v18->CurrentThread = NextThread;
          if ( NextThread->WaitBlockFill6[68] == 1 )
LABEL_238:
            NextThread->ReadyTime = NextThread->ReadyTime
                                  - NextThread->WaitBlock[2].SpareLong
                                  + MEMORY[0xFFFFF78000000320];
LABEL_136:
          NextThread->WaitBlockFill6[68] = 2;
          *(_BYTE *)(v46 + 643) = 32;
          *(_BYTE *)(v46 + 390) = v25;
          KiQueueReadyThread(v18, v46, v87);
          if ( !(unsigned __int8)KiSwapContext(v46, NextThread, v25) )
            goto LABEL_28;
          goto LABEL_96;
        }
        if ( !v18->NextThread || v18->DpcRoutineActive )
          return v16;
        goto LABEL_102;
      }
      if ( (v26.Flags & 0x18) != 0 )
      {
        if ( (v26.Flags & 8) != 0 )
          _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xCu);
        v81 = KeGetCurrentPrcb();
        v98 = (int)v13;
        v104 = v13;
        while ( 1 )
        {
          LOBYTE(ThreadTimerDelay) = 1;
          KiSetVpThreadSpinLockCount(v81, ThreadTimerDelay);
          if ( !_interlockedbittestandset64((volatile signed __int32 *)&v18->PrcbLock, 0LL) )
            break;
          KiSetVpThreadSpinLockCount(v81, 0LL);
          do
            KeYieldProcessorEx(&v98);
          while ( v18->PrcbLock );
        }
        if ( !v18->NextThread )
          KiSelectNextThread(v18, &v104);
        _InterlockedAnd64((volatile signed __int64 *)&v18->PrcbLock, 0LL);
        KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
        KiReadyDeferredReadyList((__int64)v18, &v104, v82);
        v83 = v18->NextThread;
        if ( v25 < 2u )
        {
          v46 = (__int64)v18->CurrentThread;
          if ( !v83 )
          {
LABEL_95:
            if ( (*(_DWORD *)(v46 + 116) & 0x40) == 0 )
              goto LABEL_28;
LABEL_96:
            __writecr8(1uLL);
            *(_DWORD *)(v46 + 116) &= ~0x40u;
            KiDeliverApc(0LL, 0LL, 0LL);
            goto LABEL_28;
          }
          KiAbProcessContextSwitch(v18->CurrentThread, 0LL);
          v85 = KeGetCurrentPrcb();
          v99 = 0;
          while ( 1 )
          {
            LOBYTE(v84) = 1;
            KiSetVpThreadSpinLockCount(v85, v84);
            if ( !_interlockedbittestandset64((volatile signed __int32 *)&v18->PrcbLock, 0LL) )
              break;
            KiSetVpThreadSpinLockCount(v85, 0LL);
            do
              KeYieldProcessorEx(&v99);
            while ( v18->PrcbLock );
          }
          NextThread = v18->NextThread;
          v18->NextThread = 0LL;
          _disable();
          KiEndThreadCycleAccumulation((__int64)v18, v46, 0LL);
          _enable();
          v18->CurrentThread = NextThread;
          if ( NextThread->WaitBlockFill6[68] == 1 )
            goto LABEL_238;
          goto LABEL_136;
        }
        if ( !v83 || v18->DpcRoutineActive )
          return v16;
LABEL_102:
        KiRequestSoftwareInterrupt(v18, 2);
        return v16;
      }
      v54 = (__int64)v18->CurrentThread;
      if ( v18->NextThread )
      {
        KiAbProcessContextSwitch(v18->CurrentThread, 0LL);
        v56 = KeGetCurrentPrcb();
        v100 = 0;
        while ( 1 )
        {
          LOBYTE(v55) = 1;
          KiSetVpThreadSpinLockCount(v56, v55);
          if ( !_interlockedbittestandset64((volatile signed __int32 *)&v18->PrcbLock, 0LL) )
            break;
          KiSetVpThreadSpinLockCount(v56, 0LL);
          do
            KeYieldProcessorEx(&v100);
          while ( v18->PrcbLock );
        }
        v57 = v18->NextThread;
        v18->NextThread = 0LL;
        _disable();
        KiEndThreadCycleAccumulation((__int64)v18, v54, 0LL);
        _enable();
        v18->CurrentThread = v57;
        if ( v57->WaitBlockFill6[68] == 1 )
          v57->ReadyTime = v57->ReadyTime - v57->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
        v57->WaitBlockFill6[68] = 2;
        *(_BYTE *)(v54 + 643) = 32;
        *(_BYTE *)(v54 + 390) = 1;
        KiQueueReadyThread(v18, v54, v58);
        LOBYTE(v59) = 1;
        if ( !(unsigned __int8)KiSwapContext(v54, v57, v59) )
          goto LABEL_132;
      }
      else if ( (*(_DWORD *)(v54 + 116) & 0x40) == 0 )
      {
        goto LABEL_132;
      }
      __writecr8(1uLL);
      *(_DWORD *)(v54 + 116) &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
LABEL_132:
      __writecr8(1uLL);
      KiDeliverApc(0LL, 0LL, 0LL);
      __writecr8(0LL);
      return v16;
    }
    if ( (int)ThreadTimerDelay > 0
      || CurrentThread == *((struct _KTHREAD **)Object + 5) && *((_BYTE *)Object + 2) == v18->DpcRoutineActive )
    {
      v27 = *((_DWORD *)Object + 1);
      if ( v27 == 0x80000000 )
      {
        _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
        KiFastExitThreadWait((__int64)v18, (__int64)CurrentThread, v11);
        RtlRaiseStatus(-1073741423);
      }
      v28 = v27 - 1;
      *((_DWORD *)Object + 1) = v28;
      if ( v28 )
        goto LABEL_25;
      CurrentThread->WaitStatus = (volatile __int64)v13;
      v29 = KeGetCurrentPrcb();
      v92 = (int)v13;
      v30 = v29->SchedulerAssist;
      if ( v30 )
      {
        if ( v29->NestingLevel <= 1u )
        {
          v62 = v30[5];
          v30[5] = v62 + 1;
          if ( v62 == -1 && !*((_BYTE *)v30 + 25) && !*((_BYTE *)v30 + 27) )
            KiPerformUnboostKick(v29);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        KiSetVpThreadSpinLockCount(v29, 0LL);
        do
          KeYieldProcessorEx(&v92);
        while ( CurrentThread->ThreadLock );
        LOBYTE(v47) = 1;
        KiSetVpThreadSpinLockCount(v29, v47);
      }
      CurrentThread->KernelApcDisable -= *((unsigned __int8 *)Object + 49);
      if ( v18->CurrentThread == CurrentThread )
        DpcRoutineActive = v18->DpcRoutineActive;
      else
        DpcRoutineActive = 0;
      v105 = *(_DWORD *)Object;
      BYTE2(v105) = DpcRoutineActive;
      *(_DWORD *)Object = v105;
      v32 = *((_BYTE *)Object + 48) == 0;
      *((_QWORD *)Object + 5) = CurrentThread;
      if ( !v32 )
      {
        *((_BYTE *)Object + 48) = 0;
        CurrentThread->WaitStatus |= 0x80uLL;
      }
      Blink = CurrentThread->MutantListHead.Blink;
      v34 = (struct _LIST_ENTRY *)((char *)Object + 24);
      if ( Blink->Flink != &CurrentThread->MutantListHead )
        __fastfail(3u);
      v34->Flink = &CurrentThread->MutantListHead;
      *((_QWORD *)Object + 4) = Blink;
      Blink->Flink = v34;
      CurrentThread->MutantListHead.Blink = v34;
      _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
      CurrentThread->WaitBlockFill6[68] = 2;
      v35 = 0LL;
      CurrentThread->ThreadLock = 0LL;
      v36 = KeGetCurrentPrcb();
      v37 = v36->SchedulerAssist;
      if ( v37 )
      {
        if ( v36->NestingLevel <= 1u )
        {
          v63 = v37[5] - 1;
          v37[5] = v63;
          if ( !v63 && !*((_BYTE *)v37 + 25) && !*((_BYTE *)v37 + 27) )
            KiPerformUnboostKick(v36);
        }
      }
      WaitStatus = CurrentThread->WaitStatus;
      v39 = CurrentThread->WaitIrql;
      v40.Flags = (unsigned __int8)CurrentThread->WaitRegister;
      if ( (v40.Flags & 0x38) == 0 )
      {
        if ( !v11 )
          goto LABEL_48;
        if ( v39 < 2u )
        {
          v67 = (__int64)v18->CurrentThread;
          if ( v18->NextThread != v35 )
          {
            KiAbProcessContextSwitch(v18->CurrentThread, 0LL);
            v80 = KeGetCurrentPrcb();
            v96 = 0;
            while ( 1 )
            {
              LOBYTE(v79) = 1;
              KiSetVpThreadSpinLockCount(v80, v79);
              if ( !_interlockedbittestandset64((volatile signed __int32 *)&v18->PrcbLock, 0LL) )
                break;
              KiSetVpThreadSpinLockCount(v80, 0LL);
              do
                KeYieldProcessorEx(&v96);
              while ( v18->PrcbLock );
            }
            v70 = v18->NextThread;
            v18->NextThread = 0LL;
            _disable();
            KiEndThreadCycleAccumulation((__int64)v18, v67, 0LL);
            _enable();
            v18->CurrentThread = v70;
            if ( v70->WaitBlockFill6[68] == 1 )
            {
              v72 = v70->ReadyTime - v70->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
LABEL_206:
              v70->ReadyTime = v72;
            }
            goto LABEL_207;
          }
LABEL_209:
          if ( (*(_DWORD *)(v67 + 116) & 0x40) != 0 )
            goto LABEL_210;
          goto LABEL_48;
        }
        if ( v18->NextThread != v35 && !v18->DpcRoutineActive )
        {
LABEL_213:
          KiRequestSoftwareInterrupt(v18, 2);
          return WaitStatus;
        }
        return WaitStatus;
      }
      if ( (v40.Flags & 0x18) != 0 )
      {
        if ( (v40.Flags & 8) != 0 )
          _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xCu);
        v64 = KeGetCurrentPrcb();
        v93 = (int)v35;
        v103 = v35;
        while ( 1 )
        {
          LOBYTE(v37) = 1;
          KiSetVpThreadSpinLockCount(v64, v37);
          if ( !_interlockedbittestandset64((volatile signed __int32 *)&v18->PrcbLock, 0LL) )
            break;
          KiSetVpThreadSpinLockCount(v64, 0LL);
          do
            KeYieldProcessorEx(&v93);
          while ( v18->PrcbLock );
        }
        if ( !v18->NextThread )
          KiSelectNextThread(v18, &v103);
        _InterlockedAnd64((volatile signed __int64 *)&v18->PrcbLock, 0LL);
        KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
        KiReadyDeferredReadyList((__int64)v18, (_QWORD **)&v103, v65);
        v66 = v18->NextThread;
        if ( v39 >= 2u )
        {
          if ( v66 && !v18->DpcRoutineActive )
            goto LABEL_213;
        }
        else
        {
          v67 = (__int64)v18->CurrentThread;
          if ( !v66 )
            goto LABEL_209;
          KiAbProcessContextSwitch(v18->CurrentThread, 0LL);
          v69 = KeGetCurrentPrcb();
          v94 = 0;
          while ( 1 )
          {
            LOBYTE(v68) = 1;
            KiSetVpThreadSpinLockCount(v69, v68);
            if ( !_interlockedbittestandset64((volatile signed __int32 *)&v18->PrcbLock, 0LL) )
              break;
            KiSetVpThreadSpinLockCount(v69, 0LL);
            do
              KeYieldProcessorEx(&v94);
            while ( v18->PrcbLock );
          }
          v70 = v18->NextThread;
          v18->NextThread = 0LL;
          _disable();
          KiEndThreadCycleAccumulation((__int64)v18, v67, 0LL);
          _enable();
          v18->CurrentThread = v70;
          if ( v70->WaitBlockFill6[68] == 1 )
          {
            v71 = v70->ReadyTime - v70->WaitBlock[2].SpareLong;
            v72 = v71 + MEMORY[0xFFFFF78000000320];
            goto LABEL_206;
          }
LABEL_207:
          v70->WaitBlockFill6[68] = 2;
          *(_BYTE *)(v67 + 643) = 32;
          *(_BYTE *)(v67 + 390) = v39;
          KiQueueReadyThread(v18, v67, v71);
          if ( (unsigned __int8)KiSwapContext(v67, v70, v39) )
          {
LABEL_210:
            __writecr8(1uLL);
            *(_DWORD *)(v67 + 116) &= ~0x40u;
            KiDeliverApc(0LL, 0LL, 0LL);
          }
LABEL_48:
          __writecr8(v39);
        }
        return WaitStatus;
      }
      v73 = (__int64)v18->CurrentThread;
      if ( v18->NextThread == v35 )
      {
        if ( (*(_DWORD *)(v73 + 116) & 0x40) != 0 )
          goto LABEL_195;
      }
      else
      {
        KiAbProcessContextSwitch(v18->CurrentThread, 0LL);
        v75 = KeGetCurrentPrcb();
        v95 = 0;
        while ( 1 )
        {
          LOBYTE(v74) = 1;
          KiSetVpThreadSpinLockCount(v75, v74);
          if ( !_interlockedbittestandset64((volatile signed __int32 *)&v18->PrcbLock, 0LL) )
            break;
          KiSetVpThreadSpinLockCount(v75, 0LL);
          do
            KeYieldProcessorEx(&v95);
          while ( v18->PrcbLock );
        }
        v76 = v18->NextThread;
        v18->NextThread = 0LL;
        _disable();
        KiEndThreadCycleAccumulation((__int64)v18, v73, 0LL);
        _enable();
        v18->CurrentThread = v76;
        if ( v76->WaitBlockFill6[68] == 1 )
          v76->ReadyTime = v76->ReadyTime - v76->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
        v76->WaitBlockFill6[68] = 2;
        *(_BYTE *)(v73 + 643) = 32;
        *(_BYTE *)(v73 + 390) = 1;
        KiQueueReadyThread(v18, v73, v77);
        LOBYTE(v78) = 1;
        if ( (unsigned __int8)KiSwapContext(v73, v76, v78) )
        {
LABEL_195:
          __writecr8(1uLL);
          *(_DWORD *)(v73 + 116) &= ~0x40u;
          KiDeliverApc(0LL, 0LL, 0LL);
        }
      }
      __writecr8(1uLL);
      KiDeliverApc(0LL, 0LL, 0LL);
      __writecr8(0LL);
      return WaitStatus;
    }
LABEL_17:
    v20 = QuadPart;
    v21 = QuadPart;
    if ( Timeouta == 2 )
    {
      ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
      v41 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
      v21 = QuadPart;
      if ( CurrentThread->WaitMode != (_BYTE)v16
        && CurrentThread->WaitBlock[3].SpareLong == v16
        && CurrentThread->WaitIrql == (_BYTE)v16
        && CurrentThread->ApcState.InProgressFlags == (_BYTE)v16
        && (_DWORD)ThreadTimerDelay )
      {
        v21 = QuadPart + ThreadTimerDelay;
      }
    }
    else
    {
      if ( !Timeouta )
        goto LABEL_19;
      if ( !QuadPart )
        goto LABEL_34;
      v41 = MEMORY[0xFFFFF78000000014];
    }
    if ( v41 > v21 )
    {
LABEL_34:
      v16 = 258;
      goto LABEL_25;
    }
LABEL_19:
    v22 = (PVOID *)*((_QWORD *)Object + 2);
    if ( *v22 != (char *)Object + 8 )
      __fastfail(3u);
    v12->WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)((char *)Object + 8);
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = (struct _LIST_ENTRY *)v22;
    *v22 = v12;
    *((_QWORD *)Object + 2) = v12;
    _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    result = KiCommitThreadWait(CurrentThread, &CurrentThread->320, Timeouta, v20);
    if ( result != 256 )
      return result;
    v89 = 0;
    v24 = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentThread->WaitIrql = v24;
  }
  CurrentThread->ApcState.UserApcPending = 1;
LABEL_66:
  LODWORD(WaitStatus) = 192;
LABEL_67:
  KiReleaseThreadLockSafe((__int64)CurrentThread);
  v42 = KeGetCurrentPrcb();
  if ( WaitIrql >= 2u )
  {
    if ( v42->NextThread && !v42->DpcRoutineActive )
      KiRequestSoftwareInterrupt(v42, 2);
    return WaitStatus;
  }
  v43 = (__int64)v42->CurrentThread;
  if ( v42->NextThread )
  {
    KiAbProcessContextSwitch(v42->CurrentThread, 0LL);
    v49 = KeGetCurrentPrcb();
    v91 = 0;
    while ( 1 )
    {
      LOBYTE(v48) = 1;
      KiSetVpThreadSpinLockCount(v49, v48);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&v42->PrcbLock, 0LL) )
        break;
      KiSetVpThreadSpinLockCount(v49, 0LL);
      do
        KeYieldProcessorEx(&v91);
      while ( v42->PrcbLock );
    }
    v50 = v42->NextThread;
    v42->NextThread = 0LL;
    _disable();
    KiEndThreadCycleAccumulation((__int64)v42, v43, 0LL);
    _enable();
    v42->CurrentThread = v50;
    if ( v50->WaitBlockFill6[68] == 1 )
    {
      v51 = v50->ReadyTime - v50->WaitBlock[2].SpareLong;
      v50->ReadyTime = v51 + MEMORY[0xFFFFF78000000320];
    }
    v50->WaitBlockFill6[68] = 2;
    *(_BYTE *)(v43 + 643) = 32;
    *(_BYTE *)(v43 + 390) = WaitIrql;
    KiQueueReadyThread(v42, v43, v51);
    if ( (unsigned __int8)KiSwapContext(v43, v50, WaitIrql) )
      goto LABEL_114;
  }
  else
  {
    if ( (*(_DWORD *)(v43 + 116) & 0x40) == 0 )
      goto LABEL_70;
LABEL_114:
    __writecr8(1uLL);
    *(_DWORD *)(v43 + 116) &= ~0x40u;
    KiDeliverApc(0LL, 0LL, 0LL);
  }
LABEL_70:
  __writecr8(WaitIrql);
  return WaitStatus;
}
