/*
 * XREFs of KeRemovePriQueue @ 0x1400FC3E0
 * Callers:
 *     ExpWorkerThread @ 0x1400FC140 (ExpWorkerThread.c)
 * Callees:
 *     KiFastExitThreadWait @ 0x140017F24 (KiFastExitThreadWait.c)
 *     KiProcessThreadWaitList @ 0x14001C060 (KiProcessThreadWaitList.c)
 *     KiSwitchPriQueue @ 0x1400363E8 (KiSwitchPriQueue.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140041AE4 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiSetPriorityThread @ 0x140042AF0 (KiSetPriorityThread.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x140064EC4 (KiSetBasePriorityAndClearDecrement.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008AB1C (KiQueryUnbiasedInterruptTime.c)
 *     KiCommitThreadWait @ 0x1400EAB20 (KiCommitThreadWait.c)
 *     KiBeginThreadWait @ 0x1400FC780 (KiBeginThreadWait.c)
 *     KiAttemptFastRemovePriQueue @ 0x140115F60 (KiAttemptFastRemovePriQueue.c)
 *     HvlNotifyLongSpinWait @ 0x1401E5050 (HvlNotifyLongSpinWait.c)
 *     KiGetDueTimeWithThreadTimerDelay @ 0x140205AE8 (KiGetDueTimeWithThreadTimerDelay.c)
 */

__int64 __fastcall KeRemovePriQueue(_DWORD *BugCheckParameter2, __int64 a2, unsigned __int8 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  $6E77A2FF3C783A4EBEFA8B287A08A468 *v7; // r14
  unsigned __int8 CurrentIrql; // al
  __int64 v9; // r12
  int v10; // r15d
  __int64 result; // rax
  __int64 Queue; // r8
  unsigned int v13; // ebx
  unsigned __int64 DueTimeWithThreadTimerDelay; // rax
  __int64 v15; // rcx
  struct _LIST_ENTRY *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rbp
  int v19; // ebx
  __int64 QueuePriority; // rax
  struct _KPRCB *v21; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 CycleTime; // rdx
  unsigned __int64 v24; // rcx
  unsigned __int8 v25; // r8
  int v26; // edx
  _DISPATCHER_HEADER *volatile v27; // rcx
  unsigned __int8 v28; // al
  __int64 UnbiasedInterruptTime; // rax
  _QWORD *v30; // r11
  int v31; // ecx
  unsigned __int64 v32; // r11
  _QWORD v33[2]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int8 v34; // [rsp+78h] [rbp+10h]
  __int64 v35; // [rsp+88h] [rbp+20h] BYREF

  v34 = a2;
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
      a2 = v34;
      v9 = UnbiasedInterruptTime - (*v30 + CurrentThread->RelativeTimerBias);
    }
    else
    {
      v9 = *(_QWORD *)a4;
      v10 = 1;
    }
  }
  else
  {
    v9 = v35;
    v10 = 0;
  }
  while ( 1 )
  {
    result = (int)KiBeginThreadWait(CurrentThread, a2, 15LL, a3);
    if ( (_DWORD)result )
      return result;
    Queue = (__int64)CurrentThread->Queue;
    if ( BugCheckParameter2 != (_DWORD *)Queue )
      KiSwitchPriQueue((__int64)CurrentThread, (__int64)BugCheckParameter2, Queue);
    CurrentThread->WaitBlock[0].WaitType = 3;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].WaitKey = 128;
    v13 = 0;
    CurrentThread->WaitBlock[0].Object = BugCheckParameter2;
    if ( _interlockedbittestandset(BugCheckParameter2, 7u) )
    {
      do
      {
        if ( (++v13 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v13);
      }
      while ( (*BugCheckParameter2 & 0x80u) != 0 || _interlockedbittestandset(BugCheckParameter2, 7u) );
    }
    if ( BugCheckParameter2[1] )
    {
      LODWORD(v33[0]) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(v33);
        while ( CurrentThread->ThreadLock );
      }
      v18 = KiAttemptFastRemovePriQueue((ULONG_PTR)BugCheckParameter2);
      if ( v18 )
      {
        v19 = v35;
        QueuePriority = (unsigned __int8)CurrentThread->QueuePriority;
        if ( (_DWORD)QueuePriority != (_DWORD)v35 )
        {
          v26 = CurrentThread->QueuePriority & 0x100;
          if ( !v26 )
          {
            v27 = CurrentThread->Queue;
            _InterlockedDecrement((volatile signed __int32 *)&v27[22].WaitListHead + QueuePriority);
            _InterlockedIncrement((volatile signed __int32 *)&v27[22].WaitListHead + (int)v35);
            v19 = v35;
          }
          CurrentThread->QueuePriority = v26 | (unsigned __int8)v19;
        }
        CurrentThread->Saturation = 0;
        KiSetBasePriorityAndClearDecrement((__int64)CurrentThread, &v35, 0);
        if ( v19 != CurrentThread->Priority )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          if ( CurrentPrcb->NestingLevel )
          {
            CycleTime = CurrentThread->CycleTime;
          }
          else
          {
            _disable();
            CycleTime = KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, (__int64)CurrentThread, 0LL);
            _enable();
          }
          v24 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)CurrentThread->SchedulerApc.SpareByte1;
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10) != 0 )
            _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 4u);
          v25 = v35;
          CurrentThread->QuantumTarget = v24;
          KiSetPriorityThread((__int64)CurrentThread, 0LL, v25);
        }
        CurrentThread->ThreadLock = 0LL;
        goto LABEL_23;
      }
      CurrentThread->ThreadLock = 0LL;
    }
    DueTimeWithThreadTimerDelay = v9;
    if ( v10 == 2 )
    {
      KiQueryUnbiasedInterruptTime();
      DueTimeWithThreadTimerDelay = KiGetDueTimeWithThreadTimerDelay(
                                      CurrentThread,
                                      (unsigned int)(v31 + 2),
                                      v9,
                                      0LL,
                                      v33[0]);
    }
    else
    {
      if ( !v10 )
        goto LABEL_12;
      if ( !v9 )
        goto LABEL_43;
      v32 = MEMORY[0xFFFFF78000000014];
    }
    if ( v32 > DueTimeWithThreadTimerDelay )
    {
LABEL_43:
      v18 = 258LL;
LABEL_23:
      _InterlockedAnd(BugCheckParameter2, 0xFFFFFF7F);
      CurrentThread->WaitReason = 0;
      v21 = KeGetCurrentPrcb();
      if ( v21->DeferredReadyListHead.Next )
        KiProcessThreadWaitList((__int64)v21, 1u, 0, 2u);
      LOBYTE(Queue) = 1;
      KiFastExitThreadWait((__int64)v21, (__int64)CurrentThread, Queue);
      return v18;
    }
LABEL_12:
    HIDWORD(v33[0]) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
        KeYieldProcessorEx((_DWORD *)v33 + 1);
      while ( CurrentThread->ThreadLock );
    }
    v15 = (unsigned __int8)CurrentThread->QueuePriority;
    CurrentThread->QueuePriority = (unsigned __int8)CurrentThread->QueuePriority | 0x100;
    v16 = (struct _LIST_ENTRY *)(BugCheckParameter2 + 2);
    _InterlockedDecrement(&BugCheckParameter2[v15 + 134]);
    CurrentThread->ThreadLock = 0LL;
    v17 = *((_QWORD *)BugCheckParameter2 + 1);
    if ( *(_DWORD **)(v17 + 8) != BugCheckParameter2 + 2 )
      __fastfail(3u);
    v7->WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)v17;
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = v16;
    *(_QWORD *)(v17 + 8) = v7;
    v16->Flink = (struct _LIST_ENTRY *)v7;
    _InterlockedAnd(BugCheckParameter2, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    result = KiCommitThreadWait((__int64)CurrentThread, (__int64 *)&CurrentThread->320, v10, v9);
    CurrentThread->WaitReason = 0;
    if ( result != 256 )
      return result;
    v28 = KeGetCurrentIrql();
    __writecr8(2uLL);
    a2 = v34;
    CurrentThread->WaitIrql = v28;
  }
}
