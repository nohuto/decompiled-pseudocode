/*
 * XREFs of KiStackAttachProcess @ 0x1400A0410
 * Callers:
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x140003D64 (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140004560 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x140005AC8 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x140009098 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     MiGetWorkingSetInfoEx @ 0x14000CD84 (MiGetWorkingSetInfoEx.c)
 *     MiTrimSharedPageFromViews @ 0x14002B250 (MiTrimSharedPageFromViews.c)
 *     MiIssueHardFault @ 0x14002C7B0 (MiIssueHardFault.c)
 *     NtGetWriteWatch @ 0x140031CA0 (NtGetWriteWatch.c)
 *     NtResetWriteWatch @ 0x14003D7F0 (NtResetWriteWatch.c)
 *     IoRemoveIoCompletion @ 0x14006C5D0 (IoRemoveIoCompletion.c)
 *     MiTrimOrAgeWorkingSet @ 0x14009C460 (MiTrimOrAgeWorkingSet.c)
 *     MmAttachSession @ 0x1400B4990 (MmAttachSession.c)
 *     MiDeleteFinalPageTables @ 0x1400B7F8C (MiDeleteFinalPageTables.c)
 *     PspProcessDelete @ 0x1400B8F70 (PspProcessDelete.c)
 *     MiStealPage @ 0x1400C81C8 (MiStealPage.c)
 *     MmAssignProcessToJob @ 0x1400D43A8 (MmAssignProcessToJob.c)
 *     MmEnforceWorkingSetLimit @ 0x1400D46B0 (MmEnforceWorkingSetLimit.c)
 *     MiSharePages @ 0x1400E83E0 (MiSharePages.c)
 *     NtUnlockVirtualMemory @ 0x1400EB680 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x14010ABA8 (NtLockVirtualMemory.c)
 *     MiGetWorkingSetInfoList @ 0x14010B360 (MiGetWorkingSetInfoList.c)
 *     MiLockDownWorkingSet @ 0x140120080 (MiLockDownWorkingSet.c)
 *     PspIsProcessReadyForRemoteThread @ 0x140129E88 (PspIsProcessReadyForRemoteThread.c)
 *     MmQueryCommitReleaseState @ 0x14012B070 (MmQueryCommitReleaseState.c)
 *     PsQueryProcessCommandLine @ 0x14012E460 (PsQueryProcessCommandLine.c)
 *     SepAdtLogAuditRecord @ 0x1401338F0 (SepAdtLogAuditRecord.c)
 *     SepRmCallLsa @ 0x14014C140 (SepRmCallLsa.c)
 *     IoRaiseHardError @ 0x1401F9540 (IoRaiseHardError.c)
 *     KeSecureProcess @ 0x140202FD4 (KeSecureProcess.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140212D64 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x1402130A8 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140213338 (MiReleaseOutSwappedProcessCommit.c)
 *     MmReleaseCommitForMemResetPages @ 0x1402137F4 (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x1402139D4 (MmSetCommitReleaseEligibility.c)
 *     MmUpdateOldWorkingSetPages @ 0x14021ECC4 (MmUpdateOldWorkingSetPages.c)
 *     MiFlushAllPages @ 0x1402259EC (MiFlushAllPages.c)
 *     MiEmptyAccessLogs @ 0x140230750 (MiEmptyAccessLogs.c)
 *     PsDispatchIumService @ 0x14024ED54 (PsDispatchIumService.c)
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x1402682C4 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x1402691F0 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     ExpSvmServicePageFault @ 0x140288480 (ExpSvmServicePageFault.c)
 *     PfSnAsyncPrefetchWorker @ 0x140440810 (PfSnAsyncPrefetchWorker.c)
 *     PfSnPopulateReadList @ 0x140442210 (PfSnPopulateReadList.c)
 *     MiInSwapStoreWorker @ 0x1404444B0 (MiInSwapStoreWorker.c)
 *     MmPrefetchVirtualMemory @ 0x140444728 (MmPrefetchVirtualMemory.c)
 *     PspSetQuotaLimits @ 0x140449BF0 (PspSetQuotaLimits.c)
 *     AlpcpForceUnlinkSecureView @ 0x140451F5C (AlpcpForceUnlinkSecureView.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140452B80 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     PoEnergyContextStart @ 0x1404589DC (PoEnergyContextStart.c)
 *     MmInitializeProcessAddressSpace @ 0x14045E2B4 (MmInitializeProcessAddressSpace.c)
 *     PspWritePebAffinityInfo @ 0x14045F5C4 (PspWritePebAffinityInfo.c)
 *     PspSetupUserProcessAddressSpace @ 0x14045F718 (PspSetupUserProcessAddressSpace.c)
 *     PsMapSystemDlls @ 0x14045FCCC (PsMapSystemDlls.c)
 *     AlpcpPrepareViewForDelivery @ 0x1404614D4 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140461730 (AlpcpExposeViewAttributeInSenderContext.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1404625C8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     ObpDecrementHandleCount @ 0x140487254 (ObpDecrementHandleCount.c)
 *     PspAllocateProcess @ 0x140489D0C (PspAllocateProcess.c)
 *     EtwpAddRegEntryToGroup @ 0x1404901C0 (EtwpAddRegEntryToGroup.c)
 *     PspAllocateThread @ 0x140493710 (PspAllocateThread.c)
 *     MmFreeVirtualMemory @ 0x140494760 (MmFreeVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1404965C0 (MiAllocateVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x140497B10 (NtProtectVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x140497DA0 (MmQueryVirtualMemory.c)
 *     MiUnmapViewOfSection @ 0x140499D10 (MiUnmapViewOfSection.c)
 *     ObpIncrementHandleCountEx @ 0x1404B1770 (ObpIncrementHandleCountEx.c)
 *     ObCloseHandleTableEntry @ 0x1404B1D60 (ObCloseHandleTableEntry.c)
 *     NtQueryInformationProcess @ 0x1404C7870 (NtQueryInformationProcess.c)
 *     PspWriteTebImpersonationInfo @ 0x1404CEA30 (PspWriteTebImpersonationInfo.c)
 *     MiMapViewOfSection @ 0x1404CFC50 (MiMapViewOfSection.c)
 *     NtSetInformationVirtualMemory @ 0x1404D43D0 (NtSetInformationVirtualMemory.c)
 *     PspQueryQuotaLimits @ 0x1404D5DF4 (PspQueryQuotaLimits.c)
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 *     MiAllocateUserStack @ 0x1404D9354 (MiAllocateUserStack.c)
 *     PspRundownSingleProcess @ 0x1404DAA68 (PspRundownSingleProcess.c)
 *     MmCreatePeb @ 0x1404DAD28 (MmCreatePeb.c)
 *     EtwpWriteProcessEvent @ 0x1404DBBF8 (EtwpWriteProcessEvent.c)
 *     ExSweepHandleTable @ 0x1404DD240 (ExSweepHandleTable.c)
 *     MmFlushVirtualMemory @ 0x1404E70DC (MmFlushVirtualMemory.c)
 *     EtwpEnableGuid @ 0x1404EE2B8 (EtwpEnableGuid.c)
 *     MiMapImageInSystemSpace @ 0x1404F7424 (MiMapImageInSystemSpace.c)
 *     EtwTraceAppStateChange @ 0x1404FE234 (EtwTraceAppStateChange.c)
 *     ExpWnfWriteStateData @ 0x1404FF464 (ExpWnfWriteStateData.c)
 *     ObDuplicateObject @ 0x140507760 (ObDuplicateObject.c)
 *     MmProbeAndLockProcessPages @ 0x140508210 (MmProbeAndLockProcessPages.c)
 *     MmCopyVirtualMemory @ 0x1405084C0 (MmCopyVirtualMemory.c)
 *     PspSetupUserStack @ 0x140508E04 (PspSetupUserStack.c)
 *     MmCreateTeb @ 0x1405091B0 (MmCreateTeb.c)
 *     MiCombineIdenticalPages @ 0x140509D90 (MiCombineIdenticalPages.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x14050D218 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspChangeProcessExecutionState @ 0x14050DC70 (PspChangeProcessExecutionState.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x14051639C (PspWow64ReadOrWriteThreadCpuArea.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x140532DE0 (EtwpRealtimeInjectEtwBuffer.c)
 *     PspWriteTebIdealProcessor @ 0x14053F518 (PspWriteTebIdealProcessor.c)
 *     AlpcViewDestroyProcedure @ 0x140540240 (AlpcViewDestroyProcedure.c)
 *     AlpcpRestoreWriteAccess @ 0x140540BA0 (AlpcpRestoreWriteAccess.c)
 *     NtSetInformationObject @ 0x140566540 (NtSetInformationObject.c)
 *     MmDeleteTeb @ 0x14056A768 (MmDeleteTeb.c)
 *     ObSetHandleAttributes @ 0x140571D00 (ObSetHandleAttributes.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x140572010 (SmProcessStoreMemoryPriorityRequest.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140573710 (EtwQueryProcessTelemetryInfo.c)
 *     MiCloneProcessAddressSpace @ 0x14057A87C (MiCloneProcessAddressSpace.c)
 *     MiAllocateChildVads @ 0x14057AC60 (MiAllocateChildVads.c)
 *     MiInsertChildVads @ 0x14057B0BC (MiInsertChildVads.c)
 *     PspSetupReservedUserMappings @ 0x14058D2BC (PspSetupReservedUserMappings.c)
 *     PspWow64SetupUserStack @ 0x14058D4A4 (PspWow64SetupUserStack.c)
 *     PspWow64InitThread @ 0x14058EEAC (PspWow64InitThread.c)
 *     PspDeleteUserStack @ 0x1405979E8 (PspDeleteUserStack.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1405A7C54 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PsStartSiloMonitor @ 0x1405DE8C0 (PsStartSiloMonitor.c)
 *     CmpStartCLFSLog @ 0x1405E4A9C (CmpStartCLFSLog.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1405E4D1C (CmpAddRemoveContainerToCLFSLog.c)
 *     PspAllocatePartition @ 0x1405E9330 (PspAllocatePartition.c)
 *     MmInitializeHandBuiltProcess2 @ 0x1405EF52C (MmInitializeHandBuiltProcess2.c)
 *     DbgkSendSystemDllMessages @ 0x1406A9A4C (DbgkSendSystemDllMessages.c)
 *     DbgkpMarkProcessPeb @ 0x1406AA048 (DbgkpMarkProcessPeb.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x1406AA2FC (DbgkpPostFakeProcessCreateMessages.c)
 *     DbgkpPostFakeThreadMessages @ 0x1406AA3AC (DbgkpPostFakeThreadMessages.c)
 *     DbgkQueueUserExceptionReport @ 0x1406ABCD4 (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x1406ABF00 (DbgkUserReportWorkRoutine.c)
 *     IopIsNotNativeDriverImage @ 0x1406B5468 (IopIsNotNativeDriverImage.c)
 *     IopRaiseHardError @ 0x1406B5720 (IopRaiseHardError.c)
 *     MmIsFileMapped @ 0x1406E4E4C (MmIsFileMapped.c)
 *     NtAllocateUserPhysicalPages @ 0x1406E5CD8 (NtAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x1406E649C (NtFreeUserPhysicalPages.c)
 *     MiCopyPagesIntoEnclave @ 0x1406E7BD4 (MiCopyPagesIntoEnclave.c)
 *     NtCreateEnclave @ 0x1406E9454 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x1406E9854 (NtInitializeEnclave.c)
 *     NtLoadEnclaveData @ 0x1406E9B24 (NtLoadEnclaveData.c)
 *     MiCopyLargeVad @ 0x1406EB9F8 (MiCopyLargeVad.c)
 *     MiDeleteInsertedCloneVads @ 0x1406EC594 (MiDeleteInsertedCloneVads.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x1406EC850 (MiInSwapSharedWorkingSetWorker.c)
 *     MmProcessWorkingSetControl @ 0x1406EC9D0 (MmProcessWorkingSetControl.c)
 *     MiScrubProcesses @ 0x1406EEA90 (MiScrubProcesses.c)
 *     PfSnAppLaunchScenarioControl @ 0x1406F4540 (PfSnAppLaunchScenarioControl.c)
 *     PspShutdownCsrProcess @ 0x140715594 (PspShutdownCsrProcess.c)
 *     PsQueryProcessExceptionFlags @ 0x140715EC0 (PsQueryProcessExceptionFlags.c)
 *     PspTrySetProcessPebThrottlingFlags @ 0x140716CA0 (PspTrySetProcessPebThrottlingFlags.c)
 *     PspApplyWorkingSetLimits @ 0x1407174BC (PspApplyWorkingSetLimits.c)
 *     PspCreateSecureThread @ 0x1407187FC (PspCreateSecureThread.c)
 *     PsUnregisterSiloMonitor @ 0x1407195D0 (PsUnregisterSiloMonitor.c)
 *     PspIumGetPhysicalPage @ 0x14071ABF4 (PspIumGetPhysicalPage.c)
 *     VmpPrefetchWorker @ 0x14073DCD0 (VmpPrefetchWorker.c)
 *     EtwpUMGLEnabled @ 0x140743E54 (EtwpUMGLEnabled.c)
 *     EtwpUpdateProcessTracingCallback @ 0x1407440E0 (EtwpUpdateProcessTracingCallback.c)
 *     EtwpTiQueryVad @ 0x14074C920 (EtwpTiQueryVad.c)
 *     EtwpProcessEnumCallback @ 0x14074DE90 (EtwpProcessEnumCallback.c)
 *     EtwpPsProvProcessEnumCallback @ 0x14074E870 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1407519AC (EtwpTrackGuidEntryRegistrations.c)
 *     ExpDebuggerWorker @ 0x140796030 (ExpDebuggerWorker.c)
 *     EmpMapPhysicalAddress @ 0x1408334A0 (EmpMapPhysicalAddress.c)
 *     PspInitPhase3 @ 0x14085818C (PspInitPhase3.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiInSwapSingleProcess @ 0x1400BFC20 (KiInSwapSingleProcess.c)
 *     KiAttachProcess @ 0x1400BFEE0 (KiAttachProcess.c)
 *     KeIsExecutingDpc @ 0x140141520 (KeIsExecutingDpc.c)
 *     KiSetAddressPolicy @ 0x14017B484 (KiSetAddressPolicy.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1401F0B80 (HvlSwitchVirtualAddressSpace.c)
 */

__int64 __fastcall KiStackAttachProcess(_KPROCESS *BugCheckParameter1, int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // r12
  $B476B70DB57F76B110DA5B9238C3E934 *v9; // r8
  $709EDFC2F9E0D4565D6AA3C4377BC643 *v10; // rdi
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *v13; // rcx
  _LIST_ENTRY *v14; // rax
  struct _LIST_ENTRY *v15; // rcx
  struct _LIST_ENTRY *v16; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  _KPROCESS *Process; // r15
  unsigned __int64 GroupIndex; // r14
  __int64 v20; // rbp
  unsigned __int64 DirectoryTableBase; // rdi
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned int IsExecutingDpc; // eax
  int v26; // [rsp+30h] [rbp-48h] BYREF
  int v27[3]; // [rsp+34h] [rbp-44h] BYREF

  CurrentThread = KeGetCurrentThread();
  result = KeIsExecutingDpc();
  if ( (_DWORD)result || (*(_DWORD *)&BugCheckParameter1->0 & 0x20000000) != 0 )
  {
    IsExecutingDpc = KeIsExecutingDpc();
    KeBugCheckEx(
      5u,
      (ULONG_PTR)BugCheckParameter1,
      (ULONG_PTR)CurrentThread->ApcState.Process,
      CurrentThread->ApcStateIndex,
      IsExecutingDpc);
  }
  if ( CurrentThread->ApcState.Process == BugCheckParameter1 )
  {
    *(_QWORD *)(a3 + 32) = 1LL;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v26 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v26);
      while ( CurrentThread->ThreadLock );
    }
    if ( CurrentThread->ApcStateIndex )
    {
      return KiAttachProcess((_DWORD)CurrentThread, (_DWORD)BugCheckParameter1, CurrentIrql, a2, a3);
    }
    else
    {
      v9 = &CurrentThread->152;
      v10 = &CurrentThread->600;
      CurrentThread->SavedApcState.Process = CurrentThread->ApcState.Process;
      CurrentThread->SavedApcState.InProgressFlags = CurrentThread->ApcState.InProgressFlags;
      CurrentThread->SavedApcState.KernelApcPending = CurrentThread->ApcState.KernelApcPending;
      CurrentThread->SavedApcState.UserApcPending = CurrentThread->ApcState.UserApcPending;
      Flink = CurrentThread->ApcState.ApcListHead[0].Flink;
      if ( ($B476B70DB57F76B110DA5B9238C3E934 *)v9->ApcState.ApcListHead[0].Flink == v9 )
      {
        CurrentThread->SavedApcState.ApcListHead[0].Blink = CurrentThread->SavedApcState.ApcListHead;
        v10->SavedApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v10;
        CurrentThread->SavedApcState.KernelApcPending = 0;
      }
      else
      {
        Blink = CurrentThread->ApcState.ApcListHead[0].Blink;
        v10->SavedApcState.ApcListHead[0].Flink = Flink;
        CurrentThread->SavedApcState.ApcListHead[0].Blink = Blink;
        Flink->Blink = (struct _LIST_ENTRY *)v10;
        Blink->Flink = (struct _LIST_ENTRY *)v10;
      }
      v13 = &CurrentThread->ApcState.ApcListHead[1];
      v14 = &CurrentThread->SavedApcState.ApcListHead[1];
      if ( v13->Flink == v13 )
      {
        CurrentThread->SavedApcState.ApcListHead[1].Blink = &CurrentThread->SavedApcState.ApcListHead[1];
        v14->Flink = v14;
        CurrentThread->SavedApcState.UserApcPending = 0;
      }
      else
      {
        v15 = v13->Flink;
        v16 = CurrentThread->ApcState.ApcListHead[1].Blink;
        v14->Flink = v15;
        CurrentThread->SavedApcState.ApcListHead[1].Blink = v16;
        v15->Blink = v14;
        v16->Flink = v14;
      }
      CurrentThread->ApcState.ApcListHead[0].Blink = CurrentThread->ApcState.ApcListHead;
      v9->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v9;
      CurrentThread->ApcState.ApcListHead[1].Blink = &CurrentThread->ApcState.ApcListHead[1];
      CurrentThread->ApcState.ApcListHead[1].Flink = &CurrentThread->ApcState.ApcListHead[1];
      *(_WORD *)&CurrentThread->ApcStateFill[40] = 0;
      CurrentThread->ApcState.UserApcPending = 0;
      CurrentThread->ApcStateIndex = 1;
      if ( !a2 && (_InterlockedExchangeAdd(&BugCheckParameter1->StackCount.Value, 8u) & 7) != 0 )
      {
        CurrentThread->ThreadLock = 0LL;
        KiInSwapSingleProcess(CurrentThread, BugCheckParameter1, CurrentIrql);
        KeGetCurrentIrql();
        __writecr8(2uLL);
        v27[0] = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
            KeYieldProcessorEx(v27);
          while ( CurrentThread->ThreadLock );
        }
      }
      CurrentThread->MiscFlags |= 0x800u;
      CurrentThread->ApcState.Process = BugCheckParameter1;
      CurrentThread->ThreadLock = 0LL;
      CurrentPrcb = KeGetCurrentPrcb();
      Process = CurrentThread->SavedApcState.Process;
      GroupIndex = CurrentPrcb->GroupIndex;
      v20 = 8LL * CurrentPrcb->Group + 280;
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
      if ( KiKvaShadow && !KiFlushPcid )
      {
        v23 = __readcr4();
        if ( (v23 & 0x20080) != 0 )
        {
          __writecr4(v23 ^ 0x80);
          __writecr4(v23);
        }
        else
        {
          v24 = __readcr3();
          __writecr3(v24);
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
