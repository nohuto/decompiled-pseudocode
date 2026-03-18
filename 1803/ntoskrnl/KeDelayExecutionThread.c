/*
 * XREFs of KeDelayExecutionThread @ 0x140104BA0
 * Callers:
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiUserFault @ 0x14001B870 (MiUserFault.c)
 *     MiWalkEntireImage @ 0x140030B50 (MiWalkEntireImage.c)
 *     FsRtlCreateSectionForDataScan @ 0x14004D470 (FsRtlCreateSectionForDataScan.c)
 *     CcPurgeCacheSection @ 0x140050C80 (CcPurgeCacheSection.c)
 *     MiFlushAllHintedStorePages @ 0x14007FCDC (MiFlushAllHintedStorePages.c)
 *     ExpExpandResourceOwnerTable @ 0x1400889D8 (ExpExpandResourceOwnerTable.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400906FC (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140091184 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     MiAllocatePagesForMdl @ 0x1400B3544 (MiAllocatePagesForMdl.c)
 *     IopCancelIrpsInFileObjectList @ 0x1400B677C (IopCancelIrpsInFileObjectList.c)
 *     MiGatherPagefilePages @ 0x1400D5DC8 (MiGatherPagefilePages.c)
 *     CcInitializeCacheMapEx @ 0x1400DF8F0 (CcInitializeCacheMapEx.c)
 *     MmFlushSection @ 0x1400E1380 (MmFlushSection.c)
 *     CcMapAndCopyInToCache @ 0x140112290 (CcMapAndCopyInToCache.c)
 *     MiFlushSectionInternal @ 0x1401187E0 (MiFlushSectionInternal.c)
 *     MiGatherMappedPages @ 0x140133168 (MiGatherMappedPages.c)
 *     MiFlushAllPagesWorker @ 0x14014D944 (MiFlushAllPagesWorker.c)
 *     MmCreateSystemSection @ 0x140161354 (MmCreateSystemSection.c)
 *     PopAllocateIrp @ 0x1401673F8 (PopAllocateIrp.c)
 *     MiMappedPageWriter @ 0x140176F10 (MiMappedPageWriter.c)
 *     PnpBootDeviceWait @ 0x14017973C (PnpBootDeviceWait.c)
 *     CcDeleteSectionsForPartition @ 0x140220EE8 (CcDeleteSectionsForPartition.c)
 *     InbvRotateGuiBootDisplay @ 0x140231080 (InbvRotateGuiBootDisplay.c)
 *     IopKeepAliveWorker @ 0x140237B30 (IopKeepAliveWorker.c)
 *     MiRemoveUnusedSegments @ 0x14024FD3C (MiRemoveUnusedSegments.c)
 *     MiMakeOutswappedPageResident @ 0x140250B10 (MiMakeOutswappedPageResident.c)
 *     MiFlushAllFilesystemPages @ 0x140255BA8 (MiFlushAllFilesystemPages.c)
 *     MiCheckSystemTrimEndCriteria @ 0x140259334 (MiCheckSystemTrimEndCriteria.c)
 *     MiHandleForkTransitionPte @ 0x14026AEC0 (MiHandleForkTransitionPte.c)
 *     ?StNpLeafPageIn@?$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z @ 0x1402A60D0 (-StNpLeafPageIn@-$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z.c)
 *     MdlInvariantPostProcessing1 @ 0x1402AA340 (MdlInvariantPostProcessing1.c)
 *     sub_1402C0DB0 @ 0x1402C0DB0 (sub_1402C0DB0.c)
 *     PoBroadcastSystemState @ 0x140472204 (PoBroadcastSystemState.c)
 *     PfpOpenHandleCreate @ 0x1404A2488 (PfpOpenHandleCreate.c)
 *     PspExitThread @ 0x1404B8D70 (PspExitThread.c)
 *     IoCancelThreadIo @ 0x1404B979C (IoCancelThreadIo.c)
 *     NtCreateSection @ 0x1404C1930 (NtCreateSection.c)
 *     NtSetInformationProcess @ 0x1404E4550 (NtSetInformationProcess.c)
 *     MmCreateSpecialImageSection @ 0x1404F0B68 (MmCreateSpecialImageSection.c)
 *     MmGetSystemRoutineAddress @ 0x140519F10 (MmGetSystemRoutineAddress.c)
 *     PopPolicyWorkerNotify @ 0x14051D3D0 (PopPolicyWorkerNotify.c)
 *     PnpCompleteDeviceEvent @ 0x14052021C (PnpCompleteDeviceEvent.c)
 *     PopAcquireAdaptiveLock @ 0x140526E68 (PopAcquireAdaptiveLock.c)
 *     NtCreateJobObject @ 0x14052FF14 (NtCreateJobObject.c)
 *     NtCancelIoFile @ 0x14055C330 (NtCancelIoFile.c)
 *     CmpUuidCreate @ 0x1405624F4 (CmpUuidCreate.c)
 *     MmFlushVirtualMemory @ 0x140568184 (MmFlushVirtualMemory.c)
 *     ExpWatchProductTypeWork @ 0x140579DB0 (ExpWatchProductTypeWork.c)
 *     NtNotifyChangeSession @ 0x140582640 (NtNotifyChangeSession.c)
 *     PoBlockConsoleSwitch @ 0x140583BAC (PoBlockConsoleSwitch.c)
 *     PerfDiagpRestartCKCL @ 0x140584B40 (PerfDiagpRestartCKCL.c)
 *     EtwpWaitForBufferReferenceCount @ 0x140592060 (EtwpWaitForBufferReferenceCount.c)
 *     NtDelayExecution @ 0x1405AD070 (NtDelayExecution.c)
 *     PnpAllocateCriticalMemory @ 0x1405C8644 (PnpAllocateCriticalMemory.c)
 *     PfTLoggingWorker @ 0x14062C1C0 (PfTLoggingWorker.c)
 *     CmpRetryBackOff @ 0x1406F9BF4 (CmpRetryBackOff.c)
 *     IopCancelAlertedRequest @ 0x14071957C (IopCancelAlertedRequest.c)
 *     IopFreeBandwidthContract @ 0x1407225F8 (IopFreeBandwidthContract.c)
 *     PipEventRemovalCheckOpenHandles @ 0x14073EF68 (PipEventRemovalCheckOpenHandles.c)
 *     MiGetReadyInPageBlock @ 0x14074D190 (MiGetReadyInPageBlock.c)
 *     PoShutdownBugCheck @ 0x140762AF0 (PoShutdownBugCheck.c)
 *     PdcNotificationClientUnregister @ 0x14078BB20 (PdcNotificationClientUnregister.c)
 *     ExpNodeHotAddProcessorWorker @ 0x1407C5580 (ExpNodeHotAddProcessorWorker.c)
 *     sub_1407D4598 @ 0x1407D4598 (sub_1407D4598.c)
 *     ViThunkAdjustExportAddressIfHooked @ 0x140823ED0 (ViThunkAdjustExportAddressIfHooked.c)
 *     HdlspPutMore @ 0x140839CEC (HdlspPutMore.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x1408C0F30 (PiCreateDriverDataDirectoryRoot.c)
 *     StartFirstUserProcess @ 0x1408C254C (StartFirstUserProcess.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiAbQueueAutoBoostDpc @ 0x140039664 (KiAbQueueAutoBoostDpc.c)
 *     KiIsThreadRankNonZero @ 0x14003A860 (KiIsThreadRankNonZero.c)
 *     NtYieldExecution @ 0x140040000 (NtYieldExecution.c)
 *     KiStartThreadCycleAccumulation @ 0x140060940 (KiStartThreadCycleAccumulation.c)
 *     KiEndThreadAccountingPeriod @ 0x140060A70 (KiEndThreadAccountingPeriod.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x14006B24C (KiSetBasePriorityAndClearDecrement.c)
 *     KiCheckDueTimeExpired @ 0x140088E90 (KiCheckDueTimeExpired.c)
 *     KiCheckWaitNext @ 0x140088F10 (KiCheckWaitNext.c)
 *     KiFastExitThreadWait @ 0x140088FE4 (KiFastExitThreadWait.c)
 *     KiSelectLowestRankedThread @ 0x1400A723C (KiSelectLowestRankedThread.c)
 *     KiComputeNewPriority @ 0x1400EB8C0 (KiComputeNewPriority.c)
 *     KiQueueReadyThread @ 0x1400EC480 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiUpdateThreadPriority @ 0x1400EDCB0 (KiUpdateThreadPriority.c)
 *     KiCommitThreadWait @ 0x1400F64C0 (KiCommitThreadWait.c)
 *     KiSelectReadyThread @ 0x1400F8040 (KiSelectReadyThread.c)
 *     KiAbProcessContextSwitch @ 0x1400F83C0 (KiAbProcessContextSwitch.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiBeginThreadWait @ 0x1401268C0 (KiBeginThreadWait.c)
 *     KeReadGuestSchedulerAssistPriority @ 0x1401A5A6C (KeReadGuestSchedulerAssistPriority.c)
 *     KiSwapContext @ 0x1401B1B40 (KiSwapContext.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

NTSTATUS __stdcall KeDelayExecutionThread(KPROCESSOR_MODE WaitMode, BOOLEAN Alertable, PLARGE_INTEGER Interval)
{
  struct _KTHREAD *CurrentThread; // rbx
  NTSTATUS v7; // ebx
  NTSTATUS result; // eax
  struct _KTHREAD *v9; // rdi
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v12; // r8
  struct _KPRCB *v13; // rbp
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v15; // rbp
  _DWORD *v16; // rcx
  __int64 NextThread; // rbp
  char v18; // r15
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r8
  unsigned __int64 CycleTime; // rbx
  unsigned __int64 v22; // rax
  bool v23; // zf
  unsigned __int64 v24; // rcx
  char v25; // cl
  struct _KDPC *v26; // r8
  int v27; // ebx
  int v28; // ecx
  PVOID *p_DpcData; // rdx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // r8
  unsigned __int64 v32; // rax
  _DWORD *v33; // rax
  __int64 v34; // r8
  unsigned __int8 v35; // al
  int v36; // r12d
  unsigned __int64 v37; // r13
  __int64 v38; // rcx
  NTSTATUS v39; // eax
  NTSTATUS v40; // r14d
  unsigned __int8 v41; // al
  int v42; // eax
  int v43; // eax
  int GuestSchedulerAssistPriority; // ebx
  _SINGLE_LIST_ENTRY *p_PropagateBoostsEntry; // r9
  int v46; // ecx
  int v47; // [rsp+30h] [rbp-58h] BYREF
  int v48; // [rsp+34h] [rbp-54h] BYREF
  NTSTATUS v49; // [rsp+38h] [rbp-50h]
  unsigned __int64 v50[9]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int8 v51; // [rsp+A0h] [rbp+18h]
  int v52; // [rsp+A8h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
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
      KiAbProcessContextSwitch((__int64)v9, 0);
      v13 = KeGetCurrentPrcb();
      v52 = 0;
      SchedulerAssist = v13->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( v13->NestingLevel <= 1u )
        {
          v42 = SchedulerAssist[5];
          SchedulerAssist[5] = v42 + 1;
          if ( v42 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
            KiPerformUnboostKick(v13);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v9->ThreadLock, 0LL) )
      {
        KiSetVpThreadSpinLockCount((__int64)v13, 0);
        do
          KeYieldProcessorEx(&v52);
        while ( v9->ThreadLock );
        KiSetVpThreadSpinLockCount((__int64)v13, 1);
      }
      v15 = KeGetCurrentPrcb();
      v47 = 0;
      v16 = v15->SchedulerAssist;
      if ( v16 )
      {
        if ( v15->NestingLevel <= 1u )
        {
          v43 = v16[5];
          v16[5] = v43 + 1;
          if ( v43 == -1 && !*((_BYTE *)v16 + 25) && !*((_BYTE *)v16 + 27) )
            KiPerformUnboostKick(v15);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
      {
        KiSetVpThreadSpinLockCount((__int64)v15, 0);
        do
          KeYieldProcessorEx(&v47);
        while ( CurrentPrcb->PrcbLock );
        KiSetVpThreadSpinLockCount((__int64)v15, 1);
      }
      NextThread = (__int64)CurrentPrcb->NextThread;
      v18 = 1;
      if ( !NextThread )
      {
        NextThread = KiSelectReadyThread(1, (__int64)CurrentPrcb, v12);
        if ( !NextThread )
          NextThread = KiSelectLowestRankedThread((__int64)CurrentPrcb);
        if ( !NextThread )
        {
          _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
          KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
          KiReleaseThreadLockSafe((__int64)v9);
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
        v19 = __rdtsc();
        v20 = v19 - CurrentPrcb->StartCycles;
        CycleTime = v20 + v9->CycleTime;
        v22 = v20 + v9->CurrentRunTime;
        v9->CycleTime = CycleTime;
        if ( v22 > 0xFFFFFFFF )
          LODWORD(v22) = -1;
        CurrentPrcb->StartCycles = v19;
        v23 = (v9->Header.Size & 0x3E) == 0;
        v9->CurrentRunTime = v22;
        if ( !v23 )
          KiEndThreadAccountingPeriod((__int64)CurrentPrcb, (__int64)v9, v20);
        KiStartThreadCycleAccumulation((__int64)CurrentPrcb, (__int64)v9, 0);
        _enable();
      }
      v24 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)v9->SchedulerApc.SpareByte1;
      if ( (*((_DWORD *)&v9->0 + 1) & 0x20) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)&v9->116 + 1, 5u);
      v9->QuantumTarget = v24;
      v25 = KiComputeNewPriority((__int64)v9, 1);
      if ( (*((_DWORD *)&v9->0 + 1) & 0x400000) != 0 )
      {
        GuestSchedulerAssistPriority = KeReadGuestSchedulerAssistPriority(v9);
        if ( GuestSchedulerAssistPriority != v9->Priority )
        {
          KiSetBasePriorityAndClearDecrement((__int64)v9, 0LL, 0);
          KiUpdateThreadPriority(0LL, (__int64)v9, GuestSchedulerAssistPriority, 0);
        }
      }
      else
      {
        v26 = (struct _KDPC *)KeGetCurrentPrcb();
        v27 = v25;
        v28 = *(&v9->MiscFlags + 1);
        if ( (char)v27 > v9->Priority )
        {
          if ( v9->AbWaitEntryCount )
          {
            p_PropagateBoostsEntry = &v9->PropagateBoostsEntry;
            if ( v9->PropagateBoostsEntry.Next == (struct _SINGLE_LIST_ENTRY *)1 )
            {
              p_DpcData = &v26[401].DpcData;
              if ( v26 != (struct _KDPC *)-25720LL )
              {
                p_PropagateBoostsEntry->Next = (struct _SINGLE_LIST_ENTRY *)*p_DpcData;
                *p_DpcData = p_PropagateBoostsEntry;
                _InterlockedIncrement16(&v9->KeReferenceCount);
                KiAbQueueAutoBoostDpc(v26);
                v28 = *(&v9->MiscFlags + 1);
              }
            }
          }
        }
        v9->Priority = v27;
        if ( (v28 & 0x400000) != 0 )
          *((_DWORD *)v9->SchedulerAssist + 1) = v27;
      }
      v9->ThreadLock = 0LL;
      KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
      CurrentPrcb->NextThread = 0LL;
      _disable();
      CurrentPrcb->NestingLevel = 1;
      v30 = __rdtsc();
      v31 = v30 - CurrentPrcb->StartCycles;
      v32 = v31 + v9->CurrentRunTime;
      v9->CycleTime += v31;
      if ( v32 > 0xFFFFFFFF )
        LODWORD(v32) = -1;
      CurrentPrcb->StartCycles = v30;
      v23 = (v9->Header.Size & 0x3E) == 0;
      v9->CurrentRunTime = v32;
      if ( !v23 )
        KiEndThreadAccountingPeriod((__int64)CurrentPrcb, (__int64)v9, v31);
      _enable();
      if ( (*(_BYTE *)(NextThread + 2) & 4) != 0 )
      {
        if ( !KiIsThreadRankNonZero(NextThread, CurrentPrcb) )
          v18 = *(_BYTE *)(NextThread + 195);
      }
      else
      {
        v18 = *(_BYTE *)(NextThread + 195);
      }
      *CurrentPrcb->PriorityState = v18;
      v33 = CurrentPrcb->SchedulerAssist;
      if ( v33 )
      {
        v46 = KiVpThreadSystemWorkPriority;
        if ( (_KTHREAD *)NextThread != CurrentPrcb->IdleThread )
          v46 = v18;
        *v33 = v46;
      }
      CurrentPrcb->CurrentThread = (_KTHREAD *)NextThread;
      if ( *(_BYTE *)(NextThread + 388) == 1 )
      {
        v31 = (unsigned int)(*(_DWORD *)(NextThread + 132) - *(_DWORD *)(NextThread + 436));
        *(_DWORD *)(NextThread + 132) = v31 + MEMORY[0xFFFFF78000000320];
      }
      *(_BYTE *)(NextThread + 388) = 2;
      v9->WaitReason = 33;
      v9->WaitIrql = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, (__int64)v9, v31);
      LOBYTE(v34) = 1;
      KiSwapContext(v9, NextThread, v34);
      v7 = 0;
    }
    __writecr8(CurrentIrql);
    return v7;
  }
  v35 = KiCheckWaitNext((__int64)CurrentThread, (__int64)Interval, 1, v50, &v48);
  v36 = v48;
  v37 = v50[0];
  v51 = v35;
  while ( 1 )
  {
    result = KiBeginThreadWait(CurrentThread, (unsigned __int8)WaitMode, 4LL, Alertable);
    v49 = result;
    if ( result )
      break;
    if ( (unsigned int)KiCheckDueTimeExpired((__int64)CurrentThread, v36, v37) )
    {
      KiFastExitThreadWait((__int64)KeGetCurrentPrcb(), (__int64)CurrentThread, v51);
      if ( Interval->QuadPart )
        return v49;
      else
        return NtYieldExecution();
    }
    CurrentThread->WaitBlock[0].Object = (PVOID)-1LL;
    CurrentThread->WaitBlockFill4[17] = 5;
    CurrentThread->WaitBlockCount = 1;
    v39 = KiCommitThreadWait(v38, (__int64 *)&CurrentThread->320, v36, v37);
    if ( v39 != 256 )
    {
      v40 = 0;
      if ( v39 != 258 )
        return v39;
      return v40;
    }
    v51 = 0;
    v41 = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentThread->WaitIrql = v41;
  }
  return result;
}
