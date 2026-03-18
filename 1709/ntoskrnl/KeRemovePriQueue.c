/*
 * XREFs of KeRemovePriQueue @ 0x140061A80
 * Callers:
 *     ExpWorkerThread @ 0x1400617A0 (ExpWorkerThread.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140016D50 (KiQueryUnbiasedInterruptTime.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiCommitThreadWait @ 0x14006DBD0 (KiCommitThreadWait.c)
 *     KiAbProcessContextSwitch @ 0x14006F610 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14006FCC0 (KiDeliverApc.c)
 *     KiSetPriorityThread @ 0x14008C460 (KiSetPriorityThread.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14008D510 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiEndThreadCycleAccumulation @ 0x14008DB10 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x14008E6F0 (KiQueueReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x140093244 (KiRequestSoftwareInterrupt.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1400D3C50 (KiSetBasePriorityAndClearDecrement.c)
 *     KiAttemptFastRemovePriQueue @ 0x140107950 (KiAttemptFastRemovePriQueue.c)
 *     KiProcessThreadWaitList @ 0x1401122C0 (KiProcessThreadWaitList.c)
 *     KiFastExitThreadWait @ 0x14011B0BC (KiFastExitThreadWait.c)
 *     KiSwitchPriQueue @ 0x14012B684 (KiSwitchPriQueue.c)
 *     HvlNotifyLongSpinWait @ 0x140153060 (HvlNotifyLongSpinWait.c)
 *     KiSwapContext @ 0x140187F20 (KiSwapContext.c)
 *     KiGetDueTimeWithThreadTimerDelay @ 0x14020BC60 (KiGetDueTimeWithThreadTimerDelay.c)
 */

__int64 __fastcall KeRemovePriQueue(ULONG_PTR a1, char a2, char a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 WaitIrql; // r12
  unsigned int v7; // ebp
  $1ECCCAC64BBEFA1EE7C7E5BC0BEBC7F8 *v8; // r14
  __int64 v9; // rsi
  __int64 v10; // r8
  unsigned int v11; // esi
  unsigned __int64 v12; // rsi
  unsigned __int64 DueTimeWithThreadTimerDelay; // rax
  __int64 v14; // rcx
  struct _LIST_ENTRY *v15; // rax
  struct _LIST_ENTRY *v16; // rcx
  __int64 result; // rax
  unsigned int v18; // ebp
  __int64 QueuePriority; // rax
  struct _KPRCB *v20; // rdi
  struct _KPRCB *v21; // rcx
  __int64 CycleTime; // rdx
  unsigned __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // edx
  _DISPATCHER_HEADER *volatile Queue; // rcx
  unsigned __int64 v27; // rax
  __int64 UnbiasedInterruptTime; // rax
  _QWORD *v29; // r11
  __int64 v30; // rdx
  struct _KPRCB *CurrentPrcb; // rbp
  _KTHREAD *v32; // r15
  _KTHREAD *NextThread; // r13
  unsigned __int64 v34; // r11
  unsigned __int8 v35; // al
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  int v38; // [rsp+20h] [rbp-68h]
  int v39; // [rsp+24h] [rbp-64h] BYREF
  int v40; // [rsp+28h] [rbp-60h] BYREF
  int v41; // [rsp+2Ch] [rbp-5Ch] BYREF
  int v42; // [rsp+30h] [rbp-58h] BYREF
  int v43; // [rsp+34h] [rbp-54h] BYREF
  unsigned __int64 v44; // [rsp+38h] [rbp-50h]
  unsigned int v48; // [rsp+A8h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
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
      v27 = UnbiasedInterruptTime - (*v29 + CurrentThread->RelativeTimerBias);
      v38 = 2;
    }
    else
    {
      v27 = *(_QWORD *)a4;
      v38 = 1;
    }
    v44 = v27;
  }
  else
  {
    v38 = 0;
  }
  while ( 1 )
  {
    WaitIrql = CurrentThread->WaitIrql;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = a2;
      if ( a3 )
        CurrentThread->MiscFlags |= 0x10u;
      v39 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v39);
        while ( CurrentThread->ThreadLock );
      }
      if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || WaitIrql )
        break;
      CurrentThread->ThreadLock = 0LL;
      __writecr8(1uLL);
      KiDeliverApc(0LL, 0LL, 0LL);
      KeGetCurrentIrql();
      __writecr8(2uLL);
      CurrentThread->WaitIrql = 0;
    }
    v7 = v38;
    v8 = &CurrentThread->320;
    if ( !a3 )
    {
      if ( !CurrentThread->ApcState.UserApcPending || (v30 = (unsigned __int8)a2, !a2) )
      {
LABEL_13:
        CurrentThread->WaitBlockFill6[68] = 5;
        v9 = 0LL;
        CurrentThread->WaitReason = 15;
        CurrentThread->ThreadLock = 0LL;
        CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
        goto LABEL_14;
      }
      goto LABEL_74;
    }
    v30 = a2;
    if ( CurrentThread->Alerted[a2] )
    {
      CurrentThread->Alerted[a2] = 0;
      v9 = 257LL;
      goto LABEL_75;
    }
    if ( a2 && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
    {
      CurrentThread->ApcState.UserApcPending = 1;
LABEL_74:
      v9 = 192LL;
      goto LABEL_75;
    }
    if ( !CurrentThread->Alerted[0] )
      goto LABEL_13;
    CurrentThread->Alerted[0] = 0;
    v9 = 257LL;
LABEL_75:
    CurrentThread->ThreadLock = 0LL;
    CurrentPrcb = KeGetCurrentPrcb();
    if ( WaitIrql >= 2u )
    {
      if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
      {
        LOBYTE(v30) = 2;
        KiRequestSoftwareInterrupt(CurrentPrcb, v30);
      }
      goto LABEL_91;
    }
    v32 = CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
      v40 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v40);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation(CurrentPrcb, v32, 0LL);
      _enable();
      CurrentPrcb->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
        NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
      NextThread->WaitBlockFill6[68] = 2;
      v32->WaitReason = 32;
      v32->WaitIrql = WaitIrql;
      KiQueueReadyThread(CurrentPrcb, v32);
      if ( !(unsigned __int8)KiSwapContext(v32, NextThread, WaitIrql) )
        goto LABEL_83;
    }
    else if ( (v32->MiscFlags & 0x40) == 0 )
    {
      goto LABEL_83;
    }
    __writecr8(1uLL);
    v32->MiscFlags &= ~0x40u;
    KiDeliverApc(0LL, 0LL, 0LL);
LABEL_83:
    __writecr8(WaitIrql);
LABEL_91:
    v7 = v38;
LABEL_14:
    if ( v9 )
      return v9;
    if ( (_DISPATCHER_HEADER *volatile)a1 != CurrentThread->Queue )
      KiSwitchPriQueue(CurrentThread, a1);
    CurrentThread->WaitBlock[0].WaitType = 3;
    v10 = 128LL;
    CurrentThread->WaitBlockFill4[17] = 4;
    v11 = 0;
    CurrentThread->WaitBlock[0].WaitKey = 128;
    CurrentThread->WaitBlock[0].Object = (PVOID)a1;
    if ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
    {
      do
      {
        if ( (++v11 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v11);
      }
      while ( (*(_DWORD *)a1 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)a1, 7u) );
    }
    if ( *(_DWORD *)(a1 + 4) )
    {
      v41 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v41);
        while ( CurrentThread->ThreadLock );
      }
      v9 = KiAttemptFastRemovePriQueue(a1);
      if ( v9 )
      {
        v18 = v48;
        QueuePriority = (unsigned __int8)CurrentThread->QueuePriority;
        if ( (_DWORD)QueuePriority != v48 )
        {
          v25 = CurrentThread->QueuePriority & 0x100;
          if ( !v25 )
          {
            Queue = CurrentThread->Queue;
            _InterlockedDecrement((volatile signed __int32 *)&Queue[22].WaitListHead + QueuePriority);
            _InterlockedIncrement((volatile signed __int32 *)&Queue[22].WaitListHead + (int)v48);
            v18 = v48;
          }
          CurrentThread->QueuePriority = v25 | (unsigned __int8)v18;
        }
        CurrentThread->Saturation = 0;
        KiSetBasePriorityAndClearDecrement(CurrentThread, &v48, 0LL);
        if ( v18 != CurrentThread->Priority )
        {
          v21 = KeGetCurrentPrcb();
          if ( v21->NestingLevel )
          {
            CycleTime = CurrentThread->CycleTime;
          }
          else
          {
            _disable();
            CycleTime = KiUpdateTotalCyclesCurrentThread(v21, CurrentThread, 0LL);
            _enable();
          }
          v23 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)CurrentThread->SchedulerApc.SpareByte1;
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x20) != 0 )
            _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 5u);
          v24 = v48;
          CurrentThread->QuantumTarget = v23;
          KiSetPriorityThread(CurrentThread, 0LL, v24);
        }
        goto LABEL_32;
      }
      CurrentThread->ThreadLock = 0LL;
    }
    if ( (*(_BYTE *)(a1 + 1) & 1) != 0 )
    {
      v43 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v43);
        while ( CurrentThread->ThreadLock );
      }
      if ( CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)a1 )
      {
        CurrentThread->Queue = 0LL;
        Flink = CurrentThread->QueueListEntry.Flink;
        Blink = CurrentThread->QueueListEntry.Blink;
        if ( Flink->Blink != &CurrentThread->QueueListEntry || Blink->Flink != &CurrentThread->QueueListEntry )
          __fastfail(3u);
        Blink->Flink = Flink;
        Flink->Blink = Blink;
      }
      v9 = 128LL;
LABEL_32:
      CurrentThread->ThreadLock = 0LL;
      goto LABEL_33;
    }
    v12 = v44;
    DueTimeWithThreadTimerDelay = v44;
    if ( v7 == 2 )
    {
      KiQueryUnbiasedInterruptTime();
      DueTimeWithThreadTimerDelay = KiGetDueTimeWithThreadTimerDelay(CurrentThread, 2LL, v12, 0LL);
      goto LABEL_96;
    }
    if ( v7 )
      break;
LABEL_22:
    v42 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v42);
      while ( CurrentThread->ThreadLock );
    }
    v14 = (unsigned __int8)CurrentThread->QueuePriority;
    CurrentThread->QueuePriority = v14 | 0x100;
    v15 = (struct _LIST_ENTRY *)(a1 + 8);
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 4 * v14 + 536));
    CurrentThread->ThreadLock = 0LL;
    v16 = *(struct _LIST_ENTRY **)(a1 + 8);
    if ( v16->Blink != (struct _LIST_ENTRY *)(a1 + 8) )
      __fastfail(3u);
    v8->WaitBlock[0].WaitListEntry.Flink = v16;
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = v15;
    v16->Blink = (struct _LIST_ENTRY *)v8;
    v15->Flink = (struct _LIST_ENTRY *)v8;
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    result = KiCommitThreadWait(CurrentThread, &CurrentThread->320, v7, v12);
    CurrentThread->WaitReason = 0;
    if ( result != 256 )
      return result;
    v35 = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentThread->WaitIrql = v35;
  }
  if ( !v44 )
    goto LABEL_55;
  v34 = MEMORY[0xFFFFF78000000014];
LABEL_96:
  if ( v34 <= DueTimeWithThreadTimerDelay )
    goto LABEL_22;
LABEL_55:
  v9 = 258LL;
LABEL_33:
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  CurrentThread->WaitReason = 0;
  v20 = KeGetCurrentPrcb();
  if ( v20->DeferredReadyListHead.Next )
    KiProcessThreadWaitList(v20, 1LL, 0LL, 2LL);
  LOBYTE(v10) = 1;
  KiFastExitThreadWait(v20, CurrentThread, v10);
  return v9;
}
