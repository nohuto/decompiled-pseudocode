/*
 * XREFs of KeSetEvent @ 0x140072480
 * Callers:
 *     SmKmStoreDeleteWhenEmptyWorker @ 0x1400041A0 (SmKmStoreDeleteWhenEmptyWorker.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140004560 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreHelperSendCommand @ 0x1400049B4 (SmKmStoreHelperSendCommand.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140006590 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiQueuePageAccessLog @ 0x140007F3C (MiQueuePageAccessLog.c)
 *     MiStoreUpdateMemoryConditions @ 0x14000851C (MiStoreUpdateMemoryConditions.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14000B530 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreHelperWorker @ 0x14000C8E0 (SmKmStoreHelperWorker.c)
 *     PfpReturnAccessBuffer @ 0x1400107F0 (PfpReturnAccessBuffer.c)
 *     PfSnRemoveProcessTrace @ 0x1400109D0 (PfSnRemoveProcessTrace.c)
 *     MiEmptyPageAccessLog @ 0x140011730 (MiEmptyPageAccessLog.c)
 *     PfFileInfoNotify @ 0x140011F60 (PfFileInfoNotify.c)
 *     PfSnReferenceProcessTrace @ 0x140012760 (PfSnReferenceProcessTrace.c)
 *     PfpEventHandleFullBuffer @ 0x1400128B0 (PfpEventHandleFullBuffer.c)
 *     CcMapAndCopyInToCache @ 0x14001C320 (CcMapAndCopyInToCache.c)
 *     MiDeleteControlArea @ 0x14001F4A4 (MiDeleteControlArea.c)
 *     CcDeleteSharedCacheMap @ 0x14001FD84 (CcDeleteSharedCacheMap.c)
 *     CcPostWorkQueueAsyncRead @ 0x140020B14 (CcPostWorkQueueAsyncRead.c)
 *     CcWorkerThread @ 0x140022CB0 (CcWorkerThread.c)
 *     MiCopyDataPageToImagePage @ 0x140027210 (MiCopyDataPageToImagePage.c)
 *     MiFinishHardFault @ 0x14002FC50 (MiFinishHardFault.c)
 *     MiFreePagedPoolPages @ 0x140035950 (MiFreePagedPoolPages.c)
 *     MiFinishVadDeletion @ 0x140037A20 (MiFinishVadDeletion.c)
 *     MiCompleteProtoPteFault @ 0x140045530 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140049330 (MiResolveTransitionFault.c)
 *     MiUnlinkPageFromList @ 0x14004B0F0 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140050BA0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInList @ 0x140051480 (MiInsertPageInList.c)
 *     MiInsertProtectedStandbyPage @ 0x140051F60 (MiInsertProtectedStandbyPage.c)
 *     MiCheckControlArea @ 0x14005B160 (MiCheckControlArea.c)
 *     NtSetInformationFile @ 0x14005F8B0 (NtSetInformationFile.c)
 *     ExpQueueWorkItem @ 0x140061500 (ExpQueueWorkItem.c)
 *     ExpWorkerThread @ 0x1400617A0 (ExpWorkerThread.c)
 *     CcFlushCachePriv @ 0x140062D40 (CcFlushCachePriv.c)
 *     CcInitializeCacheMapEx @ 0x1400636F0 (CcInitializeCacheMapEx.c)
 *     CcUninitializeCacheMap @ 0x140066BF0 (CcUninitializeCacheMap.c)
 *     CcDereferencePartition @ 0x1400670D4 (CcDereferencePartition.c)
 *     CcUnpinFileDataEx @ 0x140068040 (CcUnpinFileDataEx.c)
 *     AlpciSendDeferredMessageBeforeWait @ 0x14006AB80 (AlpciSendDeferredMessageBeforeWait.c)
 *     AlpcpSignal @ 0x14006AE10 (AlpcpSignal.c)
 *     IopCompleteRequest @ 0x140070200 (IopCompleteRequest.c)
 *     KiExitDispatcher @ 0x1400728B0 (KiExitDispatcher.c)
 *     CcPinFileData @ 0x140079AD0 (CcPinFileData.c)
 *     CcFreeVirtualAddress @ 0x14007AE40 (CcFreeVirtualAddress.c)
 *     CcWriteBehindInternal @ 0x14008A070 (CcWriteBehindInternal.c)
 *     PopQueueTargetDpc @ 0x14008ECA4 (PopQueueTargetDpc.c)
 *     KiReadyThread @ 0x1400932D0 (KiReadyThread.c)
 *     MiAllocatePagedPoolPages @ 0x14009B1E0 (MiAllocatePagedPoolPages.c)
 *     MiProcessWorkingSets @ 0x14009FE30 (MiProcessWorkingSets.c)
 *     ExReferenceCallBackBlock @ 0x1400A5550 (ExReferenceCallBackBlock.c)
 *     KiDecrementProcessStackCount @ 0x1400AD3D8 (KiDecrementProcessStackCount.c)
 *     ExNotifyWithProcessing @ 0x1400AEAC8 (ExNotifyWithProcessing.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x1400B1CA8 (PopUpdateWatchdogNoWorkersEvent.c)
 *     MiInsertUnusedSubsection @ 0x1400B779C (MiInsertUnusedSubsection.c)
 *     ExpUnblockPushLock @ 0x1400BBEE8 (ExpUnblockPushLock.c)
 *     KiRequestProcessInSwap @ 0x1400BFCE0 (KiRequestProcessInSwap.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1400C68C0 (MiUnlinkNodeLargePageHelper.c)
 *     MiInsertLargePageInNodeListHelper @ 0x1400C6B30 (MiInsertLargePageInNodeListHelper.c)
 *     MiIncreaseAvailablePages @ 0x1400C72C0 (MiIncreaseAvailablePages.c)
 *     MiDecreaseAvailablePages @ 0x1400C7448 (MiDecreaseAvailablePages.c)
 *     MiPrivateFixup @ 0x1400CD7E0 (MiPrivateFixup.c)
 *     WmipUnreferenceRegEntry @ 0x1400DEBA0 (WmipUnreferenceRegEntry.c)
 *     EtwpSwitchBuffer @ 0x1400E041C (EtwpSwitchBuffer.c)
 *     PpmReleaseLock @ 0x1400E49C8 (PpmReleaseLock.c)
 *     LZNT1DecompressChunkWorkItem @ 0x1400E51E0 (LZNT1DecompressChunkWorkItem.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x1400EF610 (FsRtlAcquireFileForModWriteEx.c)
 *     MiWriteComplete @ 0x1400EF800 (MiWriteComplete.c)
 *     MiWorkingSetManager @ 0x1400F0224 (MiWorkingSetManager.c)
 *     CcPurgeAndClearCacheSection @ 0x1400F208C (CcPurgeAndClearCacheSection.c)
 *     CcCanIWrite @ 0x1400F4620 (CcCanIWrite.c)
 *     MiReclaimSystemVa @ 0x1400F74B0 (MiReclaimSystemVa.c)
 *     MiFreeExcessSegments @ 0x1400F7E68 (MiFreeExcessSegments.c)
 *     VfPoolDelayFreeIfPossible @ 0x1400F90A0 (VfPoolDelayFreeIfPossible.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400FA300 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     IoAcquireRemoveLockEx @ 0x1400FD8A0 (IoAcquireRemoveLockEx.c)
 *     PopFxCompleteComponentActivation @ 0x1400FE048 (PopFxCompleteComponentActivation.c)
 *     PnpDeviceActionWorker @ 0x1400FF730 (PnpDeviceActionWorker.c)
 *     ExReleaseRundownProtectionCacheAware @ 0x140106FA0 (ExReleaseRundownProtectionCacheAware.c)
 *     ExfReleaseRundownProtection @ 0x140107650 (ExfReleaseRundownProtection.c)
 *     MiIssueHardFaultIo @ 0x140116084 (MiIssueHardFaultIo.c)
 *     IoReleaseRemoveLockEx @ 0x14011AF40 (IoReleaseRemoveLockEx.c)
 *     SmKmGenericCompletion @ 0x14011E200 (SmKmGenericCompletion.c)
 *     PopFxReleasePowerIrp @ 0x1401233B0 (PopFxReleasePowerIrp.c)
 *     PopPepUpdateConstraints @ 0x1401235A0 (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x140123750 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x140125120 (KiBalanceSetManagerDeferredRoutine.c)
 *     CcNotifyWriteBehindInternal @ 0x140125F3C (CcNotifyWriteBehindInternal.c)
 *     PnpUnlockDeviceActionQueue @ 0x14012916C (PnpUnlockDeviceActionQueue.c)
 *     ExpEnumerateCallback @ 0x14012B2B0 (ExpEnumerateCallback.c)
 *     IopCancelIrpsInCurrentThreadListSpecialApc @ 0x14012B4B0 (IopCancelIrpsInCurrentThreadListSpecialApc.c)
 *     CmpLazyFlushDpcRoutine @ 0x14012C410 (CmpLazyFlushDpcRoutine.c)
 *     CcPrepareMdlWrite @ 0x14012D230 (CcPrepareMdlWrite.c)
 *     ExpPartitionCreateThreadIfNecessary @ 0x14012E830 (ExpPartitionCreateThreadIfNecessary.c)
 *     CcDeleteBcbs @ 0x14012F610 (CcDeleteBcbs.c)
 *     ExpWorkQueueManagerReaperTimer @ 0x1401311A0 (ExpWorkQueueManagerReaperTimer.c)
 *     MiDeleteCloneDescriptor @ 0x140131B84 (MiDeleteCloneDescriptor.c)
 *     PnpDiagnosticCompletionRoutine @ 0x140132340 (PnpDiagnosticCompletionRoutine.c)
 *     MiReassessZeroThreads @ 0x140134E24 (MiReassessZeroThreads.c)
 *     MiZeroLargePages @ 0x140135010 (MiZeroLargePages.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140135E60 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiUpdateAvailableEvents @ 0x140137060 (MiUpdateAvailableEvents.c)
 *     MiZeroNodePages @ 0x1401370F0 (MiZeroNodePages.c)
 *     MiSignalNonPagedPoolWatchers @ 0x1401398B4 (MiSignalNonPagedPoolWatchers.c)
 *     KeBalanceSetManager @ 0x140148E40 (KeBalanceSetManager.c)
 *     ExCompareExchangeCallBack @ 0x14014990C (ExCompareExchangeCallBack.c)
 *     MiProcessDereferenceList @ 0x14014B46C (MiProcessDereferenceList.c)
 *     SepRmCallLsa @ 0x14014C140 (SepRmCallLsa.c)
 *     MiSyncCommitSignals @ 0x14014FEC8 (MiSyncCommitSignals.c)
 *     WheapAddErrorSource @ 0x140150D28 (WheapAddErrorSource.c)
 *     PnpCompleteSystemStartProcess @ 0x1401518F0 (PnpCompleteSystemStartProcess.c)
 *     PopIrpWorker @ 0x140151D80 (PopIrpWorker.c)
 *     PnpUnlockMountableDevice @ 0x140158E70 (PnpUnlockMountableDevice.c)
 *     PnpRemoveDeviceActionRequests @ 0x14015ABF0 (PnpRemoveDeviceActionRequests.c)
 *     PopUserPresentSet @ 0x14015B5B8 (PopUserPresentSet.c)
 *     MiModifiedPageWriter @ 0x14015BF80 (MiModifiedPageWriter.c)
 *     MiStoreEvictThread @ 0x1401DF9C0 (MiStoreEvictThread.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x1401E010C (CcCancelMmWaitForUninitializeCacheMap.c)
 *     CcPostDeferredWrites @ 0x1401E0A50 (CcPostDeferredWrites.c)
 *     CcDeletePartition @ 0x1401E2158 (CcDeletePartition.c)
 *     FsFilterFreeCompletionStack @ 0x1401E8638 (FsFilterFreeCompletionStack.c)
 *     FsRtlStackOverflowRead @ 0x1401E9530 (FsRtlStackOverflowRead.c)
 *     IopFreeBackpocketIrp @ 0x1401F5144 (IopFreeBackpocketIrp.c)
 *     IopFreeReserveIrp @ 0x1401F51B4 (IopFreeReserveIrp.c)
 *     PnprQuiesce @ 0x14020017C (PnprQuiesce.c)
 *     KeRetryOutswapProcess @ 0x140202F18 (KeRetryOutswapProcess.c)
 *     KiConnectSecondaryInterrupt @ 0x140206EF4 (KiConnectSecondaryInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x140207050 (KiDisconnectSecondaryInterrupt.c)
 *     KiInvokeInterruptServiceRoutine @ 0x14020B154 (KiInvokeInterruptServiceRoutine.c)
 *     KiPassiveIsrWatchdog @ 0x14020B3B0 (KiPassiveIsrWatchdog.c)
 *     KiProcessDisconnectList @ 0x14020B3E8 (KiProcessDisconnectList.c)
 *     KiSignalWaitDisconnectLock @ 0x14020B4C0 (KiSignalWaitDisconnectLock.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x14020B4F0 (KiSynchronizePassiveInterruptExecution.c)
 *     KiBlockAndActivateUmsThread @ 0x14020E248 (KiBlockAndActivateUmsThread.c)
 *     MiProcessingPageExtendComplete @ 0x140211544 (MiProcessingPageExtendComplete.c)
 *     MiQueueControlAreaDelete @ 0x140211860 (MiQueueControlAreaDelete.c)
 *     MiMakeOutswappedPageResident @ 0x1402125D4 (MiMakeOutswappedPageResident.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140212D64 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x1402130A8 (MiReleaseCommitForResetPages.c)
 *     MiZeroPageFile @ 0x1402141C0 (MiZeroPageFile.c)
 *     MiFinishResume @ 0x140218680 (MiFinishResume.c)
 *     MiFlushAllFilesystemPages @ 0x140218D3C (MiFlushAllFilesystemPages.c)
 *     MiPfCompleteCoalescedIo @ 0x14021BACC (MiPfCompleteCoalescedIo.c)
 *     MiPfIssueCoalescedSupport @ 0x14021BD28 (MiPfIssueCoalescedSupport.c)
 *     MiMarkMdlComplete @ 0x14021C168 (MiMarkMdlComplete.c)
 *     MiObtainFreePages @ 0x14021D8D8 (MiObtainFreePages.c)
 *     MiQueueWorkingSetRequest @ 0x14021DD3C (MiQueueWorkingSetRequest.c)
 *     MiFlushComplete @ 0x14021FAB0 (MiFlushComplete.c)
 *     MiFreeOverlappedFlushEntry @ 0x14021FBC0 (MiFreeOverlappedFlushEntry.c)
 *     MiAttemptPageFileReductionApc @ 0x140224310 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x1402257E0 (MiFinishPageFileExtension.c)
 *     MiFlushAllHintedStorePages @ 0x1402258B8 (MiFlushAllHintedStorePages.c)
 *     MiFlushAllPagesWorker @ 0x140225AB0 (MiFlushAllPagesWorker.c)
 *     MiIrpCompletionApcRoutine @ 0x140226690 (MiIrpCompletionApcRoutine.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x140226D60 (MiTrimUnusedPageFileRegionsApc.c)
 *     MiWakeModifiedPageWriter @ 0x140227290 (MiWakeModifiedPageWriter.c)
 *     MiPageNotZero @ 0x14022A530 (MiPageNotZero.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14022AC60 (MiAllocatePfnRepurposeLogDispatch.c)
 *     MiStoreSetEvictPageFile @ 0x14022CBA8 (MiStoreSetEvictPageFile.c)
 *     MmStoreFlushOutstandingEvictions @ 0x14022D948 (MmStoreFlushOutstandingEvictions.c)
 *     MiDeletePartitionResources @ 0x140236E78 (MiDeletePartitionResources.c)
 *     MiReturnCrossPartitionCharges @ 0x14023804C (MiReturnCrossPartitionCharges.c)
 *     NtSignalAndWaitForSingleObject @ 0x1402391E0 (NtSignalAndWaitForSingleObject.c)
 *     PfpScenCtxWaiterTimedOut @ 0x140239710 (PfpScenCtxWaiterTimedOut.c)
 *     PopTimestampTargetProcessor @ 0x14023A2E0 (PopTimestampTargetProcessor.c)
 *     PopPropogateCoolingChange @ 0x14023CFD4 (PopPropogateCoolingChange.c)
 *     PopDeviceIdleCompletion @ 0x14023D460 (PopDeviceIdleCompletion.c)
 *     PopFxCompleteComponentPerfState @ 0x14023D99C (PopFxCompleteComponentPerfState.c)
 *     PopUnregisterPowerSettingCallback @ 0x140241124 (PopUnregisterPowerSettingCallback.c)
 *     PopUpdateWakeSourceWorker @ 0x1402416F0 (PopUpdateWakeSourceWorker.c)
 *     PopBatteryIrpComplete @ 0x140242350 (PopBatteryIrpComplete.c)
 *     PopBatteryWakeDpc @ 0x1402423D0 (PopBatteryWakeDpc.c)
 *     PopPepStartDeviceUnregisterActivity @ 0x1402433A0 (PopPepStartDeviceUnregisterActivity.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x140244110 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PsDispatchIumService @ 0x14024ED54 (PsDispatchIumService.c)
 *     ?SmCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140264EC0 (-SmCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmCompressContextQueueEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x140264FB0 (-SmCompressContextQueueEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_S.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140265730 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x140269B90 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?SmpFlushStorePages@@YAXPEAX@Z @ 0x14026A060 (-SmpFlushStorePages@@YAXPEAX@Z.c)
 *     SmFpFree @ 0x140272EDC (SmFpFree.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14027485C (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x140275A00 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x140275AE0 (-SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z.c)
 *     SmIoRequestComplete @ 0x140275C28 (SmIoRequestComplete.c)
 *     EtwSendTraceBuffer @ 0x14027A7E0 (EtwSendTraceBuffer.c)
 *     EtwpLoggerDpc @ 0x14027DFA0 (EtwpLoggerDpc.c)
 *     EtwpThreadRundownApc @ 0x14027EF00 (EtwpThreadRundownApc.c)
 *     ExNotifyBootDeviceRemoval @ 0x140284040 (ExNotifyBootDeviceRemoval.c)
 *     ExRegisterBootDevice @ 0x140284090 (ExRegisterBootDevice.c)
 *     ExReleaseRundownProtectionEx @ 0x140285F20 (ExReleaseRundownProtectionEx.c)
 *     WheapProcessWorkQueueItem @ 0x140289820 (WheapProcessWorkQueueItem.c)
 *     EmpReleasePagingReference @ 0x140424520 (EmpReleasePagingReference.c)
 *     PfpScenCtxScenarioSet @ 0x140429040 (PfpScenCtxScenarioSet.c)
 *     PnprInitiateReplaceOperation @ 0x14042C2C0 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x14042D5E0 (PnprQuiesceWorker.c)
 *     MiShutdownSystem @ 0x14042EC54 (MiShutdownSystem.c)
 *     MiZeroAllPageFiles @ 0x14042EDB4 (MiZeroAllPageFiles.c)
 *     MmDuplicateMemory @ 0x14042F6D8 (MmDuplicateMemory.c)
 *     PfpScenCtxPrefetchStateSet @ 0x140430DB4 (PfpScenCtxPrefetchStateSet.c)
 *     PopGracefulShutdown @ 0x140431740 (PopGracefulShutdown.c)
 *     PopHandleWakeSources @ 0x140431A40 (PopHandleWakeSources.c)
 *     PopEndMirroring @ 0x140432FE0 (PopEndMirroring.c)
 *     PopTransitionToSleep @ 0x140435830 (PopTransitionToSleep.c)
 *     PopFlushVolumeWorker @ 0x140436680 (PopFlushVolumeWorker.c)
 *     PopBuildDeviceNotifyListWatchdog @ 0x1404372E0 (PopBuildDeviceNotifyListWatchdog.c)
 *     PopSystemIrpCompletion @ 0x140437950 (PopSystemIrpCompletion.c)
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140438E30 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     ExpSetSwappingKernelApc @ 0x14043AD00 (ExpSetSwappingKernelApc.c)
 *     MiInSwapStoreWorker @ 0x1404444B0 (MiInSwapStoreWorker.c)
 *     CmThawRegistry @ 0x14044F478 (CmThawRegistry.c)
 *     EtwpDisassociateConsumer @ 0x1404520E4 (EtwpDisassociateConsumer.c)
 *     PfSnEndTrace @ 0x140454934 (PfSnEndTrace.c)
 *     PfGetCompletedTrace @ 0x140455130 (PfGetCompletedTrace.c)
 *     PfTReplaceCurrentBuffer @ 0x140456864 (PfTReplaceCurrentBuffer.c)
 *     PfTTraceListAdd @ 0x140457178 (PfTTraceListAdd.c)
 *     IopLoadUnloadDriver @ 0x14046F260 (IopLoadUnloadDriver.c)
 *     CmpPostApc @ 0x14046F720 (CmpPostApc.c)
 *     CmpSignalDeferredPosts @ 0x14046FA38 (CmpSignalDeferredPosts.c)
 *     CmpSignalUnloadEventArrayForHive @ 0x14046FE70 (CmpSignalUnloadEventArrayForHive.c)
 *     CmpPostNotify @ 0x14047BFBC (CmpPostNotify.c)
 *     IopQueryXxxInformation @ 0x14048FF44 (IopQueryXxxInformation.c)
 *     NtQueryVolumeInformationFile @ 0x140490C90 (NtQueryVolumeInformationFile.c)
 *     IopGetSetSecurityObject @ 0x140491160 (IopGetSetSecurityObject.c)
 *     NtLockFile @ 0x1404924A0 (NtLockFile.c)
 *     MiPfExecuteReadList @ 0x140492E94 (MiPfExecuteReadList.c)
 *     NtQueryInformationFile @ 0x14049A060 (NtQueryInformationFile.c)
 *     AlpcpCompleteDispatchMessage @ 0x1404A1000 (AlpcpCompleteDispatchMessage.c)
 *     NtSetEvent @ 0x1404A3FF0 (NtSetEvent.c)
 *     CmpDeleteKeyObject @ 0x1404A97C0 (CmpDeleteKeyObject.c)
 *     IopSynchronousServiceTail @ 0x1404AD220 (IopSynchronousServiceTail.c)
 *     IopXxxControlFile @ 0x1404AD980 (IopXxxControlFile.c)
 *     IopCloseFile @ 0x1404BAD60 (IopCloseFile.c)
 *     CmNotifyRunDown @ 0x1404D66B0 (CmNotifyRunDown.c)
 *     MiAllocateUserStack @ 0x1404D9354 (MiAllocateUserStack.c)
 *     CmLoadAppKey @ 0x1404E13B4 (CmLoadAppKey.c)
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 *     IopDestroyActiveConnectBlock @ 0x1404EC298 (IopDestroyActiveConnectBlock.c)
 *     EtwpQueueNotification @ 0x1404EF84C (EtwpQueueNotification.c)
 *     EtwpStopLoggerInstance @ 0x1404F0374 (EtwpStopLoggerInstance.c)
 *     FlushWorkItemRoutineKernelMode @ 0x1404F0670 (FlushWorkItemRoutineKernelMode.c)
 *     ExpWnfNotifySubscription @ 0x1404FDA2C (ExpWnfNotifySubscription.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140500F14 (ExpWnfNotifyNameSubscribers.c)
 *     NtWriteFile @ 0x140505350 (NtWriteFile.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x14050DA38 (PspEvaluateAndNotifyEmptyJob.c)
 *     EtwpLogger @ 0x140531E30 (EtwpLogger.c)
 *     EtwpRealtimeUpdateConsumers @ 0x140532954 (EtwpRealtimeUpdateConsumers.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x140532DE0 (EtwpRealtimeInjectEtwBuffer.c)
 *     SPCallServerHandleQueryPolicy @ 0x140536700 (SPCallServerHandleQueryPolicy.c)
 *     WmipAddDataSource @ 0x140545304 (WmipAddDataSource.c)
 *     PiUEventDereferenceEventEntry @ 0x14054AF98 (PiUEventDereferenceEventEntry.c)
 *     PnpDeviceEventWorker @ 0x14054B420 (PnpDeviceEventWorker.c)
 *     PnpCompleteDeviceEvent @ 0x14054B798 (PnpCompleteDeviceEvent.c)
 *     IopTrackLink @ 0x14055854C (IopTrackLink.c)
 *     ArbArbiterHandler @ 0x14055A9B0 (ArbArbiterHandler.c)
 *     PopFxUnregisterDeviceOrWait @ 0x14055E898 (PopFxUnregisterDeviceOrWait.c)
 *     IopMountVolume @ 0x14055FFAC (IopMountVolume.c)
 *     IopAcquireFileObjectLock @ 0x14056053C (IopAcquireFileObjectLock.c)
 *     NtReadFileScatter @ 0x1405616E4 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x140561D0C (NtWriteFileGather.c)
 *     NtReadFile @ 0x140562BE0 (NtReadFile.c)
 *     RtlDecompressBufferLZNT1 @ 0x140563620 (RtlDecompressBufferLZNT1.c)
 *     RtlDecompressFragmentLZNT1 @ 0x1405637D0 (RtlDecompressFragmentLZNT1.c)
 *     IopCancelIrpsInCurrentThreadListApcRoutine @ 0x1405682E0 (IopCancelIrpsInCurrentThreadListApcRoutine.c)
 *     WmipQueueNotification @ 0x140568460 (WmipQueueNotification.c)
 *     EtwpFreeLoggerContext @ 0x14058E0D4 (EtwpFreeLoggerContext.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x14058E65C (EtwpRealtimeDisconnectAllConsumers.c)
 *     RtlRunOnceComplete @ 0x140591D30 (RtlRunOnceComplete.c)
 *     EtwpSynchronizeWithLogger @ 0x140595F24 (EtwpSynchronizeWithLogger.c)
 *     AlpcpTrackPortReferences @ 0x140596220 (AlpcpTrackPortReferences.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1405964E0 (PiDrvDbLoadNodeWorkerCallback.c)
 *     CmpWakeWriteQueueWaiters @ 0x140597ECC (CmpWakeWriteQueueWaiters.c)
 *     CmpGetVolumeClusterSizeCompletion @ 0x14059B4D0 (CmpGetVolumeClusterSizeCompletion.c)
 *     IoSetInformation @ 0x14059BCF0 (IoSetInformation.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x14059F200 (PfSnTracingStateExWorkerRoutine.c)
 *     PoInitHiberServices @ 0x1405AD774 (PoInitHiberServices.c)
 *     MUIRegistrySystemRoutine @ 0x1405BDC80 (MUIRegistrySystemRoutine.c)
 *     CmpLoadHiveThread @ 0x1405BE770 (CmpLoadHiveThread.c)
 *     CmpFinishSystemHivesLoad @ 0x1405C09E0 (CmpFinishSystemHivesLoad.c)
 *     ArbBuildAssignmentOrdering @ 0x1405CEFB8 (ArbBuildAssignmentOrdering.c)
 *     MiInsertPageFileInList @ 0x1405D4984 (MiInsertPageFileInList.c)
 *     WmipReleaseCollectionEnabled @ 0x1405D5ED0 (WmipReleaseCollectionEnabled.c)
 *     CmpWaitForHiveMount @ 0x1405DE638 (CmpWaitForHiveMount.c)
 *     PiUEventHandleVetoEvent @ 0x1405E0CB0 (PiUEventHandleVetoEvent.c)
 *     NtNotifyChangeSession @ 0x1405E12D0 (NtNotifyChangeSession.c)
 *     CmpInitializeSystemHivesLoad @ 0x1405E18B4 (CmpInitializeSystemHivesLoad.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x1405E1B70 (IopAcquireReleaseConnectLockInternal.c)
 *     IopInvalidateVolumesForDevice @ 0x1405E359C (IopInvalidateVolumesForDevice.c)
 *     DbgkRegisterErrorPort @ 0x1405EBA80 (DbgkRegisterErrorPort.c)
 *     MmSetSessionObjectIoEvent @ 0x1405EECD4 (MmSetSessionObjectIoEvent.c)
 *     PopUserPresentSetWorker @ 0x1405EED00 (PopUserPresentSetWorker.c)
 *     WheapEtwEnableCallback @ 0x1405F0150 (WheapEtwEnableCallback.c)
 *     PfTLoggingWorker @ 0x140687320 (PfTLoggingWorker.c)
 *     CmpPostApcRunDown @ 0x140697900 (CmpPostApcRunDown.c)
 *     DbgkpCloseObject @ 0x1406A9D70 (DbgkpCloseObject.c)
 *     DbgkpQueueMessage @ 0x1406AAA14 (DbgkpQueueMessage.c)
 *     DbgkpSetProcessDebugObject @ 0x1406AACFC (DbgkpSetProcessDebugObject.c)
 *     DbgkpWakeTarget @ 0x1406AB018 (DbgkpWakeTarget.c)
 *     NtDebugContinue @ 0x1406AB470 (NtDebugContinue.c)
 *     DbgkpLkmdSnapThreadApc @ 0x1406AD770 (DbgkpLkmdSnapThreadApc.c)
 *     FsRtlpOplockWaitCompleteRoutine @ 0x1406B0DE0 (FsRtlpOplockWaitCompleteRoutine.c)
 *     IopAllocateIrpCleanup @ 0x1406B4714 (IopAllocateIrpCleanup.c)
 *     IopConnectLinkTrackingPort @ 0x1406B4C20 (IopConnectLinkTrackingPort.c)
 *     IopExceptionCleanup @ 0x1406B4D78 (IopExceptionCleanup.c)
 *     IopSendMessageToTrackService @ 0x1406B5B58 (IopSendMessageToTrackService.c)
 *     IoVerifyVolume @ 0x1406B7D20 (IoVerifyVolume.c)
 *     PnpShutdownDevices @ 0x1406BDC40 (PnpShutdownDevices.c)
 *     IopAcquireReleaseDispatcherLock @ 0x1406C0FCC (IopAcquireReleaseDispatcherLock.c)
 *     PnpReplacePartitionUnit @ 0x1406CB3C0 (PnpReplacePartitionUnit.c)
 *     IopWarmEjectDevice @ 0x1406D3C00 (IopWarmEjectDevice.c)
 *     KeUpdateUmsThreadState @ 0x1406D8C7C (KeUpdateUmsThreadState.c)
 *     MiDereferenceSessionFinal @ 0x1406E2C84 (MiDereferenceSessionFinal.c)
 *     MmStoreRegister @ 0x1406EABBC (MmStoreRegister.c)
 *     PfGenerateTrace @ 0x1406F3AD4 (PfGenerateTrace.c)
 *     PfTCleanup @ 0x1406F3D88 (PfTCleanup.c)
 *     PfpParametersWatcher @ 0x1406F4A60 (PfpParametersWatcher.c)
 *     PopFxUnregisterDevice @ 0x1406F944C (PopFxUnregisterDevice.c)
 *     PopFinalizeWakeInfo @ 0x1406FA540 (PopFinalizeWakeInfo.c)
 *     PopCompleteAction @ 0x1406FCAA8 (PopCompleteAction.c)
 *     PopBatteryReadTag @ 0x1406FE7B0 (PopBatteryReadTag.c)
 *     PopThermalWorker @ 0x140700090 (PopThermalWorker.c)
 *     PopReleaseTransitionLock @ 0x1407013E0 (PopReleaseTransitionLock.c)
 *     PopNotifyPolicyDevice @ 0x140706F40 (PopNotifyPolicyDevice.c)
 *     PopFanWorker @ 0x140707450 (PopFanWorker.c)
 *     TtmiCloseEventQueue @ 0x140710C70 (TtmiCloseEventQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x14071102C (TtmiWriteEventToSingleQueue.c)
 *     PspDeferredWorkerRoutine @ 0x140715030 (PspDeferredWorkerRoutine.c)
 *     PspDeleteServerSiloGlobals @ 0x14071514C (PspDeleteServerSiloGlobals.c)
 *     PsIsVsmEnclaveTerminated @ 0x14071C044 (PsIsVsmEnclaveTerminated.c)
 *     PsTerminateVsmEnclave @ 0x14071C150 (PsTerminateVsmEnclave.c)
 *     PspReleaseEnclaveThread @ 0x14071C3E4 (PspReleaseEnclaveThread.c)
 *     SmcCacheAdd @ 0x14073C138 (SmcCacheAdd.c)
 *     SmcCacheDelete @ 0x14073C2CC (SmcCacheDelete.c)
 *     ExpPartitionCreatePool @ 0x14075E748 (ExpPartitionCreatePool.c)
 *     ExpPartitionDestroy @ 0x14075E934 (ExpPartitionDestroy.c)
 *     CMFSystemThreadRoutine @ 0x1407618F0 (CMFSystemThreadRoutine.c)
 *     WheapAttemptPhysicalPageOfflineWorker @ 0x140763240 (WheapAttemptPhysicalPageOfflineWorker.c)
 *     SbpVmbusNotificationHandler @ 0x140789D10 (SbpVmbusNotificationHandler.c)
 *     KdpTimeSlipWork @ 0x1407989B0 (KdpTimeSlipWork.c)
 *     ViIrpSynchronousCompletionRoutine @ 0x1407B0DA0 (ViIrpSynchronousCompletionRoutine.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x1407B3EF8 (ViPendingQueuePassiveLevelCompletion.c)
 *     ViFilterRemoveNotificationCompletion @ 0x1407C30D0 (ViFilterRemoveNotificationCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x1407CF6D0 (AnFwpFadeAnimationTimer.c)
 *     sub_14080DE60 @ 0x14080DE60 (sub_14080DE60.c)
 *     MiInitializePagedPoolEvents @ 0x140828D10 (MiInitializePagedPoolEvents.c)
 * Callees:
 *     KiWakeOtherQueueWaiters @ 0x140061290 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140061410 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400728B0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400757E0 (KiTryUnwaitThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 *     KeIsThreadRunning @ 0x14020277C (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14027B28C (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KeSetEvent(PRKEVENT Event, KPRIORITY Increment, BOOLEAN Wait)
{
  int v6; // r14d
  char CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // r15
  LONG SignalState; // esi
  struct _LIST_ENTRY *Flink; // r13
  bool v11; // zf
  LIST_ENTRY *p_WaitListHead; // r14
  struct _LIST_ENTRY *v14; // rdx
  struct _LIST_ENTRY *v15; // rcx
  struct _LIST_ENTRY *Blink; // rax
  char v17; // al
  struct _LIST_ENTRY *v18; // rdx
  char v19; // al
  __int64 v20; // r8
  _QWORD *v21; // rdx
  __int64 v22; // rcx
  char v23; // al
  int v24; // r10d
  struct _LIST_ENTRY *v25; // r9
  _QWORD *v26; // r8
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
  _KTHREAD *CurrentThread; // [rsp+40h] [rbp-48h]
  _KTHREAD *v42; // [rsp+40h] [rbp-48h]
  __int64 v43; // [rsp+90h] [rbp+8h]
  __int64 v44; // [rsp+90h] [rbp+8h]

  if ( (Event->Header.Type & 0x7F) != 0 )
  {
    v6 = 0;
LABEL_3:
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    KiAcquireKobjectLockSafe(Event);
    SignalState = Event->Header.SignalState;
    Event->Header.SignalState = 1;
    if ( SignalState )
    {
LABEL_6:
      _InterlockedAnd(&Event->Header.Lock, 0xFFFFFF7F);
      KiExitDispatcher((_DWORD)CurrentPrcb, Wait != 0 ? 3 : 0, 1, Increment, CurrentIrql);
      return SignalState;
    }
    Flink = Event->Header.WaitListHead.Flink;
    v11 = v6 == 0;
    p_WaitListHead = &Event->Header.WaitListHead;
    if ( v11 )
    {
      if ( Flink == p_WaitListHead )
        goto LABEL_6;
      while ( 1 )
      {
        v14 = Flink;
        Flink = Flink->Flink;
        v37 = v14;
        v15 = v14->Flink;
        Blink = v14->Blink;
        if ( v14->Flink->Blink != v14 || Blink->Flink != v14 )
          __fastfail(3u);
        Blink->Flink = v15;
        v15->Blink = Blink;
        v17 = (char)v14[1].Flink;
        if ( v17 == 1 )
        {
          if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v14, WORD1(v14[1].Flink), 0LL) )
          {
            v11 = Event->Header.SignalState-- == 1;
            if ( v11 )
              goto LABEL_6;
          }
        }
        else
        {
          if ( v17 == 2 )
          {
            BYTE1(v14[1].Flink) = 5;
            v43 = (__int64)v14[1].Blink;
            v14->Flink = 0LL;
            KeGetCurrentIrql();
            __writecr8(2uLL);
            v40 = KeGetCurrentPrcb();
            CurrentThread = v40->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              IsThreadRunning = KeIsThreadRunning(v40->CurrentThread);
              EtwTraceEnqueueWork(v33, v32, IsThreadRunning);
            }
            KiAcquireKobjectLockSafe(v43);
            v21 = (_QWORD *)(v43 + 8);
            v22 = v43;
            if ( (_QWORD *)*v21 == v21
              || *(_DWORD *)(v43 + 40) >= *(_DWORD *)(v43 + 44)
              || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v43 && CurrentThread->WaitReason == 15 )
            {
LABEL_32:
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
                v22 = v43;
              }
            }
            else
            {
              v23 = KiWakeQueueWaiter((__int64)v40, v43, (__int64)v37);
              v22 = v43;
              if ( !v23 )
              {
                v21 = (_QWORD *)(v43 + 8);
                goto LABEL_32;
              }
            }
            _InterlockedAnd((volatile signed __int32 *)v22, 0xFFFFFF7F);
            v11 = Event->Header.SignalState-- == 1;
            if ( v11 )
              goto LABEL_6;
            goto LABEL_49;
          }
          KiTryUnwaitThread(CurrentPrcb, v14, 256LL, 0LL);
        }
LABEL_49:
        if ( Flink == p_WaitListHead )
          goto LABEL_6;
      }
    }
    if ( Flink == p_WaitListHead )
    {
LABEL_10:
      Event->Header.WaitListHead.Blink = &Event->Header.WaitListHead;
      p_WaitListHead->Flink = p_WaitListHead;
      goto LABEL_6;
    }
    while ( 1 )
    {
      v18 = Flink;
      Flink = Flink->Flink;
      v39 = v18;
      v19 = (char)v18[1].Flink;
      if ( v19 == 1 )
      {
        v20 = WORD1(v18[1].Flink);
      }
      else
      {
        if ( v19 == 2 )
        {
          BYTE1(v18[1].Flink) = 5;
          v44 = (__int64)v18[1].Blink;
          v18->Flink = 0LL;
          KeGetCurrentIrql();
          __writecr8(2uLL);
          v38 = KeGetCurrentPrcb();
          v42 = v38->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v34 = KeIsThreadRunning(v38->CurrentThread);
            EtwTraceEnqueueWork(v36, v35, v34);
          }
          KiAcquireKobjectLockSafe(v44);
          v26 = (_QWORD *)(v44 + 8);
          v27 = v44;
          if ( (_QWORD *)*v26 == v26
            || *(_DWORD *)(v44 + 40) >= *(_DWORD *)(v44 + 44)
            || v42->Queue == (_DISPATCHER_HEADER *volatile)v44 && v42->WaitReason == 15 )
          {
LABEL_55:
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
              v27 = v44;
            }
          }
          else
          {
            v28 = KiWakeQueueWaiter((__int64)v38, v44, (__int64)v39);
            v27 = v44;
            if ( !v28 )
            {
              v26 = (_QWORD *)(v44 + 8);
              goto LABEL_55;
            }
          }
          _InterlockedAnd((volatile signed __int32 *)v27, 0xFFFFFF7F);
          goto LABEL_20;
        }
        v20 = 256LL;
      }
      KiTryUnwaitThread(CurrentPrcb, v18, v20, 0LL);
LABEL_20:
      if ( Flink == p_WaitListHead )
        goto LABEL_10;
    }
  }
  if ( Event->Header.SignalState != 1 || Wait )
  {
    v6 = 1;
    goto LABEL_3;
  }
  return 1;
}
