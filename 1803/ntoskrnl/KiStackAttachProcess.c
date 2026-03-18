/*
 * XREFs of KiStackAttachProcess @ 0x140009050
 * Callers:
 *     NtGetWriteWatch @ 0x140024440 (NtGetWriteWatch.c)
 *     MiSharePages @ 0x1400326D0 (MiSharePages.c)
 *     NtUnlockVirtualMemory @ 0x14004E260 (NtUnlockVirtualMemory.c)
 *     MiIssueHardFault @ 0x140059D80 (MiIssueHardFault.c)
 *     PspProcessDelete @ 0x14006F630 (PspProcessDelete.c)
 *     MiDeleteFinalPageTables @ 0x140070A70 (MiDeleteFinalPageTables.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x14007DAD0 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x140081D8C (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 *     MiTrimSharedPageFromViews @ 0x140082660 (MiTrimSharedPageFromViews.c)
 *     MmAttachSession @ 0x14008A660 (MmAttachSession.c)
 *     MmEnforceWorkingSetLimit @ 0x14008A9B8 (MmEnforceWorkingSetLimit.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140099EC4 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     MiGetWorkingSetInfoList @ 0x1400B3CD0 (MiGetWorkingSetInfoList.c)
 *     MmQueryCommitReleaseState @ 0x1400C6588 (MmQueryCommitReleaseState.c)
 *     SepRmCallLsa @ 0x1400C7970 (SepRmCallLsa.c)
 *     PspIsProcessReadyForRemoteThread @ 0x1400C9B1C (PspIsProcessReadyForRemoteThread.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x1400CC294 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     PsQueryProcessCommandLine @ 0x1400CF920 (PsQueryProcessCommandLine.c)
 *     MiLockStealUserVm @ 0x1400D5854 (MiLockStealUserVm.c)
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
 *     PfSnPopulateReadList @ 0x1404A1900 (PfSnPopulateReadList.c)
 *     MmProbeAndLockProcessPages @ 0x1404A80F0 (MmProbeAndLockProcessPages.c)
 *     CmpWalkOneLevel @ 0x1404AA800 (CmpWalkOneLevel.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
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
 *     NtSetInformationObject @ 0x140550ED0 (NtSetInformationObject.c)
 *     ExSweepHandleTable @ 0x1405541A0 (ExSweepHandleTable.c)
 *     PoEnergyContextStart @ 0x1405597BC (PoEnergyContextStart.c)
 *     ObSetHandleAttributes @ 0x140560C10 (ObSetHandleAttributes.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140561188 (EtwQueryProcessTelemetryInfo.c)
 *     MmDeleteTeb @ 0x140562BFC (MmDeleteTeb.c)
 *     PspWow64InitThread @ 0x140563200 (PspWow64InitThread.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140563FC8 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     MmFlushVirtualMemory @ 0x140568184 (MmFlushVirtualMemory.c)
 *     EtwpTiQueryVad @ 0x14056B8D4 (EtwpTiQueryVad.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14056FE18 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PspWow64SetupUserStack @ 0x140575B6C (PspWow64SetupUserStack.c)
 *     PspSetQuotaLimits @ 0x14057899C (PspSetQuotaLimits.c)
 *     PspSetupReservedUserMappings @ 0x14057902C (PspSetupReservedUserMappings.c)
 *     PspDeleteUserStack @ 0x140580B4C (PspDeleteUserStack.c)
 *     EtwpEnableGuid @ 0x14058D2FC (EtwpEnableGuid.c)
 *     EtwpAddRegEntryToGroup @ 0x14058F4F0 (EtwpAddRegEntryToGroup.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x140592504 (EtwpRealtimeInjectEtwBuffer.c)
 *     MmCreateTeb @ 0x140592878 (MmCreateTeb.c)
 *     MiMapViewOfSection @ 0x140593F20 (MiMapViewOfSection.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140595C30 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     PspWriteTebImpersonationInfo @ 0x14059AE50 (PspWriteTebImpersonationInfo.c)
 *     MmCopyVirtualMemory @ 0x14059CD40 (MmCopyVirtualMemory.c)
 *     CmQueryValueKey @ 0x1405A0B80 (CmQueryValueKey.c)
 *     ObCloseHandleTableEntry @ 0x1405A4E20 (ObCloseHandleTableEntry.c)
 *     ObpIncrementHandleCountEx @ 0x1405AB080 (ObpIncrementHandleCountEx.c)
 *     MiAllocateVirtualMemory @ 0x1405B49A0 (MiAllocateVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x1405B5960 (NtProtectVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1405B5C20 (MmQueryVirtualMemory.c)
 *     PspAllocateThread @ 0x1405B8EE8 (PspAllocateThread.c)
 *     PspSetupUserStack @ 0x1405B9C34 (PspSetupUserStack.c)
 *     MiCloneProcessAddressSpace @ 0x1405BF2F8 (MiCloneProcessAddressSpace.c)
 *     MiAllocateChildVads @ 0x1405BF6F8 (MiAllocateChildVads.c)
 *     MiInsertChildVads @ 0x1405BFB04 (MiInsertChildVads.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1405F3254 (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpStartCLFSLog @ 0x1405F49A0 (CmpStartCLFSLog.c)
 *     EtwpProcessEnumCallback @ 0x1406292D0 (EtwpProcessEnumCallback.c)
 *     MmCreateShadowMapping @ 0x14062B744 (MmCreateShadowMapping.c)
 *     PsCreateMinimalProcess @ 0x14062C5DC (PsCreateMinimalProcess.c)
 *     CmpFinishSystemHivesLoad @ 0x14062E4B0 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1406309E0 (CmpMountPreloadedHives.c)
 *     PsStartSiloMonitor @ 0x140647BE0 (PsStartSiloMonitor.c)
 *     PspAllocatePartition @ 0x14064EEF0 (PspAllocatePartition.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140652748 (MmInitializeHandBuiltProcess2.c)
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
 *     EmpMapPhysicalAddress @ 0x1408A96D8 (EmpMapPhysicalAddress.c)
 *     PspInitPhase3 @ 0x1408CA2EC (PspInitPhase3.c)
 * Callees:
 *     KiAttachProcess @ 0x140007F44 (KiAttachProcess.c)
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiInSwapSingleProcess @ 0x1400AA560 (KiInSwapSingleProcess.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiSetAddressPolicy @ 0x1400FDE10 (KiSetAddressPolicy.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     HvlSwitchVirtualAddressSpace @ 0x14022E4B0 (HvlSwitchVirtualAddressSpace.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

int __fastcall KiStackAttachProcess(_KPROCESS *BugCheckParameter1, unsigned int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  volatile int result; // eax
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  $5F1408DF39311D54C4C08723EECFE20B *v11; // rsi
  struct _KTHREAD *Flink; // rcx
  struct _KTHREAD *v13; // r8
  _LIST_ENTRY *v14; // rax
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rdx
  struct _KPRCB *v17; // rcx
  _KPROCESS *Process; // r15
  unsigned __int64 GroupIndex; // r14
  __int64 v20; // rbp
  unsigned __int64 DirectoryTableBase; // rsi
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  struct _KPRCB *v24; // rbp
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v26; // rcx
  __int64 v27; // rdx
  int v28; // eax
  int v29; // eax
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rax
  int v32; // [rsp+30h] [rbp-48h] BYREF
  int v33[3]; // [rsp+34h] [rbp-44h] BYREF

  CurrentThread = KeGetCurrentThread();
  result = KeGetPcr()->Prcb.DpcRequestSummary;
  if ( (result & 0x10001) != 0 || (*(_DWORD *)&BugCheckParameter1->0 & 0x40000000) != 0 )
    KeBugCheckEx(
      5u,
      (ULONG_PTR)BugCheckParameter1,
      (ULONG_PTR)CurrentThread->ApcState.Process,
      CurrentThread->ApcStateIndex,
      KeGetPcr()->Prcb.DpcRequestSummary & 0x10001);
  if ( CurrentThread->ApcState.Process == BugCheckParameter1 )
  {
    *(_QWORD *)(a3 + 32) = 1LL;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    v32 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v28 = SchedulerAssist[5];
        SchedulerAssist[5] = v28 + 1;
        if ( v28 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
          KiPerformUnboostKick(CurrentPrcb);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
      do
        KeYieldProcessorEx(&v32);
      while ( CurrentThread->ThreadLock );
      LOBYTE(v27) = 1;
      KiSetVpThreadSpinLockCount(CurrentPrcb, v27);
    }
    if ( CurrentThread->ApcStateIndex )
    {
      return KiAttachProcess((__int64)CurrentThread, (__int64)BugCheckParameter1, CurrentIrql, a2, a3);
    }
    else
    {
      v11 = &CurrentThread->600;
      CurrentThread->SavedApcState.Process = CurrentThread->ApcState.Process;
      CurrentThread->SavedApcState.InProgressFlags = CurrentThread->ApcState.InProgressFlags;
      CurrentThread->SavedApcState.KernelApcPending = CurrentThread->ApcState.KernelApcPending;
      CurrentThread->SavedApcState.UserApcPending = CurrentThread->ApcState.UserApcPending;
      Flink = (struct _KTHREAD *)CurrentThread->ApcState.ApcListHead[0].Flink;
      if ( Flink == (struct _KTHREAD *)&CurrentThread->152 )
      {
        CurrentThread->SavedApcState.ApcListHead[0].Blink = CurrentThread->SavedApcState.ApcListHead;
        v11->SavedApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v11;
        CurrentThread->SavedApcState.KernelApcPending = 0;
      }
      else
      {
        Blink = CurrentThread->ApcState.ApcListHead[0].Blink;
        v11->SavedApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)Flink;
        CurrentThread->SavedApcState.ApcListHead[0].Blink = Blink;
        Flink->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v11;
        Blink->Flink = (struct _LIST_ENTRY *)v11;
      }
      v13 = (struct _KTHREAD *)CurrentThread->ApcState.ApcListHead[1].Flink;
      v14 = &CurrentThread->SavedApcState.ApcListHead[1];
      if ( v13 == (struct _KTHREAD *)&CurrentThread->ApcStateFill[16] )
      {
        CurrentThread->SavedApcState.ApcListHead[1].Blink = &CurrentThread->SavedApcState.ApcListHead[1];
        v14->Flink = v14;
        CurrentThread->SavedApcState.UserApcPending = 0;
      }
      else
      {
        v26 = CurrentThread->ApcState.ApcListHead[1].Blink;
        v14->Flink = (struct _LIST_ENTRY *)v13;
        CurrentThread->SavedApcState.ApcListHead[1].Blink = v26;
        v13->Header.WaitListHead.Flink = v14;
        v26->Flink = v14;
      }
      CurrentThread->ApcState.ApcListHead[0].Blink = CurrentThread->ApcState.ApcListHead;
      CurrentThread->ApcState.ApcListHead[0].Flink = CurrentThread->ApcState.ApcListHead;
      CurrentThread->ApcState.ApcListHead[1].Blink = &CurrentThread->ApcState.ApcListHead[1];
      CurrentThread->ApcState.ApcListHead[1].Flink = &CurrentThread->ApcState.ApcListHead[1];
      *(_WORD *)&CurrentThread->ApcStateFill[40] = 0;
      CurrentThread->ApcState.UserApcPending = 0;
      CurrentThread->ApcStateIndex = 1;
      if ( !a2 && (_InterlockedExchangeAdd(&BugCheckParameter1->StackCount.Value, 8u) & 7) != 0 )
      {
        KiReleaseThreadLockSafe(CurrentThread);
        KiInSwapSingleProcess(CurrentThread, BugCheckParameter1, CurrentIrql);
        KeGetCurrentIrql();
        __writecr8(2uLL);
        v24 = KeGetCurrentPrcb();
        v33[0] = 0;
        while ( 1 )
        {
          LOBYTE(v23) = 1;
          KiSetVpThreadSpinLockCount(v24, v23);
          if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
            break;
          KiSetVpThreadSpinLockCount(v24, 0LL);
          do
            KeYieldProcessorEx(v33);
          while ( CurrentThread->ThreadLock );
        }
      }
      CurrentThread->MiscFlags |= 0x800u;
      CurrentThread->ApcState.Process = BugCheckParameter1;
      CurrentThread->ThreadLock = 0LL;
      v15 = KeGetCurrentPrcb();
      v16 = v15->SchedulerAssist;
      if ( v16 )
      {
        if ( v15->NestingLevel <= 1u )
        {
          v29 = v16[5] - 1;
          v16[5] = v29;
          if ( !v29 && !*((_BYTE *)v16 + 25) && !*((_BYTE *)v16 + 27) )
            KiPerformUnboostKick(v15);
        }
      }
      v17 = KeGetCurrentPrcb();
      Process = CurrentThread->SavedApcState.Process;
      GroupIndex = v17->GroupIndex;
      v20 = 8LL * v17->Group + 280;
      _interlockedbittestandset64(
        (volatile signed __int32 *)((char *)&BugCheckParameter1->Header.Lock + v20),
        GroupIndex);
      DirectoryTableBase = BugCheckParameter1->DirectoryTableBase;
      if ( KiKvaShadow )
      {
        v22 = BugCheckParameter1->DirectoryTableBase;
        if ( (DirectoryTableBase & 2) != 0 )
          v22 = DirectoryTableBase | 0x8000000000000000uLL;
        __writegsqword(0x7000u, v22);
        KiSetAddressPolicy(BugCheckParameter1->AddressPolicy);
      }
      if ( (HvlEnlightenments & 1) != 0 )
        HvlSwitchVirtualAddressSpace(DirectoryTableBase);
      else
        __writecr3(DirectoryTableBase);
      if ( !KiFlushPcid && KiKvaShadow )
      {
        v30 = __readcr4();
        if ( (v30 & 0x20080) != 0 )
        {
          __writecr4(v30 ^ 0x80);
          __writecr4(v30);
        }
        else
        {
          v31 = __readcr3();
          __writecr3(v31);
        }
      }
      _interlockedbittestandreset64((volatile signed __int32 *)((char *)&Process->Header.Lock + v20), GroupIndex);
      CurrentThread->MiscFlags &= ~0x800u;
      result = CurrentIrql;
      __writecr8(CurrentIrql);
      *(_QWORD *)(a3 + 32) = 0LL;
    }
  }
  return result;
}
