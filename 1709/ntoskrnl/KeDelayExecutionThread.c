/*
 * XREFs of KeDelayExecutionThread @ 0x1400818C0
 * Callers:
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140006F34 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14000B530 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiHandleForkTransitionPte @ 0x14000E3C0 (MiHandleForkTransitionPte.c)
 *     CcMapAndCopyInToCache @ 0x14001C320 (CcMapAndCopyInToCache.c)
 *     MiFlushSectionInternal @ 0x140038530 (MiFlushSectionInternal.c)
 *     MiWalkEntireImage @ 0x140039480 (MiWalkEntireImage.c)
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MmFlushSection @ 0x1400A49CC (MmFlushSection.c)
 *     PopAllocateIrp @ 0x1400B3D54 (PopAllocateIrp.c)
 *     FsRtlCreateSectionForDataScan @ 0x1400B7580 (FsRtlCreateSectionForDataScan.c)
 *     MiAllocatePagesForMdl @ 0x1400CB9E8 (MiAllocatePagesForMdl.c)
 *     MiGatherMappedPages @ 0x1400EEBD4 (MiGatherMappedPages.c)
 *     CcPurgeCacheSection @ 0x1400F28C0 (CcPurgeCacheSection.c)
 *     MmCreateSystemSection @ 0x1400F9864 (MmCreateSystemSection.c)
 *     IopCancelIrpsInFileObjectList @ 0x1401082AC (IopCancelIrpsInFileObjectList.c)
 *     ExpExpandResourceOwnerTable @ 0x14011D5F0 (ExpExpandResourceOwnerTable.c)
 *     PnpBootDeviceWait @ 0x14014661C (PnpBootDeviceWait.c)
 *     MiMappedPageWriter @ 0x140148710 (MiMappedPageWriter.c)
 *     MiDereferenceSegmentThread @ 0x14014B2F0 (MiDereferenceSegmentThread.c)
 *     ExpLicensingWorker @ 0x140158B10 (ExpLicensingWorker.c)
 *     CcDeleteSectionsForPartition @ 0x1401E22D8 (CcDeleteSectionsForPartition.c)
 *     InbvRotateGuiBootDisplay @ 0x1401F3B50 (InbvRotateGuiBootDisplay.c)
 *     IopKeepAliveWorker @ 0x1401FAD90 (IopKeepAliveWorker.c)
 *     MiRemoveUnusedSegments @ 0x1402118EC (MiRemoveUnusedSegments.c)
 *     MiMakeOutswappedPageResident @ 0x1402125D4 (MiMakeOutswappedPageResident.c)
 *     MiFlushAllFilesystemPages @ 0x140218D3C (MiFlushAllFilesystemPages.c)
 *     MiCheckSystemTrimEndCriteria @ 0x14021D020 (MiCheckSystemTrimEndCriteria.c)
 *     MiFlushAllHintedStorePages @ 0x1402258B8 (MiFlushAllHintedStorePages.c)
 *     MiFlushAllPagesWorker @ 0x140225AB0 (MiFlushAllPagesWorker.c)
 *     MiGatherPagefilePages @ 0x140225D30 (MiGatherPagefilePages.c)
 *     ?StNpLeafPageIn@?$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z @ 0x140270AD0 (-StNpLeafPageIn@-$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z.c)
 *     MdlInvariantPostProcessing1 @ 0x140277224 (MdlInvariantPostProcessing1.c)
 *     PoBroadcastSystemState @ 0x140436BFC (PoBroadcastSystemState.c)
 *     PfpOpenHandleCreate @ 0x140442D3C (PfpOpenHandleCreate.c)
 *     NtCreateSection @ 0x14049C090 (NtCreateSection.c)
 *     NtDelayExecution @ 0x1404ACF70 (NtDelayExecution.c)
 *     PspExitThread @ 0x1404D5FB4 (PspExitThread.c)
 *     IoCancelThreadIo @ 0x1404D68F8 (IoCancelThreadIo.c)
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 *     MmGetSystemRoutineAddress @ 0x1404DE7F0 (MmGetSystemRoutineAddress.c)
 *     MmFlushVirtualMemory @ 0x1404E70DC (MmFlushVirtualMemory.c)
 *     PopPolicyWorkerNotify @ 0x1404E8000 (PopPolicyWorkerNotify.c)
 *     CmpUuidCreate @ 0x14050AF74 (CmpUuidCreate.c)
 *     NtCreateJobObject @ 0x14050B45C (NtCreateJobObject.c)
 *     EtwpWaitForBufferReferenceCount @ 0x140532700 (EtwpWaitForBufferReferenceCount.c)
 *     MmCreateSpecialImageSection @ 0x14053A36C (MmCreateSpecialImageSection.c)
 *     PnpCompleteDeviceEvent @ 0x14054B798 (PnpCompleteDeviceEvent.c)
 *     PipEventRemovalCheckOpenHandles @ 0x14055BE10 (PipEventRemovalCheckOpenHandles.c)
 *     PnpAllocateCriticalMemory @ 0x14055D8C8 (PnpAllocateCriticalMemory.c)
 *     NtCancelIoFile @ 0x140568010 (NtCancelIoFile.c)
 *     ExpWatchProductTypeWork @ 0x1405925B0 (ExpWatchProductTypeWork.c)
 *     PopAcquireAdaptiveLock @ 0x14059FDE4 (PopAcquireAdaptiveLock.c)
 *     NtNotifyChangeSession @ 0x1405E12D0 (NtNotifyChangeSession.c)
 *     IopCancelAlertedRequest @ 0x1405EF31C (IopCancelAlertedRequest.c)
 *     PfTLoggingWorker @ 0x140687320 (PfTLoggingWorker.c)
 *     CmpRetryBackOff @ 0x140696184 (CmpRetryBackOff.c)
 *     IopFreeBandwidthContract @ 0x1406BD638 (IopFreeBandwidthContract.c)
 *     MiGetReadyInPageBlock @ 0x1406E2624 (MiGetReadyInPageBlock.c)
 *     PoBlockConsoleSwitch @ 0x1406FC85C (PoBlockConsoleSwitch.c)
 *     PoShutdownBugCheck @ 0x1406FC900 (PoShutdownBugCheck.c)
 *     PerfDiagpProxyWorker @ 0x14073E0C0 (PerfDiagpProxyWorker.c)
 *     ExpNodeHotAddProcessorWorker @ 0x14075E6C0 (ExpNodeHotAddProcessorWorker.c)
 *     sub_14076D484 @ 0x14076D484 (sub_14076D484.c)
 *     ViThunkAdjustExportAddressIfHooked @ 0x1407B61E0 (ViThunkAdjustExportAddressIfHooked.c)
 *     HdlspPutMore @ 0x1407CCCF0 (HdlspPutMore.c)
 *     StartFirstUserProcess @ 0x14085168C (StartFirstUserProcess.c)
 * Callees:
 *     PoGetFrequencyBucket @ 0x1400035F4 (PoGetFrequencyBucket.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiCommitThreadWait @ 0x14006DBD0 (KiCommitThreadWait.c)
 *     KiSelectReadyThread @ 0x14006F300 (KiSelectReadyThread.c)
 *     KiAbProcessContextSwitch @ 0x14006F610 (KiAbProcessContextSwitch.c)
 *     KiComputePriorityFloor @ 0x14008C7D8 (KiComputePriorityFloor.c)
 *     KiUpdateThreadPriority @ 0x14008C870 (KiUpdateThreadPriority.c)
 *     NtYieldExecution @ 0x14008D810 (NtYieldExecution.c)
 *     KiEndThreadAccountingPeriod @ 0x14008E4D0 (KiEndThreadAccountingPeriod.c)
 *     KiQueueReadyThread @ 0x14008E6F0 (KiQueueReadyThread.c)
 *     KiSelectLowestRankedThread @ 0x1400A8B20 (KiSelectLowestRankedThread.c)
 *     KiIsThreadRankNonZero @ 0x1400AB970 (KiIsThreadRankNonZero.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1400D3C50 (KiSetBasePriorityAndClearDecrement.c)
 *     KiBeginThreadWait @ 0x1400E4300 (KiBeginThreadWait.c)
 *     KiCheckDueTimeExpired @ 0x1400E4560 (KiCheckDueTimeExpired.c)
 *     KiCheckWaitNext @ 0x1400E45E0 (KiCheckWaitNext.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010F97C (KiAbQueueAutoBoostDpc.c)
 *     KiFastExitThreadWait @ 0x14011B0BC (KiFastExitThreadWait.c)
 *     KiSwapContext @ 0x140187F20 (KiSwapContext.c)
 *     KiBeginCounterAccumulation @ 0x14020852C (KiBeginCounterAccumulation.c)
 */

NTSTATUS __stdcall KeDelayExecutionThread(KPROCESSOR_MODE WaitMode, BOOLEAN Alertable, PLARGE_INTEGER Interval)
{
  struct _KTHREAD *CurrentThread; // rbx
  PLARGE_INTEGER v4; // rbp
  NTSTATUS v7; // ebx
  NTSTATUS result; // eax
  struct _KTHREAD *v9; // rsi
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int64 *v12; // r8
  unsigned __int64 *NextThread; // rbp
  char v14; // r15
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r8
  volatile unsigned __int64 CycleTime; // rbx
  unsigned __int64 v18; // rax
  bool v19; // zf
  unsigned __int64 v20; // r10
  unsigned __int64 v21; // rcx
  char Priority; // bl
  char BasePriority; // bl
  struct _KPRCB *v24; // rcx
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rax
  _DWORD *SchedulerAssist; // rcx
  __int64 v29; // r8
  unsigned __int8 v30; // al
  unsigned int v31; // r12d
  __int64 v32; // rcx
  __int64 v33; // r9
  NTSTATUS v34; // eax
  NTSTATUS v35; // r14d
  unsigned __int64 *v36; // rdx
  __int64 v37; // r9
  unsigned __int8 v38; // al
  int v39; // ecx
  __int64 v40; // r8
  _SINGLE_LIST_ENTRY *p_PropagateBoostsEntry; // rdx
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // r8
  int v43; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v44; // [rsp+34h] [rbp-54h] BYREF
  NTSTATUS v45; // [rsp+38h] [rbp-50h]
  __int64 v46; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int8 v47; // [rsp+A0h] [rbp+18h]
  int v48; // [rsp+A8h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = Interval;
  if ( !Interval->QuadPart && WaitMode && !Alertable && !CurrentThread->ApcState.UserApcPending )
  {
    if ( !KeGetPcr()->Prcb.ReadySummary && !KeGetPcr()->Prcb.SharedReadyQueue->ReadySummary )
      return 1073741860;
    v7 = 1073741860;
    v9 = KeGetCurrentThread();
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( CurrentPrcb->ReadySummary || CurrentPrcb->SharedReadyQueue->ReadySummary )
    {
      KiAbProcessContextSwitch((__int64)v9, 0LL);
      v48 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v9->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v48);
        while ( v9->ThreadLock );
      }
      v43 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v43);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = (unsigned __int64 *)CurrentPrcb->NextThread;
      v14 = 1;
      if ( !NextThread )
      {
        NextThread = KiSelectReadyThread(1, (__int64)CurrentPrcb, v12);
        if ( !NextThread )
          NextThread = (unsigned __int64 *)KiSelectLowestRankedThread(CurrentPrcb);
        if ( !NextThread )
        {
          _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
          v9->ThreadLock = 0LL;
          __writecr8(CurrentIrql);
          return v7;
        }
      }
      if ( CurrentPrcb->NestingLevel )
      {
        CycleTime = v9->CycleTime;
      }
      else
      {
        _disable();
        CurrentPrcb->NestingLevel = 1;
        v15 = __rdtsc();
        v16 = v15 - CurrentPrcb->StartCycles;
        CycleTime = v16 + v9->CycleTime;
        v18 = v16 + v9->CurrentRunTime;
        v9->CycleTime = CycleTime;
        if ( v18 > 0xFFFFFFFF )
          LODWORD(v18) = -1;
        CurrentPrcb->StartCycles = v15;
        v19 = (v9->Header.Size & 0x3E) == 0;
        v9->CurrentRunTime = v18;
        if ( !v19 )
          KiEndThreadAccountingPeriod(CurrentPrcb, v9);
        v20 = __rdtsc();
        CurrentPrcb->CycleTime += v20 - CurrentPrcb->StartCycles;
        if ( (v9->Header.Size & 0x20) != 0 )
        {
          v36 = &CurrentPrcb->Cycles[(unsigned int)PoGetFrequencyBucket((__int64)CurrentPrcb)][CurrentPrcb->PowerState.EfficiencyClass];
          v15 = v37 + *v36;
          *v36 = v15;
        }
        CurrentPrcb->StartCycles = v20;
        if ( (v9->Header.Size & 0x10) != 0 )
          CurrentPrcb->TaggedCyclesStart = v20;
        if ( (v9->Header.Size & 2) != 0 )
          KiBeginCounterAccumulation(v9, 0LL);
        CurrentPrcb->NestingLevel = 0;
        if ( CurrentPrcb->InterruptRequest )
        {
          LOBYTE(v15) = 2;
          CurrentPrcb->InterruptRequest = 0;
          HalRequestSoftwareInterrupt(v15);
        }
        _enable();
      }
      v21 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)v9->SchedulerApc.SpareByte1;
      if ( (*((_DWORD *)&v9->0 + 1) & 0x20) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)&v9->116 + 1, 5u);
      Priority = v9->Priority;
      v9->QuantumTarget = v21;
      if ( Priority < 16 )
      {
        BasePriority = -1 - ((unsigned __int8)v9->PriorityDecrement >> 4) - (v9->PriorityDecrement & 0xF) + Priority;
        if ( BasePriority < v9->BasePriority )
          BasePriority = v9->BasePriority;
        KiSetBasePriorityAndClearDecrement(v9, 0LL, 0LL);
        Priority = KiComputePriorityFloor(v9, (unsigned __int8)BasePriority);
      }
      if ( (*((_DWORD *)&v9->0 + 1) & 0x400000) != 0 )
      {
        v39 = *(_DWORD *)v9->SchedulerAssist;
        v40 = (unsigned int)v9->BasePriority;
        if ( v39 >= (int)v40 )
        {
          v40 = (unsigned int)v39;
          if ( v39 >= 16 )
            v40 = 15LL;
        }
        if ( (_DWORD)v40 != v9->Priority )
          KiUpdateThreadPriority(0LL, v9, v40, 0LL);
      }
      else
      {
        v24 = KeGetCurrentPrcb();
        if ( Priority > v9->Priority )
        {
          if ( v9->AbWaitEntryCount )
          {
            p_PropagateBoostsEntry = &v9->PropagateBoostsEntry;
            if ( v9->PropagateBoostsEntry.Next == (struct _SINGLE_LIST_ENTRY *)1 )
            {
              p_AbPropagateBoostsList = &v24->AbPropagateBoostsList;
              if ( v24 != (struct _KPRCB *)-25720LL )
              {
                p_PropagateBoostsEntry->Next = p_AbPropagateBoostsList->Next;
                p_AbPropagateBoostsList->Next = p_PropagateBoostsEntry;
                _InterlockedIncrement16(&v9->KeReferenceCount);
                KiAbQueueAutoBoostDpc(v24);
              }
            }
          }
        }
        v9->Priority = Priority;
      }
      v9->ThreadLock = 0LL;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      CurrentPrcb->NestingLevel = 1;
      v25 = __rdtsc();
      v26 = v25 - CurrentPrcb->StartCycles;
      v27 = v26 + v9->CurrentRunTime;
      v9->CycleTime += v26;
      if ( v27 > 0xFFFFFFFF )
        LODWORD(v27) = -1;
      CurrentPrcb->StartCycles = v25;
      v19 = (v9->Header.Size & 0x3E) == 0;
      v9->CurrentRunTime = v27;
      if ( !v19 )
        KiEndThreadAccountingPeriod(CurrentPrcb, v9);
      _enable();
      if ( (*((_BYTE *)NextThread + 2) & 4) != 0 )
      {
        if ( !(unsigned __int8)KiIsThreadRankNonZero(NextThread, CurrentPrcb) )
          v14 = *((_BYTE *)NextThread + 195);
      }
      else
      {
        v14 = *((_BYTE *)NextThread + 195);
      }
      *CurrentPrcb->PriorityState = v14;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
        *SchedulerAssist = v14;
      CurrentPrcb->CurrentThread = (_KTHREAD *)NextThread;
      if ( *((_BYTE *)NextThread + 388) == 1 )
        *((_DWORD *)NextThread + 33) = *((_DWORD *)NextThread + 33)
                                     - *((_DWORD *)NextThread + 109)
                                     + MEMORY[0xFFFFF78000000320];
      *((_BYTE *)NextThread + 388) = 2;
      v9->WaitReason = 33;
      v9->WaitIrql = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, v9);
      LOBYTE(v29) = 1;
      KiSwapContext(v9, NextThread, v29);
      v7 = 0;
    }
    __writecr8(CurrentIrql);
    return v7;
  }
  LOBYTE(Interval) = 1;
  v30 = KiCheckWaitNext((_DWORD)CurrentThread, (_DWORD)v4, (_DWORD)Interval, (unsigned int)&v46, (__int64)&v44);
  v31 = v44;
  v47 = v30;
  while ( 1 )
  {
    result = KiBeginThreadWait(CurrentThread, (unsigned __int8)WaitMode, 4LL, Alertable);
    v45 = result;
    if ( result )
      break;
    if ( (unsigned int)KiCheckDueTimeExpired(CurrentThread, v31, v46) )
    {
      KiFastExitThreadWait(KeGetCurrentPrcb(), CurrentThread, v47);
      if ( v4->QuadPart )
        return v45;
      else
        return NtYieldExecution();
    }
    CurrentThread->WaitBlock[0].Object = (PVOID)-1LL;
    CurrentThread->WaitBlockFill4[17] = 5;
    CurrentThread->WaitBlockCount = 1;
    v34 = KiCommitThreadWait(v32, (__int64 *)&CurrentThread->320, v31, v33);
    if ( v34 != 256 )
    {
      v35 = 0;
      if ( v34 != 258 )
        return v34;
      return v35;
    }
    v47 = 0;
    v38 = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentThread->WaitIrql = v38;
  }
  return result;
}
