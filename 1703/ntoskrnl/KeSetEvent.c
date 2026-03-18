/*
 * XREFs of KeSetEvent @ 0x1400DFDD0
 * Callers:
 *     MiDecrementCloneBlockReference @ 0x1400036F4 (MiDecrementCloneBlockReference.c)
 *     MmStoreFlushOutstandingEvictions @ 0x140004CEC (MmStoreFlushOutstandingEvictions.c)
 *     ?SmpFlushStorePages@@YAXPEAX@Z @ 0x140004D70 (-SmpFlushStorePages@@YAXPEAX@Z.c)
 *     MiFlushAllHintedStorePages @ 0x140004DF0 (MiFlushAllHintedStorePages.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400053B0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     MiEmptyPageAccessLog @ 0x140006990 (MiEmptyPageAccessLog.c)
 *     MiQueuePageAccessLog @ 0x140006E9C (MiQueuePageAccessLog.c)
 *     ExfReleaseRundownProtection @ 0x14000D600 (ExfReleaseRundownProtection.c)
 *     ExReleaseRundownProtectionCacheAware @ 0x14000E100 (ExReleaseRundownProtectionCacheAware.c)
 *     MiWriteComplete @ 0x140014A50 (MiWriteComplete.c)
 *     MiInsertUnusedSubsection @ 0x140016540 (MiInsertUnusedSubsection.c)
 *     SmKmStoreDeleteWhenEmptyWorker @ 0x14001ECA0 (SmKmStoreDeleteWhenEmptyWorker.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14001F550 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreHelperSendCommand @ 0x14001FD5C (SmKmStoreHelperSendCommand.c)
 *     IoReleaseRemoveLockEx @ 0x140022800 (IoReleaseRemoveLockEx.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x140022B88 (FsRtlAcquireFileForModWriteEx.c)
 *     CcPostWorkQueueAsyncRead @ 0x140023674 (CcPostWorkQueueAsyncRead.c)
 *     MiStoreUpdateMemoryConditions @ 0x140029F68 (MiStoreUpdateMemoryConditions.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14002AEB8 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x14002EEC0 (KiBalanceSetManagerDeferredRoutine.c)
 *     SmKmGenericCompletion @ 0x14002F8B0 (SmKmGenericCompletion.c)
 *     CcNotifyWriteBehindInternal @ 0x14002FDA4 (CcNotifyWriteBehindInternal.c)
 *     PnpUnlockDeviceActionQueue @ 0x140031D3C (PnpUnlockDeviceActionQueue.c)
 *     IopCancelIrpsInCurrentThreadListSpecialApc @ 0x140033350 (IopCancelIrpsInCurrentThreadListSpecialApc.c)
 *     CcPrepareMdlWrite @ 0x1400339A0 (CcPrepareMdlWrite.c)
 *     CmpLazyFlushDpcRoutine @ 0x140037910 (CmpLazyFlushDpcRoutine.c)
 *     ExpEnumerateCallback @ 0x140038B50 (ExpEnumerateCallback.c)
 *     ExpSetThreadReaperEvents @ 0x14003AC60 (ExpSetThreadReaperEvents.c)
 *     MiWakeModifiedPageWriter @ 0x14003BB18 (MiWakeModifiedPageWriter.c)
 *     PnpDeviceActionWorker @ 0x14003D340 (PnpDeviceActionWorker.c)
 *     KiDecrementProcessStackCount @ 0x14003FB0C (KiDecrementProcessStackCount.c)
 *     AlpcpSignal @ 0x14004021C (AlpcpSignal.c)
 *     NtSetInformationFile @ 0x14004FBC0 (NtSetInformationFile.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x140053C54 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140053EC8 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmIoRequestComplete @ 0x140054C54 (SmIoRequestComplete.c)
 *     SmFpFree @ 0x140054CF0 (SmFpFree.c)
 *     ?SmCompressContextQueueEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x140056054 (-SmCompressContextQueueEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_S.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400574C0 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PfFileInfoNotify @ 0x14005F400 (PfFileInfoNotify.c)
 *     PfpEventHandleFullBuffer @ 0x140060270 (PfpEventHandleFullBuffer.c)
 *     PfSnReferenceProcessTrace @ 0x1400602F0 (PfSnReferenceProcessTrace.c)
 *     ExTryQueueWorkItem @ 0x1400688A0 (ExTryQueueWorkItem.c)
 *     IoAcquireRemoveLockEx @ 0x1400692E0 (IoAcquireRemoveLockEx.c)
 *     PopFxCompleteComponentActivation @ 0x140069C9C (PopFxCompleteComponentActivation.c)
 *     WmipUnreferenceRegEntry @ 0x14006E848 (WmipUnreferenceRegEntry.c)
 *     ExNotifyWithProcessing @ 0x14006EED0 (ExNotifyWithProcessing.c)
 *     PpmReleaseLock @ 0x14006F948 (PpmReleaseLock.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x140070050 (PopUpdateWatchdogNoWorkersEvent.c)
 *     MiDecreaseAvailablePages @ 0x140075ABC (MiDecreaseAvailablePages.c)
 *     ExpUnblockPushLock @ 0x14007EB48 (ExpUnblockPushLock.c)
 *     MiProcessWorkingSets @ 0x1400830E0 (MiProcessWorkingSets.c)
 *     MiWorkingSetManager @ 0x140083BF0 (MiWorkingSetManager.c)
 *     EtwpSwitchBuffer @ 0x1400878C8 (EtwpSwitchBuffer.c)
 *     PopQueueTargetDpc @ 0x1400889A0 (PopQueueTargetDpc.c)
 *     ExReferenceCallBackBlock @ 0x14008BC80 (ExReferenceCallBackBlock.c)
 *     MiCopyDataPageToImagePage @ 0x140095B10 (MiCopyDataPageToImagePage.c)
 *     MiIssueHardFaultIo @ 0x140097C48 (MiIssueHardFaultIo.c)
 *     CcFlushCachePriv @ 0x140097F80 (CcFlushCachePriv.c)
 *     MiCheckControlArea @ 0x14009B950 (MiCheckControlArea.c)
 *     CcPinFileData @ 0x14009C5A0 (CcPinFileData.c)
 *     CcFreeVirtualAddress @ 0x14009D970 (CcFreeVirtualAddress.c)
 *     CcMapAndCopyInToCache @ 0x14009EF20 (CcMapAndCopyInToCache.c)
 *     CcWriteBehindInternal @ 0x1400AACD0 (CcWriteBehindInternal.c)
 *     CcWorkerThread @ 0x1400AB860 (CcWorkerThread.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     CcInitializeCacheMapEx @ 0x1400AD640 (CcInitializeCacheMapEx.c)
 *     KiDetachProcess @ 0x1400B1E40 (KiDetachProcess.c)
 *     KiRequestProcessInSwap @ 0x1400B2AE0 (KiRequestProcessInSwap.c)
 *     MiIncreaseAvailablePages @ 0x1400B6F40 (MiIncreaseAvailablePages.c)
 *     MiInsertLargePageInNodeListHelper @ 0x1400B7240 (MiInsertLargePageInNodeListHelper.c)
 *     MiCompleteProtoPteFault @ 0x1400B9890 (MiCompleteProtoPteFault.c)
 *     MiDispatchFault @ 0x1400BF7D0 (MiDispatchFault.c)
 *     MiResolveTransitionFault @ 0x1400C2260 (MiResolveTransitionFault.c)
 *     MiUnlinkPageFromList @ 0x1400C3100 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1400C7FC0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInList @ 0x1400C88B0 (MiInsertPageInList.c)
 *     MiFinishHardFault @ 0x1400CBC40 (MiFinishHardFault.c)
 *     MiFreePagedPoolPages @ 0x1400CCF60 (MiFreePagedPoolPages.c)
 *     MiFinishVadDeletion @ 0x1400DA7D0 (MiFinishVadDeletion.c)
 *     IopCompleteRequest @ 0x1400DDEE0 (IopCompleteRequest.c)
 *     KiExitDispatcher @ 0x1400E0220 (KiExitDispatcher.c)
 *     KiReadyThread @ 0x1400E2E20 (KiReadyThread.c)
 *     AlpcpSignalAndWait @ 0x1400E7A20 (AlpcpSignalAndWait.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1400E8090 (NtWaitForWorkViaWorkerFactory.c)
 *     MiAllocatePagedPoolPages @ 0x1400F8A60 (MiAllocatePagedPoolPages.c)
 *     ExpWorkerThread @ 0x1400FC140 (ExpWorkerThread.c)
 *     ExpQueueWorkItem @ 0x1400FD5D0 (ExpQueueWorkItem.c)
 *     ExpWakePushLock @ 0x140112720 (ExpWakePushLock.c)
 *     LZNT1DecompressChunkWorkItem @ 0x140115790 (LZNT1DecompressChunkWorkItem.c)
 *     MiPrivateFixup @ 0x140117AB4 (MiPrivateFixup.c)
 *     CcPurgeAndClearCacheSection @ 0x140118940 (CcPurgeAndClearCacheSection.c)
 *     MiDeleteControlArea @ 0x140118FDC (MiDeleteControlArea.c)
 *     CcUninitializeCacheMap @ 0x140119B80 (CcUninitializeCacheMap.c)
 *     CcUnpinFileDataEx @ 0x14011A690 (CcUnpinFileDataEx.c)
 *     CcDeleteSharedCacheMap @ 0x14011AC34 (CcDeleteSharedCacheMap.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011FB50 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreHelperWorker @ 0x140120F30 (SmKmStoreHelperWorker.c)
 *     MiFreeExcessSegments @ 0x140126A94 (MiFreeExcessSegments.c)
 *     MiReclaimSystemVa @ 0x140128B70 (MiReclaimSystemVa.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1401294A0 (MiUnlinkNodeLargePageHelper.c)
 *     PfSnRemoveProcessTrace @ 0x14012D234 (PfSnRemoveProcessTrace.c)
 *     ExTryQueueWorkItemFromIo @ 0x140130680 (ExTryQueueWorkItemFromIo.c)
 *     PnpRemoveDeviceActionRequests @ 0x140131F9C (PnpRemoveDeviceActionRequests.c)
 *     CcDeleteBcbs @ 0x140136248 (CcDeleteBcbs.c)
 *     PopUnregisterPowerSettingCallback @ 0x140136918 (PopUnregisterPowerSettingCallback.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x140136960 (MiAllocatePfnRepurposeLogDispatch.c)
 *     MiFinishResume @ 0x140138A60 (MiFinishResume.c)
 *     MiProcessDereferenceList @ 0x14013A7D0 (MiProcessDereferenceList.c)
 *     PopTimestampTargetProcessor @ 0x14013DE50 (PopTimestampTargetProcessor.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x14013DF8C (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopBatteryWakeDpc @ 0x14013DFD0 (PopBatteryWakeDpc.c)
 *     PfpScenCtxWaiterTimedOut @ 0x14013E00C (PfpScenCtxWaiterTimedOut.c)
 *     MiFlushAllPagesWorker @ 0x14013E0D8 (MiFlushAllPagesWorker.c)
 *     EtwpLoggerDpc @ 0x140140080 (EtwpLoggerDpc.c)
 *     MiQueueWorkingSetRequest @ 0x1401400FC (MiQueueWorkingSetRequest.c)
 *     PopFxReleasePowerIrp @ 0x140144FDC (PopFxReleasePowerIrp.c)
 *     PopIrpWorker @ 0x140145130 (PopIrpWorker.c)
 *     PopPepUpdateConstraints @ 0x1401459A0 (PopPepUpdateConstraints.c)
 *     SepRmCallLsa @ 0x1401481D0 (SepRmCallLsa.c)
 *     VfPoolDelayFreeIfPossible @ 0x140148998 (VfPoolDelayFreeIfPossible.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x140149950 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopUserPresentSet @ 0x14014AC38 (PopUserPresentSet.c)
 *     PnpDiagnosticCompletionRoutine @ 0x1401539D0 (PnpDiagnosticCompletionRoutine.c)
 *     MiUpdateAvailableEvents @ 0x1401548AC (MiUpdateAvailableEvents.c)
 *     MiSignalNonPagedPoolWatchers @ 0x140154988 (MiSignalNonPagedPoolWatchers.c)
 *     ExCompareExchangeCallBack @ 0x140155B4C (ExCompareExchangeCallBack.c)
 *     MiZeroNodePages @ 0x1401585A0 (MiZeroNodePages.c)
 *     MiSyncCommitSignals @ 0x140159D20 (MiSyncCommitSignals.c)
 *     MiZeroLargePages @ 0x14015C30C (MiZeroLargePages.c)
 *     MiReassessZeroThreads @ 0x14015C5D8 (MiReassessZeroThreads.c)
 *     KeBalanceSetManager @ 0x14015E600 (KeBalanceSetManager.c)
 *     WheapAddErrorSource @ 0x140162668 (WheapAddErrorSource.c)
 *     MiModifiedPageWriter @ 0x140162A30 (MiModifiedPageWriter.c)
 *     PnpCompleteSystemStartProcess @ 0x140162DE4 (PnpCompleteSystemStartProcess.c)
 *     MiTrimSegmentCache @ 0x140167B80 (MiTrimSegmentCache.c)
 *     MiStoreEvictThread @ 0x1401687C0 (MiStoreEvictThread.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x1401DD46C (CcCancelMmWaitForUninitializeCacheMap.c)
 *     CcPostDeferredWrites @ 0x1401DDA60 (CcPostDeferredWrites.c)
 *     FsFilterFreeCompletionStack @ 0x1401E40AC (FsFilterFreeCompletionStack.c)
 *     FsRtlStackOverflowRead @ 0x1401E4880 (FsRtlStackOverflowRead.c)
 *     IopFreeBackpocketIrp @ 0x1401EFA50 (IopFreeBackpocketIrp.c)
 *     IopFreeReserveIrp @ 0x1401EFAB8 (IopFreeReserveIrp.c)
 *     PnpUnlockMountableDevice @ 0x1401F8BE4 (PnpUnlockMountableDevice.c)
 *     PnprQuiesce @ 0x1401FA43C (PnprQuiesce.c)
 *     KeRetryOutswapProcess @ 0x1401FD0EC (KeRetryOutswapProcess.c)
 *     KiConnectSecondaryInterrupt @ 0x140200A28 (KiConnectSecondaryInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x140200B94 (KiDisconnectSecondaryInterrupt.c)
 *     KiInvokeInterruptServiceRoutine @ 0x140204F5C (KiInvokeInterruptServiceRoutine.c)
 *     KiPassiveIsrWatchdog @ 0x1402051B0 (KiPassiveIsrWatchdog.c)
 *     KiProcessDisconnectList @ 0x1402051E8 (KiProcessDisconnectList.c)
 *     KiSignalWaitDisconnectLock @ 0x1402052C0 (KiSignalWaitDisconnectLock.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x1402052F0 (KiSynchronizePassiveInterruptExecution.c)
 *     KiBlockAndActivateUmsThread @ 0x1402078A0 (KiBlockAndActivateUmsThread.c)
 *     MiQueueControlAreaDelete @ 0x14020ABBC (MiQueueControlAreaDelete.c)
 *     MiMakeOutswappedPageResident @ 0x14020B6DC (MiMakeOutswappedPageResident.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14020BDF4 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x14020C108 (MiReleaseCommitForResetPages.c)
 *     MiZeroPageFile @ 0x14020D160 (MiZeroPageFile.c)
 *     MiFlushAllFilesystemPages @ 0x1402114A0 (MiFlushAllFilesystemPages.c)
 *     MiPfCompleteCoalescedIo @ 0x140213BC8 (MiPfCompleteCoalescedIo.c)
 *     MiPfIssueCoalescedSupport @ 0x140213D20 (MiPfIssueCoalescedSupport.c)
 *     MiMarkMdlComplete @ 0x140214128 (MiMarkMdlComplete.c)
 *     MiObtainFreePages @ 0x140215244 (MiObtainFreePages.c)
 *     MiFlushComplete @ 0x140216300 (MiFlushComplete.c)
 *     MiFreeOverlappedFlushEntry @ 0x140216410 (MiFreeOverlappedFlushEntry.c)
 *     MiAttemptPageFileReductionApc @ 0x1402196E0 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x140219F78 (MiFinishPageFileExtension.c)
 *     MiIrpCompletionApcRoutine @ 0x14021A1E0 (MiIrpCompletionApcRoutine.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x14021A690 (MiTrimUnusedPageFileRegionsApc.c)
 *     MiDeletePartitionResources @ 0x14021D818 (MiDeletePartitionResources.c)
 *     MiReturnCrossPartitionCharges @ 0x14021E85C (MiReturnCrossPartitionCharges.c)
 *     MiPageNotZero @ 0x14021F048 (MiPageNotZero.c)
 *     NtSignalAndWaitForSingleObject @ 0x140226A34 (NtSignalAndWaitForSingleObject.c)
 *     PfpReturnAccessBuffer @ 0x140226FA0 (PfpReturnAccessBuffer.c)
 *     PopPropogateCoolingChange @ 0x14022A124 (PopPropogateCoolingChange.c)
 *     PopDeviceIdleCompletion @ 0x14022A560 (PopDeviceIdleCompletion.c)
 *     PopFxCompleteComponentPerfState @ 0x14022A7C8 (PopFxCompleteComponentPerfState.c)
 *     PopUpdateWakeSourceWorker @ 0x14022DE30 (PopUpdateWakeSourceWorker.c)
 *     PopBatteryIrpComplete @ 0x14022E190 (PopBatteryIrpComplete.c)
 *     PopPepStartDeviceUnregisterActivity @ 0x14022F370 (PopPepStartDeviceUnregisterActivity.c)
 *     ?SmCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140249864 (-SmCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x14024F6C0 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14024F7A0 (-SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z.c)
 *     EtwSendTraceBuffer @ 0x140252E60 (EtwSendTraceBuffer.c)
 *     EtwpThreadRundownApc @ 0x140256600 (EtwpThreadRundownApc.c)
 *     ExNotifyBootDeviceRemoval @ 0x14025A8F0 (ExNotifyBootDeviceRemoval.c)
 *     ExRegisterBootDevice @ 0x14025A940 (ExRegisterBootDevice.c)
 *     ExReleaseRundownProtectionEx @ 0x14025C610 (ExReleaseRundownProtectionEx.c)
 *     ExpQueueWorkItemNode @ 0x14025D868 (ExpQueueWorkItemNode.c)
 *     WheapProcessWorkQueueItem @ 0x14025FC60 (WheapProcessWorkQueueItem.c)
 *     EmpReleasePagingReference @ 0x1404049B8 (EmpReleasePagingReference.c)
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 *     PopHandleWakeSources @ 0x14040A1B8 (PopHandleWakeSources.c)
 *     PopSystemIrpCompletion @ 0x14040A9E0 (PopSystemIrpCompletion.c)
 *     ExpSetSwappingKernelApc @ 0x14040B540 (ExpSetSwappingKernelApc.c)
 *     PopFlushVolumeWorker @ 0x14040B800 (PopFlushVolumeWorker.c)
 *     PfpScenCtxPrefetchStateSet @ 0x14040BA54 (PfpScenCtxPrefetchStateSet.c)
 *     PopTransitionToSleep @ 0x14040BE50 (PopTransitionToSleep.c)
 *     MmDuplicateMemory @ 0x14040BFE8 (MmDuplicateMemory.c)
 *     PopEndMirroring @ 0x14040CD30 (PopEndMirroring.c)
 *     PfpScenCtxScenarioSet @ 0x14040EA40 (PfpScenCtxScenarioSet.c)
 *     PnprInitiateReplaceOperation @ 0x140417290 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x1404185D0 (PnprQuiesceWorker.c)
 *     MiShutdownSystem @ 0x1404193D0 (MiShutdownSystem.c)
 *     MiZeroAllPageFiles @ 0x1404195D8 (MiZeroAllPageFiles.c)
 *     PopGracefulShutdown @ 0x1404199F0 (PopGracefulShutdown.c)
 *     PopBuildDeviceNotifyListWatchdog @ 0x14041A030 (PopBuildDeviceNotifyListWatchdog.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x14041A050 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     IopCancelIrpsInCurrentThreadListApcRoutine @ 0x1404332D0 (IopCancelIrpsInCurrentThreadListApcRoutine.c)
 *     EtwpStopLoggerInstance @ 0x140434A54 (EtwpStopLoggerInstance.c)
 *     EtwpFreeLoggerContext @ 0x1404358CC (EtwpFreeLoggerContext.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x140435C9C (EtwpRealtimeDisconnectAllConsumers.c)
 *     RtlDecompressFragmentLZNT1 @ 0x140444330 (RtlDecompressFragmentLZNT1.c)
 *     ExpWnfNotifySubscription @ 0x1404446CC (ExpWnfNotifySubscription.c)
 *     FlushWorkItemRoutineKernelMode @ 0x14044C610 (FlushWorkItemRoutineKernelMode.c)
 *     IopLoadUnloadDriver @ 0x14044DA20 (IopLoadUnloadDriver.c)
 *     AlpcpTrackPortReferences @ 0x14044DFA8 (AlpcpTrackPortReferences.c)
 *     NtWriteFileGather @ 0x14044F2A0 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1404507E0 (NtReadFileScatter.c)
 *     RtlRunOnceComplete @ 0x140451A10 (RtlRunOnceComplete.c)
 *     EtwpSynchronizeWithLogger @ 0x14045212C (EtwpSynchronizeWithLogger.c)
 *     IopTrackLink @ 0x1404525A0 (IopTrackLink.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140457020 (PiDrvDbLoadNodeWorkerCallback.c)
 *     NtNotifyChangeSession @ 0x14045AEA4 (NtNotifyChangeSession.c)
 *     CmpGetVolumeClusterSizeCompletion @ 0x14045B6A0 (CmpGetVolumeClusterSizeCompletion.c)
 *     IoSetInformation @ 0x14045D250 (IoSetInformation.c)
 *     EtwpDisassociateConsumer @ 0x14045DDF0 (EtwpDisassociateConsumer.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x14045ED80 (PfSnTracingStateExWorkerRoutine.c)
 *     PiUEventDereferenceEventEntry @ 0x140464968 (PiUEventDereferenceEventEntry.c)
 *     NtQueryVolumeInformationFile @ 0x1404812E0 (NtQueryVolumeInformationFile.c)
 *     NtWriteFile @ 0x1404818C0 (NtWriteFile.c)
 *     IopGetSetSecurityObject @ 0x140482710 (IopGetSetSecurityObject.c)
 *     NtLockFile @ 0x14048B220 (NtLockFile.c)
 *     CmpPostNotify @ 0x14048C118 (CmpPostNotify.c)
 *     PfTReplaceCurrentBuffer @ 0x1404972A0 (PfTReplaceCurrentBuffer.c)
 *     PfGetCompletedTrace @ 0x140498110 (PfGetCompletedTrace.c)
 *     PfTTraceListAdd @ 0x140498398 (PfTTraceListAdd.c)
 *     MiAllocateUserStack @ 0x1404A434C (MiAllocateUserStack.c)
 *     PnpDeviceEventWorker @ 0x1404A58F0 (PnpDeviceEventWorker.c)
 *     PnpCompleteDeviceEvent @ 0x1404A5C6C (PnpCompleteDeviceEvent.c)
 *     SPCall2ServerInternal @ 0x1404A9590 (SPCall2ServerInternal.c)
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 *     MiInSwapStoreWorker @ 0x1404C9E00 (MiInSwapStoreWorker.c)
 *     CmpSignalUnloadEventArrayForHive @ 0x1404CD710 (CmpSignalUnloadEventArrayForHive.c)
 *     CmpPostApc @ 0x1404CDCF0 (CmpPostApc.c)
 *     CmpSignalDeferredPosts @ 0x1404CE014 (CmpSignalDeferredPosts.c)
 *     CmLoadAppKey @ 0x1404D59A0 (CmLoadAppKey.c)
 *     CmpWakeWriteQueueWaiters @ 0x1404D867C (CmpWakeWriteQueueWaiters.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1404EE658 (ExpWnfNotifyNameSubscribers.c)
 *     CmpDeleteKeyObject @ 0x140506F30 (CmpDeleteKeyObject.c)
 *     NtSetEvent @ 0x140520FB0 (NtSetEvent.c)
 *     AlpcpCompleteDispatchMessage @ 0x140525120 (AlpcpCompleteDispatchMessage.c)
 *     IopCloseFile @ 0x140527CA0 (IopCloseFile.c)
 *     IopXxxControlFile @ 0x14052BAD0 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x14052EC70 (NtQueryInformationFile.c)
 *     IopSynchronousServiceTail @ 0x14053A760 (IopSynchronousServiceTail.c)
 *     MiPfExecuteReadList @ 0x14053D754 (MiPfExecuteReadList.c)
 *     IopQueryXxxInformation @ 0x14053E758 (IopQueryXxxInformation.c)
 *     CmNotifyRunDown @ 0x14053F248 (CmNotifyRunDown.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x1405471A8 (PspEvaluateAndNotifyEmptyJob.c)
 *     EtwpLogger @ 0x14054F910 (EtwpLogger.c)
 *     EtwpRealtimeUpdateConsumers @ 0x14054FE00 (EtwpRealtimeUpdateConsumers.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x140550490 (EtwpRealtimeInjectEtwBuffer.c)
 *     EtwpQueueNotification @ 0x140553790 (EtwpQueueNotification.c)
 *     IopMountVolume @ 0x140560E6C (IopMountVolume.c)
 *     IopAcquireFileObjectLock @ 0x140561408 (IopAcquireFileObjectLock.c)
 *     PfSnEndTrace @ 0x14056637C (PfSnEndTrace.c)
 *     NtReadFile @ 0x140566B00 (NtReadFile.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140570848 (PopFxUnregisterDeviceOrWait.c)
 *     PiUEventHandleVetoEvent @ 0x1405743B4 (PiUEventHandleVetoEvent.c)
 *     PfGenerateTrace @ 0x1405761CC (PfGenerateTrace.c)
 *     PopCompleteAction @ 0x140576FF4 (PopCompleteAction.c)
 *     PopReleaseTransitionLock @ 0x140577648 (PopReleaseTransitionLock.c)
 *     PopFinalizeWakeInfo @ 0x140579248 (PopFinalizeWakeInfo.c)
 *     MiDereferenceSessionFinal @ 0x14057A664 (MiDereferenceSessionFinal.c)
 *     RtlDecompressBufferLZNT1 @ 0x1405804C0 (RtlDecompressBufferLZNT1.c)
 *     WmipQueueNotification @ 0x140581028 (WmipQueueNotification.c)
 *     MmSetSessionObjectIoEvent @ 0x1405856BC (MmSetSessionObjectIoEvent.c)
 *     PopUserPresentSetWorker @ 0x140586600 (PopUserPresentSetWorker.c)
 *     IopDestroyActiveConnectBlock @ 0x140588C84 (IopDestroyActiveConnectBlock.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x140588F28 (IopAcquireReleaseConnectLockInternal.c)
 *     WmipAddDataSource @ 0x1405A03B8 (WmipAddDataSource.c)
 *     CmpFinishSystemHivesLoad @ 0x1405A3DE0 (CmpFinishSystemHivesLoad.c)
 *     CmpInitializeSystemHivesLoad @ 0x1405A444C (CmpInitializeSystemHivesLoad.c)
 *     PoInitHiberServices @ 0x1405A913C (PoInitHiberServices.c)
 *     ArbArbiterHandler @ 0x1405B3060 (ArbArbiterHandler.c)
 *     ArbBuildAssignmentOrdering @ 0x1405B3378 (ArbBuildAssignmentOrdering.c)
 *     MUIRegistrySystemRoutine @ 0x1405B7F70 (MUIRegistrySystemRoutine.c)
 *     MiInsertPageFileInList @ 0x1405B9FB8 (MiInsertPageFileInList.c)
 *     CmpLoadHiveThread @ 0x1405BC800 (CmpLoadHiveThread.c)
 *     CmpWaitForHiveMount @ 0x1405CB154 (CmpWaitForHiveMount.c)
 *     DbgkRegisterErrorPort @ 0x1405D1A50 (DbgkRegisterErrorPort.c)
 *     WheapEtwEnableCallback @ 0x1405D4020 (WheapEtwEnableCallback.c)
 *     WmipReleaseCollectionEnabled @ 0x1405D63E4 (WmipReleaseCollectionEnabled.c)
 *     PopNotifyPolicyDevice @ 0x1405D6760 (PopNotifyPolicyDevice.c)
 *     PfTLoggingWorker @ 0x1405D7720 (PfTLoggingWorker.c)
 *     PopThermalWorker @ 0x1405D7C20 (PopThermalWorker.c)
 *     MmStoreRegister @ 0x1405D92AC (MmStoreRegister.c)
 *     ExAllocatePrivateWorkerPool @ 0x1405DA5C8 (ExAllocatePrivateWorkerPool.c)
 *     CmThawRegistry @ 0x140668BE4 (CmThawRegistry.c)
 *     CmpPostApcRunDown @ 0x14066D290 (CmpPostApcRunDown.c)
 *     DbgkpCloseObject @ 0x14067EC20 (DbgkpCloseObject.c)
 *     DbgkpQueueMessage @ 0x14067F83C (DbgkpQueueMessage.c)
 *     DbgkpSetProcessDebugObject @ 0x14067FB20 (DbgkpSetProcessDebugObject.c)
 *     DbgkpWakeTarget @ 0x14067FE44 (DbgkpWakeTarget.c)
 *     NtDebugContinue @ 0x14068029C (NtDebugContinue.c)
 *     DbgkpLkmdSnapThreadApc @ 0x1406824A0 (DbgkpLkmdSnapThreadApc.c)
 *     FsRtlpOplockWaitCompleteRoutine @ 0x1406859E0 (FsRtlpOplockWaitCompleteRoutine.c)
 *     IopAllocateIrpCleanup @ 0x140688728 (IopAllocateIrpCleanup.c)
 *     IopConnectLinkTrackingPort @ 0x140688C40 (IopConnectLinkTrackingPort.c)
 *     IopExceptionCleanup @ 0x140688D98 (IopExceptionCleanup.c)
 *     IopInvalidateVolumesForDevice @ 0x1406894B8 (IopInvalidateVolumesForDevice.c)
 *     IopSendMessageToTrackService @ 0x140689EC4 (IopSendMessageToTrackService.c)
 *     IoVerifyVolume @ 0x14068BEE0 (IoVerifyVolume.c)
 *     PnpShutdownDevices @ 0x140691F78 (PnpShutdownDevices.c)
 *     IopAcquireReleaseDispatcherLock @ 0x1406951FC (IopAcquireReleaseDispatcherLock.c)
 *     PnpReplacePartitionUnit @ 0x1406A0B20 (PnpReplacePartitionUnit.c)
 *     IopWarmEjectDevice @ 0x1406A9064 (IopWarmEjectDevice.c)
 *     KeUpdateUmsThreadState @ 0x1406AD838 (KeUpdateUmsThreadState.c)
 *     PfTCleanup @ 0x1406C46A8 (PfTCleanup.c)
 *     PfpParametersWatcher @ 0x1406C4F40 (PfpParametersWatcher.c)
 *     PopFxUnregisterDevice @ 0x1406C8A30 (PopFxUnregisterDevice.c)
 *     PopBatteryReadTag @ 0x1406CA980 (PopBatteryReadTag.c)
 *     PopFanWorker @ 0x1406CF830 (PopFanWorker.c)
 *     TtmiCloseEventQueue @ 0x1406DA860 (TtmiCloseEventQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x1406DAC1C (TtmiWriteEventToSingleQueue.c)
 *     PspDeferredWorkerRoutine @ 0x1406DEBE0 (PspDeferredWorkerRoutine.c)
 *     PspDeleteServerSiloGlobals @ 0x1406DECFC (PspDeleteServerSiloGlobals.c)
 *     SmcCacheAdd @ 0x140703E34 (SmcCacheAdd.c)
 *     SmcCacheDelete @ 0x140703FC8 (SmcCacheDelete.c)
 *     CMFSystemThreadRoutine @ 0x140721D50 (CMFSystemThreadRoutine.c)
 *     WheapAttemptPhysicalPageOfflineWorker @ 0x140723790 (WheapAttemptPhysicalPageOfflineWorker.c)
 *     SbpVmbusNotificationHandler @ 0x1407474E0 (SbpVmbusNotificationHandler.c)
 *     AnFwpFadeAnimationTimer @ 0x140757430 (AnFwpFadeAnimationTimer.c)
 *     ViIrpSynchronousCompletionRoutine @ 0x14076EF70 (ViIrpSynchronousCompletionRoutine.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x140772150 (ViPendingQueuePassiveLevelCompletion.c)
 *     ViFilterRemoveNotificationCompletion @ 0x140780F20 (ViFilterRemoveNotificationCompletion.c)
 *     KdpTimeSlipWork @ 0x14078B790 (KdpTimeSlipWork.c)
 *     sub_1407DDD64 @ 0x1407DDD64 (sub_1407DDD64.c)
 *     MiInitializePagedPoolEvents @ 0x14080432C (MiInitializePagedPoolEvents.c)
 * Callees:
 *     KiWakeOtherQueueWaiters @ 0x140011010 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140011680 (KiWakeQueueWaiter.c)
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1400E0220 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400E1A90 (KiTryUnwaitThread.c)
 *     KeIsThreadRunning @ 0x1401FCAFC (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1402535C8 (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KeSetEvent(PRKEVENT Event, KPRIORITY Increment, BOOLEAN Wait)
{
  int v3; // esi
  int v7; // r15d
  char CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // r12
  LONG SignalState; // edi
  struct _LIST_ENTRY *Flink; // rax
  bool v12; // zf
  LIST_ENTRY *p_WaitListHead; // r15
  struct _LIST_ENTRY *v15; // rdx
  struct _LIST_ENTRY *v16; // rcx
  struct _LIST_ENTRY *Blink; // rax
  char v18; // al
  char v19; // cl
  __int64 v20; // r8
  _QWORD *v21; // rdx
  __int64 v22; // rcx
  char v23; // al
  int v24; // r10d
  struct _LIST_ENTRY *v25; // r9
  _QWORD *v26; // rdx
  __int64 v27; // rcx
  char v28; // al
  int v29; // r10d
  struct _LIST_ENTRY *v30; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v32; // rdx
  __int64 v33; // r9
  unsigned __int8 v34; // al
  __int64 v35; // rdx
  __int64 v36; // r9
  struct _LIST_ENTRY *v37; // [rsp+30h] [rbp-58h]
  struct _KPRCB *v38; // [rsp+30h] [rbp-58h]
  struct _LIST_ENTRY *v39; // [rsp+38h] [rbp-50h]
  struct _KPRCB *v40; // [rsp+38h] [rbp-50h]
  struct _LIST_ENTRY *v41; // [rsp+40h] [rbp-48h]
  _KTHREAD *CurrentThread; // [rsp+40h] [rbp-48h]
  struct _LIST_ENTRY *v43; // [rsp+48h] [rbp-40h]
  _KTHREAD *v44; // [rsp+48h] [rbp-40h]
  __int64 v45; // [rsp+90h] [rbp+8h]
  __int64 v46; // [rsp+90h] [rbp+8h]

  v3 = 0;
  if ( (Event->Header.Type & 0x7F) != 0 )
  {
    v7 = 0;
  }
  else
  {
    if ( Event->Header.SignalState == 1 && !Wait )
      return 1;
    v7 = 1;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(&Event->Header.Lock);
  SignalState = Event->Header.SignalState;
  Event->Header.SignalState = 1;
  if ( !SignalState )
  {
    Flink = Event->Header.WaitListHead.Flink;
    v12 = v7 == 0;
    p_WaitListHead = &Event->Header.WaitListHead;
    if ( v12 )
    {
      if ( Flink == p_WaitListHead )
        goto LABEL_6;
      while ( 1 )
      {
        v15 = Flink;
        v37 = Flink;
        v43 = Flink->Flink;
        v16 = Flink->Flink;
        Blink = Flink->Blink;
        if ( v16->Blink != v15 || Blink->Flink != v15 )
          __fastfail(3u);
        Blink->Flink = v16;
        v16->Blink = Blink;
        v18 = (char)v15[1].Flink;
        if ( v18 == 1 )
        {
          if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v15, WORD1(v15[1].Flink), 0LL) )
          {
            v12 = Event->Header.SignalState-- == 1;
            if ( v12 )
              goto LABEL_6;
          }
        }
        else
        {
          if ( v18 == 2 )
          {
            BYTE1(v15[1].Flink) = 5;
            v45 = (__int64)v15[1].Blink;
            v15->Flink = 0LL;
            KeGetCurrentIrql();
            __writecr8(2uLL);
            v40 = KeGetCurrentPrcb();
            CurrentThread = v40->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              IsThreadRunning = KeIsThreadRunning(v40->CurrentThread);
              EtwTraceEnqueueWork(v33, v32, IsThreadRunning);
            }
            KiAcquireKobjectLockSafe((volatile signed __int32 *)v45);
            v21 = (_QWORD *)(v45 + 8);
            v22 = v45;
            if ( (_QWORD *)*v21 == v21
              || *(_DWORD *)(v45 + 40) >= *(_DWORD *)(v45 + 44)
              || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v45 && CurrentThread->WaitReason == 15 )
            {
LABEL_34:
              v24 = *(_DWORD *)(v22 + 4);
              *(_DWORD *)(v22 + 4) = v24 + 1;
              v25 = *(struct _LIST_ENTRY **)(v22 + 32);
              if ( v25->Flink != (struct _LIST_ENTRY *)(v22 + 24) )
                __fastfail(3u);
              v37->Flink = (struct _LIST_ENTRY *)(v22 + 24);
              v37->Blink = v25;
              v25->Flink = v37;
              *(_QWORD *)(v22 + 32) = v37;
              if ( !v24 && (_QWORD *)*v21 != v21 )
              {
                KiWakeOtherQueueWaiters((__int64)v40, v22);
                v22 = v45;
              }
            }
            else
            {
              v23 = KiWakeQueueWaiter((__int64)v40, v45, (__int64)v37);
              v22 = v45;
              if ( !v23 )
              {
                v21 = (_QWORD *)(v45 + 8);
                goto LABEL_34;
              }
            }
            _InterlockedAnd((volatile signed __int32 *)v22, 0xFFFFFF7F);
            v12 = Event->Header.SignalState-- == 1;
            if ( v12 )
              goto LABEL_6;
            goto LABEL_51;
          }
          KiTryUnwaitThread(CurrentPrcb, v15, 256LL, 0LL);
        }
LABEL_51:
        Flink = v43;
        if ( v43 == p_WaitListHead )
          goto LABEL_6;
      }
    }
    if ( Flink == p_WaitListHead )
    {
LABEL_12:
      Event->Header.WaitListHead.Blink = &Event->Header.WaitListHead;
      p_WaitListHead->Flink = p_WaitListHead;
      goto LABEL_6;
    }
    while ( 1 )
    {
      v39 = Flink;
      v41 = Flink->Flink;
      v19 = (char)Flink[1].Flink;
      if ( v19 == 1 )
      {
        v20 = WORD1(Flink[1].Flink);
      }
      else
      {
        if ( v19 == 2 )
        {
          BYTE1(Flink[1].Flink) = 5;
          v46 = (__int64)Flink[1].Blink;
          Flink->Flink = 0LL;
          KeGetCurrentIrql();
          __writecr8(2uLL);
          v38 = KeGetCurrentPrcb();
          v44 = v38->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v34 = KeIsThreadRunning(v38->CurrentThread);
            EtwTraceEnqueueWork(v36, v35, v34);
          }
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v46);
          v26 = (_QWORD *)(v46 + 8);
          v27 = v46;
          if ( (_QWORD *)*v26 == v26
            || *(_DWORD *)(v46 + 40) >= *(_DWORD *)(v46 + 44)
            || v44->Queue == (_DISPATCHER_HEADER *volatile)v46 && v44->WaitReason == 15 )
          {
LABEL_56:
            v29 = *(_DWORD *)(v27 + 4);
            *(_DWORD *)(v27 + 4) = v29 + 1;
            v30 = *(struct _LIST_ENTRY **)(v27 + 32);
            if ( v30->Flink != (struct _LIST_ENTRY *)(v27 + 24) )
              __fastfail(3u);
            v39->Flink = (struct _LIST_ENTRY *)(v27 + 24);
            v39->Blink = v30;
            v30->Flink = v39;
            *(_QWORD *)(v27 + 32) = v39;
            if ( !v29 && (_QWORD *)*v26 != v26 )
            {
              KiWakeOtherQueueWaiters((__int64)v38, v27);
              v27 = v46;
            }
          }
          else
          {
            v28 = KiWakeQueueWaiter((__int64)v38, v46, (__int64)v39);
            v27 = v46;
            if ( !v28 )
            {
              v26 = (_QWORD *)(v46 + 8);
              goto LABEL_56;
            }
          }
          _InterlockedAnd((volatile signed __int32 *)v27, 0xFFFFFF7F);
          goto LABEL_22;
        }
        v20 = 256LL;
      }
      KiTryUnwaitThread(CurrentPrcb, Flink, v20, 0LL);
LABEL_22:
      Flink = v41;
      if ( v41 == p_WaitListHead )
        goto LABEL_12;
    }
  }
LABEL_6:
  _InterlockedAnd(&Event->Header.Lock, 0xFFFFFF7F);
  if ( Wait )
    v3 = 3;
  KiExitDispatcher((_DWORD)CurrentPrcb, v3, 1, Increment, CurrentIrql);
  return SignalState;
}
