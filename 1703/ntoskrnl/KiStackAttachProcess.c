/*
 * XREFs of KiStackAttachProcess @ 0x1400B26F0
 * Callers:
 *     MiLockDownWorkingSet @ 0x140001538 (MiLockDownWorkingSet.c)
 *     MiCloneReserveVadCommit @ 0x140003268 (MiCloneReserveVadCommit.c)
 *     NtResetWriteWatch @ 0x14001DB40 (NtResetWriteWatch.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14001F550 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x14002F340 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     MmQueryCommitReleaseState @ 0x1400366C0 (MmQueryCommitReleaseState.c)
 *     MiGetWorkingSetInfoEx @ 0x140039718 (MiGetWorkingSetInfoEx.c)
 *     PsQueryProcessCommandLine @ 0x140039BE0 (PsQueryProcessCommandLine.c)
 *     PspProcessDelete @ 0x140061C30 (PspProcessDelete.c)
 *     MiDeleteFinalPageTables @ 0x140063178 (MiDeleteFinalPageTables.c)
 *     MmAttachSession @ 0x1400738F0 (MmAttachSession.c)
 *     NtLockVirtualMemory @ 0x14007687C (NtLockVirtualMemory.c)
 *     MiGetWorkingSetInfoList @ 0x140077410 (MiGetWorkingSetInfoList.c)
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14007E5E0 (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 *     MiIssueHardFault @ 0x140096E10 (MiIssueHardFault.c)
 *     MiSharePages @ 0x1400A3D30 (MiSharePages.c)
 *     MiAttachWorkingSet @ 0x1400B21D0 (MiAttachWorkingSet.c)
 *     IoRemoveIoCompletion @ 0x1400E9520 (IoRemoveIoCompletion.c)
 *     NtUnlockVirtualMemory @ 0x1400FA8B0 (NtUnlockVirtualMemory.c)
 *     MiTrimSharedPageFromViews @ 0x1400FF670 (MiTrimSharedPageFromViews.c)
 *     NtGetWriteWatch @ 0x140101A00 (NtGetWriteWatch.c)
 *     MiStealPage @ 0x14010C28C (MiStealPage.c)
 *     MmAssignProcessToJob @ 0x14011D7EC (MmAssignProcessToJob.c)
 *     MmEnforceWorkingSetLimit @ 0x14011DB20 (MmEnforceWorkingSetLimit.c)
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x14011F8F0 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x14012E500 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     MiFlushAllPages @ 0x14013F290 (MiFlushAllPages.c)
 *     MiEmptyAccessLogs @ 0x14013F820 (MiEmptyAccessLogs.c)
 *     SepRmCallLsa @ 0x1401481D0 (SepRmCallLsa.c)
 *     SepAdtLogAuditRecord @ 0x140156510 (SepAdtLogAuditRecord.c)
 *     IoRaiseHardError @ 0x1401F3B80 (IoRaiseHardError.c)
 *     KeSecureProcess @ 0x1401FD19C (KeSecureProcess.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14020BDF4 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x14020C108 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14020C398 (MiReleaseOutSwappedProcessCommit.c)
 *     MmReleaseCommitForMemResetPages @ 0x14020C848 (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x14020CA28 (MmSetCommitReleaseEligibility.c)
 *     MmUpdateOldWorkingSetPages @ 0x140215BEC (MmUpdateOldWorkingSetPages.c)
 *     PsDispatchIumService @ 0x140239D84 (PsDispatchIumService.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x140249F7C (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     ExpSvmServicePageFault @ 0x14025E930 (ExpSvmServicePageFault.c)
 *     MiCloneProcessAddressSpace @ 0x14041DF70 (MiCloneProcessAddressSpace.c)
 *     MiAllocateChildVads @ 0x14041E31C (MiAllocateChildVads.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140425B50 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     PspWow64InitThread @ 0x1404264E0 (PspWow64InitThread.c)
 *     NtSetInformationObject @ 0x1404276F0 (NtSetInformationObject.c)
 *     CmpStartCLFSLog @ 0x14042F0D4 (CmpStartCLFSLog.c)
 *     ExSweepHandleTable @ 0x14042F3C0 (ExSweepHandleTable.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14043D4E8 (EtwQueryProcessTelemetryInfo.c)
 *     ObSetHandleAttributes @ 0x14043EA90 (ObSetHandleAttributes.c)
 *     PspWow64SetupUserStack @ 0x1404452DC (PspWow64SetupUserStack.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x140447BB0 (SmProcessStoreMemoryPriorityRequest.c)
 *     PspSetQuotaLimits @ 0x14044B53C (PspSetQuotaLimits.c)
 *     PspSetupReservedUserMappings @ 0x14044ED4C (PspSetupReservedUserMappings.c)
 *     PspDeleteUserStack @ 0x1404595F0 (PspDeleteUserStack.c)
 *     PfSnAsyncPrefetchWorker @ 0x140464FF0 (PfSnAsyncPrefetchWorker.c)
 *     AlpcpRestoreWriteAccess @ 0x14047A4EC (AlpcpRestoreWriteAccess.c)
 *     AlpcpPrepareViewForDelivery @ 0x14047A710 (AlpcpPrepareViewForDelivery.c)
 *     AlpcViewDestroyProcedure @ 0x14047A980 (AlpcViewDestroyProcedure.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x14047AEF0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiUnmapViewOfSection @ 0x14047B340 (MiUnmapViewOfSection.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14047B908 (MmSecureVirtualMemoryAgainstWrites.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14047BB04 (AlpcpExposeViewAttributeInSenderContext.c)
 *     PspWriteTebImpersonationInfo @ 0x14047E920 (PspWriteTebImpersonationInfo.c)
 *     MiMapImageInSystemSpace @ 0x140497368 (MiMapImageInSystemSpace.c)
 *     MmDeleteTeb @ 0x140499B6C (MmDeleteTeb.c)
 *     NtSetInformationVirtualMemory @ 0x14049A7B0 (NtSetInformationVirtualMemory.c)
 *     MmCreatePeb @ 0x14049B450 (MmCreatePeb.c)
 *     PspSetupUserProcessAddressSpace @ 0x14049BA50 (PspSetupUserProcessAddressSpace.c)
 *     PsMapSystemDlls @ 0x14049BFFC (PsMapSystemDlls.c)
 *     MmInitializeProcessAddressSpace @ 0x14049DBB4 (MmInitializeProcessAddressSpace.c)
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 *     NtSetInformationProcess @ 0x1404A2550 (NtSetInformationProcess.c)
 *     EtwpProcessEnumCallback @ 0x1404B03C0 (EtwpProcessEnumCallback.c)
 *     MmFlushVirtualMemory @ 0x1404C6968 (MmFlushVirtualMemory.c)
 *     MmPrefetchVirtualMemory @ 0x1404C9B00 (MmPrefetchVirtualMemory.c)
 *     MiInSwapStoreWorker @ 0x1404C9E00 (MiInSwapStoreWorker.c)
 *     MmProcessWorkingSetControl @ 0x1404CA12C (MmProcessWorkingSetControl.c)
 *     EtwTraceAppStateChange @ 0x1404E977C (EtwTraceAppStateChange.c)
 *     NtQueryInformationProcess @ 0x1404EA100 (NtQueryInformationProcess.c)
 *     PspQueryQuotaLimits @ 0x1404ECDE0 (PspQueryQuotaLimits.c)
 *     PspWritePebAffinityInfo @ 0x1404ED074 (PspWritePebAffinityInfo.c)
 *     EtwpWriteProcessEvent @ 0x1404ED768 (EtwpWriteProcessEvent.c)
 *     ExpWnfWriteStateData @ 0x1404EE2D4 (ExpWnfWriteStateData.c)
 *     EtwpAddRegEntryToGroup @ 0x1404F2698 (EtwpAddRegEntryToGroup.c)
 *     ObpDecrementHandleCount @ 0x1404F5E48 (ObpDecrementHandleCount.c)
 *     PspWriteTebIdealProcessor @ 0x1404F87BC (PspWriteTebIdealProcessor.c)
 *     MmCreateTeb @ 0x140516370 (MmCreateTeb.c)
 *     PspSetupUserStack @ 0x140516848 (PspSetupUserStack.c)
 *     ObDuplicateObject @ 0x140517550 (ObDuplicateObject.c)
 *     MmCopyVirtualMemory @ 0x1405181F0 (MmCopyVirtualMemory.c)
 *     MmProbeAndLockProcessPages @ 0x140518B80 (MmProbeAndLockProcessPages.c)
 *     MiMapViewOfSection @ 0x1405198A0 (MiMapViewOfSection.c)
 *     NtFreeVirtualMemory @ 0x14051A3B0 (NtFreeVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x14051B090 (MmQueryVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x14051BE20 (MiAllocateVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x14051D2E0 (NtProtectVirtualMemory.c)
 *     ObCloseHandleTableEntry @ 0x140530A90 (ObCloseHandleTableEntry.c)
 *     ObpIncrementHandleCountEx @ 0x1405311B0 (ObpIncrementHandleCountEx.c)
 *     PfSnPopulateReadList @ 0x14053DA20 (PfSnPopulateReadList.c)
 *     PspAllocateThread @ 0x14053F490 (PspAllocateThread.c)
 *     PspRundownSingleProcess @ 0x140546EDC (PspRundownSingleProcess.c)
 *     PspChangeProcessExecutionState @ 0x140547580 (PspChangeProcessExecutionState.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x14054BB34 (PspApplyWorkingSetLimitsToProcess.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x140550490 (EtwpRealtimeInjectEtwBuffer.c)
 *     EtwpEnableGuid @ 0x140552C6C (EtwpEnableGuid.c)
 *     MiCombineIdenticalPages @ 0x14056185C (MiCombineIdenticalPages.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14057DC20 (SepCleanupLUIDDeviceMapDirectory.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1405990C0 (CmpAddRemoveContainerToCLFSLog.c)
 *     PsStartSiloMonitor @ 0x1405CB6A0 (PsStartSiloMonitor.c)
 *     MmInitializeHandBuiltProcess2 @ 0x1405D36C0 (MmInitializeHandBuiltProcess2.c)
 *     DbgkSendSystemDllMessages @ 0x14067E910 (DbgkSendSystemDllMessages.c)
 *     DbgkpMarkProcessPeb @ 0x14067EEF8 (DbgkpMarkProcessPeb.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x14067F184 (DbgkpPostFakeProcessCreateMessages.c)
 *     DbgkpPostFakeThreadMessages @ 0x14067F234 (DbgkpPostFakeThreadMessages.c)
 *     DbgkQueueUserExceptionReport @ 0x140680B08 (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x140680D30 (DbgkUserReportWorkRoutine.c)
 *     IopIsNotNativeDriverImage @ 0x140689768 (IopIsNotNativeDriverImage.c)
 *     IopRaiseHardError @ 0x140689A20 (IopRaiseHardError.c)
 *     AlpcpForceUnlinkSecureView @ 0x1406B18C0 (AlpcpForceUnlinkSecureView.c)
 *     MmIsFileMapped @ 0x1406B81CC (MmIsFileMapped.c)
 *     NtAllocateUserPhysicalPages @ 0x1406B8F84 (NtAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x1406B9738 (NtFreeUserPhysicalPages.c)
 *     MiCopyPagesIntoEnclave @ 0x1406BAD94 (MiCopyPagesIntoEnclave.c)
 *     NtCreateEnclave @ 0x1406BBE40 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x1406BC21C (NtInitializeEnclave.c)
 *     MiCopyLargeVad @ 0x1406BE598 (MiCopyLargeVad.c)
 *     MiDeleteAllPartialCloneVads @ 0x1406BF284 (MiDeleteAllPartialCloneVads.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x1406BF580 (MiInSwapSharedWorkingSetWorker.c)
 *     MiScrubProcesses @ 0x1406C0060 (MiScrubProcesses.c)
 *     PfSnAppLaunchScenarioControl @ 0x1406C4BC4 (PfSnAppLaunchScenarioControl.c)
 *     PoEnergyContextStart @ 0x1406D0244 (PoEnergyContextStart.c)
 *     PspShutdownCsrProcess @ 0x1406DF114 (PspShutdownCsrProcess.c)
 *     PsQueryProcessExceptionFlags @ 0x1406DFA40 (PsQueryProcessExceptionFlags.c)
 *     PspTrySetProcessPebThrottlingFlags @ 0x1406E09A0 (PspTrySetProcessPebThrottlingFlags.c)
 *     PspApplyWorkingSetLimits @ 0x1406E11DC (PspApplyWorkingSetLimits.c)
 *     PspCreateSecureThread @ 0x1406E23CC (PspCreateSecureThread.c)
 *     PsUnregisterSiloMonitor @ 0x1406E3000 (PsUnregisterSiloMonitor.c)
 *     PspIumGetPhysicalPage @ 0x1406E4414 (PspIumGetPhysicalPage.c)
 *     EtwpUMGLEnabled @ 0x140709CA4 (EtwpUMGLEnabled.c)
 *     EtwpUpdateProcessTracingCallback @ 0x140709ED0 (EtwpUpdateProcessTracingCallback.c)
 *     EtwpTiQueryVad @ 0x14070FC80 (EtwpTiQueryVad.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1407111B0 (EtwpPsProvProcessEnumCallback.c)
 *     ExpDebuggerWorker @ 0x140789040 (ExpDebuggerWorker.c)
 *     EmpMapPhysicalAddress @ 0x140805124 (EmpMapPhysicalAddress.c)
 *     PspInitPhase3 @ 0x1408269D4 (PspInitPhase3.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiAttachProcess @ 0x1400B1C00 (KiAttachProcess.c)
 *     KeIsExecutingDpc @ 0x1400B2A00 (KeIsExecutingDpc.c)
 *     KiInSwapSingleProcess @ 0x1400B2A20 (KiInSwapSingleProcess.c)
 *     KiSetAddressPolicy @ 0x14017BD00 (KiSetAddressPolicy.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1401EB8F0 (HvlSwitchVirtualAddressSpace.c)
 */

__int64 __fastcall KiStackAttachProcess(_KPROCESS *BugCheckParameter1, unsigned int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // r12
  $69CD3F157F9F39B6F7113F2231989901 *v9; // r8
  $5BC46E0569261879018906DEC3127961 *v10; // rdi
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *v13; // rcx
  _LIST_ENTRY *v14; // rax
  struct _LIST_ENTRY *v15; // rcx
  struct _LIST_ENTRY *v16; // rdx
  struct _KPRCB *CurrentPrcb; // rax
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
  if ( (_DWORD)result || (*(_DWORD *)&BugCheckParameter1->0 & 0x10000000) != 0 )
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
      return KiAttachProcess((__int64)CurrentThread, (__int64)BugCheckParameter1, CurrentIrql, a2, a3);
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
      if ( ($69CD3F157F9F39B6F7113F2231989901 *)v9->ApcState.ApcListHead[0].Flink == v9 )
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
