/*
 * XREFs of KeDelayExecutionThread @ 0x1400EE150
 * Callers:
 *     MiFlushAllHintedStorePages @ 0x140004DF0 (MiFlushAllHintedStorePages.c)
 *     IopCancelIrpsInFileObjectList @ 0x140018980 (IopCancelIrpsInFileObjectList.c)
 *     ExpExpandResourceOwnerTable @ 0x140027C24 (ExpExpandResourceOwnerTable.c)
 *     MmCreateSystemSection @ 0x140034178 (MmCreateSystemSection.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140053EC8 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140054934 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     MiGatherPagefilePages @ 0x140056D98 (MiGatherPagefilePages.c)
 *     FsRtlCreateSectionForDataScan @ 0x14005E8F0 (FsRtlCreateSectionForDataScan.c)
 *     MiAllocatePagesForMdl @ 0x14007A5D8 (MiAllocatePagesForMdl.c)
 *     MiFlushSectionInternal @ 0x140094CA0 (MiFlushSectionInternal.c)
 *     MmFlushSection @ 0x140098844 (MmFlushSection.c)
 *     CcMapAndCopyInToCache @ 0x14009EF20 (CcMapAndCopyInToCache.c)
 *     MiGatherMappedPages @ 0x1400AFB14 (MiGatherMappedPages.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiWalkEntireImage @ 0x1400C9D50 (MiWalkEntireImage.c)
 *     CcPurgeCacheSection @ 0x14010BF00 (CcPurgeCacheSection.c)
 *     MiFlushAllPagesWorker @ 0x14013E0D8 (MiFlushAllPagesWorker.c)
 *     PopAllocateIrp @ 0x140146080 (PopAllocateIrp.c)
 *     PnpBootDeviceWait @ 0x140153E58 (PnpBootDeviceWait.c)
 *     MiZeroPageThread @ 0x1401579F0 (MiZeroPageThread.c)
 *     MiMappedPageWriter @ 0x14015DC00 (MiMappedPageWriter.c)
 *     MiDereferenceSegmentThread @ 0x1401611B0 (MiDereferenceSegmentThread.c)
 *     MiRemoveUnusedSegments @ 0x140161338 (MiRemoveUnusedSegments.c)
 *     InbvRotateGuiBootDisplay @ 0x1401EE440 (InbvRotateGuiBootDisplay.c)
 *     IopKeepAliveWorker @ 0x1401F4F90 (IopKeepAliveWorker.c)
 *     MiMakeOutswappedPageResident @ 0x14020B6DC (MiMakeOutswappedPageResident.c)
 *     MiFlushAllFilesystemPages @ 0x1402114A0 (MiFlushAllFilesystemPages.c)
 *     MiCheckSystemTrimEndCriteria @ 0x140214A74 (MiCheckSystemTrimEndCriteria.c)
 *     MiHandleForkTransitionPte @ 0x1402232C0 (MiHandleForkTransitionPte.c)
 *     ?StNpLeafPageIn@?$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z @ 0x14024CBB0 (-StNpLeafPageIn@-$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z.c)
 *     MdlInvariantPostProcessing1 @ 0x1402509C4 (MdlInvariantPostProcessing1.c)
 *     sub_140261AD0 @ 0x140261AD0 (sub_140261AD0.c)
 *     PoBroadcastSystemState @ 0x140408390 (PoBroadcastSystemState.c)
 *     MiShutdownSystem @ 0x1404193D0 (MiShutdownSystem.c)
 *     PopAcquireAdaptiveLock @ 0x140420088 (PopAcquireAdaptiveLock.c)
 *     PoBlockConsoleSwitch @ 0x140420964 (PoBlockConsoleSwitch.c)
 *     IopCancelAlertedRequest @ 0x140430F4C (IopCancelAlertedRequest.c)
 *     NtCancelIoFile @ 0x140433004 (NtCancelIoFile.c)
 *     EtwpWaitForBufferReferenceCount @ 0x14044D160 (EtwpWaitForBufferReferenceCount.c)
 *     ExpWatchProductTypeWork @ 0x140455830 (ExpWatchProductTypeWork.c)
 *     NtNotifyChangeSession @ 0x14045AEA4 (NtNotifyChangeSession.c)
 *     PerfDiagpProxyWorker @ 0x14045C280 (PerfDiagpProxyWorker.c)
 *     NtSetInformationProcess @ 0x1404A2550 (NtSetInformationProcess.c)
 *     PnpCompleteDeviceEvent @ 0x1404A5C6C (PnpCompleteDeviceEvent.c)
 *     SPCall2ServerInternal @ 0x1404A9590 (SPCall2ServerInternal.c)
 *     MmGetSystemRoutineAddress @ 0x1404C0520 (MmGetSystemRoutineAddress.c)
 *     PopPolicyWorkerNotify @ 0x1404C5490 (PopPolicyWorkerNotify.c)
 *     MmFlushVirtualMemory @ 0x1404C6968 (MmFlushVirtualMemory.c)
 *     NtCreateSection @ 0x14050FCB0 (NtCreateSection.c)
 *     NtDelayExecution @ 0x14052DEA0 (NtDelayExecution.c)
 *     PfpOpenHandleCreate @ 0x14053E568 (PfpOpenHandleCreate.c)
 *     IoCancelThreadIo @ 0x14053F190 (IoCancelThreadIo.c)
 *     PspExitThread @ 0x1405401EC (PspExitThread.c)
 *     MmCreateSpecialImageSection @ 0x140546050 (MmCreateSpecialImageSection.c)
 *     NtCreateJobObject @ 0x14054C614 (NtCreateJobObject.c)
 *     CmpUuidCreate @ 0x14054D440 (CmpUuidCreate.c)
 *     PnpAllocateCriticalMemory @ 0x140570384 (PnpAllocateCriticalMemory.c)
 *     PiEventRemovalCheckOpenHandles @ 0x14059A538 (PiEventRemovalCheckOpenHandles.c)
 *     PfTLoggingWorker @ 0x1405D7720 (PfTLoggingWorker.c)
 *     CmpRetryBackOff @ 0x14066BB18 (CmpRetryBackOff.c)
 *     IopFreeBandwidthContract @ 0x1406918FC (IopFreeBandwidthContract.c)
 *     MiGetReadyInPageBlock @ 0x1406B6334 (MiGetReadyInPageBlock.c)
 *     PoShutdownBugCheck @ 0x1406C9EC0 (PoShutdownBugCheck.c)
 *     ViThunkAdjustExportAddressIfHooked @ 0x140774424 (ViThunkAdjustExportAddressIfHooked.c)
 *     HdlspPutMore @ 0x14078F1C0 (HdlspPutMore.c)
 *     StartFirstUserProcess @ 0x14081013C (StartFirstUserProcess.c)
 * Callees:
 *     KiFastExitThreadWait @ 0x140017F24 (KiFastExitThreadWait.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiComputeNewPriority @ 0x140042850 (KiComputeNewPriority.c)
 *     KiStartThreadCycleAccumulation @ 0x140043CC0 (KiStartThreadCycleAccumulation.c)
 *     KiEndThreadCycleAccumulation @ 0x140043D60 (KiEndThreadCycleAccumulation.c)
 *     KiCheckDueTimeExpired @ 0x140044A30 (KiCheckDueTimeExpired.c)
 *     KiCheckWaitNext @ 0x140044AC0 (KiCheckWaitNext.c)
 *     KiCommitThreadWait @ 0x1400EAB20 (KiCommitThreadWait.c)
 *     KiSelectReadyThread @ 0x1400EC0C0 (KiSelectReadyThread.c)
 *     KiAbProcessContextSwitch @ 0x1400EC3E0 (KiAbProcessContextSwitch.c)
 *     KiBeginThreadWait @ 0x1400FC780 (KiBeginThreadWait.c)
 *     NtYieldExecution @ 0x140112EE0 (NtYieldExecution.c)
 *     KiQueueReadyThread @ 0x1401131D0 (KiQueueReadyThread.c)
 *     KiIsThreadRankNonZero @ 0x1401138D0 (KiIsThreadRankNonZero.c)
 *     KiSelectLowestRankedThread @ 0x140113F6C (KiSelectLowestRankedThread.c)
 *     KiAbQueueAutoBoostDpc @ 0x14011F45C (KiAbQueueAutoBoostDpc.c)
 *     KiSwapContext @ 0x140188470 (KiSwapContext.c)
 */

NTSTATUS __stdcall KeDelayExecutionThread(KPROCESSOR_MODE WaitMode, BOOLEAN Alertable, PLARGE_INTEGER Interval)
{
  __int64 v3; // r9
  struct _KTHREAD *CurrentThread; // rbx
  NTSTATUS v8; // ebx
  NTSTATUS result; // eax
  unsigned __int8 v10; // al
  int v11; // r12d
  LARGE_INTEGER v12; // r13
  __int64 v13; // rcx
  struct _KTHREAD *v14; // r14
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rdi
  _QWORD *v17; // r8
  _KTHREAD *NextThread; // rbp
  char Priority; // r15
  unsigned __int64 CycleTime; // rbx
  unsigned __int64 v21; // rcx
  char v22; // al
  struct _KPRCB *v23; // rcx
  char v24; // bl
  __int64 v25; // r8
  _SINGLE_LIST_ENTRY *p_PropagateBoostsEntry; // r8
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // rdx
  unsigned __int8 v28; // al
  int v29; // [rsp+30h] [rbp-58h] BYREF
  int v30; // [rsp+34h] [rbp-54h] BYREF
  NTSTATUS v31; // [rsp+38h] [rbp-50h]
  LARGE_INTEGER v32[9]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int8 v33; // [rsp+A0h] [rbp+18h]
  int v34; // [rsp+A8h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( !Interval->QuadPart && WaitMode && !Alertable && !CurrentThread->ApcState.UserApcPending )
  {
    if ( !KeGetPcr()->Prcb.ReadySummary && !KeGetPcr()->Prcb.SharedReadyQueue->ReadySummary )
      return 1073741860;
    v8 = 1073741860;
    v14 = KeGetCurrentThread();
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( CurrentPrcb->ReadySummary || CurrentPrcb->SharedReadyQueue->ReadySummary )
    {
      KiAbProcessContextSwitch((__int64)v14, 0, (__int64)Interval, v3);
      v34 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v14->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v34);
        while ( v14->ThreadLock );
      }
      v29 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v29);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      Priority = 1;
      if ( !NextThread )
      {
        NextThread = (_KTHREAD *)KiSelectReadyThread(1, (__int64)CurrentPrcb, v17);
        if ( !NextThread )
          NextThread = (_KTHREAD *)KiSelectLowestRankedThread(CurrentPrcb);
        if ( !NextThread )
        {
          _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
          v14->ThreadLock = 0LL;
          __writecr8(CurrentIrql);
          return v8;
        }
      }
      if ( CurrentPrcb->NestingLevel )
      {
        CycleTime = v14->CycleTime;
      }
      else
      {
        _disable();
        CycleTime = KiEndThreadCycleAccumulation((__int64)CurrentPrcb, (__int64)v14, 0LL);
        KiStartThreadCycleAccumulation((__int64)CurrentPrcb, (__int64)v14, 0);
        _enable();
      }
      v21 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)v14->SchedulerApc.SpareByte1;
      if ( (*((_DWORD *)&v14->0 + 1) & 0x10) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)&v14->116 + 1, 4u);
      v14->QuantumTarget = v21;
      v22 = KiComputeNewPriority((__int64)v14, 1);
      v23 = KeGetCurrentPrcb();
      v24 = v22;
      if ( v22 > v14->Priority )
      {
        if ( v14->AbWaitEntryCount )
        {
          p_PropagateBoostsEntry = &v14->PropagateBoostsEntry;
          if ( v14->PropagateBoostsEntry.Next == (struct _SINGLE_LIST_ENTRY *)1 )
          {
            p_AbPropagateBoostsList = &v23->AbPropagateBoostsList;
            if ( v23 != (struct _KPRCB *)-26040LL )
            {
              p_PropagateBoostsEntry->Next = p_AbPropagateBoostsList->Next;
              p_AbPropagateBoostsList->Next = p_PropagateBoostsEntry;
              _InterlockedIncrement16(&v14->KeReferenceCount);
              KiAbQueueAutoBoostDpc(v23);
            }
          }
        }
      }
      v14->Priority = v24;
      v14->ThreadLock = 0LL;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, (__int64)v14, 0LL);
      _enable();
      if ( (NextThread->Header.Size & 4) != 0 )
      {
        if ( !(unsigned __int8)KiIsThreadRankNonZero(NextThread, CurrentPrcb) )
          Priority = NextThread->Priority;
      }
      else
      {
        Priority = NextThread->Priority;
      }
      *CurrentPrcb->PriorityState = Priority;
      CurrentPrcb->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
        NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
      NextThread->WaitBlockFill6[68] = 2;
      v14->WaitReason = 33;
      v14->WaitIrql = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, v14);
      LOBYTE(v25) = 1;
      KiSwapContext(v14, NextThread, v25);
      v8 = 0;
    }
    __writecr8(CurrentIrql);
    return v8;
  }
  v10 = KiCheckWaitNext((__int64)CurrentThread, Interval, 1, v32, &v30);
  v11 = v30;
  v12 = v32[0];
  v33 = v10;
  while ( 1 )
  {
    result = KiBeginThreadWait(CurrentThread, (unsigned __int8)WaitMode, 4LL, Alertable);
    v31 = result;
    if ( result )
      break;
    if ( (unsigned int)KiCheckDueTimeExpired((__int64)CurrentThread, v11, v12.QuadPart) )
    {
      KiFastExitThreadWait((__int64)KeGetCurrentPrcb(), (__int64)CurrentThread, v33);
      if ( Interval->QuadPart )
        return v31;
      else
        return NtYieldExecution();
    }
    CurrentThread->WaitBlock[0].Object = (PVOID)-1LL;
    CurrentThread->WaitBlockFill4[17] = 5;
    CurrentThread->WaitBlockCount = 1;
    result = KiCommitThreadWait(v13, (__int64 *)&CurrentThread->320, v11, v12.QuadPart);
    if ( result != 256 )
    {
      if ( result == 258 )
        return 0;
      return result;
    }
    v33 = 0;
    v28 = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentThread->WaitIrql = v28;
  }
  return result;
}
