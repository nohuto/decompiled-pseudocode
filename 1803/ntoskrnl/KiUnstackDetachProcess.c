/*
 * XREFs of KiUnstackDetachProcess @ 0x1400083C0
 * Callers:
 *     NtGetWriteWatch @ 0x140024440 (NtGetWriteWatch.c)
 *     MiSharePages @ 0x1400326D0 (MiSharePages.c)
 *     MiUnlockStealVm @ 0x14003F9B0 (MiUnlockStealVm.c)
 *     NtUnlockVirtualMemory @ 0x14004E260 (NtUnlockVirtualMemory.c)
 *     MiWaitForInPageComplete @ 0x1400583A0 (MiWaitForInPageComplete.c)
 *     PspProcessDelete @ 0x14006F630 (PspProcessDelete.c)
 *     MiDeleteFinalPageTables @ 0x140070A70 (MiDeleteFinalPageTables.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x14007DAD0 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x140081D8C (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 *     MiTrimSharedPageFromViews @ 0x140082660 (MiTrimSharedPageFromViews.c)
 *     MmDetachSession @ 0x14008A5E0 (MmDetachSession.c)
 *     MmEnforceWorkingSetLimit @ 0x14008A9B8 (MmEnforceWorkingSetLimit.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140099EC4 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     MiGetWorkingSetInfoList @ 0x1400B3CD0 (MiGetWorkingSetInfoList.c)
 *     MmQueryCommitReleaseState @ 0x1400C6588 (MmQueryCommitReleaseState.c)
 *     SepRmCallLsa @ 0x1400C7970 (SepRmCallLsa.c)
 *     PspIsProcessReadyForRemoteThread @ 0x1400C9B1C (PspIsProcessReadyForRemoteThread.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x1400CC294 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     PsQueryProcessCommandLine @ 0x1400CF920 (PsQueryProcessCommandLine.c)
 *     IoRemoveIoCompletion @ 0x1400F4CD0 (IoRemoveIoCompletion.c)
 *     NtLockVirtualMemory @ 0x14013B8F4 (NtLockVirtualMemory.c)
 *     MiLockDownWorkingSet @ 0x140140AFC (MiLockDownWorkingSet.c)
 *     MiGetWorkingSetInfoEx @ 0x140144614 (MiGetWorkingSetInfoEx.c)
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x1401538A0 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 *     MiFlushAllPages @ 0x1401577E8 (MiFlushAllPages.c)
 *     PsDispatchIumService @ 0x14015CBE4 (PsDispatchIumService.c)
 *     MiEmptyAccessLogs @ 0x14016A490 (MiEmptyAccessLogs.c)
 *     SepAdtLogAuditRecord @ 0x14017FF54 (SepAdtLogAuditRecord.c)
 *     IoRaiseHardError @ 0x140236830 (IoRaiseHardError.c)
 *     KeSecureProcess @ 0x14024064C (KeSecureProcess.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140251154 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x140251398 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1402515B8 (MiReleaseOutSwappedProcessCommit.c)
 *     MmReleaseCommitForMemResetPages @ 0x140251BF0 (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x140251DD0 (MmSetCommitReleaseEligibility.c)
 *     MmUpdateOldWorkingSetPages @ 0x14025AB14 (MmUpdateOldWorkingSetPages.c)
 *     NtFreeUserPhysicalPages @ 0x14026303C (NtFreeUserPhysicalPages.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x1402A3184 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     ExpSvmServicePageFault @ 0x1402BC7D0 (ExpSvmServicePageFault.c)
 *     AlpcpForceUnlinkSecureView @ 0x14048BE1C (AlpcpForceUnlinkSecureView.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x14048C768 (SmProcessStoreMemoryPriorityRequest.c)
 *     MiCombineIdenticalPages @ 0x14048CAE4 (MiCombineIdenticalPages.c)
 *     PfSnAsyncPrefetchWorker @ 0x14048E5B0 (PfSnAsyncPrefetchWorker.c)
 *     CmpCreateHive @ 0x140497630 (CmpCreateHive.c)
 *     CmDeleteValueKey @ 0x14049B18C (CmDeleteValueKey.c)
 *     CmpDelayCloseWorker @ 0x14049CE20 (CmpDelayCloseWorker.c)
 *     CmpInitHiveFromFile @ 0x14049DBFC (CmpInitHiveFromFile.c)
 *     CmDeleteKey @ 0x14049FF78 (CmDeleteKey.c)
 *     PfSnPopulateReadList @ 0x1404A1900 (PfSnPopulateReadList.c)
 *     CmSetValueKey @ 0x1404A4924 (CmSetValueKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1404A53D0 (CmCallbackGetKeyObjectIDEx.c)
 *     CmEnumerateValueKey @ 0x1404A6F00 (CmEnumerateValueKey.c)
 *     CmpDetachFromRegistryProcess @ 0x1404A80D8 (CmpDetachFromRegistryProcess.c)
 *     MmProbeAndLockProcessPages @ 0x1404A80F0 (MmProbeAndLockProcessPages.c)
 *     CmpDelayDerefKCBWorker @ 0x1404A84A0 (CmpDelayDerefKCBWorker.c)
 *     CmEnumerateKey @ 0x1404ACAA0 (CmEnumerateKey.c)
 *     MmFreeVirtualMemory @ 0x1404AD570 (MmFreeVirtualMemory.c)
 *     CmQueryKey @ 0x1404AE2E0 (CmQueryKey.c)
 *     NtResetWriteWatch @ 0x1404AF9A0 (NtResetWriteWatch.c)
 *     NtSetInformationVirtualMemory @ 0x1404B30D0 (NtSetInformationVirtualMemory.c)
 *     ObDuplicateObject @ 0x1404B6D20 (ObDuplicateObject.c)
 *     PspWriteTebIdealProcessor @ 0x1404B8A58 (PspWriteTebIdealProcessor.c)
 *     MiMapImageInSystemSpace @ 0x1404BD390 (MiMapImageInSystemSpace.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1404D513C (AlpcpExposeViewAttributeInSenderContext.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1404D5D60 (MmSecureVirtualMemoryAgainstWrites.c)
 *     AlpcViewDestroyProcedure @ 0x1404D6CD0 (AlpcViewDestroyProcedure.c)
 *     MiUnmapViewOfSection @ 0x1404D7010 (MiUnmapViewOfSection.c)
 *     AlpcpRestoreWriteAccess @ 0x1404D7A24 (AlpcpRestoreWriteAccess.c)
 *     AlpcpPrepareViewForDelivery @ 0x1404D9C30 (AlpcpPrepareViewForDelivery.c)
 *     NtSetInformationProcess @ 0x1404E4550 (NtSetInformationProcess.c)
 *     MiAllocateUserStack @ 0x1404E88F4 (MiAllocateUserStack.c)
 *     PsMapSystemDlls @ 0x1404E93D8 (PsMapSystemDlls.c)
 *     MmCreatePeb @ 0x1404E97D4 (MmCreatePeb.c)
 *     PspSetupUserProcessAddressSpace @ 0x1404E9DD0 (PspSetupUserProcessAddressSpace.c)
 *     MmInitializeProcessAddressSpace @ 0x1404ECD04 (MmInitializeProcessAddressSpace.c)
 *     PspAllocateProcess @ 0x1404ED888 (PspAllocateProcess.c)
 *     ExpWnfWriteStateData @ 0x1404F7310 (ExpWnfWriteStateData.c)
 *     EtwpWriteProcessEvent @ 0x1404F8600 (EtwpWriteProcessEvent.c)
 *     PspWritePebAffinityInfo @ 0x1404F8C88 (PspWritePebAffinityInfo.c)
 *     PspQueryQuotaLimits @ 0x1404F8FFC (PspQueryQuotaLimits.c)
 *     NtQueryInformationProcess @ 0x1404F9480 (NtQueryInformationProcess.c)
 *     EtwTraceAppStateChange @ 0x140510E74 (EtwTraceAppStateChange.c)
 *     ObpDecrementHandleCount @ 0x140519894 (ObpDecrementHandleCount.c)
 *     MmPrefetchVirtualMemory @ 0x14052C778 (MmPrefetchVirtualMemory.c)
 *     MiInSwapStoreWorker @ 0x14052CFF0 (MiInSwapStoreWorker.c)
 *     MmProcessWorkingSetControl @ 0x14052D3D4 (MmProcessWorkingSetControl.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x14053154C (PspApplyWorkingSetLimitsToProcess.c)
 *     MmAssignProcessToJob @ 0x140531714 (MmAssignProcessToJob.c)
 *     PspRundownSingleProcess @ 0x1405322EC (PspRundownSingleProcess.c)
 *     PspChangeProcessExecutionState @ 0x140532AF8 (PspChangeProcessExecutionState.c)
 *     MiUnmapImageInSystemSpace @ 0x14053D034 (MiUnmapImageInSystemSpace.c)
 *     NtRollbackRegistryTransaction @ 0x14054BA64 (NtRollbackRegistryTransaction.c)
 *     NtCommitRegistryTransaction @ 0x14054BD4C (NtCommitRegistryTransaction.c)
 *     CmpCleanupLightWeightTransaction @ 0x14054BEFC (CmpCleanupLightWeightTransaction.c)
 *     CmpPerformUnloadKey @ 0x14054D0B4 (CmpPerformUnloadKey.c)
 *     CmpLateUnloadHiveWorker @ 0x14054D5D0 (CmpLateUnloadHiveWorker.c)
 *     CmpCleanUpKCBCacheTable @ 0x14054E3C0 (CmpCleanUpKCBCacheTable.c)
 *     NtSetInformationObject @ 0x140550ED0 (NtSetInformationObject.c)
 *     ExSweepHandleTable @ 0x1405541A0 (ExSweepHandleTable.c)
 *     CmpLinkHiveToMaster @ 0x140557540 (CmpLinkHiveToMaster.c)
 *     PoEnergyContextStart @ 0x1405597BC (PoEnergyContextStart.c)
 *     ObSetHandleAttributes @ 0x140560C10 (ObSetHandleAttributes.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140561188 (EtwQueryProcessTelemetryInfo.c)
 *     NtQueryMultipleValueKey @ 0x1405615AC (NtQueryMultipleValueKey.c)
 *     MmDeleteTeb @ 0x140562BFC (MmDeleteTeb.c)
 *     PspWow64InitThread @ 0x140563200 (PspWow64InitThread.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140563FC8 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     MmFlushVirtualMemory @ 0x140568184 (MmFlushVirtualMemory.c)
 *     EtwpTiQueryVad @ 0x14056B8D4 (EtwpTiQueryVad.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14056FE18 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PspWow64SetupUserStack @ 0x140575B6C (PspWow64SetupUserStack.c)
 *     PspSetQuotaLimits @ 0x14057899C (PspSetQuotaLimits.c)
 *     PspSetupReservedUserMappings @ 0x14057902C (PspSetupReservedUserMappings.c)
 *     NtFlushKey @ 0x14057A130 (NtFlushKey.c)
 *     CmLoadKey @ 0x14057F140 (CmLoadKey.c)
 *     PspDeleteUserStack @ 0x140580B4C (PspDeleteUserStack.c)
 *     CmRmFinalizeRecovery @ 0x1405824E8 (CmRmFinalizeRecovery.c)
 *     EtwpEnableGuid @ 0x14058D2FC (EtwpEnableGuid.c)
 *     EtwpAddRegEntryToGroup @ 0x14058F4F0 (EtwpAddRegEntryToGroup.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x140592504 (EtwpRealtimeInjectEtwBuffer.c)
 *     MmCreateTeb @ 0x140592878 (MmCreateTeb.c)
 *     MiMapViewOfSection @ 0x140593F20 (MiMapViewOfSection.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140595C30 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     NtEnumerateValueKey @ 0x140596600 (NtEnumerateValueKey.c)
 *     PspWriteTebImpersonationInfo @ 0x14059AE50 (PspWriteTebImpersonationInfo.c)
 *     MmCopyVirtualMemory @ 0x14059CD40 (MmCopyVirtualMemory.c)
 *     CmQueryValueKey @ 0x1405A0B80 (CmQueryValueKey.c)
 *     ObCloseHandleTableEntry @ 0x1405A4E20 (ObCloseHandleTableEntry.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 *     ObpIncrementHandleCountEx @ 0x1405AB080 (ObpIncrementHandleCountEx.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405AD720 (CmKeyBodyRemapToVirtualForEnum.c)
 *     MiAllocateVirtualMemory @ 0x1405B49A0 (MiAllocateVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x1405B5960 (NtProtectVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1405B5C20 (MmQueryVirtualMemory.c)
 *     PspAllocateThread @ 0x1405B8EE8 (PspAllocateThread.c)
 *     PspSetupUserStack @ 0x1405B9C34 (PspSetupUserStack.c)
 *     MiCloneProcessAddressSpace @ 0x1405BF2F8 (MiCloneProcessAddressSpace.c)
 *     MiAllocateChildVads @ 0x1405BF6F8 (MiAllocateChildVads.c)
 *     MiInsertChildVads @ 0x1405BFB04 (MiInsertChildVads.c)
 *     CmpTransMgrPrepare @ 0x1405DEE1C (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x1405DEFD8 (CmpTransMgrCommit.c)
 *     CmpCleanupTransactionState @ 0x1405E77C0 (CmpCleanupTransactionState.c)
 *     NtQueryOpenSubKeysEx @ 0x1405ED870 (NtQueryOpenSubKeysEx.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1405F3254 (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpStartCLFSLog @ 0x1405F49A0 (CmpStartCLFSLog.c)
 *     EtwpProcessEnumCallback @ 0x1406292D0 (EtwpProcessEnumCallback.c)
 *     MmCreateShadowMapping @ 0x14062B744 (MmCreateShadowMapping.c)
 *     PsCreateMinimalProcess @ 0x14062C5DC (PsCreateMinimalProcess.c)
 *     CmpFinishSystemHivesLoad @ 0x14062E4B0 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1406309E0 (CmpMountPreloadedHives.c)
 *     CmpHandlePageFileOpenNotification @ 0x1406329A0 (CmpHandlePageFileOpenNotification.c)
 *     PsStartSiloMonitor @ 0x140647BE0 (PsStartSiloMonitor.c)
 *     PspAllocatePartition @ 0x14064EEF0 (PspAllocatePartition.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140652748 (MmInitializeHandBuiltProcess2.c)
 *     CmpSaveBootControlSet @ 0x1406EB510 (CmpSaveBootControlSet.c)
 *     NtCompressKey @ 0x1406EBDBC (NtCompressKey.c)
 *     NtFreezeRegistry @ 0x1406EBFB8 (NtFreezeRegistry.c)
 *     NtQueryOpenSubKeys @ 0x1406EC1AC (NtQueryOpenSubKeys.c)
 *     NtRenameKey @ 0x1406EC3E0 (NtRenameKey.c)
 *     NtRestoreKey @ 0x1406ECCC8 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x1406ECF78 (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x1406ED214 (NtSaveMergedKeys.c)
 *     NtThawRegistry @ 0x1406ED440 (NtThawRegistry.c)
 *     CmCallbackGetKeyObjectID @ 0x1406ED4C0 (CmCallbackGetKeyObjectID.c)
 *     CmEtwRunDown @ 0x1406EDEF0 (CmEtwRunDown.c)
 *     CmpEtwDumpKcb @ 0x1406EE1C0 (CmpEtwDumpKcb.c)
 *     CmpPublishEventForPcaResolver @ 0x1406EE62C (CmpPublishEventForPcaResolver.c)
 *     CmShutdownSystem @ 0x1406EFFE4 (CmShutdownSystem.c)
 *     CmpFreeAllMemory @ 0x1406F052C (CmpFreeAllMemory.c)
 *     CmReplaceKey @ 0x1406F1CD8 (CmReplaceKey.c)
 *     CmSetKeyFlags @ 0x1406F1FB8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1406F2444 (CmSetLastWriteTimeKey.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1406F38B0 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmKeyBodyRemapToVirtual @ 0x1406F3FF0 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406F4248 (CmKeyBodyReplicateToVirtual.c)
 *     CmReconcileAndValidateAllHives @ 0x1406F6D7C (CmReconcileAndValidateAllHives.c)
 *     CmpFlushBackupHive @ 0x1406F9154 (CmpFlushBackupHive.c)
 *     CmpRmUnDoPhase @ 0x1406FA4C8 (CmpRmUnDoPhase.c)
 *     CmpForceFlushWorker @ 0x1406FBC70 (CmpForceFlushWorker.c)
 *     DbgkSendSystemDllMessages @ 0x14070E1AC (DbgkSendSystemDllMessages.c)
 *     DbgkpMarkProcessPeb @ 0x14070E7A8 (DbgkpMarkProcessPeb.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x14070EA5C (DbgkpPostFakeProcessCreateMessages.c)
 *     DbgkpPostFakeThreadMessages @ 0x14070EB0C (DbgkpPostFakeThreadMessages.c)
 *     DbgkQueueUserExceptionReport @ 0x14071043C (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x140710940 (DbgkUserReportWorkRoutine.c)
 *     IopIsNotNativeDriverImage @ 0x14071A118 (IopIsNotNativeDriverImage.c)
 *     IopRaiseHardError @ 0x14071A3D0 (IopRaiseHardError.c)
 *     MmIsFileMapped @ 0x14074F26C (MmIsFileMapped.c)
 *     MmDeleteShadowMapping @ 0x14074F478 (MmDeleteShadowMapping.c)
 *     NtAllocateUserPhysicalPages @ 0x14074FE5C (NtAllocateUserPhysicalPages.c)
 *     MiCopyPagesIntoEnclave @ 0x140751610 (MiCopyPagesIntoEnclave.c)
 *     NtCreateEnclave @ 0x140752ED0 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x1407532E8 (NtInitializeEnclave.c)
 *     NtLoadEnclaveData @ 0x1407535B8 (NtLoadEnclaveData.c)
 *     MiCopyLargeVad @ 0x140755448 (MiCopyLargeVad.c)
 *     MiDeleteInsertedCloneVads @ 0x1407560B0 (MiDeleteInsertedCloneVads.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x140756470 (MiInSwapSharedWorkingSetWorker.c)
 *     MiScrubProcesses @ 0x140757F60 (MiScrubProcesses.c)
 *     PfSnAppLaunchScenarioControl @ 0x14075CA90 (PfSnAppLaunchScenarioControl.c)
 *     PspShutdownCsrProcess @ 0x140779724 (PspShutdownCsrProcess.c)
 *     PsQueryProcessExceptionFlags @ 0x14077A050 (PsQueryProcessExceptionFlags.c)
 *     PspTrySetProcessPebThrottlingFlags @ 0x14077AE20 (PspTrySetProcessPebThrottlingFlags.c)
 *     PspApplyWorkingSetLimits @ 0x14077B47C (PspApplyWorkingSetLimits.c)
 *     PspCreateSecureThread @ 0x14077C7EC (PspCreateSecureThread.c)
 *     PsUnregisterSiloMonitor @ 0x14077D330 (PsUnregisterSiloMonitor.c)
 *     PspIumGetPhysicalPage @ 0x14077E714 (PspIumGetPhysicalPage.c)
 *     VmpPrefetchWorker @ 0x1407A0FF0 (VmpPrefetchWorker.c)
 *     EtwpUMGLEnabled @ 0x1407A5B34 (EtwpUMGLEnabled.c)
 *     EtwpUpdateProcessTracingCallback @ 0x1407A5DC0 (EtwpUpdateProcessTracingCallback.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1407AFB10 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1407B2700 (EtwpTrackGuidEntryRegistrations.c)
 *     EtwpCovSampEnumerateProcess @ 0x1407B5E20 (EtwpCovSampEnumerateProcess.c)
 *     ExpDebuggerWorker @ 0x140803030 (ExpDebuggerWorker.c)
 *     EmpCacheBiosDate @ 0x1408A95A4 (EmpCacheBiosDate.c)
 *     EmpMapPhysicalAddress @ 0x1408A96D8 (EmpMapPhysicalAddress.c)
 *     PspInitPhase3 @ 0x1408CA2EC (PspInitPhase3.c)
 * Callees:
 *     KiSwapProcess @ 0x140008570 (KiSwapProcess.c)
 *     KiMoveApcState @ 0x140008620 (KiMoveApcState.c)
 *     KiDecrementProcessStackCount @ 0x140008690 (KiDecrementProcessStackCount.c)
 *     KiDetachProcess @ 0x14000A340 (KiDetachProcess.c)
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KeBugCheck @ 0x1401AAEB0 (KeBugCheck.c)
 */

__int64 __fastcall KiUnstackDetachProcess(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // esi
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // rbp
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rdi
  $005F0E83B22994B61E86C72E0CE43C71 *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdx
  struct _KPRCB *v11; // rdi
  int v12; // [rsp+60h] [rbp+8h] BYREF
  int v13; // [rsp+70h] [rbp+18h] BYREF

  result = *(_QWORD *)(a1 + 32);
  v3 = a2;
  if ( result != 1 )
  {
    if ( result )
    {
      return KiDetachProcess();
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Process = CurrentThread->ApcState.Process;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      CurrentPrcb = KeGetCurrentPrcb();
      v12 = 0;
      while ( 1 )
      {
        LOBYTE(a2) = 1;
        KiSetVpThreadSpinLockCount(CurrentPrcb, a2);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          break;
        KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
        do
          KeYieldProcessorEx(&v12);
        while ( CurrentThread->ThreadLock );
      }
      while ( CurrentThread->ApcState.KernelApcPending )
      {
        if ( CurrentThread->SpecialApcDisable )
          break;
        if ( CurrentIrql )
          break;
        KiReleaseThreadLockSafe(CurrentThread);
        __writecr8(0LL);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v11 = KeGetCurrentPrcb();
        v13 = 0;
        while ( 1 )
        {
          LOBYTE(v10) = 1;
          KiSetVpThreadSpinLockCount(v11, v10);
          if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
            break;
          KiSetVpThreadSpinLockCount(v11, 0LL);
          do
            KeYieldProcessorEx(&v13);
          while ( CurrentThread->ThreadLock );
        }
      }
      if ( !CurrentThread->ApcStateIndex
        || (CurrentThread->ApcState.InProgressFlags & 1) != 0
        || (v8 = &CurrentThread->152, ($005F0E83B22994B61E86C72E0CE43C71 *)v8->ApcState.ApcListHead[0].Flink != v8)
        || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
      {
        KeBugCheck(6u);
      }
      CurrentThread->MiscFlags |= 0x800u;
      KiMoveApcState(&CurrentThread->600, &CurrentThread->152);
      CurrentThread->SavedApcState.Process = 0LL;
      CurrentThread->ApcStateIndex = 0;
      KiReleaseThreadLockSafe(CurrentThread);
      KiSwapProcess(CurrentThread->ApcState.Process, Process);
      CurrentThread->MiscFlags &= ~0x800u;
      result = CurrentIrql;
      __writecr8(CurrentIrql);
      if ( !v3 )
        result = KiDecrementProcessStackCount(Process);
      if ( ($005F0E83B22994B61E86C72E0CE43C71 *)v8->ApcState.ApcListHead[0].Flink != v8 )
      {
        LOBYTE(v9) = 1;
        CurrentThread->ApcState.KernelApcPending = 1;
        return HalRequestSoftwareInterrupt(v9);
      }
    }
  }
  return result;
}
