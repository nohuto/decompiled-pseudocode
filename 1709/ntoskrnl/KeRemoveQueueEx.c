/*
 * XREFs of KeRemoveQueueEx @ 0x14006C920
 * Callers:
 *     IoRemoveIoCompletion @ 0x14006C5D0 (IoRemoveIoCompletion.c)
 *     ExpWorkerFactoryManagerThread @ 0x140145860 (ExpWorkerFactoryManagerThread.c)
 *     FsRtlWorkerThread @ 0x14015B8B0 (FsRtlWorkerThread.c)
 *     IopPassiveInterruptRealtimeWorker @ 0x14015B990 (IopPassiveInterruptRealtimeWorker.c)
 *     PopFxEmergencyWorker @ 0x14015C6F0 (PopFxEmergencyWorker.c)
 *     KeRemoveQueue @ 0x14015CDC0 (KeRemoveQueue.c)
 *     KiBlockAndActivateUmsThread @ 0x14020E248 (KiBlockAndActivateUmsThread.c)
 *     EtwpReceiveReplyDataBlock @ 0x1407449C0 (EtwpReceiveReplyDataBlock.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiCommitThreadWait @ 0x14006DBD0 (KiCommitThreadWait.c)
 *     KiAbProcessContextSwitch @ 0x14006F610 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14006FCC0 (KiDeliverApc.c)
 *     KiEndThreadCycleAccumulation @ 0x14008DB10 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x14008E6F0 (KiQueueReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x140093244 (KiRequestSoftwareInterrupt.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 *     KiSwitchQueue @ 0x1401076B0 (KiSwitchQueue.c)
 *     KiProcessThreadWaitList @ 0x1401122C0 (KiProcessThreadWaitList.c)
 *     KiFastExitThreadWait @ 0x14011B0BC (KiFastExitThreadWait.c)
 *     KiAttemptFastRemoveQueue @ 0x140122308 (KiAttemptFastRemoveQueue.c)
 *     KiTestForAlertPending @ 0x14012BCA0 (KiTestForAlertPending.c)
 *     HvlNotifyLongSpinWait @ 0x140153060 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x140187F20 (KiSwapContext.c)
 *     EtwTraceDequeueWork @ 0x14027B170 (EtwTraceDequeueWork.c)
 */

ULONG __stdcall KeRemoveQueueEx(
        PKQUEUE Queue,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout,
        PLIST_ENTRY *EntryArray,
        ULONG Count)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _LIST_ENTRY *Flink; // rdx
  ULONG v12; // r13d
  LONGLONG QuadPart; // rbp
  unsigned __int8 v14; // r15
  $1ECCCAC64BBEFA1EE7C7E5BC0BEBC7F8 *v15; // r12
  LONGLONG v16; // rbp
  __int64 v17; // rsi
  struct _KQUEUE *v18; // r8
  unsigned int v19; // esi
  PLIST_ENTRY *v20; // r14
  unsigned int v21; // edx
  unsigned __int64 v22; // rax
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v24; // rcx
  _LIST_ENTRY *v25; // rax
  LIST_ENTRY *p_EntryListHead; // r8
  __int64 v28; // rsi
  struct _LIST_ENTRY *v29; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int8 WaitIrql; // bp
  _KTHREAD *v33; // r14
  __int64 ThreadTimerDelay; // rdx
  unsigned __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rcx
  struct _KPRCB *v38; // rdi
  unsigned __int8 v39; // r15
  _KTHREAD *v40; // rsi
  unsigned __int8 v41; // al
  struct _KPRCB *v42; // rdi
  _KTHREAD *NextThread; // r15
  struct _KPRCB *v44; // r14
  _KTHREAD *v45; // r15
  unsigned __int8 v46; // si
  _KTHREAD *v47; // r13
  char v48; // al
  _KTHREAD *v49; // rbp
  struct _LIST_ENTRY *v50; // rdx
  struct _LIST_ENTRY *v51; // rcx
  PLIST_ENTRY *v52; // rdx
  int v53; // [rsp+30h] [rbp-68h] BYREF
  int v54; // [rsp+34h] [rbp-64h] BYREF
  int v55; // [rsp+38h] [rbp-60h] BYREF
  int v56; // [rsp+3Ch] [rbp-5Ch] BYREF
  int v57; // [rsp+40h] [rbp-58h] BYREF
  int v58; // [rsp+44h] [rbp-54h] BYREF
  LONGLONG v59; // [rsp+48h] [rbp-50h]
  unsigned __int8 v60; // [rsp+A0h] [rbp+8h]
  int v63; // [rsp+B8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  if ( !_bittestandreset((signed __int32 *)&CurrentThread->116, 2u) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentThread->WaitIrql = CurrentIrql;
  }
  Flink = (struct _LIST_ENTRY *)0xFFFFF78000000008LL;
  v12 = 1;
  if ( Timeout )
  {
    if ( Timeout->HighPart < 0 )
    {
      v63 = 2;
      QuadPart = MEMORY[0xFFFFF78000000008]
               - MEMORY[0xFFFFF780000003B0]
               - (Timeout->QuadPart
                + CurrentThread->RelativeTimerBias);
    }
    else
    {
      QuadPart = Timeout->QuadPart;
      v63 = 1;
    }
    v59 = QuadPart;
  }
  else
  {
    v63 = 0;
  }
  if ( (PKQUEUE)CurrentThread->Queue == Queue )
  {
    if ( Queue->Header.SignalState && Queue->CurrentCount <= Queue->MaximumCount )
    {
      v53 = 0;
      while ( _interlockedbittestandset(&Queue->Header.Lock, 7u) )
      {
        do
          KeYieldProcessorEx(&v53);
        while ( (Queue->Header.LockNV & 0x80u) != 0 );
      }
      if ( !Queue->Header.SignalState || Queue->CurrentCount > Queue->MaximumCount )
        goto LABEL_122;
      Flink = Queue->EntryListHead.Flink;
      p_EntryListHead = &Queue->EntryListHead;
      v20 = EntryArray;
      v28 = 0LL;
      Timeout = (PLARGE_INTEGER)Count;
      do
      {
        --Queue->Header.SignalState;
        v29 = Flink->Flink;
        if ( !Flink->Flink )
          KeBugCheckEx(0x96u, (ULONG_PTR)Flink, (ULONG_PTR)Queue, ExWorkerQueue, (ULONG_PTR)Flink[1].Flink);
        Blink = Flink->Blink;
        if ( v29->Blink != Flink || Blink->Flink != Flink )
          __fastfail(3u);
        Blink->Flink = v29;
        v29->Blink = Blink;
        Flink->Flink = 0LL;
        EntryArray[v28] = Flink;
        v28 = (unsigned int)(v28 + 1);
        Flink = p_EntryListHead->Flink;
      }
      while ( p_EntryListHead->Flink != p_EntryListHead && (unsigned int)v28 < Count );
      if ( !(_DWORD)v28 )
      {
LABEL_122:
        _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
        goto LABEL_10;
      }
      _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
      CurrentPrcb = KeGetCurrentPrcb();
      WaitIrql = CurrentThread->WaitIrql;
      if ( WaitIrql >= 2u )
      {
        if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
        {
          LOBYTE(Flink) = 2;
          KiRequestSoftwareInterrupt(CurrentPrcb, Flink);
        }
        goto LABEL_54;
      }
      v33 = CurrentPrcb->CurrentThread;
      if ( CurrentPrcb->NextThread )
      {
        KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
        v54 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&v54);
          while ( CurrentPrcb->PrcbLock );
        }
        NextThread = CurrentPrcb->NextThread;
        CurrentPrcb->NextThread = 0LL;
        _disable();
        KiEndThreadCycleAccumulation(CurrentPrcb, v33, 0LL);
        _enable();
        CurrentPrcb->CurrentThread = NextThread;
        if ( NextThread->WaitBlockFill6[68] == 1 )
          NextThread->ReadyTime = NextThread->ReadyTime
                                - NextThread->WaitBlock[2].SpareLong
                                + MEMORY[0xFFFFF78000000320];
        NextThread->WaitBlockFill6[68] = 2;
        v33->WaitReason = 32;
        v33->WaitIrql = WaitIrql;
        KiQueueReadyThread(CurrentPrcb, v33);
        if ( !(unsigned __int8)KiSwapContext(v33, NextThread, WaitIrql) )
          goto LABEL_53;
      }
      else if ( (v33->MiscFlags & 0x40) == 0 )
      {
LABEL_53:
        __writecr8(WaitIrql);
        v20 = EntryArray;
LABEL_54:
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          EtwTraceDequeueWork(CurrentThread, v20, (unsigned int)v28, Timeout);
        return v28;
      }
      __writecr8(1uLL);
      v33->MiscFlags &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
      goto LABEL_53;
    }
    if ( !Timeout || Timeout->QuadPart )
      goto LABEL_10;
    if ( (Queue->Header.Signalling & 1) != 0 )
    {
      v20 = EntryArray;
      *EntryArray = (PLIST_ENTRY)128;
    }
    else
    {
      if ( Alertable )
      {
        v55 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&v55);
          while ( CurrentThread->ThreadLock );
        }
      }
      v36 = KiTestForAlertPending(CurrentThread, Alertable, (unsigned __int8)WaitMode, 1LL);
      v37 = v36;
      if ( !v36 )
        v37 = 258LL;
      v20 = EntryArray;
      *EntryArray = (PLIST_ENTRY)v37;
      if ( Alertable )
        CurrentThread->ThreadLock = 0LL;
    }
    v38 = KeGetCurrentPrcb();
    v39 = CurrentThread->WaitIrql;
    if ( v39 >= 2u )
    {
      if ( v38->NextThread && !v38->DpcRoutineActive )
      {
        LOBYTE(Flink) = 2;
        KiRequestSoftwareInterrupt(v38, Flink);
      }
LABEL_37:
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        v52 = v20;
        goto LABEL_172;
      }
      return v12;
    }
    v40 = v38->CurrentThread;
    if ( v38->NextThread )
    {
      KiAbProcessContextSwitch(v38->CurrentThread, 0LL);
      v56 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v38->PrcbLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v56);
        while ( v38->PrcbLock );
      }
      v49 = v38->NextThread;
      v38->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation(v38, v40, 0LL);
      _enable();
      v38->CurrentThread = v49;
      if ( v49->WaitBlockFill6[68] == 1 )
        v49->ReadyTime = v49->ReadyTime - v49->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
      v49->WaitBlockFill6[68] = 2;
      v40->WaitReason = 32;
      v40->WaitIrql = v39;
      KiQueueReadyThread(v38, v40);
      if ( !(unsigned __int8)KiSwapContext(v40, v49, v39) )
        goto LABEL_80;
    }
    else if ( (v40->MiscFlags & 0x40) == 0 )
    {
LABEL_80:
      __writecr8(v39);
      goto LABEL_37;
    }
    __writecr8(1uLL);
    v40->MiscFlags &= ~0x40u;
    KiDeliverApc(0LL, 0LL, 0LL);
    goto LABEL_80;
  }
  while ( 1 )
  {
LABEL_10:
    v14 = CurrentThread->WaitIrql;
    v60 = v14;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = WaitMode;
      if ( Alertable )
        CurrentThread->MiscFlags |= 0x10u;
      v57 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v57);
        while ( CurrentThread->ThreadLock );
      }
      if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || v14 )
        break;
      CurrentThread->ThreadLock = 0LL;
      __writecr8(1uLL);
      KiDeliverApc(0LL, 0LL, 0LL);
      KeGetCurrentIrql();
      __writecr8(2uLL);
      CurrentThread->WaitIrql = 0;
    }
    v15 = &CurrentThread->320;
    v16 = v59;
    if ( !Alertable )
    {
      if ( !CurrentThread->ApcState.UserApcPending || !WaitMode )
      {
LABEL_21:
        CurrentThread->WaitBlockFill6[68] = 5;
        v17 = 0LL;
        CurrentThread->WaitReason = 15;
        CurrentThread->ThreadLock = 0LL;
        CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
        goto LABEL_22;
      }
      goto LABEL_107;
    }
    if ( CurrentThread->Alerted[WaitMode] )
    {
      CurrentThread->Alerted[WaitMode] = 0;
      v17 = 257LL;
      goto LABEL_108;
    }
    if ( WaitMode && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
    {
      CurrentThread->ApcState.UserApcPending = 1;
LABEL_107:
      v17 = 192LL;
      goto LABEL_108;
    }
    if ( !CurrentThread->Alerted[0] )
      goto LABEL_21;
    CurrentThread->Alerted[0] = 0;
    v17 = 257LL;
LABEL_108:
    CurrentThread->ThreadLock = 0LL;
    v44 = KeGetCurrentPrcb();
    if ( v14 < 2u )
    {
      v45 = v44->CurrentThread;
      if ( v44->NextThread )
      {
        KiAbProcessContextSwitch(v44->CurrentThread, 0LL);
        v58 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&v44->PrcbLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&v58);
          while ( v44->PrcbLock );
        }
        v47 = v44->NextThread;
        v44->NextThread = 0LL;
        _disable();
        KiEndThreadCycleAccumulation(v44, v45, 0LL);
        _enable();
        v44->CurrentThread = v47;
        if ( v47->WaitBlockFill6[68] == 1 )
          v47->ReadyTime = v47->ReadyTime - v47->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
        v47->WaitBlockFill6[68] = 2;
        v45->WaitIrql = v60;
        v45->WaitReason = 32;
        KiQueueReadyThread(v44, v45);
        v48 = KiSwapContext(v45, v47, v60);
        v12 = 1;
        if ( !v48 )
          goto LABEL_111;
      }
      else if ( (v45->MiscFlags & 0x40) == 0 )
      {
LABEL_111:
        __writecr8(v60);
        goto LABEL_22;
      }
      __writecr8(1uLL);
      v45->MiscFlags &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
      goto LABEL_111;
    }
    if ( v44->NextThread && !v44->DpcRoutineActive )
    {
      LOBYTE(Flink) = 2;
      KiRequestSoftwareInterrupt(v44, Flink);
    }
LABEL_22:
    if ( v17 )
      break;
    v18 = (struct _KQUEUE *)CurrentThread->Queue;
    if ( Queue != v18 )
      KiSwitchQueue(CurrentThread, Queue);
    CurrentThread->WaitBlock[0].WaitType = 3;
    v19 = 0;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].WaitKey = 128;
    CurrentThread->WaitBlock[0].Object = Queue;
    if ( _interlockedbittestandset(&Queue->Header.Lock, 7u) )
    {
      do
      {
        if ( (++v19 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v19);
      }
      while ( (Queue->Header.LockNV & 0x80u) != 0 || _interlockedbittestandset(&Queue->Header.Lock, 7u) );
    }
    v20 = EntryArray;
    if ( Queue->Header.SignalState )
    {
      if ( Queue->CurrentCount <= Queue->MaximumCount )
      {
        LODWORD(v28) = KiAttemptFastRemoveQueue((ULONG_PTR)Queue);
        if ( (_DWORD)v28 )
        {
          _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
LABEL_95:
          CurrentThread->WaitReason = 0;
          v42 = KeGetCurrentPrcb();
          if ( v42->DeferredReadyListHead.Next )
            KiProcessThreadWaitList(v42, 1LL, 0LL, 2LL);
          LOBYTE(v18) = 1;
          KiFastExitThreadWait(v42, CurrentThread, v18);
          goto LABEL_54;
        }
      }
    }
    if ( (Queue->Header.Signalling & 1) != 0 )
    {
      if ( CurrentThread->Queue )
      {
        v50 = CurrentThread->QueueListEntry.Flink;
        v51 = CurrentThread->QueueListEntry.Blink;
        if ( v50->Blink != &CurrentThread->QueueListEntry || v51->Flink != &CurrentThread->QueueListEntry )
          __fastfail(3u);
        v51->Flink = v50;
        v50->Blink = v51;
        CurrentThread->Queue = 0LL;
      }
      _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
      *EntryArray = (PLIST_ENTRY)128;
      goto LABEL_121;
    }
    v21 = v63;
    v22 = v16;
    if ( v63 == 2 )
    {
      ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
      v35 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
      v22 = v16;
      if ( CurrentThread->WaitMode
        && !CurrentThread->WaitBlock[3].SpareLong
        && !CurrentThread->WaitIrql
        && !CurrentThread->ApcState.InProgressFlags
        && (_DWORD)ThreadTimerDelay )
      {
        v22 = ThreadTimerDelay + v16;
      }
      v21 = 2;
    }
    else
    {
      if ( !v63 )
        goto LABEL_30;
      if ( !v16 )
      {
LABEL_120:
        _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
        *EntryArray = (PLIST_ENTRY)258;
LABEL_121:
        LODWORD(v28) = 1;
        goto LABEL_95;
      }
      v35 = MEMORY[0xFFFFF78000000014];
    }
    if ( v35 > v22 )
      goto LABEL_120;
LABEL_30:
    _InterlockedDecrement((volatile signed __int32 *)&Queue->CurrentCount);
    p_WaitListHead = &Queue->Header.WaitListHead;
    v24 = Queue->Header.WaitListHead.Flink;
    if ( v24->Blink != &Queue->Header.WaitListHead )
      __fastfail(3u);
    v15->WaitBlock[0].WaitListEntry.Flink = v24;
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = p_WaitListHead;
    v24->Blink = (struct _LIST_ENTRY *)v15;
    p_WaitListHead->Flink = (struct _LIST_ENTRY *)v15;
    _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    v25 = (_LIST_ENTRY *)KiCommitThreadWait(CurrentThread, &CurrentThread->320, v21, v16);
    CurrentThread->WaitReason = 0;
    if ( v25 != (_LIST_ENTRY *)256 )
    {
      *EntryArray = v25;
      if ( Count > 1
        && (unsigned __int64)&v25[-17].Blink + 7 > 1
        && v25 != (_LIST_ENTRY *)192
        && v25 != (_LIST_ENTRY *)128
        && Queue->Header.SignalState )
      {
        v46 = KeGetCurrentIrql();
        __writecr8(2uLL);
        KiAcquireKobjectLockSafe(Queue);
        if ( Queue->Header.SignalState )
          v12 = KiAttemptFastRemoveQueue((ULONG_PTR)Queue) + 1;
        _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
        __writecr8(v46);
      }
      goto LABEL_37;
    }
    v41 = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentThread->WaitIrql = v41;
  }
  *EntryArray = (PLIST_ENTRY)v17;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) == 0 )
    return v12;
  v52 = EntryArray;
LABEL_172:
  EtwTraceDequeueWork(CurrentThread, v52, v12, Timeout);
  return v12;
}
