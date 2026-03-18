/*
 * XREFs of KeRemovePriQueue @ 0x1401264C0
 * Callers:
 *     ExpWorkerThread @ 0x1401261B0 (ExpWorkerThread.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140060670 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140069270 (KiQueryUnbiasedInterruptTime.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x14006B24C (KiSetBasePriorityAndClearDecrement.c)
 *     KiFastExitThreadWait @ 0x140088FE4 (KiFastExitThreadWait.c)
 *     KiAttemptFastRemovePriQueue @ 0x1400AF5B0 (KiAttemptFastRemovePriQueue.c)
 *     KiProcessThreadWaitList @ 0x1400B19F0 (KiProcessThreadWaitList.c)
 *     KiSwitchPriQueue @ 0x1400CEB28 (KiSwitchPriQueue.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetPriorityThread @ 0x1400ED840 (KiSetPriorityThread.c)
 *     KiCommitThreadWait @ 0x1400F64C0 (KiCommitThreadWait.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiBeginThreadWait @ 0x1401268C0 (KiBeginThreadWait.c)
 *     HvlNotifyLongSpinWait @ 0x14015AFE0 (HvlNotifyLongSpinWait.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     KiGetDueTimeWithThreadTimerDelay @ 0x14024A25C (KiGetDueTimeWithThreadTimerDelay.c)
 */

__int64 __fastcall KeRemovePriQueue(_DISPATCHER_HEADER *BugCheckParameter2, __int64 a2, unsigned __int8 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  $73ACCD497C6E10005445ED6B0DEFBC9F *v7; // r14
  unsigned __int8 CurrentIrql; // al
  __int64 v9; // r12
  int v10; // r15d
  __int64 result; // rax
  unsigned __int64 Queue; // r8
  unsigned int v13; // ebx
  unsigned __int64 DueTimeWithThreadTimerDelay; // rax
  struct _KPRCB *v15; // rbx
  _DWORD *SchedulerAssist; // rcx
  __int64 v17; // rcx
  struct _KPRCB *v18; // rcx
  _DWORD *v19; // rdx
  struct _LIST_ENTRY *v20; // rcx
  struct _LIST_ENTRY *p_WaitListHead; // rax
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v23; // rbp
  int v24; // ebx
  __int64 QueuePriority; // rax
  struct _KPRCB *v26; // rbx
  struct _KPRCB *v27; // rcx
  unsigned __int64 CycleTime; // rdx
  unsigned __int64 v29; // rcx
  unsigned __int8 v30; // r8
  int v31; // edx
  _DISPATCHER_HEADER *volatile v32; // rcx
  unsigned __int8 v33; // al
  __int64 UnbiasedInterruptTime; // rax
  _QWORD *v35; // r11
  int v36; // ecx
  unsigned __int64 v37; // r11
  int v38; // eax
  int v39; // eax
  struct _KPRCB *v40; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v43; // [rsp+20h] [rbp-48h] BYREF
  int v44; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int8 v45; // [rsp+78h] [rbp+10h]
  __int64 v46; // [rsp+88h] [rbp+20h] BYREF

  v45 = a2;
  CurrentThread = KeGetCurrentThread();
  v7 = &CurrentThread->320;
  if ( !_bittestandreset((signed __int32 *)&CurrentThread->116, 2u) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentThread->WaitIrql = CurrentIrql;
  }
  if ( a4 )
  {
    if ( *(int *)(a4 + 4) < 0 )
    {
      UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
      v10 = 2;
      a2 = v45;
      v9 = UnbiasedInterruptTime - (*v35 + CurrentThread->RelativeTimerBias);
    }
    else
    {
      v9 = *(_QWORD *)a4;
      v10 = 1;
    }
  }
  else
  {
    v9 = v46;
    v10 = 0;
  }
  while ( 1 )
  {
    result = (int)KiBeginThreadWait(CurrentThread, a2, 15LL, a3);
    if ( (_DWORD)result )
      return result;
    Queue = (unsigned __int64)CurrentThread->Queue;
    if ( BugCheckParameter2 != (_DISPATCHER_HEADER *)Queue )
      KiSwitchPriQueue((__int64)CurrentThread, (__int64)BugCheckParameter2, Queue);
    CurrentThread->WaitBlock[0].WaitType = 3;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].WaitKey = 128;
    v13 = 0;
    CurrentThread->WaitBlock[0].Object = BugCheckParameter2;
    if ( _interlockedbittestandset(&BugCheckParameter2->Lock, 7u) )
    {
      do
      {
        if ( (++v13 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v13);
      }
      while ( (BugCheckParameter2->LockNV & 0x80u) != 0 || _interlockedbittestandset(&BugCheckParameter2->Lock, 7u) );
    }
    if ( BugCheckParameter2->SignalState )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      LODWORD(v43) = 0;
      while ( 1 )
      {
        KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 1);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          break;
        KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
        do
          KeYieldProcessorEx(&v43);
        while ( CurrentThread->ThreadLock );
      }
      v23 = (__int64)KiAttemptFastRemovePriQueue(
                       (ULONG_PTR)BugCheckParameter2,
                       (int *)&v46,
                       (unsigned __int8)CurrentThread->QueuePriority);
      if ( v23 )
      {
        v24 = v46;
        QueuePriority = (unsigned __int8)CurrentThread->QueuePriority;
        if ( (_DWORD)QueuePriority != (_DWORD)v46 )
        {
          v31 = CurrentThread->QueuePriority & 0x100;
          if ( !v31 )
          {
            v32 = CurrentThread->Queue;
            _InterlockedDecrement((volatile signed __int32 *)&v32[22].WaitListHead + QueuePriority);
            _InterlockedIncrement((volatile signed __int32 *)&v32[22].WaitListHead + (int)v46);
            v24 = v46;
          }
          CurrentThread->QueuePriority = v31 | (unsigned __int8)v24;
        }
        CurrentThread->Saturation = 0;
        KiSetBasePriorityAndClearDecrement((__int64)CurrentThread, (char *)&v46, 0);
        if ( v24 != CurrentThread->Priority )
        {
          v27 = KeGetCurrentPrcb();
          if ( v27->NestingLevel )
          {
            CycleTime = CurrentThread->CycleTime;
          }
          else
          {
            _disable();
            CycleTime = KiUpdateTotalCyclesCurrentThread((__int64)v27, (__int64)CurrentThread, 0LL);
            _enable();
          }
          v29 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)CurrentThread->SchedulerApc.SpareByte1;
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x20) != 0 )
            _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 5u);
          v30 = v46;
          CurrentThread->QuantumTarget = v29;
          KiSetPriorityThread((__int64)CurrentThread, 0LL, v30);
        }
        KiReleaseThreadLockSafe((__int64)CurrentThread);
        goto LABEL_25;
      }
      KiReleaseThreadLockSafe((__int64)CurrentThread);
    }
    if ( (BugCheckParameter2->Signalling & 1) != 0 )
    {
      v40 = KeGetCurrentPrcb();
      v44 = 0;
      while ( 1 )
      {
        KiSetVpThreadSpinLockCount((__int64)v40, 1);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          break;
        KiSetVpThreadSpinLockCount((__int64)v40, 0);
        do
          KeYieldProcessorEx(&v44);
        while ( CurrentThread->ThreadLock );
      }
      if ( CurrentThread->Queue == BugCheckParameter2 )
      {
        CurrentThread->Queue = 0LL;
        Flink = CurrentThread->QueueListEntry.Flink;
        Blink = CurrentThread->QueueListEntry.Blink;
        if ( Flink->Blink != &CurrentThread->QueueListEntry || Blink->Flink != &CurrentThread->QueueListEntry )
          __fastfail(3u);
        Blink->Flink = Flink;
        Flink->Blink = Blink;
      }
      KiReleaseThreadLockSafe((__int64)CurrentThread);
      v23 = 128LL;
      goto LABEL_25;
    }
    DueTimeWithThreadTimerDelay = v9;
    if ( v10 == 2 )
    {
      KiQueryUnbiasedInterruptTime();
      DueTimeWithThreadTimerDelay = KiGetDueTimeWithThreadTimerDelay(
                                      CurrentThread,
                                      (unsigned int)(v36 + 2),
                                      v9,
                                      0LL,
                                      v43);
    }
    else
    {
      if ( !v10 )
        goto LABEL_13;
      if ( !v9 )
        goto LABEL_45;
      v37 = MEMORY[0xFFFFF78000000014];
    }
    if ( v37 > DueTimeWithThreadTimerDelay )
    {
LABEL_45:
      v23 = 258LL;
LABEL_25:
      _InterlockedAnd(&BugCheckParameter2->Lock, 0xFFFFFF7F);
      CurrentThread->WaitReason = 0;
      v26 = KeGetCurrentPrcb();
      if ( v26->DeferredReadyListHead.Next )
        KiProcessThreadWaitList((__int64)v26, 1u, 0);
      LOBYTE(Queue) = 1;
      KiFastExitThreadWait((__int64)v26, (__int64)CurrentThread, Queue);
      return v23;
    }
LABEL_13:
    v15 = KeGetCurrentPrcb();
    HIDWORD(v43) = 0;
    SchedulerAssist = v15->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( v15->NestingLevel <= 1u )
      {
        v38 = SchedulerAssist[5];
        SchedulerAssist[5] = v38 + 1;
        if ( v38 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
          KiPerformUnboostKick(v15);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      KiSetVpThreadSpinLockCount((__int64)v15, 0);
      do
        KeYieldProcessorEx((_DWORD *)&v43 + 1);
      while ( CurrentThread->ThreadLock );
      KiSetVpThreadSpinLockCount((__int64)v15, 1);
    }
    v17 = (unsigned __int8)CurrentThread->QueuePriority;
    CurrentThread->QueuePriority = (unsigned __int8)CurrentThread->QueuePriority | 0x100;
    _InterlockedDecrement((volatile signed __int32 *)&BugCheckParameter2[22].WaitListHead + v17);
    CurrentThread->ThreadLock = 0LL;
    v18 = KeGetCurrentPrcb();
    v19 = v18->SchedulerAssist;
    if ( v19 )
    {
      if ( v18->NestingLevel <= 1u )
      {
        v39 = v19[5] - 1;
        v19[5] = v39;
        if ( !v39 && !*((_BYTE *)v19 + 25) && !*((_BYTE *)v19 + 27) )
          KiPerformUnboostKick(v18);
      }
    }
    v20 = BugCheckParameter2->WaitListHead.Flink;
    p_WaitListHead = &BugCheckParameter2->WaitListHead;
    if ( v20->Blink != &BugCheckParameter2->WaitListHead )
      __fastfail(3u);
    v7->WaitBlock[0].WaitListEntry.Flink = v20;
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = p_WaitListHead;
    v20->Blink = (struct _LIST_ENTRY *)v7;
    p_WaitListHead->Flink = (struct _LIST_ENTRY *)v7;
    _InterlockedAnd(&BugCheckParameter2->Lock, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    result = KiCommitThreadWait((__int64)CurrentThread, (__int64 *)&CurrentThread->320, v10, v9);
    CurrentThread->WaitReason = 0;
    if ( result != 256 )
      return result;
    v33 = KeGetCurrentIrql();
    __writecr8(2uLL);
    a2 = v45;
    CurrentThread->WaitIrql = v33;
  }
}
