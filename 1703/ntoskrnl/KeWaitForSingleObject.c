/*
 * XREFs of KeWaitForSingleObject @ 0x1400EA280
 * Callers:
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x1400048FC (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     MmStoreFlushOutstandingEvictions @ 0x140004CEC (MmStoreFlushOutstandingEvictions.c)
 *     IopCompleteUnloadOrDelete @ 0x140005A00 (IopCompleteUnloadOrDelete.c)
 *     CcCanIWrite @ 0x14000D980 (CcCanIWrite.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x140012704 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x140013514 (LdrpGetFromMUIMemCache.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x14001B7C0 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14001F550 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreHelperCleanup @ 0x14001F964 (SmKmStoreHelperCleanup.c)
 *     SmKmStoreHelperWaitForCommand @ 0x14001FCB8 (SmKmStoreHelperWaitForCommand.c)
 *     WmipBuildTraceDeviceList @ 0x140020014 (WmipBuildTraceDeviceList.c)
 *     IopWaitForSynchronousIo @ 0x140022334 (IopWaitForSynchronousIo.c)
 *     AlpcpWaitForSingleObject @ 0x140024478 (AlpcpWaitForSingleObject.c)
 *     MiIssueSynchronousFlush @ 0x140025D14 (MiIssueSynchronousFlush.c)
 *     CcWaitForUninitializeCacheMap @ 0x140028FB8 (CcWaitForUninitializeCacheMap.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x14002B434 (SmKmStoreDeleteWhenEmpty.c)
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     IoSynchronousCallDriver @ 0x14002FA10 (IoSynchronousCallDriver.c)
 *     MiZeroPageWrite @ 0x14002FFC4 (MiZeroPageWrite.c)
 *     PnpLockDeviceActionQueue @ 0x140031DD4 (PnpLockDeviceActionQueue.c)
 *     IopLoadDriverImage @ 0x140031E34 (IopLoadDriverImage.c)
 *     NtSetInformationFile @ 0x14004FBC0 (NtSetInformationFile.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x140055720 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400574C0 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiDereferencePartition @ 0x140062B34 (MiDereferencePartition.c)
 *     PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x1400680DC (PnpDeviceCompletionQueueRemoveCompletedRequest.c)
 *     PopFxActivateDevice @ 0x14006816C (PopFxActivateDevice.c)
 *     PopFxActivateComponent @ 0x140068F1C (PopFxActivateComponent.c)
 *     ExTimedWaitForUnblockPushLock @ 0x14006BE00 (ExTimedWaitForUnblockPushLock.c)
 *     WmipFindRegEntryByProviderId @ 0x14006E798 (WmipFindRegEntryByProviderId.c)
 *     PpmCheckPeriodicStart @ 0x14006F610 (PpmCheckPeriodicStart.c)
 *     PpmAcquireLock @ 0x14006FC2C (PpmAcquireLock.c)
 *     PopSetWatchdog @ 0x14006FDA8 (PopSetWatchdog.c)
 *     ExpUnblockPushLock @ 0x14007EB48 (ExpUnblockPushLock.c)
 *     CmpFileReadEx @ 0x14007FD50 (CmpFileReadEx.c)
 *     CcSetValidData @ 0x14008142C (CcSetValidData.c)
 *     PopExecuteOnTargetProcessors @ 0x1400888B0 (PopExecuteOnTargetProcessors.c)
 *     MiWaitForInPageComplete @ 0x140097510 (MiWaitForInPageComplete.c)
 *     CcUnmapVacbArray @ 0x1400AB540 (CcUnmapVacbArray.c)
 *     CcInitializeCacheMapEx @ 0x1400AD640 (CcInitializeCacheMapEx.c)
 *     CcWriteBehind @ 0x1400AF884 (CcWriteBehind.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     AlpcpSignalAndWait @ 0x1400E7A20 (AlpcpSignalAndWait.c)
 *     KeWaitForMultipleObjects @ 0x1400E8C50 (KeWaitForMultipleObjects.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400FDC60 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400FE070 (ExfAcquirePushLockSharedEx.c)
 *     ExfWaitForRundownProtectionRelease @ 0x14010E080 (ExfWaitForRundownProtectionRelease.c)
 *     MiRetryNonPagedAllocation @ 0x14010EB88 (MiRetryNonPagedAllocation.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x14010F680 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     KiSchedulerApc @ 0x140111120 (KiSchedulerApc.c)
 *     MiWaitForCollidedFaultComplete @ 0x1401180BC (MiWaitForCollidedFaultComplete.c)
 *     ExpAcquireFastMutexContended @ 0x14011C88C (ExpAcquireFastMutexContended.c)
 *     FsRtlpWaitForIoAtEof @ 0x14011D258 (FsRtlpWaitForIoAtEof.c)
 *     SmKmStoreHelperWorker @ 0x140120F30 (SmKmStoreHelperWorker.c)
 *     WmipReceiveNotifications @ 0x1401223D4 (WmipReceiveNotifications.c)
 *     IopWaitForLockAlertable @ 0x14012C9E0 (IopWaitForLockAlertable.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x14012E3D8 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x14012FBAC (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@.c)
 *     PpmTryAcquireLock @ 0x140130D9C (PpmTryAcquireLock.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x140131770 (CcWaitForCurrentLazyWriterActivity.c)
 *     CcAsyncReadWorker @ 0x1401340C0 (CcAsyncReadWorker.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x140135BE0 (FsRtlGetVirtualDiskNestingLevel.c)
 *     FsRtlpWaitOnIrp @ 0x140136678 (FsRtlpWaitOnIrp.c)
 *     PopHaltDeviceIdle @ 0x14013ABF8 (PopHaltDeviceIdle.c)
 *     PopTimeoutWakeTracking @ 0x14013CA74 (PopTimeoutWakeTracking.c)
 *     PopRunMaximumIrpWorkers @ 0x14013CE5C (PopRunMaximumIrpWorkers.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x14013DF8C (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopIgnoreBatteryStatusChange @ 0x14013E02C (PopIgnoreBatteryStatusChange.c)
 *     WmiQueryTraceProviderCount @ 0x14013FF40 (WmiQueryTraceProviderCount.c)
 *     MiQueueWorkingSetRequest @ 0x1401400FC (MiQueueWorkingSetRequest.c)
 *     PopIrpWorker @ 0x140145130 (PopIrpWorker.c)
 *     PopPepUpdateConstraints @ 0x1401459A0 (PopPepUpdateConstraints.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x140149348 (LdrUnloadAlternateResourceModuleEx.c)
 *     ExUnregisterCallback @ 0x14014AE00 (ExUnregisterCallback.c)
 *     WmipDeregisterRegEntry @ 0x1401530D4 (WmipDeregisterRegEntry.c)
 *     WmipFindRegEntryByDevice @ 0x14015420C (WmipFindRegEntryByDevice.c)
 *     WmipAllocRegEntry @ 0x140154290 (WmipAllocRegEntry.c)
 *     KeSwapProcessOrStack @ 0x14015C090 (KeSwapProcessOrStack.c)
 *     MiOkToZeroNextLargePage @ 0x14015C47C (MiOkToZeroNextLargePage.c)
 *     WheapAddErrorSource @ 0x140162668 (WheapAddErrorSource.c)
 *     MiModifiedPageWriter @ 0x140162A30 (MiModifiedPageWriter.c)
 *     CmpLazyWriteWorker @ 0x1401634A0 (CmpLazyWriteWorker.c)
 *     PnpDeviceCompletionQueueGetCompletedRequest @ 0x140163A7C (PnpDeviceCompletionQueueGetCompletedRequest.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x140164458 (LdrpSetAlternateResourceModuleHandle.c)
 *     PopIrpWorkerControl @ 0x140166890 (PopIrpWorkerControl.c)
 *     PnpSerializeBoot @ 0x140167714 (PnpSerializeBoot.c)
 *     MiStoreEvictThread @ 0x1401687C0 (MiStoreEvictThread.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140168E30 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     FsFilterAllocateCompletionStack @ 0x1401E3FD0 (FsFilterAllocateCompletionStack.c)
 *     FsRtlpPostStackOverflow @ 0x1401E48F4 (FsRtlpPostStackOverflow.c)
 *     IopAllocateBackpocketIrp @ 0x1401EF168 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1401EF44C (IopAllocateReserveIrp.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x1401F7A10 (IoReleaseRemoveLockAndWaitEx.c)
 *     PnpLockMountableDevice @ 0x1401F8A9C (PnpLockMountableDevice.c)
 *     PnprQuiesce @ 0x1401FA43C (PnprQuiesce.c)
 *     PnpProcessRebalance @ 0x1401FB2FC (PnpProcessRebalance.c)
 *     KiAcquireSecondaryPassiveConnectLock @ 0x1402009CC (KiAcquireSecondaryPassiveConnectLock.c)
 *     KiInvokeInterruptServiceRoutine @ 0x140204F5C (KiInvokeInterruptServiceRoutine.c)
 *     KiSignalWaitDisconnectLock @ 0x1402052C0 (KiSignalWaitDisconnectLock.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x1402052F0 (KiSynchronizePassiveInterruptExecution.c)
 *     KiParkUmsThread @ 0x140207A00 (KiParkUmsThread.c)
 *     MiProcessDeleteOnClose @ 0x14020A790 (MiProcessDeleteOnClose.c)
 *     MiMakeOutswappedPageResident @ 0x14020B6DC (MiMakeOutswappedPageResident.c)
 *     MmReleaseCommitForMemResetPages @ 0x14020C848 (MmReleaseCommitForMemResetPages.c)
 *     MiPfCompleteCoalescedIo @ 0x140213BC8 (MiPfCompleteCoalescedIo.c)
 *     MiIssuePageExtendRequest @ 0x14021A1F0 (MiIssuePageExtendRequest.c)
 *     MiQueueSyncModifiedWriterApc @ 0x14021A624 (MiQueueSyncModifiedWriterApc.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14021A770 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiWaitForFreePage @ 0x140220450 (MiWaitForFreePage.c)
 *     MiContractWsSwapPageFileWorker @ 0x1402239A0 (MiContractWsSwapPageFileWorker.c)
 *     NtSignalAndWaitForSingleObject @ 0x140226A34 (NtSignalAndWaitForSingleObject.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x14022B014 (PopFxIssueComponentPerfStateChanges.c)
 *     PopWdiTimerWorkerThread @ 0x140233180 (PopWdiTimerWorkerThread.c)
 *     SmpFpWaitForResource @ 0x14024EB6C (SmpFpWaitForResource.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x14024F4B0 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     SmWaitForSyncIo @ 0x14024FCB0 (SmWaitForSyncIo.c)
 *     EtwpTraceThreadRundownWithStack @ 0x140256638 (EtwpTraceThreadRundownWithStack.c)
 *     ExRegisterBootDevice @ 0x14025A940 (ExRegisterBootDevice.c)
 *     ExpWaitForBootDevices @ 0x14025AB50 (ExpWaitForBootDevices.c)
 *     WheapProcessWorkQueueItem @ 0x14025FC60 (WheapProcessWorkQueueItem.c)
 *     sub_140261AD0 @ 0x140261AD0 (sub_140261AD0.c)
 *     PopWakeDeviceList @ 0x140408914 (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x140408A78 (PopSleepDeviceList.c)
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 *     PfpScenCtxPrefetchWait @ 0x140409BCC (PfpScenCtxPrefetchWait.c)
 *     PopCaptureTimeOnProcZero @ 0x14040A76C (PopCaptureTimeOnProcZero.c)
 *     PopBuildDeviceNotifyList @ 0x14040AE30 (PopBuildDeviceNotifyList.c)
 *     PopFlushVolumes @ 0x14040B580 (PopFlushVolumes.c)
 *     PopTransitionToSleep @ 0x14040BE50 (PopTransitionToSleep.c)
 *     MmDuplicateMemory @ 0x14040BFE8 (MmDuplicateMemory.c)
 *     PopEndMirroring @ 0x14040CD30 (PopEndMirroring.c)
 *     IoShutdownSystem @ 0x140415678 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x1404159A4 (IopShutdownBaseFileSystems.c)
 *     PnprInitiateReplaceOperation @ 0x140417290 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x1404185D0 (PnprQuiesceWorker.c)
 *     MiZeroAllPageFiles @ 0x1404195D8 (MiZeroAllPageFiles.c)
 *     PopGracefulShutdown @ 0x1404199F0 (PopGracefulShutdown.c)
 *     AlpcpWaitForPortReferences @ 0x140426D10 (AlpcpWaitForPortReferences.c)
 *     IopCancelAlertedRequest @ 0x140430F4C (IopCancelAlertedRequest.c)
 *     IopCancelIrpsInThreadList @ 0x140433318 (IopCancelIrpsInThreadList.c)
 *     WmipDeleteMethod @ 0x140433520 (WmipDeleteMethod.c)
 *     WmipDisableCollectOrEvent @ 0x140433618 (WmipDisableCollectOrEvent.c)
 *     EtwpStopTrace @ 0x140434854 (EtwpStopTrace.c)
 *     EtwpUpdateKernelGroupMasks @ 0x1404350C0 (EtwpUpdateKernelGroupMasks.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x14043C110 (WmipSendWmiIrpToTraceDeviceList.c)
 *     IopSynchronousApiServiceTail @ 0x140440474 (IopSynchronousApiServiceTail.c)
 *     FsRtlQueryKernelEaFile @ 0x1404418D0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1404427D0 (FsRtlKernelFsControlFile.c)
 *     RtlDecompressFragmentLZNT1 @ 0x140444330 (RtlDecompressFragmentLZNT1.c)
 *     IopUncacheInterfaceInformation @ 0x14044C3A0 (IopUncacheInterfaceInformation.c)
 *     EtwpSynchronizeWithLogger @ 0x14045212C (EtwpSynchronizeWithLogger.c)
 *     IopGetSetObjectId @ 0x140452EB8 (IopGetSetObjectId.c)
 *     FsRtlSetKernelEaFile @ 0x140454DC0 (FsRtlSetKernelEaFile.c)
 *     NtReleaseKeyedEvent @ 0x140456358 (NtReleaseKeyedEvent.c)
 *     NtWaitForKeyedEvent @ 0x14045651C (NtWaitForKeyedEvent.c)
 *     WmipEnumerateMofResources @ 0x140457450 (WmipEnumerateMofResources.c)
 *     FsRtlSetFileSize @ 0x140459F80 (FsRtlSetFileSize.c)
 *     NtNotifyChangeSession @ 0x14045AEA4 (NtNotifyChangeSession.c)
 *     EtwpStartTrace @ 0x14045C080 (EtwpStartTrace.c)
 *     FsRtlQueryCachedVdl @ 0x14045D030 (FsRtlQueryCachedVdl.c)
 *     IoSetInformation @ 0x14045D250 (IoSetInformation.c)
 *     ExpHwidSendSynchronousIrpToDevice @ 0x140462D04 (ExpHwidSendSynchronousIrpToDevice.c)
 *     IoVolumeDeviceToDosName @ 0x140462E40 (IoVolumeDeviceToDosName.c)
 *     MmCleanProcessAddressSpace @ 0x14047ABC0 (MmCleanProcessAddressSpace.c)
 *     IopGetSetSecurityObject @ 0x140482710 (IopGetSetSecurityObject.c)
 *     PiDrvDbLoadNode @ 0x140489A54 (PiDrvDbLoadNode.c)
 *     PiControlGetSetDeviceStatus @ 0x14048A0B0 (PiControlGetSetDeviceStatus.c)
 *     NtNotifyChangeMultipleKeys @ 0x14048E630 (NtNotifyChangeMultipleKeys.c)
 *     MiCreateImageFileMap @ 0x1404921D4 (MiCreateImageFileMap.c)
 *     FsRtlGetFileSize @ 0x140493F40 (FsRtlGetFileSize.c)
 *     PnpDeviceEventWorker @ 0x1404A58F0 (PnpDeviceEventWorker.c)
 *     PnpStartDeviceNode @ 0x1404A7788 (PnpStartDeviceNode.c)
 *     SPCall2ServerInternal @ 0x1404A9590 (SPCall2ServerInternal.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1404AE9B0 (FsRtlCancellableWaitForMultipleObjects.c)
 *     MmAcquireLoadLock @ 0x1404B2970 (MmAcquireLoadLock.c)
 *     WmipUnreferenceEntry @ 0x1404BECD0 (WmipUnreferenceEntry.c)
 *     WmipForwardWmiIrp @ 0x1404BEDA0 (WmipForwardWmiIrp.c)
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 *     MiInSwapStore @ 0x1404C9F3C (MiInSwapStore.c)
 *     SmStoreCompressionStop @ 0x1404CA338 (SmStoreCompressionStop.c)
 *     CmLoadAppKey @ 0x1404D59A0 (CmLoadAppKey.c)
 *     CmpOpenHiveFile @ 0x1404D7AAC (CmpOpenHiveFile.c)
 *     CmpLockRegistryFreezeAware @ 0x1404D8558 (CmpLockRegistryFreezeAware.c)
 *     CmpGetVolumeClusterSize @ 0x1404D8B8C (CmpGetVolumeClusterSize.c)
 *     CmpFileFlushAndPurge @ 0x1404DB67C (CmpFileFlushAndPurge.c)
 *     PnpQueryInterface @ 0x1404DDD80 (PnpQueryInterface.c)
 *     IopSynchronousCall @ 0x1404DDF94 (IopSynchronousCall.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404F2C44 (EtwpAcquireLoggerContextByLoggerId.c)
 *     PspUserThreadStartup @ 0x1404F8330 (PspUserThreadStartup.c)
 *     IopGetFileInformation @ 0x1404FC060 (IopGetFileInformation.c)
 *     CmpParseKey @ 0x1405080E0 (CmpParseKey.c)
 *     IopDeleteFile @ 0x14051E790 (IopDeleteFile.c)
 *     NtWaitForSingleObject @ 0x140527B30 (NtWaitForSingleObject.c)
 *     IopCloseFile @ 0x140527CA0 (IopCloseFile.c)
 *     NtQueryInformationFile @ 0x14052EC70 (NtQueryInformationFile.c)
 *     IopParseDevice @ 0x1405385E0 (IopParseDevice.c)
 *     IopSynchronousServiceTail @ 0x14053A760 (IopSynchronousServiceTail.c)
 *     IopQueryXxxInformation @ 0x14053E758 (IopQueryXxxInformation.c)
 *     PspExitThread @ 0x1405401EC (PspExitThread.c)
 *     EtwpLogger @ 0x14054F910 (EtwpLogger.c)
 *     EtwpStartLogger @ 0x1405509F8 (EtwpStartLogger.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x140551A2C (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpDisableTraceProviders @ 0x140552644 (EtwpDisableTraceProviders.c)
 *     WmipOpenBlock @ 0x140554E90 (WmipOpenBlock.c)
 *     WmipPrepareForWnodeAD @ 0x140555088 (WmipPrepareForWnodeAD.c)
 *     WmipFindGEByGuid @ 0x140555288 (WmipFindGEByGuid.c)
 *     WmipEnableCollectOrEvent @ 0x140557544 (WmipEnableCollectOrEvent.c)
 *     WmipIsQuerySetGuid @ 0x140557884 (WmipIsQuerySetGuid.c)
 *     PnpAllocateResources @ 0x14055A118 (PnpAllocateResources.c)
 *     IopFilterResourceRequirementsCall @ 0x14055BFFC (IopFilterResourceRequirementsCall.c)
 *     IopMountVolume @ 0x140560E6C (IopMountVolume.c)
 *     NtGetMUIRegistryInfo @ 0x140568580 (NtGetMUIRegistryInfo.c)
 *     NtMapCMFModule @ 0x140568920 (NtMapCMFModule.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140570848 (PopFxUnregisterDeviceOrWait.c)
 *     IoVolumeDeviceToGuidPath @ 0x140570EA0 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x140570FF0 (IoVolumeDeviceNameToGuidPath.c)
 *     FsRtlIssueDeviceIoControl @ 0x1405734E0 (FsRtlIssueDeviceIoControl.c)
 *     IoReportTargetDeviceChange @ 0x140574FF0 (IoReportTargetDeviceChange.c)
 *     FsRtlBalanceReads @ 0x1405754E0 (FsRtlBalanceReads.c)
 *     PoUnregisterPowerSettingCallback @ 0x140575B50 (PoUnregisterPowerSettingCallback.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140575D50 (CmpWaitOnHiveWriteQueue.c)
 *     EmPowerPagingEnabled @ 0x140576468 (EmPowerPagingEnabled.c)
 *     NtInitiatePowerAction @ 0x1405773F8 (NtInitiatePowerAction.c)
 *     ExSwapinWorkerThreads @ 0x1405778AC (ExSwapinWorkerThreads.c)
 *     PopGetWakeSource @ 0x1405790CC (PopGetWakeSource.c)
 *     PopInitSystemSleeperThread @ 0x140579B70 (PopInitSystemSleeperThread.c)
 *     ObWaitForSingleObject @ 0x140579C50 (ObWaitForSingleObject.c)
 *     PopAcquireTransitionLock @ 0x14057A3D0 (PopAcquireTransitionLock.c)
 *     PopResizeHiberFile @ 0x14057B45C (PopResizeHiberFile.c)
 *     PopSanityCheckHiberFile @ 0x14057D238 (PopSanityCheckHiberFile.c)
 *     PopClearHiberFileSignature @ 0x14057D3F0 (PopClearHiberFileSignature.c)
 *     RtlDecompressBufferLZNT1 @ 0x1405804C0 (RtlDecompressBufferLZNT1.c)
 *     WmipPrepareWnodeSI @ 0x140580A10 (WmipPrepareWnodeSI.c)
 *     WmipProcessEvent @ 0x140580EBC (WmipProcessEvent.c)
 *     WmipSendEnableDisableRequest @ 0x140581C7C (WmipSendEnableDisableRequest.c)
 *     PopBatteryWorker @ 0x140582550 (PopBatteryWorker.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x1405840F8 (WmipGetGuidObjectInstanceInfo.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14058537C (FsRtlIssueFileNotificationFsctl.c)
 *     IoDisconnectInterrupt @ 0x1405883B0 (IoDisconnectInterrupt.c)
 *     IopDestroyActiveConnectBlock @ 0x140588C84 (IopDestroyActiveConnectBlock.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x140588F28 (IopAcquireReleaseConnectLockInternal.c)
 *     EtwpCrimsonProvEnableCallback @ 0x140594C60 (EtwpCrimsonProvEnableCallback.c)
 *     WmipDSCleanup @ 0x140595880 (WmipDSCleanup.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140595CB0 (WmipDisableCollectionForRemovedGuid.c)
 *     IopLegacyResourceAllocation @ 0x1405966EC (IopLegacyResourceAllocation.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x140597A84 (PnpQueueQueryAndRemoveEvent.c)
 *     WmipDeregisterDevice @ 0x14059962C (WmipDeregisterDevice.c)
 *     PiIrpQueryRemoveDevice @ 0x14059AA20 (PiIrpQueryRemoveDevice.c)
 *     RawQueryFileSystemInformation @ 0x14059ACD8 (RawQueryFileSystemInformation.c)
 *     RawPerformDevIoCtrl @ 0x14059AE74 (RawPerformDevIoCtrl.c)
 *     RtlpRunOnceWaitForInit @ 0x14059B134 (RtlpRunOnceWaitForInit.c)
 *     IopLoadFileSystemDriver @ 0x14059B690 (IopLoadFileSystemDriver.c)
 *     IopCreateArcName @ 0x14059C120 (IopCreateArcName.c)
 *     PnpWaitForEmptyDeviceEventQueue @ 0x14059CE24 (PnpWaitForEmptyDeviceEventQueue.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x14059CE50 (PnpWaitForEmptyDeviceActionQueue.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x14059D090 (IoRegisterFsRegistrationChangeMountAware.c)
 *     IoWMIRegistrationControl @ 0x14059FCD0 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x14059FDA8 (WmipRegisterDevice.c)
 *     WmipQueueRegWork @ 0x14059FF10 (WmipQueueRegWork.c)
 *     WmipUpdateDeviceStackSize @ 0x14059FFE8 (WmipUpdateDeviceStackSize.c)
 *     WmipSetTraceNotify @ 0x1405A0034 (WmipSetTraceNotify.c)
 *     WmipAddDataSource @ 0x1405A03B8 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x1405A0A10 (WmipDetermineInstanceBaseIndex.c)
 *     WmipFindISinGEbyName @ 0x1405A0BD0 (WmipFindISinGEbyName.c)
 *     WmipEnableCollectionForNewGuid @ 0x1405A0E6C (WmipEnableCollectionForNewGuid.c)
 *     WmipAddMofResource @ 0x1405A12B0 (WmipAddMofResource.c)
 *     WmipFindMRByNames @ 0x1405A14F4 (WmipFindMRByNames.c)
 *     CmpFinishSystemHivesLoad @ 0x1405A3DE0 (CmpFinishSystemHivesLoad.c)
 *     PoInitHiberServices @ 0x1405A913C (PoInitHiberServices.c)
 *     IopAllocateBootResources @ 0x1405B10D0 (IopAllocateBootResources.c)
 *     ArbArbiterHandler @ 0x1405B3060 (ArbArbiterHandler.c)
 *     ArbBuildAssignmentOrdering @ 0x1405B3378 (ArbBuildAssignmentOrdering.c)
 *     MiZeroPageFileFirstPage @ 0x1405BA518 (MiZeroPageFileFirstPage.c)
 *     CmpLoadHiveThread @ 0x1405BC800 (CmpLoadHiveThread.c)
 *     ?Control@PC_ENVIRONMENT@@SAJPEAXK0K0K@Z @ 0x1405C24F8 (-Control@PC_ENVIRONMENT@@SAJPEAXK0K0K@Z.c)
 *     SepRmCommandServerThread @ 0x1405C5730 (SepRmCommandServerThread.c)
 *     WmipRegistrationWorker @ 0x1405C6890 (WmipRegistrationWorker.c)
 *     EtwpUpdateDisallowedGuids @ 0x1405C7CC4 (EtwpUpdateDisallowedGuids.c)
 *     IopInsertLegacyBusDeviceNode @ 0x1405CB8AC (IopInsertLegacyBusDeviceNode.c)
 *     IopUnloadDriver @ 0x1405CC050 (IopUnloadDriver.c)
 *     WmipLegacyEtwWorker @ 0x1405CC580 (WmipLegacyEtwWorker.c)
 *     WmipProcessLegacyEtwRegister @ 0x1405CC6B4 (WmipProcessLegacyEtwRegister.c)
 *     FsRtlpRegisterUncProvider @ 0x1405CE20C (FsRtlpRegisterUncProvider.c)
 *     PiPagePathSetState @ 0x1405D3A60 (PiPagePathSetState.c)
 *     WheapEtwEnableCallback @ 0x1405D4020 (WheapEtwEnableCallback.c)
 *     IoWMISetNotificationCallback @ 0x1405D50A0 (IoWMISetNotificationCallback.c)
 *     FsRtlWaitForSmssEvent @ 0x1405D6370 (FsRtlWaitForSmssEvent.c)
 *     PopNotifyPolicyDevice @ 0x1405D6760 (PopNotifyPolicyDevice.c)
 *     PopCreateHiberFile @ 0x1405D7378 (PopCreateHiberFile.c)
 *     WmipLegacyEtwCallback @ 0x1405D9150 (WmipLegacyEtwCallback.c)
 *     CmpTouchFile @ 0x14066AA60 (CmpTouchFile.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x14067E474 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     DbgkpQueueMessage @ 0x14067F83C (DbgkpQueueMessage.c)
 *     NtWaitForDebugEvent @ 0x140680748 (NtWaitForDebugEvent.c)
 *     DbgkpSendErrorMessage @ 0x140681320 (DbgkpSendErrorMessage.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x14068222C (DbgkpLkmdLaunchSnapApc.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x1406849D8 (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlDeregisterUncProvider @ 0x140685480 (FsRtlDeregisterUncProvider.c)
 *     FsRtlQueryInformationFile @ 0x140685B40 (FsRtlQueryInformationFile.c)
 *     IopGetVolumeId @ 0x14068908C (IopGetVolumeId.c)
 *     IopHardErrorThread @ 0x1406891D0 (IopHardErrorThread.c)
 *     IopInvalidateVolumesForDevice @ 0x1406894B8 (IopInvalidateVolumesForDevice.c)
 *     IopSendMessageToTrackService @ 0x140689EC4 (IopSendMessageToTrackService.c)
 *     IopSetRemoteLink @ 0x14068AAC8 (IopSetRemoteLink.c)
 *     IoCancelFileOpen @ 0x14068B2F0 (IoCancelFileOpen.c)
 *     IoVerifyVolume @ 0x14068BEE0 (IoVerifyVolume.c)
 *     IopIssueSystemEnvironmentRequest @ 0x140691114 (IopIssueSystemEnvironmentRequest.c)
 *     IopFreeBandwidthContract @ 0x1406918FC (IopFreeBandwidthContract.c)
 *     PnpShutdownDevices @ 0x140691F78 (PnpShutdownDevices.c)
 *     IoReplacePartitionUnit @ 0x140693800 (IoReplacePartitionUnit.c)
 *     PnpRequestHwProfileChangeNotification @ 0x140694060 (PnpRequestHwProfileChangeNotification.c)
 *     IopAcquireReleaseDispatcherLock @ 0x1406951FC (IopAcquireReleaseDispatcherLock.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x14069FDD0 (PpProfileBeginHardwareProfileTransition.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x1406A0A8C (PnpSynchronizeDeviceEventQueue.c)
 *     PnpReplacePartitionUnit @ 0x1406A0B20 (PnpReplacePartitionUnit.c)
 *     PnpReallocateResources @ 0x1406A7CA0 (PnpReallocateResources.c)
 *     PiQueueDeviceRequest @ 0x1406A8DFC (PiQueueDeviceRequest.c)
 *     IopWarmEjectDevice @ 0x1406A9064 (IopWarmEjectDevice.c)
 *     IopQueryConflictList @ 0x1406AB57C (IopQueryConflictList.c)
 *     PfTCleanup @ 0x1406C46A8 (PfTCleanup.c)
 *     PopCoolingExtensionPnpNotification @ 0x1406C6880 (PopCoolingExtensionPnpNotification.c)
 *     PopDeactiveThermalRequest @ 0x1406C69DC (PopDeactiveThermalRequest.c)
 *     PopFxUnregisterDevice @ 0x1406C8A30 (PopFxUnregisterDevice.c)
 *     PopSetSystemAwayMode @ 0x1406CA0E0 (PopSetSystemAwayMode.c)
 *     PopBatteryRemove @ 0x1406CAA10 (PopBatteryRemove.c)
 *     PopPepUnregisterDevice @ 0x1406CAFC8 (PopPepUnregisterDevice.c)
 *     PopThermalZoneRemove @ 0x1406CBDD0 (PopThermalZoneRemove.c)
 *     PopDiagNextCsSleepStudySession @ 0x1406CC0BC (PopDiagNextCsSleepStudySession.c)
 *     PopDiagStopCsSleepStudySession @ 0x1406CC424 (PopDiagStopCsSleepStudySession.c)
 *     PopSleepStudyTaskClientTimerWorker @ 0x1406CEBC0 (PopSleepStudyTaskClientTimerWorker.c)
 *     PopFanRemove @ 0x1406CF6E0 (PopFanRemove.c)
 *     PspQueueDeferredWorkAndWait @ 0x1406DF064 (PspQueueDeferredWorkAndWait.c)
 *     PsWaitForAllProcesses @ 0x1406E2AF4 (PsWaitForAllProcesses.c)
 *     PspWaitForUsermodeExit @ 0x1406E2DE4 (PspWaitForUsermodeExit.c)
 *     RawQueryFsSizeInfo @ 0x1406E5124 (RawQueryFsSizeInfo.c)
 *     SmProcessResizeRequest @ 0x140700B60 (SmProcessResizeRequest.c)
 *     SmProcessStatsRequest @ 0x140700C58 (SmProcessStatsRequest.c)
 *     SmStorePhysicalRequestIssue @ 0x140701150 (SmStorePhysicalRequestIssue.c)
 *     SmKmIsVolumeIoPossible @ 0x140702254 (SmKmIsVolumeIoPossible.c)
 *     SmKmSendDeviceControl @ 0x140702A78 (SmKmSendDeviceControl.c)
 *     SmKmSendUsageNotification @ 0x140702B2C (SmKmSendUsageNotification.c)
 *     SmKmStoreFileCreate @ 0x140702BF0 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x1407032F4 (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x140703384 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileWriteHeader @ 0x1407039F0 (SmKmStoreFileWriteHeader.c)
 *     IoWMIAllocateInstanceIds @ 0x140706870 (IoWMIAllocateInstanceIds.c)
 *     WmipGetSysIds @ 0x140707490 (WmipGetSysIds.c)
 *     WmipDereferenceEvent @ 0x140707C28 (WmipDereferenceEvent.c)
 *     WmipEnumerateGuids @ 0x140707E48 (WmipEnumerateGuids.c)
 *     WmipIncludeStaticNames @ 0x140707FDC (WmipIncludeStaticNames.c)
 *     WmipQueryGuidInfo @ 0x140708584 (WmipQueryGuidInfo.c)
 *     WmipUpdateDataSource @ 0x14070924C (WmipUpdateDataSource.c)
 *     WmipWaitForCollectionEnabled @ 0x1407097B8 (WmipWaitForCollectionEnabled.c)
 *     EtwpEnableDisableUMGL @ 0x140709BD0 (EtwpEnableDisableUMGL.c)
 *     EtwpUpdatePerProcessTracing @ 0x140709DA0 (EtwpUpdatePerProcessTracing.c)
 *     EtwpSetPmcProfileSource @ 0x14070C004 (EtwpSetPmcProfileSource.c)
 *     EtwSetPerformanceTraceInformation @ 0x14070CEA0 (EtwSetPerformanceTraceInformation.c)
 *     EtwDereferenceSpinLockCounters @ 0x14070F108 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x14070F15C (EtwReferenceSpinLockCounters.c)
 *     EtwpSampledProfileRunDown @ 0x140711320 (EtwpSampledProfileRunDown.c)
 *     EtwpKsrCallback @ 0x140713990 (EtwpKsrCallback.c)
 *     NtStartProfile @ 0x140720BEC (NtStartProfile.c)
 *     NtStopProfile @ 0x140720E4C (NtStopProfile.c)
 *     WheaAttemptPhysicalPageOffline @ 0x140723340 (WheaAttemptPhysicalPageOffline.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1407469E8 (CancelTimerCallbacksAndDeleteTimer.c)
 *     VhdiVerifyBootDisk @ 0x1407473A0 (VhdiVerifyBootDisk.c)
 *     AnFwFadeCompletion @ 0x140756C7C (AnFwFadeCompletion.c)
 *     VfDriverLock @ 0x140762550 (VfDriverLock.c)
 *     IovpUnloadDriver @ 0x140763AEC (IovpUnloadDriver.c)
 *     VfIrpSendSynchronousIrp @ 0x14076EB80 (VfIrpSendSynchronousIrp.c)
 *     ViPendingCompleteAfterWait @ 0x140771E98 (ViPendingCompleteAfterWait.c)
 *     ViPendingWorkerThread @ 0x140772200 (ViPendingWorkerThread.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x140775A50 (ViPoolDelayFreeTrimThreadRoutine.c)
 *     ViFilterDispatchPnp @ 0x140780B70 (ViFilterDispatchPnp.c)
 *     IopCreateArcNamesCd @ 0x1407F6A7C (IopCreateArcNamesCd.c)
 *     IopAssignBootDriveLetter @ 0x1407FAA40 (IopAssignBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x140832E04 (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x1408368E4 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x1408371D0 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x1408373B8 (SbpStartLanman.c)
 *     SbpWaitForVmbus @ 0x14083774C (SbpWaitForVmbus.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     KiFastExitThreadWait @ 0x140017F24 (KiFastExitThreadWait.c)
 *     KiRequestSoftwareInterrupt @ 0x1400233A0 (KiRequestSoftwareInterrupt.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiEndThreadCycleAccumulation @ 0x140043D60 (KiEndThreadCycleAccumulation.c)
 *     KiCommitThreadWait @ 0x1400EAB20 (KiCommitThreadWait.c)
 *     KiAbProcessContextSwitch @ 0x1400EC3E0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400ECA80 (KiDeliverApc.c)
 *     KiReadyDeferredReadyList @ 0x140112D18 (KiReadyDeferredReadyList.c)
 *     KiQueueReadyThread @ 0x1401131D0 (KiQueueReadyThread.c)
 *     KiSelectNextThread @ 0x140113E30 (KiSelectNextThread.c)
 *     KiSwapContext @ 0x140188470 (KiSwapContext.c)
 *     HvlNotifyLongSpinWait @ 0x1401E5050 (HvlNotifyLongSpinWait.c)
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
  unsigned __int8 WaitIrql; // r13
  $6E77A2FF3C783A4EBEFA8B287A08A468 *v10; // rdx
  NTSTATUS v11; // esi
  unsigned int v12; // r14d
  struct _KPRCB *CurrentPrcb; // r13
  LONGLONG v14; // r9
  unsigned __int64 v15; // rax
  unsigned __int8 v16; // di
  _KWAIT_STATUS_REGISTER v17; // al
  NTSTATUS result; // eax
  __int64 ThreadTimerDelay; // r8
  unsigned __int64 v20; // rcx
  PVOID *v21; // rcx
  unsigned __int8 v22; // al
  int v23; // eax
  int v24; // eax
  volatile unsigned __int8 DpcRoutineActive; // cl
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v27; // rcx
  volatile __int64 WaitStatus; // rdi
  unsigned __int8 v29; // si
  _KWAIT_STATUS_REGISTER v30; // al
  unsigned __int8 *v31; // rcx
  __int64 v32; // rbx
  struct _KPRCB *v33; // rbx
  __int64 v34; // rsi
  __int64 v35; // rbx
  _KTHREAD *v36; // r14
  _KTHREAD *NextThread; // r14
  _KTHREAD *v38; // rdi
  __int64 v39; // r8
  __int64 v40; // rbx
  _KTHREAD *v41; // r14
  __int64 v42; // rbx
  _KTHREAD *v43; // rsi
  __int64 v44; // r8
  _KTHREAD *v45; // r14
  signed __int32 v46[8]; // [rsp+0h] [rbp-71h] BYREF
  int v47; // [rsp+20h] [rbp-51h] BYREF
  int v48; // [rsp+24h] [rbp-4Dh] BYREF
  int v49; // [rsp+28h] [rbp-49h] BYREF
  int v50; // [rsp+2Ch] [rbp-45h] BYREF
  int v51; // [rsp+30h] [rbp-41h] BYREF
  int v52; // [rsp+34h] [rbp-3Dh] BYREF
  int v53; // [rsp+38h] [rbp-39h] BYREF
  int v54; // [rsp+3Ch] [rbp-35h] BYREF
  int v55; // [rsp+40h] [rbp-31h] BYREF
  int v56; // [rsp+44h] [rbp-2Dh] BYREF
  int v57; // [rsp+48h] [rbp-29h] BYREF
  int v58; // [rsp+4Ch] [rbp-25h] BYREF
  LONGLONG QuadPart; // [rsp+50h] [rbp-21h]
  __int64 v60; // [rsp+58h] [rbp-19h] BYREF
  __int64 v61; // [rsp+60h] [rbp-11h] BYREF
  int v62; // [rsp+68h] [rbp-9h]
  unsigned __int8 v64; // [rsp+D8h] [rbp+67h]
  unsigned __int8 v66; // [rsp+E8h] [rbp+77h]
  unsigned int Timeouta; // [rsp+F0h] [rbp+7Fh]

  v64 = WaitReason;
  CurrentThread = KeGetCurrentThread();
  v66 = _bittestandreset((signed __int32 *)&CurrentThread->116, 2u);
  if ( !v66 )
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
      v47 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v47);
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
    if ( !Alertable )
    {
      if ( CurrentThread->ApcState.UserApcPending && WaitMode )
        goto LABEL_79;
      goto LABEL_13;
    }
    v31 = &CurrentThread->Alerted[WaitMode];
    if ( *v31 )
    {
      *v31 = 0;
      LODWORD(WaitStatus) = 257;
      goto LABEL_80;
    }
    if ( WaitMode && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
      break;
    if ( CurrentThread->Alerted[0] )
    {
      CurrentThread->Alerted[0] = 0;
      LODWORD(WaitStatus) = 257;
      goto LABEL_80;
    }
LABEL_13:
    v10 = &CurrentThread->320;
    CurrentThread->WaitBlockFill6[68] = 5;
    CurrentThread->WaitReason = v64;
    v11 = 0;
    CurrentThread->ThreadLock = 0LL;
    v12 = 0;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentThread->WaitBlock[0].WaitType = 1;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].WaitKey = 0;
    CurrentThread->WaitBlock[0].Object = Object;
    if ( _interlockedbittestandset((volatile signed __int32 *)Object, 7u) )
    {
      do
      {
        if ( (++v12 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v12);
      }
      while ( (*(_DWORD *)Object & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)Object, 7u) );
      v10 = &CurrentThread->320;
    }
    if ( (*(_BYTE *)Object & 0x7F) != 2 )
    {
      if ( *((int *)Object + 1) <= 0 )
        goto LABEL_16;
      if ( (*(_BYTE *)Object & 7) == 1 )
      {
        *((_DWORD *)Object + 1) = 0;
      }
      else if ( (*(_BYTE *)Object & 0x7F) == 5 )
      {
        --*((_DWORD *)Object + 1);
      }
LABEL_20:
      _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
      CurrentThread->WaitBlockFill6[68] = 2;
      _InterlockedOr(v46, 0);
      if ( CurrentThread->ThreadLock )
      {
        v54 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&v54);
          while ( CurrentThread->ThreadLock );
        }
        CurrentThread->ThreadLock = 0LL;
      }
      v16 = CurrentThread->WaitIrql;
      v17.Flags = (unsigned __int8)CurrentThread->WaitRegister;
      if ( (v17.Flags & 0x38) == 0 )
      {
        if ( !v66 )
        {
LABEL_23:
          __writecr8(v16);
          return v11;
        }
        if ( v16 < 2u )
        {
          v32 = (__int64)CurrentPrcb->CurrentThread;
          if ( !CurrentPrcb->NextThread )
            goto LABEL_76;
          KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
          v58 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          {
            do
              KeYieldProcessorEx(&v58);
            while ( CurrentPrcb->PrcbLock );
          }
          NextThread = CurrentPrcb->NextThread;
          CurrentPrcb->NextThread = 0LL;
          _disable();
          KiEndThreadCycleAccumulation((__int64)CurrentPrcb, v32, 0LL);
          _enable();
          CurrentPrcb->CurrentThread = NextThread;
          if ( NextThread->WaitBlockFill6[68] != 1 )
            goto LABEL_113;
          goto LABEL_197;
        }
        if ( !CurrentPrcb->NextThread || CurrentPrcb->DpcRoutineActive )
          return v11;
        goto LABEL_91;
      }
      if ( (v17.Flags & 0x18) != 0 )
      {
        if ( (v17.Flags & 8) != 0 )
          _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xBu);
        v61 = 0LL;
        v55 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&v55);
          while ( CurrentPrcb->PrcbLock );
        }
        if ( !CurrentPrcb->NextThread )
          KiSelectNextThread(CurrentPrcb, &v61);
        _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
        KiReadyDeferredReadyList(CurrentPrcb, &v61);
        if ( v16 < 2u )
        {
          v32 = (__int64)CurrentPrcb->CurrentThread;
          if ( !CurrentPrcb->NextThread )
          {
LABEL_76:
            if ( (*(_DWORD *)(v32 + 116) & 0x40) == 0 )
              goto LABEL_23;
LABEL_77:
            __writecr8(1uLL);
            *(_DWORD *)(v32 + 116) &= ~0x40u;
            KiDeliverApc(0LL, 0LL, 0LL);
            goto LABEL_23;
          }
          KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
          v56 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          {
            do
              KeYieldProcessorEx(&v56);
            while ( CurrentPrcb->PrcbLock );
          }
          NextThread = CurrentPrcb->NextThread;
          CurrentPrcb->NextThread = 0LL;
          _disable();
          KiEndThreadCycleAccumulation((__int64)CurrentPrcb, v32, 0LL);
          _enable();
          CurrentPrcb->CurrentThread = NextThread;
          if ( NextThread->WaitBlockFill6[68] != 1 )
          {
LABEL_113:
            NextThread->WaitBlockFill6[68] = 2;
            *(_BYTE *)(v32 + 643) = 32;
            *(_BYTE *)(v32 + 390) = v16;
            KiQueueReadyThread(CurrentPrcb, v32);
            if ( !(unsigned __int8)KiSwapContext(v32, NextThread, v16) )
              goto LABEL_23;
            goto LABEL_77;
          }
LABEL_197:
          NextThread->ReadyTime = NextThread->ReadyTime
                                - NextThread->WaitBlock[2].SpareLong
                                + MEMORY[0xFFFFF78000000320];
          goto LABEL_113;
        }
        if ( !CurrentPrcb->NextThread || CurrentPrcb->DpcRoutineActive )
          return v11;
LABEL_91:
        KiRequestSoftwareInterrupt(CurrentPrcb, 2);
        return v11;
      }
      v35 = (__int64)CurrentPrcb->CurrentThread;
      if ( CurrentPrcb->NextThread )
      {
        KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
        v57 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&v57);
          while ( CurrentPrcb->PrcbLock );
        }
        v38 = CurrentPrcb->NextThread;
        CurrentPrcb->NextThread = 0LL;
        _disable();
        KiEndThreadCycleAccumulation((__int64)CurrentPrcb, v35, 0LL);
        _enable();
        CurrentPrcb->CurrentThread = v38;
        if ( v38->WaitBlockFill6[68] == 1 )
          v38->ReadyTime = v38->ReadyTime - v38->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
        v38->WaitBlockFill6[68] = 2;
        *(_BYTE *)(v35 + 643) = 32;
        *(_BYTE *)(v35 + 390) = 1;
        KiQueueReadyThread(CurrentPrcb, v35);
        LOBYTE(v39) = 1;
        if ( !(unsigned __int8)KiSwapContext(v35, v38, v39) )
          goto LABEL_103;
      }
      else if ( (*(_DWORD *)(v35 + 116) & 0x40) == 0 )
      {
LABEL_103:
        __writecr8(1uLL);
        KiDeliverApc(0LL, 0LL, 0LL);
        __writecr8(0LL);
        return v11;
      }
      __writecr8(1uLL);
      *(_DWORD *)(v35 + 116) &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
      goto LABEL_103;
    }
    if ( *((int *)Object + 1) > 0
      || CurrentThread == *((struct _KTHREAD **)Object + 5) && *((_BYTE *)Object + 2) == CurrentPrcb->DpcRoutineActive )
    {
      v23 = *((_DWORD *)Object + 1);
      if ( v23 == 0x80000000 )
      {
        _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
        KiFastExitThreadWait((__int64)CurrentPrcb, (__int64)CurrentThread, v66);
        RtlRaiseStatus(-1073741423);
      }
      v24 = v23 - 1;
      *((_DWORD *)Object + 1) = v24;
      if ( v24 )
        goto LABEL_20;
      CurrentThread->WaitStatus = 0LL;
      v49 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v49);
        while ( CurrentThread->ThreadLock );
      }
      CurrentThread->KernelApcDisable -= *((unsigned __int8 *)Object + 49);
      if ( CurrentPrcb->CurrentThread == CurrentThread )
        DpcRoutineActive = CurrentPrcb->DpcRoutineActive;
      else
        DpcRoutineActive = 0;
      v62 = *(_DWORD *)Object;
      BYTE2(v62) = DpcRoutineActive;
      *(_DWORD *)Object = v62;
      *((_QWORD *)Object + 5) = CurrentThread;
      if ( *((_BYTE *)Object + 48) )
      {
        *((_BYTE *)Object + 48) = 0;
        CurrentThread->WaitStatus |= 0x80uLL;
      }
      Blink = CurrentThread->MutantListHead.Blink;
      v27 = (struct _LIST_ENTRY *)((char *)Object + 24);
      if ( Blink->Flink != &CurrentThread->MutantListHead )
        __fastfail(3u);
      v27->Flink = &CurrentThread->MutantListHead;
      *((_QWORD *)Object + 4) = Blink;
      Blink->Flink = v27;
      CurrentThread->MutantListHead.Blink = v27;
      _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
      CurrentThread->WaitBlockFill6[68] = 2;
      CurrentThread->ThreadLock = 0LL;
      WaitStatus = CurrentThread->WaitStatus;
      v29 = CurrentThread->WaitIrql;
      v30.Flags = (unsigned __int8)CurrentThread->WaitRegister;
      if ( (v30.Flags & 0x38) == 0 )
      {
        if ( !v66 )
          goto LABEL_53;
        if ( v29 < 2u )
        {
          v40 = (__int64)CurrentPrcb->CurrentThread;
          if ( CurrentPrcb->NextThread )
          {
            KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
            v53 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
            {
              do
                KeYieldProcessorEx(&v53);
              while ( CurrentPrcb->PrcbLock );
            }
            v45 = CurrentPrcb->NextThread;
            CurrentPrcb->NextThread = 0LL;
            _disable();
            KiEndThreadCycleAccumulation((__int64)CurrentPrcb, v40, 0LL);
            _enable();
            CurrentPrcb->CurrentThread = v45;
            if ( v45->WaitBlockFill6[68] == 1 )
              v45->ReadyTime = v45->ReadyTime - v45->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
            v45->WaitBlockFill6[68] = 2;
            *(_BYTE *)(v40 + 643) = 32;
            *(_BYTE *)(v40 + 390) = v29;
            KiQueueReadyThread(CurrentPrcb, v40);
            if ( (unsigned __int8)KiSwapContext(v40, v45, v29) )
              goto LABEL_180;
          }
          else if ( (*(_DWORD *)(v40 + 116) & 0x40) != 0 )
          {
            goto LABEL_180;
          }
          goto LABEL_53;
        }
        if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
        {
LABEL_183:
          KiRequestSoftwareInterrupt(CurrentPrcb, 2);
          return WaitStatus;
        }
        return WaitStatus;
      }
      if ( (v30.Flags & 0x18) != 0 )
      {
        if ( (v30.Flags & 8) != 0 )
          _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xBu);
        v60 = 0LL;
        v50 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&v50);
          while ( CurrentPrcb->PrcbLock );
        }
        if ( !CurrentPrcb->NextThread )
          KiSelectNextThread(CurrentPrcb, &v60);
        _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
        KiReadyDeferredReadyList(CurrentPrcb, &v60);
        if ( v29 >= 2u )
        {
          if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
            goto LABEL_183;
        }
        else
        {
          v40 = (__int64)CurrentPrcb->CurrentThread;
          if ( CurrentPrcb->NextThread )
          {
            KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
            v51 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
            {
              do
                KeYieldProcessorEx(&v51);
              while ( CurrentPrcb->PrcbLock );
            }
            v41 = CurrentPrcb->NextThread;
            CurrentPrcb->NextThread = 0LL;
            _disable();
            KiEndThreadCycleAccumulation((__int64)CurrentPrcb, v40, 0LL);
            _enable();
            CurrentPrcb->CurrentThread = v41;
            if ( v41->WaitBlockFill6[68] == 1 )
              v41->ReadyTime = v41->ReadyTime - v41->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
            v41->WaitBlockFill6[68] = 2;
            *(_BYTE *)(v40 + 643) = 32;
            *(_BYTE *)(v40 + 390) = v29;
            KiQueueReadyThread(CurrentPrcb, v40);
            if ( (unsigned __int8)KiSwapContext(v40, v41, v29) )
            {
LABEL_180:
              __writecr8(1uLL);
              *(_DWORD *)(v40 + 116) &= ~0x40u;
              KiDeliverApc(0LL, 0LL, 0LL);
            }
          }
          else if ( (*(_DWORD *)(v40 + 116) & 0x40) != 0 )
          {
            goto LABEL_180;
          }
LABEL_53:
          __writecr8(v29);
        }
        return WaitStatus;
      }
      v42 = (__int64)CurrentPrcb->CurrentThread;
      if ( CurrentPrcb->NextThread )
      {
        KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
        v52 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&v52);
          while ( CurrentPrcb->PrcbLock );
        }
        v43 = CurrentPrcb->NextThread;
        CurrentPrcb->NextThread = 0LL;
        _disable();
        KiEndThreadCycleAccumulation((__int64)CurrentPrcb, v42, 0LL);
        _enable();
        CurrentPrcb->CurrentThread = v43;
        if ( v43->WaitBlockFill6[68] == 1 )
          v43->ReadyTime = v43->ReadyTime - v43->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
        v43->WaitBlockFill6[68] = 2;
        *(_BYTE *)(v42 + 643) = 32;
        *(_BYTE *)(v42 + 390) = 1;
        KiQueueReadyThread(CurrentPrcb, v42);
        LOBYTE(v44) = 1;
        if ( (unsigned __int8)KiSwapContext(v42, v43, v44) )
        {
LABEL_167:
          __writecr8(1uLL);
          *(_DWORD *)(v42 + 116) &= ~0x40u;
          KiDeliverApc(0LL, 0LL, 0LL);
        }
      }
      else if ( (*(_DWORD *)(v42 + 116) & 0x40) != 0 )
      {
        goto LABEL_167;
      }
      __writecr8(1uLL);
      KiDeliverApc(0LL, 0LL, 0LL);
      __writecr8(0LL);
      return WaitStatus;
    }
LABEL_16:
    v14 = QuadPart;
    v15 = QuadPart;
    if ( Timeouta == 2 )
    {
      ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
      v20 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
      v15 = QuadPart;
      if ( CurrentThread->WaitMode
        && !CurrentThread->WaitBlock[3].SpareLong
        && !CurrentThread->WaitIrql
        && !CurrentThread->ApcState.InProgressFlags
        && (_DWORD)ThreadTimerDelay )
      {
        v15 = QuadPart + ThreadTimerDelay;
      }
    }
    else
    {
      if ( !Timeouta )
        goto LABEL_38;
      if ( !QuadPart )
        goto LABEL_19;
      v20 = MEMORY[0xFFFFF78000000014];
    }
    if ( v20 > v15 )
    {
LABEL_19:
      v11 = 258;
      goto LABEL_20;
    }
LABEL_38:
    v21 = (PVOID *)*((_QWORD *)Object + 2);
    if ( *v21 != (char *)Object + 8 )
      __fastfail(3u);
    v10->WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)((char *)Object + 8);
    v10->WaitBlock[0].WaitListEntry.Blink = (struct _LIST_ENTRY *)v21;
    *v21 = v10;
    *((_QWORD *)Object + 2) = v10;
    _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    result = KiCommitThreadWait(CurrentThread, v10, Timeouta, v14);
    if ( result != 256 )
      return result;
    v66 = 0;
    v22 = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentThread->WaitIrql = v22;
  }
  CurrentThread->ApcState.UserApcPending = 1;
LABEL_79:
  LODWORD(WaitStatus) = 192;
LABEL_80:
  CurrentThread->ThreadLock = 0LL;
  v33 = KeGetCurrentPrcb();
  if ( WaitIrql >= 2u )
  {
    if ( v33->NextThread && !v33->DpcRoutineActive )
      KiRequestSoftwareInterrupt(v33, 2);
    return WaitStatus;
  }
  v34 = (__int64)v33->CurrentThread;
  if ( v33->NextThread )
  {
    KiAbProcessContextSwitch(v33->CurrentThread, 0LL);
    v48 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&v33->PrcbLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v48);
      while ( v33->PrcbLock );
    }
    v36 = v33->NextThread;
    v33->NextThread = 0LL;
    _disable();
    KiEndThreadCycleAccumulation((__int64)v33, v34, 0LL);
    _enable();
    v33->CurrentThread = v36;
    if ( v36->WaitBlockFill6[68] == 1 )
      v36->ReadyTime = v36->ReadyTime - v36->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
    v36->WaitBlockFill6[68] = 2;
    *(_BYTE *)(v34 + 643) = 32;
    *(_BYTE *)(v34 + 390) = WaitIrql;
    KiQueueReadyThread(v33, v34);
    if ( (unsigned __int8)KiSwapContext(v34, v36, WaitIrql) )
      goto LABEL_109;
  }
  else
  {
    if ( (*(_DWORD *)(v34 + 116) & 0x40) == 0 )
      goto LABEL_83;
LABEL_109:
    __writecr8(1uLL);
    *(_DWORD *)(v34 + 116) &= ~0x40u;
    KiDeliverApc(0LL, 0LL, 0LL);
  }
LABEL_83:
  __writecr8(WaitIrql);
  return WaitStatus;
}
