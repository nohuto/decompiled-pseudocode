/*
 * XREFs of KeSetPriorityThread @ 0x14008BE00
 * Callers:
 *     CcApplyLowIoPriorityToThread @ 0x140022680 (CcApplyLowIoPriorityToThread.c)
 *     KeGenericProcessorCallback @ 0x1400A8F40 (KeGenericProcessorCallback.c)
 *     MiZeroInParallelWorker @ 0x1400CC570 (MiZeroInParallelWorker.c)
 *     MiZeroInParallel @ 0x1400CFA48 (MiZeroInParallel.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1401167E4 (CcBoostLowPriorityWorkerThread.c)
 *     CmpSetPriorityThread @ 0x140130D50 (CmpSetPriorityThread.c)
 *     KeSwapProcessOrStack @ 0x140142E10 (KeSwapProcessOrStack.c)
 *     KiExecuteDpc @ 0x140143540 (KiExecuteDpc.c)
 *     MiMappedPageWriter @ 0x140148710 (MiMappedPageWriter.c)
 *     KeBalanceSetManager @ 0x140148E40 (KeBalanceSetManager.c)
 *     MiDereferenceSegmentThread @ 0x14014B2F0 (MiDereferenceSegmentThread.c)
 *     FsRtlWorkerThread @ 0x14015B8B0 (FsRtlWorkerThread.c)
 *     MiPartitionWorkingSetManager @ 0x14021F800 (MiPartitionWorkingSetManager.c)
 *     PfTSetTraceWorkerPriority @ 0x1402399C8 (PfTSetTraceWorkerPriority.c)
 *     ExRegisterBootDevice @ 0x140284090 (ExRegisterBootDevice.c)
 *     NtSetInformationThread @ 0x1404CD4F0 (NtSetInformationThread.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x1407B3EF8 (ViPendingQueuePassiveLevelCompletion.c)
 *     Phase1InitializationDiscard @ 0x140830A1C (Phase1InitializationDiscard.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x14006F610 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14006FCC0 (KiDeliverApc.c)
 *     KiDeferredReadyThread @ 0x140072C60 (KiDeferredReadyThread.c)
 *     KiSelectReadyThreadEx @ 0x14008B420 (KiSelectReadyThreadEx.c)
 *     KiUpdateThreadPriority @ 0x14008C870 (KiUpdateThreadPriority.c)
 *     KiAcquireThreadStateLock @ 0x14008C950 (KiAcquireThreadStateLock.c)
 *     KiStartThreadCycleAccumulation @ 0x14008D5D0 (KiStartThreadCycleAccumulation.c)
 *     KiEndThreadCycleAccumulation @ 0x14008DB10 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x14008E6F0 (KiQueueReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x140093244 (KiRequestSoftwareInterrupt.c)
 *     KiIsThreadRankNonZero @ 0x1400AB970 (KiIsThreadRankNonZero.c)
 *     KiSendSoftwareInterrupt @ 0x1400ABAA4 (KiSendSoftwareInterrupt.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1400D14D0 (KiPrepareReadyThreadForRescheduling.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x1400D15AC (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010F97C (KiAbQueueAutoBoostDpc.c)
 *     KiSwapContext @ 0x140187F20 (KiSwapContext.c)
 *     EtwTracePriority @ 0x14027B720 (EtwTracePriority.c)
 */

KPRIORITY __stdcall KeSetPriorityThread(PKTHREAD Thread, KPRIORITY Priority)
{
  int v4; // r14d
  __int64 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // r15
  struct _KTHREAD *CurrentThread; // rsi
  char PriorityDecrement; // al
  KPRIORITY v9; // r12d
  __int64 v10; // rdx
  volatile unsigned __int64 CycleTime; // rsi
  unsigned __int64 v12; // rcx
  char BasePriority; // al
  unsigned int PriorityFloorSummary; // eax
  char v15; // al
  __int64 v16; // r9
  char v17; // dl
  int v18; // r12d
  struct _KPRCB *v19; // rcx
  _KTHREAD *NextThread; // r13
  struct _KPRCB *v21; // rsi
  char v22; // cl
  _DWORD *v23; // rdx
  unsigned __int64 *v24; // rax
  _KTHREAD *v25; // rdi
  __int64 v26; // r8
  bool v27; // al
  $0F53511144B77D19DC23EC76721D3731 *Flink; // rdi
  _KTHREAD *v29; // rdi
  struct _KPRCB *v31; // rcx
  _KTHREAD *v32; // rsi
  char v33; // cl
  _DWORD *v34; // rdx
  _BYTE *v35; // rax
  __int64 Number; // rcx
  int v37; // ecx
  __int64 p_Blink; // rdx
  _SINGLE_LIST_ENTRY *v39; // rdx
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // rdx
  _SINGLE_LIST_ENTRY *p_PropagateBoostsEntry; // r8
  unsigned __int64 *v42; // rax
  _KTHREAD *v43; // rdi
  char v44; // cl
  char IsThreadRankNonZero; // al
  _DWORD *SchedulerAssist; // rdx
  _BYTE *v47; // rcx
  bool v48; // zf
  _SINGLE_LIST_ENTRY *v49; // r8
  struct _KPRCB *v50; // [rsp+38h] [rbp-48h] BYREF
  __int64 v51; // [rsp+40h] [rbp-40h]
  $0F53511144B77D19DC23EC76721D3731 *v52; // [rsp+48h] [rbp-38h] BYREF
  volatile signed __int64 *v53; // [rsp+50h] [rbp-30h] BYREF
  struct _KPRCB *v54; // [rsp+58h] [rbp-28h]
  int v55; // [rsp+A0h] [rbp+20h] BYREF
  KPRIORITY v56; // [rsp+B0h] [rbp+30h]
  int v57; // [rsp+B8h] [rbp+38h] BYREF

  if ( Thread->Process == (_KPROCESS *)&KiInitialProcess )
    return 1;
  v4 = 0;
  v52 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v51 = CurrentIrql;
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v55 = (unsigned __int8)v52;
  CurrentThread = CurrentPrcb->CurrentThread;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v55);
    while ( Thread->ThreadLock );
  }
  PriorityDecrement = Thread->PriorityDecrement;
  v9 = Thread->Priority;
  v56 = v9;
  if ( PriorityDecrement )
  {
    if ( (PriorityDecrement & 0xF) != 0 )
      Thread->ForegroundLossTime = MEMORY[0xFFFFF78000000320];
    Thread->PriorityDecrement = 0;
  }
  v10 = 1LL;
  if ( Priority == Thread->Priority )
    goto LABEL_69;
  if ( Thread != CurrentThread || CurrentPrcb->NestingLevel )
  {
    CycleTime = Thread->CycleTime;
  }
  else
  {
    _disable();
    CycleTime = KiEndThreadCycleAccumulation(CurrentPrcb, Thread, 0LL);
    KiStartThreadCycleAccumulation(CurrentPrcb, Thread, 0LL);
    _enable();
    v10 = 1LL;
  }
  v12 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)Thread->SchedulerApc.SpareByte1;
  if ( (*((_DWORD *)&Thread->0 + 1) & 0x20) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)&Thread->116 + 1, 5u);
  BasePriority = Thread->BasePriority;
  Thread->QuantumTarget = v12;
  if ( BasePriority && !Priority )
    Priority = 1;
  if ( BasePriority >= 16 && Priority < 16 )
    goto LABEL_69;
  PriorityFloorSummary = Thread->PriorityFloorSummary;
  if ( PriorityFloorSummary )
  {
    _BitScanReverse((unsigned int *)&v37, PriorityFloorSummary);
    if ( (char)Priority < v37 )
      LOBYTE(Priority) = v37;
  }
  if ( Thread->Priority == (char)Priority )
  {
LABEL_69:
    v26 = 0LL;
    goto LABEL_40;
  }
  v15 = KiAcquireThreadStateLock(Thread, &v50, &v53);
  v17 = Thread->Priority;
  v18 = v17;
  if ( v15 != 2 )
  {
    if ( v15 == 1 )
    {
      v21 = v50;
      KiRemoveThreadFromAnyReadyQueue(v50, v53, Thread, (unsigned int)v17);
      KiUpdateThreadPriority(0LL, Thread, (unsigned int)(char)Priority, 0LL);
      KiPrepareReadyThreadForRescheduling(Thread, (unsigned int)(char)Priority, &v52);
    }
    else if ( v15 == 3 )
    {
      v21 = v50;
      LOBYTE(v16) = 1;
      KiUpdateThreadPriority(v50, Thread, (unsigned int)(char)Priority, v16);
      if ( (char)Priority < v18 )
      {
        v42 = KiSelectReadyThreadEx(v21, Thread, 0LL);
        v43 = (_KTHREAD *)v42;
        if ( v42 )
        {
          if ( (*((_BYTE *)v42 + 2) & 4) != 0 )
          {
            IsThreadRankNonZero = KiIsThreadRankNonZero(v42, v21);
            v44 = 1;
            if ( !IsThreadRankNonZero )
              v44 = v43->Priority;
          }
          else
          {
            v44 = *((_BYTE *)v42 + 195);
          }
          *v21->PriorityState = v44;
          SchedulerAssist = v21->SchedulerAssist;
          if ( SchedulerAssist )
            *SchedulerAssist = v44;
          v47 = v21->SchedulerAssist;
          v26 = 0LL;
          v48 = v43 == v21->IdleThread;
          v21->NextThread = v43;
          if ( v47 )
            v47[8] = v48;
          if ( v43->WaitBlockFill6[68] == 1 )
            v43->ReadyTime = v43->ReadyTime - v43->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
          v43->WaitBlockFill6[68] = 3;
          _interlockedbittestandreset((volatile signed __int32 *)&Thread->116 + 1, 0xCu);
          v21 = v50;
          Thread->WaitBlockFill6[68] = 7;
          Thread->WaitListEntry.Flink = 0LL;
          v52 = &Thread->216;
          goto LABEL_30;
        }
      }
    }
    else
    {
      v31 = KeGetCurrentPrcb();
      if ( (char)Priority > v17 )
      {
        if ( Thread->AbWaitEntryCount )
        {
          p_PropagateBoostsEntry = &Thread->PropagateBoostsEntry;
          if ( Thread->PropagateBoostsEntry.Next == (struct _SINGLE_LIST_ENTRY *)1 )
          {
            p_AbPropagateBoostsList = &v31->AbPropagateBoostsList;
            if ( v31 != (struct _KPRCB *)-25720LL )
            {
              p_PropagateBoostsEntry->Next = p_AbPropagateBoostsList->Next;
              p_AbPropagateBoostsList->Next = p_PropagateBoostsEntry;
              _InterlockedIncrement16(&Thread->KeReferenceCount);
              KiAbQueueAutoBoostDpc(v31);
            }
          }
        }
      }
      v21 = v50;
      Thread->Priority = Priority;
    }
    goto LABEL_29;
  }
  v19 = KeGetCurrentPrcb();
  v54 = v50;
  NextThread = v50->NextThread;
  if ( (char)Priority > v17 )
  {
    if ( Thread->AbWaitEntryCount )
    {
      v49 = &Thread->PropagateBoostsEntry;
      if ( Thread->PropagateBoostsEntry.Next == (struct _SINGLE_LIST_ENTRY *)1 )
      {
        v39 = &v19->AbPropagateBoostsList;
        if ( v19 != (struct _KPRCB *)-25720LL )
        {
          v49->Next = v39->Next;
          v39->Next = v49;
          _InterlockedIncrement16(&Thread->KeReferenceCount);
          KiAbQueueAutoBoostDpc(v19);
        }
      }
    }
  }
  v21 = v50;
  Thread->Priority = Priority;
  if ( !NextThread )
  {
    if ( (Thread->Header.Size & 4) != 0 )
      v22 = (unsigned __int8)KiIsThreadRankNonZero(Thread, v21) ? 1 : Thread->Priority;
    else
      v22 = Priority;
    *v21->PriorityState = v22;
    v23 = v21->SchedulerAssist;
    if ( v23 )
      *v23 = v22;
  }
  if ( (char)Priority < v18 && !NextThread )
  {
    v21 = v50;
    if ( Thread->WaitBlockFill6[68] != 2 )
    {
      LOBYTE(CurrentIrql) = v51;
      if ( v50->ReadySummary >> (Priority + 1) )
        Thread->WaitRegister.Flags |= 0x10u;
      goto LABEL_29;
    }
    v24 = KiSelectReadyThreadEx(v50, Thread, 0LL);
    v25 = (_KTHREAD *)v24;
    if ( v24 )
    {
      if ( (*((_BYTE *)v24 + 2) & 4) != 0 )
      {
        if ( (unsigned __int8)KiIsThreadRankNonZero(v24, v21) )
          v33 = 1;
        else
          v33 = v25->Priority;
      }
      else
      {
        v33 = *((_BYTE *)v24 + 195);
      }
      *v21->PriorityState = v33;
      v34 = v21->SchedulerAssist;
      if ( v34 )
        *v34 = v33;
      v26 = 0LL;
      v54->NextThread = v25;
      v35 = v21->SchedulerAssist;
      if ( v35 )
        v35[8] = v25 == v21->IdleThread;
      if ( v25->WaitBlockFill6[68] == 1 )
        v25->ReadyTime = v25->ReadyTime - v25->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
      v21 = v50;
      LOBYTE(v4) = 1;
      LOBYTE(CurrentIrql) = v51;
      v25->WaitBlockFill6[68] = 3;
      goto LABEL_30;
    }
  }
  LOBYTE(CurrentIrql) = v51;
LABEL_29:
  v26 = 0LL;
LABEL_30:
  v27 = 0;
  v10 = *(_QWORD *)(KiProcessorBlock[Thread->IdealProcessor] + 24896);
  if ( v10 )
    v27 = (v10 & Thread->Affinity.Mask) == v10;
  if ( v27 != ((*((_DWORD *)&Thread->0 + 1) & 0x2000) != 0) )
  {
    _InterlockedXor((volatile signed __int32 *)&Thread->116 + 1, 0x2000u);
    v21 = v50;
  }
  if ( v21 )
  {
    _InterlockedAnd64((volatile signed __int64 *)&v21->PrcbLock, 0LL);
    v21 = v50;
  }
  if ( v53 )
  {
    _InterlockedAnd64(v53, 0LL);
    v21 = v50;
  }
  if ( (_BYTE)v4 )
  {
    Number = v21->Number;
    if ( KeGetPcr()->Prcb.Number != (_DWORD)Number )
    {
      LOBYTE(v10) = 2;
      KiSendSoftwareInterrupt(Number, v10, 0LL);
      v26 = 0LL;
    }
  }
  v4 = Thread->Priority;
  v9 = v56;
LABEL_40:
  Flink = v52;
  Thread->ThreadLock = 0LL;
  while ( Flink )
  {
    p_Blink = (__int64)&Flink[-14].WaitListEntry.Blink;
    Flink = ($0F53511144B77D19DC23EC76721D3731 *)Flink->WaitListEntry.Flink;
    KiDeferredReadyThread((__int64)CurrentPrcb, p_Blink, v26);
  }
  if ( (unsigned __int8)CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
    {
      LOBYTE(v10) = 2;
      KiRequestSoftwareInterrupt(CurrentPrcb, v10);
    }
    goto LABEL_45;
  }
  v29 = CurrentPrcb->CurrentThread;
  if ( CurrentPrcb->NextThread )
  {
    KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0LL);
    v57 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v57);
      while ( CurrentPrcb->PrcbLock );
    }
    v32 = CurrentPrcb->NextThread;
    CurrentPrcb->NextThread = 0LL;
    _disable();
    KiEndThreadCycleAccumulation(CurrentPrcb, v29, 0LL);
    _enable();
    CurrentPrcb->CurrentThread = v32;
    if ( v32->WaitBlockFill6[68] == 1 )
      v32->ReadyTime = v32->ReadyTime - v32->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
    v32->WaitBlockFill6[68] = 2;
    v29->WaitReason = 32;
    v29->WaitIrql = CurrentIrql;
    KiQueueReadyThread(CurrentPrcb, v29);
    if ( !(unsigned __int8)KiSwapContext(v29, v32, (unsigned __int8)CurrentIrql) )
      goto LABEL_44;
    goto LABEL_68;
  }
  if ( (v29->MiscFlags & 0x40) != 0 )
  {
LABEL_68:
    __writecr8(1uLL);
    v29->MiscFlags &= ~0x40u;
    KiDeliverApc(0, 0, 0LL);
  }
LABEL_44:
  __writecr8((unsigned __int8)CurrentIrql);
LABEL_45:
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
  {
    if ( v4 )
      EtwTracePriority((_DWORD)Thread, 1328, v9, v4, 0LL);
  }
  return v9;
}
