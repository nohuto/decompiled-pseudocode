/*
 * XREFs of KeRemoveQueueEx @ 0x1400E9870
 * Callers:
 *     IoRemoveIoCompletion @ 0x1400E9520 (IoRemoveIoCompletion.c)
 *     KeRemoveQueue @ 0x140147EF0 (KeRemoveQueue.c)
 *     ExpWorkerFactoryManagerThread @ 0x14015D930 (ExpWorkerFactoryManagerThread.c)
 *     FsRtlWorkerThread @ 0x140167650 (FsRtlWorkerThread.c)
 *     IopPassiveInterruptRealtimeWorker @ 0x1401676D0 (IopPassiveInterruptRealtimeWorker.c)
 *     PopFxEmergencyWorker @ 0x140167D30 (PopFxEmergencyWorker.c)
 *     KiBlockAndActivateUmsThread @ 0x1402078A0 (KiBlockAndActivateUmsThread.c)
 *     EtwpReceiveReplyDataBlock @ 0x14045BE80 (EtwpReceiveReplyDataBlock.c)
 * Callees:
 *     KiFastExitThreadWait @ 0x140017F24 (KiFastExitThreadWait.c)
 *     KiProcessThreadWaitList @ 0x14001C060 (KiProcessThreadWaitList.c)
 *     KiRequestSoftwareInterrupt @ 0x1400233A0 (KiRequestSoftwareInterrupt.c)
 *     KiAttemptFastRemoveQueue @ 0x140029570 (KiAttemptFastRemoveQueue.c)
 *     KiSwitchQueue @ 0x140029E3C (KiSwitchQueue.c)
 *     KiTestForAlertPending @ 0x140036818 (KiTestForAlertPending.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiEndThreadCycleAccumulation @ 0x140043D60 (KiEndThreadCycleAccumulation.c)
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     KiCommitThreadWait @ 0x1400EAB20 (KiCommitThreadWait.c)
 *     KiAbProcessContextSwitch @ 0x1400EC3E0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400ECA80 (KiDeliverApc.c)
 *     KiQueueReadyThread @ 0x1401131D0 (KiQueueReadyThread.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x140188470 (KiSwapContext.c)
 *     HvlNotifyLongSpinWait @ 0x1401E5050 (HvlNotifyLongSpinWait.c)
 *     EtwTraceDequeueWork @ 0x1402534AC (EtwTraceDequeueWork.c)
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
  ULONG v11; // r15d
  unsigned __int8 WaitIrql; // r13
  $6E77A2FF3C783A4EBEFA8B287A08A468 *v13; // r14
  int v14; // esi
  struct _KQUEUE *v15; // r8
  unsigned int v16; // esi
  LONGLONG v17; // r8
  unsigned int v18; // edx
  unsigned __int64 v19; // rax
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v21; // rcx
  _LIST_ENTRY *v22; // rax
  struct _LIST_ENTRY *v24; // rdx
  LIST_ENTRY *p_EntryListHead; // r8
  __int64 v26; // rsi
  struct _LIST_ENTRY *v27; // rax
  struct _LIST_ENTRY *v28; // rcx
  struct _KPRCB *v29; // rdi
  unsigned __int8 v30; // bp
  __int64 v31; // r14
  __int64 ThreadTimerDelay; // rdx
  unsigned __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  PLIST_ENTRY *v36; // r14
  struct _KPRCB *v37; // rdi
  unsigned __int8 v38; // r12
  __int64 v39; // rsi
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // rdi
  __int64 v42; // r9
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v44; // r13
  _KTHREAD *v45; // r13
  unsigned __int8 v46; // si
  _KTHREAD *NextThread; // r12
  _KTHREAD *v48; // rbp
  PLIST_ENTRY *v49; // rdx
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  int v52; // [rsp+30h] [rbp-78h]
  int v53; // [rsp+34h] [rbp-74h] BYREF
  int v54; // [rsp+38h] [rbp-70h] BYREF
  int v55; // [rsp+3Ch] [rbp-6Ch] BYREF
  int v56; // [rsp+40h] [rbp-68h] BYREF
  int v57; // [rsp+44h] [rbp-64h] BYREF
  int v58; // [rsp+48h] [rbp-60h] BYREF
  LONGLONG QuadPart; // [rsp+50h] [rbp-58h]
  unsigned __int8 v63; // [rsp+C8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  if ( !_bittestandreset((signed __int32 *)&CurrentThread->116, 2u) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentThread->WaitIrql = CurrentIrql;
  }
  v11 = 1;
  if ( Timeout )
  {
    if ( Timeout->HighPart < 0 )
    {
      v52 = 2;
      QuadPart = MEMORY[0xFFFFF78000000008]
               - MEMORY[0xFFFFF780000003B0]
               - (Timeout->QuadPart
                + CurrentThread->RelativeTimerBias);
    }
    else
    {
      QuadPart = Timeout->QuadPart;
      v52 = 1;
    }
  }
  else
  {
    v52 = 0;
  }
  if ( (PKQUEUE)CurrentThread->Queue != Queue )
  {
LABEL_8:
    while ( 1 )
    {
      WaitIrql = CurrentThread->WaitIrql;
      v63 = WaitIrql;
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
        if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || WaitIrql )
          break;
        CurrentThread->ThreadLock = 0LL;
        __writecr8(1uLL);
        KiDeliverApc(0LL, 0LL, 0LL);
        KeGetCurrentIrql();
        __writecr8(2uLL);
        CurrentThread->WaitIrql = 0;
      }
      v13 = &CurrentThread->320;
      if ( !Alertable )
        break;
      if ( CurrentThread->Alerted[WaitMode] )
      {
        CurrentThread->Alerted[WaitMode] = 0;
        v14 = 257;
      }
      else
      {
        if ( WaitMode
          && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
        {
          CurrentThread->ApcState.UserApcPending = 1;
LABEL_103:
          v14 = 192;
          goto LABEL_104;
        }
        if ( !CurrentThread->Alerted[0] )
          goto LABEL_19;
        CurrentThread->Alerted[0] = 0;
        v14 = 257;
      }
LABEL_104:
      CurrentThread->ThreadLock = 0LL;
      CurrentPrcb = KeGetCurrentPrcb();
      if ( WaitIrql >= 2u )
      {
        if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
          KiRequestSoftwareInterrupt(CurrentPrcb, 2);
      }
      else
      {
        v44 = (__int64)CurrentPrcb->CurrentThread;
        if ( CurrentPrcb->NextThread )
        {
          KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
          v58 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          {
            do
              KeYieldProcessorEx(&v58);
            while ( CurrentPrcb->PrcbLock );
          }
          NextThread = CurrentPrcb->NextThread;
          CurrentPrcb->NextThread = 0LL;
          _disable();
          KiEndThreadCycleAccumulation((__int64)CurrentPrcb, v44, 0LL);
          _enable();
          CurrentPrcb->CurrentThread = NextThread;
          if ( NextThread->WaitBlockFill6[68] == 1 )
            NextThread->ReadyTime = NextThread->ReadyTime
                                  - NextThread->WaitBlock[2].SpareLong
                                  + MEMORY[0xFFFFF78000000320];
          NextThread->WaitBlockFill6[68] = 2;
          *(_BYTE *)(v44 + 390) = v63;
          *(_BYTE *)(v44 + 643) = 32;
          KiQueueReadyThread(CurrentPrcb, v44);
          if ( (unsigned __int8)KiSwapContext(v44, NextThread, v63) )
          {
            __writecr8(1uLL);
            *(_DWORD *)(v44 + 116) &= ~0x40u;
            KiDeliverApc(0LL, 0LL, 0LL);
          }
LABEL_107:
          __writecr8(v63);
          goto LABEL_20;
        }
        if ( (*(_DWORD *)(v44 + 116) & 0x40) == 0 )
          goto LABEL_107;
        __writecr8(1uLL);
        *(_DWORD *)(v44 + 116) &= ~0x40u;
        KiDeliverApc(0LL, 0LL, 0LL);
        __writecr8(v63);
      }
LABEL_20:
      if ( v14 )
      {
        *EntryArray = (PLIST_ENTRY)v14;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) == 0 )
          return v11;
        v49 = EntryArray;
        goto LABEL_175;
      }
      v15 = (struct _KQUEUE *)CurrentThread->Queue;
      if ( Queue != v15 )
        KiSwitchQueue((__int64)CurrentThread, (__int64)Queue, (__int64)v15);
      CurrentThread->WaitBlock[0].WaitType = 3;
      v16 = 0;
      CurrentThread->WaitBlockFill4[17] = 4;
      CurrentThread->WaitBlock[0].WaitKey = 128;
      CurrentThread->WaitBlock[0].Object = Queue;
      if ( _interlockedbittestandset(&Queue->Header.Lock, 7u) )
      {
        do
        {
          if ( (++v16 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v16);
        }
        while ( (Queue->Header.LockNV & 0x80u) != 0 || _interlockedbittestandset(&Queue->Header.Lock, 7u) );
      }
      if ( Queue->Header.SignalState )
      {
        if ( Queue->CurrentCount <= Queue->MaximumCount )
        {
          LODWORD(v26) = KiAttemptFastRemoveQueue((ULONG_PTR)Queue, (__int64)EntryArray, Count);
          if ( (_DWORD)v26 )
          {
            _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
            goto LABEL_96;
          }
        }
      }
      if ( (Queue->Header.Signalling & 1) != 0 )
      {
        if ( CurrentThread->Queue )
        {
          Flink = CurrentThread->QueueListEntry.Flink;
          Blink = CurrentThread->QueueListEntry.Blink;
          if ( Flink->Blink != &CurrentThread->QueueListEntry || Blink->Flink != &CurrentThread->QueueListEntry )
            __fastfail(3u);
          Blink->Flink = Flink;
          Flink->Blink = Blink;
          CurrentThread->Queue = 0LL;
        }
        _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
        *EntryArray = (PLIST_ENTRY)128;
        goto LABEL_138;
      }
      v17 = QuadPart;
      v18 = v52;
      v19 = QuadPart;
      if ( v52 == 2 )
      {
        ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
        v33 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
        v19 = QuadPart;
        if ( CurrentThread->WaitMode
          && !CurrentThread->WaitBlock[3].SpareLong
          && !CurrentThread->WaitIrql
          && !CurrentThread->ApcState.InProgressFlags
          && (_DWORD)ThreadTimerDelay )
        {
          v19 = QuadPart + ThreadTimerDelay;
        }
        v18 = 2;
      }
      else
      {
        if ( !v52 )
          goto LABEL_28;
        if ( !QuadPart )
        {
LABEL_137:
          _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
          *EntryArray = (PLIST_ENTRY)258;
LABEL_138:
          LODWORD(v26) = 1;
LABEL_96:
          CurrentThread->WaitReason = 0;
          v41 = KeGetCurrentPrcb();
          if ( v41->DeferredReadyListHead.Next )
            KiProcessThreadWaitList((__int64)v41, 1u, 0, 2u);
          KiFastExitThreadWait((__int64)v41, (__int64)CurrentThread, 1LL);
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            EtwTraceDequeueWork(CurrentThread, EntryArray, (unsigned int)v26, v42);
            return v26;
          }
          return v26;
        }
        v33 = MEMORY[0xFFFFF78000000014];
      }
      if ( v33 > v19 )
        goto LABEL_137;
LABEL_28:
      _InterlockedDecrement((volatile signed __int32 *)&Queue->CurrentCount);
      p_WaitListHead = &Queue->Header.WaitListHead;
      v21 = Queue->Header.WaitListHead.Flink;
      if ( v21->Blink != &Queue->Header.WaitListHead )
        __fastfail(3u);
      v13->WaitBlock[0].WaitListEntry.Flink = v21;
      CurrentThread->WaitBlock[0].WaitListEntry.Blink = p_WaitListHead;
      v21->Blink = (struct _LIST_ENTRY *)v13;
      p_WaitListHead->Flink = (struct _LIST_ENTRY *)v13;
      _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
      CurrentThread->WaitBlockCount = 1;
      v22 = (_LIST_ENTRY *)KiCommitThreadWait(CurrentThread, &CurrentThread->320, v18, v17);
      CurrentThread->WaitReason = 0;
      if ( v22 != (_LIST_ENTRY *)256 )
      {
        *EntryArray = v22;
        if ( Count > 1
          && (unsigned __int64)&v22[-17].Blink + 7 > 1
          && v22 != (_LIST_ENTRY *)128
          && v22 != (_LIST_ENTRY *)192
          && Queue->Header.SignalState )
        {
          v46 = KeGetCurrentIrql();
          __writecr8(2uLL);
          KiAcquireKobjectLockSafe(&Queue->Header.Lock);
          if ( Queue->Header.SignalState )
            v11 = KiAttemptFastRemoveQueue((ULONG_PTR)Queue, (__int64)(EntryArray + 1), Count - 1) + 1;
          _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
          __writecr8(v46);
        }
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          v49 = EntryArray;
          goto LABEL_175;
        }
        return v11;
      }
      v40 = KeGetCurrentIrql();
      __writecr8(2uLL);
      CurrentThread->WaitIrql = v40;
    }
    if ( !CurrentThread->ApcState.UserApcPending || !WaitMode )
    {
LABEL_19:
      CurrentThread->WaitBlockFill6[68] = 5;
      v14 = 0;
      CurrentThread->WaitReason = 15;
      CurrentThread->ThreadLock = 0LL;
      CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
      goto LABEL_20;
    }
    goto LABEL_103;
  }
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
      goto LABEL_128;
    v24 = Queue->EntryListHead.Flink;
    p_EntryListHead = &Queue->EntryListHead;
    v26 = 0LL;
    Timeout = (PLARGE_INTEGER)Count;
    do
    {
      --Queue->Header.SignalState;
      v27 = v24->Flink;
      if ( !v24->Flink )
        KeBugCheckEx(0x96u, (ULONG_PTR)v24, (ULONG_PTR)Queue, ExWorkerQueue, (ULONG_PTR)v24[1].Flink);
      v28 = v24->Blink;
      if ( v27->Blink != v24 || v28->Flink != v24 )
        __fastfail(3u);
      v28->Flink = v27;
      v27->Blink = v28;
      v24->Flink = 0LL;
      EntryArray[v26] = v24;
      v26 = (unsigned int)(v26 + 1);
      v24 = p_EntryListHead->Flink;
    }
    while ( p_EntryListHead->Flink != p_EntryListHead && (unsigned int)v26 < Count );
    if ( !(_DWORD)v26 )
    {
LABEL_128:
      _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
      goto LABEL_8;
    }
    _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
    v29 = KeGetCurrentPrcb();
    v30 = CurrentThread->WaitIrql;
    if ( v30 >= 2u )
    {
      if ( v29->NextThread && !v29->DpcRoutineActive )
        KiRequestSoftwareInterrupt(v29, 2);
LABEL_51:
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        EtwTraceDequeueWork(CurrentThread, EntryArray, (unsigned int)v26, Timeout);
      return v26;
    }
    v31 = (__int64)v29->CurrentThread;
    if ( v29->NextThread )
    {
      KiAbProcessContextSwitch(v29->CurrentThread, 0LL);
      v54 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v29->PrcbLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v54);
        while ( v29->PrcbLock );
      }
      v45 = v29->NextThread;
      v29->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)v29, v31, 0LL);
      _enable();
      v29->CurrentThread = v45;
      if ( v45->WaitBlockFill6[68] == 1 )
        v45->ReadyTime = v45->ReadyTime - v45->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
      v45->WaitBlockFill6[68] = 2;
      *(_BYTE *)(v31 + 643) = 32;
      *(_BYTE *)(v31 + 390) = v30;
      KiQueueReadyThread(v29, v31);
      if ( !(unsigned __int8)KiSwapContext(v31, v45, v30) )
        goto LABEL_50;
    }
    else if ( (*(_DWORD *)(v31 + 116) & 0x40) == 0 )
    {
LABEL_50:
      __writecr8(v30);
      goto LABEL_51;
    }
    __writecr8(1uLL);
    *(_DWORD *)(v31 + 116) &= ~0x40u;
    KiDeliverApc(0LL, 0LL, 0LL);
    goto LABEL_50;
  }
  if ( !Timeout || Timeout->QuadPart )
    goto LABEL_8;
  if ( (Queue->Header.Signalling & 1) != 0 )
  {
    v36 = EntryArray;
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
    v34 = KiTestForAlertPending((__int64)CurrentThread, Alertable, WaitMode, 1);
    v35 = v34;
    if ( !v34 )
      v35 = 258LL;
    v36 = EntryArray;
    *EntryArray = (PLIST_ENTRY)v35;
    if ( Alertable )
      CurrentThread->ThreadLock = 0LL;
  }
  v37 = KeGetCurrentPrcb();
  v38 = CurrentThread->WaitIrql;
  if ( v38 >= 2u )
  {
    if ( v37->NextThread && !v37->DpcRoutineActive )
      KiRequestSoftwareInterrupt(v37, 2);
    goto LABEL_85;
  }
  v39 = (__int64)v37->CurrentThread;
  if ( v37->NextThread )
  {
    KiAbProcessContextSwitch(v37->CurrentThread, 0LL);
    v56 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&v37->PrcbLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v56);
      while ( v37->PrcbLock );
    }
    v48 = v37->NextThread;
    v37->NextThread = 0LL;
    _disable();
    KiEndThreadCycleAccumulation((__int64)v37, v39, 0LL);
    _enable();
    v37->CurrentThread = v48;
    if ( v48->WaitBlockFill6[68] == 1 )
      v48->ReadyTime = v48->ReadyTime - v48->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
    v48->WaitBlockFill6[68] = 2;
    *(_BYTE *)(v39 + 643) = 32;
    *(_BYTE *)(v39 + 390) = v38;
    KiQueueReadyThread(v37, v39);
    if ( !(unsigned __int8)KiSwapContext(v39, v48, v38) )
      goto LABEL_84;
    goto LABEL_153;
  }
  if ( (*(_DWORD *)(v39 + 116) & 0x40) != 0 )
  {
LABEL_153:
    __writecr8(1uLL);
    *(_DWORD *)(v39 + 116) &= ~0x40u;
    KiDeliverApc(0LL, 0LL, 0LL);
  }
LABEL_84:
  __writecr8(v38);
LABEL_85:
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    v49 = v36;
LABEL_175:
    EtwTraceDequeueWork(CurrentThread, v49, v11, Timeout);
  }
  return v11;
}
