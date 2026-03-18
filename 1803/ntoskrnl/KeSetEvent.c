/*
 * XREFs of KeSetEvent @ 0x1400FB1C0
 * Callers:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140006430 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KiDecrementProcessStackCount @ 0x140008690 (KiDecrementProcessStackCount.c)
 *     MiFreePagedPoolPages @ 0x1400094C0 (MiFreePagedPoolPages.c)
 *     KiDetachProcess @ 0x14000A340 (KiDetachProcess.c)
 *     MiProcessWorkingSets @ 0x14000A690 (MiProcessWorkingSets.c)
 *     MiCompleteProtoPteFault @ 0x140019F00 (MiCompleteProtoPteFault.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14002D3C0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInList @ 0x14002D9F0 (MiInsertPageInList.c)
 *     MiInsertProtectedStandbyPage @ 0x14002FB90 (MiInsertProtectedStandbyPage.c)
 *     PopQueueTargetDpc @ 0x140038F50 (PopQueueTargetDpc.c)
 *     ExReferenceCallBackBlock @ 0x14003EA30 (ExReferenceCallBackBlock.c)
 *     CcWorkerThread @ 0x140043080 (CcWorkerThread.c)
 *     MiDecrementControlAreaCount @ 0x14004B160 (MiDecrementControlAreaCount.c)
 *     MiPrivateFixup @ 0x14004C8E8 (MiPrivateFixup.c)
 *     MiCopyDataPageToImagePage @ 0x14004F194 (MiCopyDataPageToImagePage.c)
 *     MiIssueHardFaultIo @ 0x140057CF4 (MiIssueHardFaultIo.c)
 *     MiFinishHardFault @ 0x140058B10 (MiFinishHardFault.c)
 *     AlpcpSignal @ 0x14006010C (AlpcpSignal.c)
 *     AlpcpSignalAndWait @ 0x1400601C0 (AlpcpSignalAndWait.c)
 *     ExpWakePushLock @ 0x140063B20 (ExpWakePushLock.c)
 *     ExNotifyWithProcessing @ 0x140072E18 (ExNotifyWithProcessing.c)
 *     WmipUnreferenceRegEntry @ 0x1400739AC (WmipUnreferenceRegEntry.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x140075758 (PopUpdateWatchdogNoWorkersEvent.c)
 *     IoAcquireRemoveLockEx @ 0x1400782B0 (IoAcquireRemoveLockEx.c)
 *     PopFxCompleteComponentActivation @ 0x140078628 (PopFxCompleteComponentActivation.c)
 *     MiQueuePageAccessLog @ 0x14007A164 (MiQueuePageAccessLog.c)
 *     PfSnRemoveProcessTrace @ 0x14007A58C (PfSnRemoveProcessTrace.c)
 *     MiEmptyPageAccessLog @ 0x14007A620 (MiEmptyPageAccessLog.c)
 *     PfpReturnAccessBuffer @ 0x14007ACB8 (PfpReturnAccessBuffer.c)
 *     MiFlushAllHintedStorePages @ 0x14007FCDC (MiFlushAllHintedStorePages.c)
 *     MiWorkingSetManager @ 0x1400807C8 (MiWorkingSetManager.c)
 *     MiStoreUpdateMemoryConditions @ 0x140081410 (MiStoreUpdateMemoryConditions.c)
 *     MiWakeModifiedPageWriter @ 0x140081C4C (MiWakeModifiedPageWriter.c)
 *     MmStoreFlushOutstandingEvictions @ 0x1400837DC (MmStoreFlushOutstandingEvictions.c)
 *     CcCanIWrite @ 0x140089AA0 (CcCanIWrite.c)
 *     ?SmCompressContextQueueEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x14008C980 (-SmCompressContextQueueEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_S.c)
 *     PfFileInfoNotify @ 0x14008D1A0 (PfFileInfoNotify.c)
 *     PfSnReferenceProcessTrace @ 0x14008DE70 (PfSnReferenceProcessTrace.c)
 *     PfpEventHandleFullBuffer @ 0x14008E910 (PfpEventHandleFullBuffer.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x14008E990 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x140090488 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400906FC (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmIoRequestComplete @ 0x1400914A8 (SmIoRequestComplete.c)
 *     SmFpFree @ 0x140091540 (SmFpFree.c)
 *     SmKmStoreHelperWorker @ 0x1400969F0 (SmKmStoreHelperWorker.c)
 *     SmKmStoreHelperSendCommand @ 0x140097C0C (SmKmStoreHelperSendCommand.c)
 *     CcPrepareMdlWrite @ 0x140098000 (CcPrepareMdlWrite.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140099390 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140099EC4 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreDeleteWhenEmptyWorker @ 0x14009ACC0 (SmKmStoreDeleteWhenEmptyWorker.c)
 *     CcPurgeAndClearCacheSection @ 0x14009ADF4 (CcPurgeAndClearCacheSection.c)
 *     ExpUnblockPushLock @ 0x1400A20F4 (ExpUnblockPushLock.c)
 *     ExfReleaseRundownProtection @ 0x1400A6260 (ExfReleaseRundownProtection.c)
 *     ExReleaseRundownProtectionCacheAware @ 0x1400A9BA0 (ExReleaseRundownProtectionCacheAware.c)
 *     KiRequestProcessInSwap @ 0x1400AA620 (KiRequestProcessInSwap.c)
 *     MiDeleteCloneDescriptor @ 0x1400ADA5C (MiDeleteCloneDescriptor.c)
 *     MiDecrementCloneHeaderCount @ 0x1400ADB28 (MiDecrementCloneHeaderCount.c)
 *     IoReleaseRemoveLockEx @ 0x1400BA4B0 (IoReleaseRemoveLockEx.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1400BC2F8 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x1400C32F0 (KiBalanceSetManagerDeferredRoutine.c)
 *     ExpPartitionCreateThreadIfNecessary @ 0x1400C40C4 (ExpPartitionCreateThreadIfNecessary.c)
 *     SmKmGenericCompletion @ 0x1400C45E0 (SmKmGenericCompletion.c)
 *     MiStoreSetEvictPageFile @ 0x1400C519C (MiStoreSetEvictPageFile.c)
 *     CcNotifyWriteBehindInternal @ 0x1400C525C (CcNotifyWriteBehindInternal.c)
 *     MiFreeExcessSegments @ 0x1400C6548 (MiFreeExcessSegments.c)
 *     LZNT1DecompressChunkWorkItem @ 0x1400C7230 (LZNT1DecompressChunkWorkItem.c)
 *     SepRmCallLsa @ 0x1400C7970 (SepRmCallLsa.c)
 *     PnpUnlockDeviceActionQueue @ 0x1400C8910 (PnpUnlockDeviceActionQueue.c)
 *     ExpEnumerateCallback @ 0x1400CC950 (ExpEnumerateCallback.c)
 *     IopCancelIrpsInCurrentThreadListSpecialApc @ 0x1400CCBF0 (IopCancelIrpsInCurrentThreadListSpecialApc.c)
 *     CmpLazyFlushDpcRoutine @ 0x1400CDA50 (CmpLazyFlushDpcRoutine.c)
 *     MiReclaimSystemVa @ 0x1400CEC0C (MiReclaimSystemVa.c)
 *     ExpWorkQueueManagerReaperTimer @ 0x1400D2060 (ExpWorkQueueManagerReaperTimer.c)
 *     ?SmpFlushStorePages@@YAXPEAX@Z @ 0x1400D2C30 (-SmpFlushStorePages@@YAXPEAX@Z.c)
 *     EtwpSwitchBuffer @ 0x1400D40D0 (EtwpSwitchBuffer.c)
 *     MiDecreaseAvailablePages @ 0x1400D5664 (MiDecreaseAvailablePages.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     MiAllocatePagedPoolPages @ 0x1400D9750 (MiAllocatePagedPoolPages.c)
 *     CcDeleteSharedCacheMap @ 0x1400DAF00 (CcDeleteSharedCacheMap.c)
 *     CcUninitializeCacheMap @ 0x1400DCA00 (CcUninitializeCacheMap.c)
 *     CcWriteBehindInternal @ 0x1400DE8B0 (CcWriteBehindInternal.c)
 *     CcFlushCachePriv @ 0x1400DEE80 (CcFlushCachePriv.c)
 *     CcInitializeCacheMapEx @ 0x1400DF8F0 (CcInitializeCacheMapEx.c)
 *     CcDereferencePartition @ 0x1400E07B8 (CcDereferencePartition.c)
 *     CcUnpinFileDataEx @ 0x1400E23F0 (CcUnpinFileDataEx.c)
 *     MiInsertUnusedSubsection @ 0x1400E41E4 (MiInsertUnusedSubsection.c)
 *     MiCheckControlArea @ 0x1400E5110 (MiCheckControlArea.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1400E7480 (MiUnlinkNodeLargePageHelper.c)
 *     NtSetInformationFile @ 0x1400ECB00 (NtSetInformationFile.c)
 *     MiFinishVadDeletion @ 0x1400F0F10 (MiFinishVadDeletion.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1400F4000 (NtWaitForWorkViaWorkerFactory.c)
 *     IopCompleteRequest @ 0x1400F9010 (IopCompleteRequest.c)
 *     KiReadyThread @ 0x1400FB8E0 (KiReadyThread.c)
 *     CcMapAndCopyInToCache @ 0x140112290 (CcMapAndCopyInToCache.c)
 *     MiResolveTransitionFault @ 0x140119A70 (MiResolveTransitionFault.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 *     CcPinFileData @ 0x14011C510 (CcPinFileData.c)
 *     CcFreeVirtualAddress @ 0x14011D860 (CcFreeVirtualAddress.c)
 *     MiInsertLargePageInNodeListHelper @ 0x140122680 (MiInsertLargePageInNodeListHelper.c)
 *     MiIncreaseAvailablePages @ 0x140122A90 (MiIncreaseAvailablePages.c)
 *     ExpQueueWorkItem @ 0x140125F10 (ExpQueueWorkItem.c)
 *     ExpWorkerThread @ 0x1401261B0 (ExpWorkerThread.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x1401346A0 (FsRtlAcquireFileForModWriteEx.c)
 *     MiWriteComplete @ 0x140134890 (MiWriteComplete.c)
 *     CcPostWorkQueueAsyncRead @ 0x1401394C4 (CcPostWorkQueueAsyncRead.c)
 *     PnpDeviceActionWorker @ 0x140145DC0 (PnpDeviceActionWorker.c)
 *     CcDeleteBcbs @ 0x14014C85C (CcDeleteBcbs.c)
 *     PnpRemoveDeviceActionRequests @ 0x14014D264 (PnpRemoveDeviceActionRequests.c)
 *     PopUnregisterPowerSettingCallback @ 0x14014D33C (PopUnregisterPowerSettingCallback.c)
 *     MiFlushAllPagesWorker @ 0x14014D944 (MiFlushAllPagesWorker.c)
 *     MiFinishResume @ 0x14014F670 (MiFinishResume.c)
 *     MiProcessDereferenceList @ 0x140153094 (MiProcessDereferenceList.c)
 *     PopTimestampTargetProcessor @ 0x140156010 (PopTimestampTargetProcessor.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x140156204 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopBatteryWakeDpc @ 0x140156240 (PopBatteryWakeDpc.c)
 *     PfpScenCtxWaiterTimedOut @ 0x14015627C (PfpScenCtxWaiterTimedOut.c)
 *     PsDispatchIumService @ 0x14015CBE4 (PsDispatchIumService.c)
 *     PnpUnlockMountableDevice @ 0x14015E4C8 (PnpUnlockMountableDevice.c)
 *     PnpProcessWatchdogWorkItem @ 0x14015F108 (PnpProcessWatchdogWorkItem.c)
 *     VfPoolDelayFreeIfPossible @ 0x140160990 (VfPoolDelayFreeIfPossible.c)
 *     PopFxReleasePowerIrp @ 0x1401665F4 (PopFxReleasePowerIrp.c)
 *     PopIrpWorker @ 0x140166750 (PopIrpWorker.c)
 *     PopPepUpdateConstraints @ 0x140166FE0 (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x14016C020 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     MiQueueWorkingSetRequest @ 0x14016D3A0 (MiQueueWorkingSetRequest.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14016D9F0 (MiAllocatePfnRepurposeLogDispatch.c)
 *     PopUserPresentSet @ 0x14016DB68 (PopUserPresentSet.c)
 *     MiZeroNodePages @ 0x14016FC80 (MiZeroNodePages.c)
 *     MiUpdateAvailableEvents @ 0x1401700A4 (MiUpdateAvailableEvents.c)
 *     MiSignalNonPagedPoolWatchers @ 0x140170180 (MiSignalNonPagedPoolWatchers.c)
 *     ExCompareExchangeCallBack @ 0x1401720FC (ExCompareExchangeCallBack.c)
 *     KeBalanceSetManager @ 0x1401777E0 (KeBalanceSetManager.c)
 *     MiZeroLargePages @ 0x14017B634 (MiZeroLargePages.c)
 *     MiReassessZeroThreads @ 0x14017BC60 (MiReassessZeroThreads.c)
 *     MiModifiedPageWriter @ 0x14017CFC0 (MiModifiedPageWriter.c)
 *     MiSyncCommitSignals @ 0x14017DDB4 (MiSyncCommitSignals.c)
 *     MiStoreEvictThread @ 0x14017ED50 (MiStoreEvictThread.c)
 *     PnpCompleteSystemStartProcess @ 0x14018047C (PnpCompleteSystemStartProcess.c)
 *     WheapAddErrorSource @ 0x140182110 (WheapAddErrorSource.c)
 *     PopPropogateCoolingChange @ 0x14018238C (PopPropogateCoolingChange.c)
 *     EtwpLoggerDpc @ 0x1401865F0 (EtwpLoggerDpc.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x14021F91C (CcCancelMmWaitForUninitializeCacheMap.c)
 *     CcPostDeferredWrites @ 0x140220050 (CcPostDeferredWrites.c)
 *     CcDeletePartition @ 0x140220D68 (CcDeletePartition.c)
 *     FsFilterFreeCompletionStack @ 0x140225D98 (FsFilterFreeCompletionStack.c)
 *     FsRtlStackOverflowRead @ 0x140226670 (FsRtlStackOverflowRead.c)
 *     IopFreeBackpocketIrp @ 0x140232678 (IopFreeBackpocketIrp.c)
 *     IopFreeReserveIrp @ 0x1402326E8 (IopFreeReserveIrp.c)
 *     PnprQuiesce @ 0x14023CF5C (PnprQuiesce.c)
 *     PnpDiagnosticCompletionRoutine @ 0x14023DC60 (PnpDiagnosticCompletionRoutine.c)
 *     KeRetryOutswapProcess @ 0x140240590 (KeRetryOutswapProcess.c)
 *     KiConnectSecondaryInterrupt @ 0x140244B14 (KiConnectSecondaryInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x140244C70 (KiDisconnectSecondaryInterrupt.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1402494EC (KiInvokeInterruptServiceRoutine.c)
 *     KiPassiveIsrWatchdog @ 0x140249750 (KiPassiveIsrWatchdog.c)
 *     KiProcessDisconnectList @ 0x140249788 (KiProcessDisconnectList.c)
 *     KiSignalWaitDisconnectLock @ 0x140249860 (KiSignalWaitDisconnectLock.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x140249890 (KiSynchronizePassiveInterruptExecution.c)
 *     KiBlockAndActivateUmsThread @ 0x14024C4FC (KiBlockAndActivateUmsThread.c)
 *     MiProcessingPageExtendComplete @ 0x14024F9CC (MiProcessingPageExtendComplete.c)
 *     MiQueueControlAreaDelete @ 0x14024FCB0 (MiQueueControlAreaDelete.c)
 *     MiDecrementVadsBeingDeleted @ 0x1402506AC (MiDecrementVadsBeingDeleted.c)
 *     MiMakeOutswappedPageResident @ 0x140250B10 (MiMakeOutswappedPageResident.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140251154 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x140251398 (MiReleaseCommitForResetPages.c)
 *     MiZeroPageFile @ 0x140252420 (MiZeroPageFile.c)
 *     MiFlushAllFilesystemPages @ 0x140255BA8 (MiFlushAllFilesystemPages.c)
 *     MiPfCompleteCoalescedIo @ 0x140257C70 (MiPfCompleteCoalescedIo.c)
 *     MiPfIssueCoalescedSupport @ 0x140257EB0 (MiPfIssueCoalescedSupport.c)
 *     MiMarkMdlComplete @ 0x1402582B8 (MiMarkMdlComplete.c)
 *     MiObtainFreePages @ 0x140259A20 (MiObtainFreePages.c)
 *     MiFlushComplete @ 0x14025B3B0 (MiFlushComplete.c)
 *     MiFreeOverlappedFlushEntry @ 0x14025B4C8 (MiFreeOverlappedFlushEntry.c)
 *     MiAttemptPageFileReductionApc @ 0x14025EDD0 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x14025F6C4 (MiFinishPageFileExtension.c)
 *     MiIrpCompletionApcRoutine @ 0x14025F930 (MiIrpCompletionApcRoutine.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x14025FE80 (MiTrimUnusedPageFileRegionsApc.c)
 *     MiPageNotZero @ 0x140265130 (MiPageNotZero.c)
 *     MiDeletePartitionResources @ 0x14026E874 (MiDeletePartitionResources.c)
 *     MiReturnCrossPartitionCharges @ 0x14026FC54 (MiReturnCrossPartitionCharges.c)
 *     NtSignalAndWaitForSingleObject @ 0x140270CA0 (NtSignalAndWaitForSingleObject.c)
 *     PopDeviceIdleCompletion @ 0x1402748E0 (PopDeviceIdleCompletion.c)
 *     PopFxCompleteComponentPerfState @ 0x140274F44 (PopFxCompleteComponentPerfState.c)
 *     PopQueueDirectedDripsWork @ 0x140278830 (PopQueueDirectedDripsWork.c)
 *     PopUpdateWakeSourceWorker @ 0x140278980 (PopUpdateWakeSourceWorker.c)
 *     PopBatteryIrpComplete @ 0x140279000 (PopBatteryIrpComplete.c)
 *     PopPepStartDeviceUnregisterActivity @ 0x14027A490 (PopPepStartDeviceUnregisterActivity.c)
 *     ?SmCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402A2A64 (-SmCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1402A8C70 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x1402A8D50 (-SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z.c)
 *     EtwSendTraceBuffer @ 0x1402AD5A0 (EtwSendTraceBuffer.c)
 *     EtwpThreadRundownApc @ 0x1402B2080 (EtwpThreadRundownApc.c)
 *     EtwpCovSampCaptureCleanupLookasides @ 0x1402B4BB8 (EtwpCovSampCaptureCleanupLookasides.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x1402B51D8 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureQueueDpc @ 0x1402B5240 (EtwpCovSampCaptureQueueDpc.c)
 *     EtwpCovSampCaptureRebalanceDpc @ 0x1402B52A0 (EtwpCovSampCaptureRebalanceDpc.c)
 *     ExNotifyBootDeviceRemoval @ 0x1402B8660 (ExNotifyBootDeviceRemoval.c)
 *     ExRegisterBootDevice @ 0x1402B86B0 (ExRegisterBootDevice.c)
 *     ExReleaseRundownProtectionEx @ 0x1402BA5D0 (ExReleaseRundownProtectionEx.c)
 *     WheapProcessWorkQueueItem @ 0x1402BED90 (WheapProcessWorkQueueItem.c)
 *     EmpReleasePagingReference @ 0x14046FD18 (EmpReleasePagingReference.c)
 *     PopFlushVolumeWorker @ 0x1404708F0 (PopFlushVolumeWorker.c)
 *     PopHandleWakeSources @ 0x140470DF8 (PopHandleWakeSources.c)
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 *     PopSystemIrpCompletion @ 0x1404756C0 (PopSystemIrpCompletion.c)
 *     ExpSetSwappingKernelApc @ 0x140476430 (ExpSetSwappingKernelApc.c)
 *     PfpScenCtxPrefetchStateSet @ 0x1404764FC (PfpScenCtxPrefetchStateSet.c)
 *     PopTransitionToSleep @ 0x140476910 (PopTransitionToSleep.c)
 *     MmDuplicateMemory @ 0x140476A94 (MmDuplicateMemory.c)
 *     PopEndMirroring @ 0x140476E00 (PopEndMirroring.c)
 *     PfpScenCtxScenarioSet @ 0x140478314 (PfpScenCtxScenarioSet.c)
 *     PnprInitiateReplaceOperation @ 0x140482E4C (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x140484180 (PnprQuiesceWorker.c)
 *     MiShutdownSystem @ 0x1404850A8 (MiShutdownSystem.c)
 *     MiZeroAllPageFiles @ 0x140485208 (MiZeroAllPageFiles.c)
 *     PopGracefulShutdown @ 0x140485D40 (PopGracefulShutdown.c)
 *     PopBuildDeviceNotifyListWatchdog @ 0x140486D70 (PopBuildDeviceNotifyListWatchdog.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140486D90 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x140493708 (EtwpRealtimeDisconnectAllConsumers.c)
 *     EtwpFreeLoggerContext @ 0x140493884 (EtwpFreeLoggerContext.c)
 *     IopMountVolume @ 0x140493C24 (IopMountVolume.c)
 *     IopAcquireFileObjectLock @ 0x1404941E4 (IopAcquireFileObjectLock.c)
 *     CmpWakeWriteQueueWaiters @ 0x14049A7E4 (CmpWakeWriteQueueWaiters.c)
 *     CmLoadAppKey @ 0x14049C2A8 (CmLoadAppKey.c)
 *     IopQueryXxxInformation @ 0x1404A51B8 (IopQueryXxxInformation.c)
 *     SPCallServerHandleQueryPolicy @ 0x1404AFD24 (SPCallServerHandleQueryPolicy.c)
 *     CmNotifyRunDown @ 0x1404B9558 (CmNotifyRunDown.c)
 *     MiPfExecuteReadList @ 0x1404BC628 (MiPfExecuteReadList.c)
 *     AlpcpCompleteDispatchMessage @ 0x1404CD0A0 (AlpcpCompleteDispatchMessage.c)
 *     NtQueryVolumeInformationFile @ 0x1404D0BE0 (NtQueryVolumeInformationFile.c)
 *     NtWriteFile @ 0x1404D10C0 (NtWriteFile.c)
 *     IopGetSetSecurityObject @ 0x1404D2090 (IopGetSetSecurityObject.c)
 *     CmpPostApc @ 0x1404E1E60 (CmpPostApc.c)
 *     CmpSignalDeferredPosts @ 0x1404E21B4 (CmpSignalDeferredPosts.c)
 *     CmpPostNotify @ 0x1404E2F90 (CmpPostNotify.c)
 *     NtLockFile @ 0x1404E39A0 (NtLockFile.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1404F76D8 (ExpWnfNotifyNameSubscribers.c)
 *     PfGetCompletedTrace @ 0x14050FFC4 (PfGetCompletedTrace.c)
 *     PfTTraceListAdd @ 0x140510250 (PfTTraceListAdd.c)
 *     PiUEventDereferenceEventEntry @ 0x14051EC78 (PiUEventDereferenceEventEntry.c)
 *     PnpDeviceEventWorker @ 0x14051FE70 (PnpDeviceEventWorker.c)
 *     PnpCompleteDeviceEvent @ 0x14052021C (PnpCompleteDeviceEvent.c)
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 *     PfSnEndTrace @ 0x140528AE4 (PfSnEndTrace.c)
 *     PfTReplaceCurrentBuffer @ 0x140529F80 (PfTReplaceCurrentBuffer.c)
 *     NtReadFile @ 0x14052A160 (NtReadFile.c)
 *     MiInSwapStoreWorker @ 0x14052CFF0 (MiInSwapStoreWorker.c)
 *     ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x14052D700 (-TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x1405325F8 (PspEvaluateAndNotifyEmptyJob.c)
 *     CmpCompleteUnloadKey @ 0x14054D8E8 (CmpCompleteUnloadKey.c)
 *     NtSetEvent @ 0x140552690 (NtSetEvent.c)
 *     IopCancelIrpsInCurrentThreadListApcRoutine @ 0x14055C600 (IopCancelIrpsInCurrentThreadListApcRoutine.c)
 *     RtlDecompressFragmentLZNT1 @ 0x14056D1C0 (RtlDecompressFragmentLZNT1.c)
 *     ExpWnfNotifySubscription @ 0x140570A70 (ExpWnfNotifySubscription.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1405786F0 (PiDrvDbLoadNodeWorkerCallback.c)
 *     AlpcpTrackPortReferences @ 0x14057D4A4 (AlpcpTrackPortReferences.c)
 *     IopTrackLink @ 0x14057DFD0 (IopTrackLink.c)
 *     RtlRunOnceComplete @ 0x14057EF60 (RtlRunOnceComplete.c)
 *     EtwpSynchronizeWithLogger @ 0x140580194 (EtwpSynchronizeWithLogger.c)
 *     NtWriteFileGather @ 0x140580364 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1405810E8 (NtReadFileScatter.c)
 *     CmpGetVolumeClusterSizeCompletion @ 0x140581A40 (CmpGetVolumeClusterSizeCompletion.c)
 *     NtNotifyChangeSession @ 0x140582640 (NtNotifyChangeSession.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x140584AF0 (PfSnTracingStateExWorkerRoutine.c)
 *     EtwpStopLoggerInstance @ 0x140587E20 (EtwpStopLoggerInstance.c)
 *     EtwpQueueNotification @ 0x14058E080 (EtwpQueueNotification.c)
 *     EtwpRealtimeUpdateConsumers @ 0x14058E8A0 (EtwpRealtimeUpdateConsumers.c)
 *     EtwpLogger @ 0x14058EB20 (EtwpLogger.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x140592504 (EtwpRealtimeInjectEtwBuffer.c)
 *     NtQueryInformationFile @ 0x140596F20 (NtQueryInformationFile.c)
 *     IopSynchronousServiceTail @ 0x14059D990 (IopSynchronousServiceTail.c)
 *     CmpDeleteKeyObject @ 0x14059F520 (CmpDeleteKeyObject.c)
 *     IopXxxControlFile @ 0x1405A1A20 (IopXxxControlFile.c)
 *     IopCloseFile @ 0x1405B12E0 (IopCloseFile.c)
 *     RtlDecompressBufferLZNT1 @ 0x1405C4600 (RtlDecompressBufferLZNT1.c)
 *     PopFxUnregisterDeviceOrWait @ 0x1405C81EC (PopFxUnregisterDeviceOrWait.c)
 *     PiUEventHandleVetoEvent @ 0x1405E5ED8 (PiUEventHandleVetoEvent.c)
 *     IoSetInformation @ 0x1405E7BF0 (IoSetInformation.c)
 *     EtwpDisassociateConsumer @ 0x1405E8564 (EtwpDisassociateConsumer.c)
 *     PopCompleteAction @ 0x1405EBB9C (PopCompleteAction.c)
 *     PfGenerateTrace @ 0x1405EC870 (PfGenerateTrace.c)
 *     MiDereferenceSessionFinal @ 0x1405ECD70 (MiDereferenceSessionFinal.c)
 *     WmipQueueNotification @ 0x1405ED690 (WmipQueueNotification.c)
 *     PopFinalizeWakeInfo @ 0x1405EDF50 (PopFinalizeWakeInfo.c)
 *     PopReleaseTransitionLock @ 0x1405EFA48 (PopReleaseTransitionLock.c)
 *     IopInvalidateVolumesForDevice @ 0x1405F212C (IopInvalidateVolumesForDevice.c)
 *     IopLoadUnloadDriver @ 0x1405F6C00 (IopLoadUnloadDriver.c)
 *     WmipAddDataSource @ 0x1405FE7D0 (WmipAddDataSource.c)
 *     WmipReleaseCollectionEnabled @ 0x140605A9C (WmipReleaseCollectionEnabled.c)
 *     IopDestroyActiveConnectBlock @ 0x14060C0EC (IopDestroyActiveConnectBlock.c)
 *     MmSetSessionObjectIoEvent @ 0x14061364C (MmSetSessionObjectIoEvent.c)
 *     PopUserPresentSetWorker @ 0x1406145B0 (PopUserPresentSetWorker.c)
 *     ArbArbiterHandler @ 0x140617B90 (ArbArbiterHandler.c)
 *     ArbBuildAssignmentOrdering @ 0x14061888C (ArbBuildAssignmentOrdering.c)
 *     PoInitHiberServices @ 0x140624CC8 (PoInitHiberServices.c)
 *     PopNotifyPolicyDevice @ 0x140626B50 (PopNotifyPolicyDevice.c)
 *     PfTLoggingWorker @ 0x14062C1C0 (PfTLoggingWorker.c)
 *     CmpFinishSystemHivesLoad @ 0x14062E4B0 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveThread @ 0x140632C90 (CmpLoadHiveThread.c)
 *     MUIRegistrySystemRoutine @ 0x1406360F0 (MUIRegistrySystemRoutine.c)
 *     MmStoreRegister @ 0x14063BBC8 (MmStoreRegister.c)
 *     MiInsertPageFileInList @ 0x14063C7A8 (MiInsertPageFileInList.c)
 *     PopThermalWorker @ 0x140643860 (PopThermalWorker.c)
 *     PopFanWorker @ 0x140643C80 (PopFanWorker.c)
 *     ExpPartitionCreatePool @ 0x140647230 (ExpPartitionCreatePool.c)
 *     CmpWaitForHiveMount @ 0x140647A90 (CmpWaitForHiveMount.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x140649214 (IopAcquireReleaseConnectLockInternal.c)
 *     CmpInitializeSystemHivesLoad @ 0x1406498CC (CmpInitializeSystemHivesLoad.c)
 *     WheapEtwEnableCallback @ 0x140653460 (WheapEtwEnableCallback.c)
 *     CmThawRegistry @ 0x1406F6B0C (CmThawRegistry.c)
 *     CmpPostApcRunDown @ 0x140701440 (CmpPostApcRunDown.c)
 *     DbgkpCloseObject @ 0x14070E4D0 (DbgkpCloseObject.c)
 *     DbgkpQueueMessage @ 0x14070F184 (DbgkpQueueMessage.c)
 *     DbgkpSetProcessDebugObject @ 0x14070F46C (DbgkpSetProcessDebugObject.c)
 *     DbgkpWakeTarget @ 0x14070F788 (DbgkpWakeTarget.c)
 *     NtDebugContinue @ 0x14070FBD8 (NtDebugContinue.c)
 *     DbgkRegisterErrorPort @ 0x140710660 (DbgkRegisterErrorPort.c)
 *     DbgkpLkmdSnapThreadApc @ 0x140712020 (DbgkpLkmdSnapThreadApc.c)
 *     FsRtlpOplockWaitCompleteRoutine @ 0x1407158C0 (FsRtlpOplockWaitCompleteRoutine.c)
 *     IopAllocateIrpCleanup @ 0x140719344 (IopAllocateIrpCleanup.c)
 *     IopConnectLinkTrackingPort @ 0x1407198D0 (IopConnectLinkTrackingPort.c)
 *     IopExceptionCleanup @ 0x140719A28 (IopExceptionCleanup.c)
 *     IopSendMessageToTrackService @ 0x14071A854 (IopSendMessageToTrackService.c)
 *     IoVerifyVolume @ 0x14071C9D0 (IoVerifyVolume.c)
 *     PnpShutdownDevices @ 0x140722CB0 (PnpShutdownDevices.c)
 *     IopAcquireReleaseDispatcherLock @ 0x140726CAC (IopAcquireReleaseDispatcherLock.c)
 *     PnpReplacePartitionUnit @ 0x140732D40 (PnpReplacePartitionUnit.c)
 *     IopWarmEjectDevice @ 0x14073C044 (IopWarmEjectDevice.c)
 *     KeUpdateUmsThreadState @ 0x140742D5C (KeUpdateUmsThreadState.c)
 *     PfTCleanup @ 0x14075C578 (PfTCleanup.c)
 *     PfpParametersWatcher @ 0x14075CDD0 (PfpParametersWatcher.c)
 *     PopFxUnregisterDevice @ 0x140760910 (PopFxUnregisterDevice.c)
 *     PopDirectedDripsProcessWork @ 0x140761C98 (PopDirectedDripsProcessWork.c)
 *     PopBatteryReadTag @ 0x14076402C (PopBatteryReadTag.c)
 *     TtmiCloseEventQueue @ 0x1407744F8 (TtmiCloseEventQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x1407748B0 (TtmiWriteEventToSingleQueue.c)
 *     PspDeferredWorkerRoutine @ 0x140779220 (PspDeferredWorkerRoutine.c)
 *     PspDeleteServerSiloGlobals @ 0x1407792DC (PspDeleteServerSiloGlobals.c)
 *     PsIsVsmEnclaveTerminated @ 0x14077FB70 (PsIsVsmEnclaveTerminated.c)
 *     PsTerminateVsmEnclave @ 0x14077FC80 (PsTerminateVsmEnclave.c)
 *     PspReleaseEnclaveThread @ 0x14077FF00 (PspReleaseEnclaveThread.c)
 *     RtlpCtSelfSubscribe @ 0x14078AE0C (RtlpCtSelfSubscribe.c)
 *     SmcCacheAdd @ 0x14079F13C (SmcCacheAdd.c)
 *     SmcCacheDelete @ 0x14079F2D0 (SmcCacheDelete.c)
 *     EtwpCovSampCaptureContextSetPaused @ 0x1407B3640 (EtwpCovSampCaptureContextSetPaused.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1407B3E20 (EtwpCovSampCaptureWorkerThread.c)
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x1407B6098 (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 *     ExpPartitionDestroy @ 0x1407C56B0 (ExpPartitionDestroy.c)
 *     CMFSystemThreadRoutine @ 0x1407C92E0 (CMFSystemThreadRoutine.c)
 *     WheapAttemptPhysicalPageOfflineWorker @ 0x1407CAEC0 (WheapAttemptPhysicalPageOfflineWorker.c)
 *     SbpVmbusNotificationHandler @ 0x1407F61D0 (SbpVmbusNotificationHandler.c)
 *     KdpTimeSlipWork @ 0x140805A90 (KdpTimeSlipWork.c)
 *     ViIrpSynchronousCompletionRoutine @ 0x14081DF40 (ViIrpSynchronousCompletionRoutine.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x1408210A8 (ViPendingQueuePassiveLevelCompletion.c)
 *     ViFilterRemoveNotificationCompletion @ 0x140830650 (ViFilterRemoveNotificationCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x1408404D0 (AnFwpFadeAnimationTimer.c)
 *     sub_14087DE84 @ 0x14087DE84 (sub_14087DE84.c)
 *     MiInitializePagedPoolEvents @ 0x14089CF34 (MiInitializePagedPoolEvents.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x14002F920 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x140084FB0 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1400FB620 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400FD2A0 (KiTryUnwaitThread.c)
 *     KeIsThreadRunning @ 0x14023FDC4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1402AEBAC (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KeSetEvent(PRKEVENT Event, KPRIORITY Increment, BOOLEAN Wait)
{
  char CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rbp
  LONG SignalState; // esi
  LIST_ENTRY *p_WaitListHead; // r12
  struct _KEVENT *Flink; // r13
  struct _KEVENT *v12; // rax
  __int64 v13; // r12
  struct _KEVENT **v14; // rcx
  char v15; // al
  bool v16; // zf
  struct _KEVENT *v17; // rdx
  char Blink; // al
  __int64 v19; // r8
  _QWORD *v20; // rdx
  __int64 v21; // rcx
  char v22; // al
  int v23; // r9d
  __int64 *v24; // r8
  _QWORD *v25; // r8
  __int64 v26; // rcx
  char v27; // al
  int v28; // r10d
  struct _KEVENT **v29; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v31; // r9
  unsigned __int8 v32; // al
  __int64 v33; // rdx
  __int64 v34; // r9
  struct _KEVENT *v35; // [rsp+30h] [rbp-58h]
  struct _KPRCB *v36; // [rsp+30h] [rbp-58h]
  _KTHREAD *CurrentThread; // [rsp+38h] [rbp-50h]
  struct _KPRCB *v38; // [rsp+38h] [rbp-50h]
  _KTHREAD *v39; // [rsp+40h] [rbp-48h]
  int v40; // [rsp+90h] [rbp+8h]
  __int64 v41; // [rsp+90h] [rbp+8h]
  __int64 v42; // [rsp+90h] [rbp+8h]

  if ( (Event->Header.Type & 0x7F) != 0 )
  {
    v40 = 0;
LABEL_3:
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    KiAcquireKobjectLockSafe(&Event->Header.Lock);
    SignalState = Event->Header.SignalState;
    Event->Header.SignalState = 1;
    if ( SignalState )
    {
LABEL_6:
      _InterlockedAnd(&Event->Header.Lock, 0xFFFFFF7F);
      KiExitDispatcher((_DWORD)CurrentPrcb, Wait != 0 ? 3 : 0, 1, Increment, CurrentIrql);
      return SignalState;
    }
    p_WaitListHead = &Event->Header.WaitListHead;
    Flink = (struct _KEVENT *)Event->Header.WaitListHead.Flink;
    if ( !v40 )
    {
      if ( Flink == (struct _KEVENT *)p_WaitListHead )
        goto LABEL_6;
      while ( 1 )
      {
        v12 = *(struct _KEVENT **)&Flink->Header.Lock;
        v13 = (__int64)Flink;
        Flink = v12;
        v14 = *(struct _KEVENT ***)(v13 + 8);
        if ( v12->Header.WaitListHead.Flink != (struct _LIST_ENTRY *)v13 || *v14 != (struct _KEVENT *)v13 )
          __fastfail(3u);
        *v14 = v12;
        v12->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v14;
        v15 = *(_BYTE *)(v13 + 16);
        if ( v15 == 1 )
        {
          if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v13, *(unsigned __int16 *)(v13 + 18), 0LL) )
          {
            v16 = Event->Header.SignalState-- == 1;
            if ( v16 )
              goto LABEL_6;
          }
        }
        else
        {
          if ( v15 == 2 )
          {
            *(_BYTE *)(v13 + 17) = 5;
            v41 = *(_QWORD *)(v13 + 24);
            *(_QWORD *)v13 = 0LL;
            KeGetCurrentIrql();
            __writecr8(2uLL);
            v36 = KeGetCurrentPrcb();
            CurrentThread = v36->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              IsThreadRunning = KeIsThreadRunning(v36->CurrentThread);
              EtwTraceEnqueueWork(v31, v13, IsThreadRunning);
            }
            KiAcquireKobjectLockSafe((volatile signed __int32 *)v41);
            v20 = (_QWORD *)(v41 + 8);
            v21 = v41;
            if ( (_QWORD *)*v20 == v20
              || *(_DWORD *)(v41 + 40) >= *(_DWORD *)(v41 + 44)
              || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v41 && CurrentThread->WaitReason == 15 )
            {
LABEL_32:
              v23 = *(_DWORD *)(v21 + 4);
              *(_DWORD *)(v21 + 4) = v23 + 1;
              v24 = *(__int64 **)(v21 + 32);
              if ( *v24 != v21 + 24 )
                __fastfail(3u);
              *(_QWORD *)v13 = v21 + 24;
              *(_QWORD *)(v13 + 8) = v24;
              *v24 = v13;
              *(_QWORD *)(v21 + 32) = v13;
              if ( !v23 && (_QWORD *)*v20 != v20 )
              {
                KiWakeOtherQueueWaiters((__int64)v36, v21);
                v21 = v41;
              }
            }
            else
            {
              v22 = KiWakeQueueWaiter((__int64)v36, v41, v13);
              v21 = v41;
              if ( !v22 )
              {
                v20 = (_QWORD *)(v41 + 8);
                goto LABEL_32;
              }
            }
            _InterlockedAnd((volatile signed __int32 *)v21, 0xFFFFFF7F);
            v16 = Event->Header.SignalState-- == 1;
            if ( v16 )
              goto LABEL_6;
            goto LABEL_52;
          }
          KiTryUnwaitThread(CurrentPrcb, v13, 256LL, 0LL);
        }
LABEL_52:
        if ( Flink == (struct _KEVENT *)&Event->Header.WaitListHead )
          goto LABEL_6;
      }
    }
    if ( Flink == (struct _KEVENT *)p_WaitListHead )
    {
LABEL_16:
      Event->Header.WaitListHead.Blink = &Event->Header.WaitListHead;
      p_WaitListHead->Flink = p_WaitListHead;
      goto LABEL_6;
    }
    while ( 1 )
    {
      v17 = Flink;
      Flink = *(struct _KEVENT **)&Flink->Header.Lock;
      v35 = v17;
      Blink = (char)v17->Header.WaitListHead.Blink;
      if ( Blink == 1 )
      {
        v19 = WORD1(v17->Header.WaitListHead.Blink);
      }
      else
      {
        if ( Blink == 2 )
        {
          BYTE1(v17->Header.WaitListHead.Blink) = 5;
          v42 = *(_QWORD *)&v17[1].Header.Lock;
          *(_QWORD *)&v17->Header.Lock = 0LL;
          KeGetCurrentIrql();
          __writecr8(2uLL);
          v38 = KeGetCurrentPrcb();
          v39 = v38->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v32 = KeIsThreadRunning(v38->CurrentThread);
            EtwTraceEnqueueWork(v34, v33, v32);
          }
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v42);
          v25 = (_QWORD *)(v42 + 8);
          v26 = v42;
          if ( (_QWORD *)*v25 == v25
            || *(_DWORD *)(v42 + 40) >= *(_DWORD *)(v42 + 44)
            || v39->Queue == (_DISPATCHER_HEADER *volatile)v42 && v39->WaitReason == 15 )
          {
LABEL_55:
            v28 = *(_DWORD *)(v26 + 4);
            *(_DWORD *)(v26 + 4) = v28 + 1;
            v29 = *(struct _KEVENT ***)(v26 + 32);
            if ( *v29 != (struct _KEVENT *)(v26 + 24) )
              __fastfail(3u);
            *(_QWORD *)&v35->Header.Lock = v26 + 24;
            v35->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v29;
            *v29 = v35;
            *(_QWORD *)(v26 + 32) = v35;
            if ( !v28 && (_QWORD *)*v25 != v25 )
            {
              KiWakeOtherQueueWaiters((__int64)v38, v26);
              v26 = v42;
            }
          }
          else
          {
            v27 = KiWakeQueueWaiter((__int64)v38, v42, (__int64)v35);
            v26 = v42;
            if ( !v27 )
            {
              v25 = (_QWORD *)(v42 + 8);
              goto LABEL_55;
            }
          }
          _InterlockedAnd((volatile signed __int32 *)v26, 0xFFFFFF7F);
          goto LABEL_20;
        }
        v19 = 256LL;
      }
      KiTryUnwaitThread(CurrentPrcb, v17, v19, 0LL);
LABEL_20:
      if ( Flink == (struct _KEVENT *)p_WaitListHead )
        goto LABEL_16;
    }
  }
  if ( Event->Header.SignalState != 1 || Wait )
  {
    v40 = 1;
    goto LABEL_3;
  }
  return 1;
}
