/*
 * XREFs of KeRemoveQueueEx @ 0x1400F5070
 * Callers:
 *     KeRemoveQueue @ 0x1400CB770 (KeRemoveQueue.c)
 *     IoRemoveIoCompletion @ 0x1400F4CD0 (IoRemoveIoCompletion.c)
 *     ExpWorkerFactoryManagerThread @ 0x140176D50 (ExpWorkerFactoryManagerThread.c)
 *     FsRtlWorkerThread @ 0x140185DA0 (FsRtlWorkerThread.c)
 *     IopPassiveInterruptRealtimeWorker @ 0x140185E90 (IopPassiveInterruptRealtimeWorker.c)
 *     PopFxEmergencyWorker @ 0x140186890 (PopFxEmergencyWorker.c)
 *     KiBlockAndActivateUmsThread @ 0x14024C4FC (KiBlockAndActivateUmsThread.c)
 *     EtwpReceiveReplyDataBlock @ 0x1405C3328 (EtwpReceiveReplyDataBlock.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiEndThreadCycleAccumulation @ 0x140060730 (KiEndThreadCycleAccumulation.c)
 *     KiRequestSoftwareInterrupt @ 0x14007C130 (KiRequestSoftwareInterrupt.c)
 *     KiFastExitThreadWait @ 0x140088FE4 (KiFastExitThreadWait.c)
 *     KiSwitchQueue @ 0x1400AF2F8 (KiSwitchQueue.c)
 *     KiProcessThreadWaitList @ 0x1400B19F0 (KiProcessThreadWaitList.c)
 *     KiAttemptFastRemoveQueue @ 0x1400C0AFC (KiAttemptFastRemoveQueue.c)
 *     KiTestForAlertPending @ 0x1400CBD30 (KiTestForAlertPending.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 *     KiQueueReadyThread @ 0x1400EC480 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiCommitThreadWait @ 0x1400F64C0 (KiCommitThreadWait.c)
 *     KiAbProcessContextSwitch @ 0x1400F83C0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400F8A70 (KiDeliverApc.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     HvlNotifyLongSpinWait @ 0x14015AFE0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x1401B1B40 (KiSwapContext.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     EtwTraceDequeueWork @ 0x1402AEA90 (EtwTraceDequeueWork.c)
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
  KPROCESSOR_MODE v7; // bp
  BOOLEAN v8; // r12
  unsigned __int8 CurrentIrql; // al
  ULONG v11; // r15d
  __int64 i; // r13
  struct _KPRCB *v13; // rsi
  _DWORD *SchedulerAssist; // rcx
  $73ACCD497C6E10005445ED6B0DEFBC9F *v15; // r14
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  unsigned int v18; // esi
  struct _KQUEUE *v19; // r8
  unsigned int v20; // esi
  ULONG v21; // r13d
  PLIST_ENTRY *v22; // r12
  LONGLONG v23; // r8
  unsigned int v24; // edx
  unsigned __int64 v25; // rax
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v27; // rcx
  __int64 v28; // rax
  struct _LIST_ENTRY *Flink; // rdx
  LIST_ENTRY *p_EntryListHead; // r8
  __int64 v32; // rsi
  struct _LIST_ENTRY *v33; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int8 WaitIrql; // bp
  __int64 v37; // r14
  int v38; // eax
  __int64 v39; // rcx
  PLIST_ENTRY *v40; // r14
  struct _KPRCB *v41; // rdi
  unsigned __int8 v42; // r12
  __int64 v43; // rsi
  __int64 ThreadTimerDelay; // rdx
  unsigned __int64 v45; // rcx
  struct _KPRCB *v46; // rdi
  PLIST_ENTRY *v47; // rcx
  struct _KPRCB *v48; // rbp
  __int64 v49; // r13
  struct _KPRCB *v50; // r12
  _KTHREAD *NextThread; // r13
  __int64 v52; // r8
  unsigned __int8 v53; // si
  struct _KPRCB *v54; // r12
  _KTHREAD *v55; // r12
  __int64 v56; // r8
  char v57; // al
  struct _KPRCB *v58; // rbp
  _KTHREAD *v59; // rbp
  __int64 v60; // r8
  struct _KPRCB *v61; // rdi
  PLIST_ENTRY *v62; // rdx
  int v63; // eax
  int v64; // eax
  struct _LIST_ENTRY *v65; // rdx
  struct _LIST_ENTRY *v66; // rcx
  int v67; // [rsp+30h] [rbp-78h] BYREF
  int v68; // [rsp+34h] [rbp-74h] BYREF
  int v69; // [rsp+38h] [rbp-70h] BYREF
  int v70; // [rsp+3Ch] [rbp-6Ch] BYREF
  int v71; // [rsp+40h] [rbp-68h] BYREF
  __int64 v72; // [rsp+48h] [rbp-60h]
  LONGLONG QuadPart; // [rsp+50h] [rbp-58h]
  int v74; // [rsp+B0h] [rbp+8h]
  int v77; // [rsp+C8h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v7 = WaitMode;
  v8 = Alertable;
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
      v74 = 2;
      QuadPart = MEMORY[0xFFFFF78000000008]
               - MEMORY[0xFFFFF780000003B0]
               - (Timeout->QuadPart
                + CurrentThread->RelativeTimerBias);
    }
    else
    {
      QuadPart = Timeout->QuadPart;
      v74 = 1;
    }
  }
  else
  {
    v74 = 0;
  }
  if ( (PKQUEUE)CurrentThread->Queue != Queue )
    goto LABEL_10;
  if ( Queue->Header.SignalState && Queue->CurrentCount <= Queue->MaximumCount )
  {
    v77 = 0;
    while ( _interlockedbittestandset(&Queue->Header.Lock, 7u) )
    {
      do
        KeYieldProcessorEx(&v77);
      while ( (Queue->Header.LockNV & 0x80u) != 0 );
    }
    if ( Queue->Header.SignalState && Queue->CurrentCount <= Queue->MaximumCount )
    {
      Flink = Queue->EntryListHead.Flink;
      p_EntryListHead = &Queue->EntryListHead;
      v22 = EntryArray;
      v32 = 0LL;
      Timeout = (PLARGE_INTEGER)Count;
      do
      {
        --Queue->Header.SignalState;
        v33 = Flink->Flink;
        if ( !Flink->Flink )
          KeBugCheckEx(0x96u, (ULONG_PTR)Flink, (ULONG_PTR)Queue, ExWorkerQueue, (ULONG_PTR)Flink[1].Flink);
        Blink = Flink->Blink;
        if ( v33->Blink != Flink || Blink->Flink != Flink )
          __fastfail(3u);
        Blink->Flink = v33;
        v33->Blink = Blink;
        Flink->Flink = 0LL;
        v22[v32] = Flink;
        v32 = (unsigned int)(v32 + 1);
        Flink = p_EntryListHead->Flink;
      }
      while ( p_EntryListHead->Flink != p_EntryListHead && (unsigned int)v32 < (unsigned int)Timeout );
      if ( (_DWORD)v32 )
      {
        _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
        CurrentPrcb = KeGetCurrentPrcb();
        WaitIrql = CurrentThread->WaitIrql;
        if ( WaitIrql >= 2u )
        {
          if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
            KiRequestSoftwareInterrupt(CurrentPrcb, 2);
        }
        else
        {
          v37 = (__int64)CurrentPrcb->CurrentThread;
          if ( CurrentPrcb->NextThread )
          {
            KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
            v50 = KeGetCurrentPrcb();
            v67 = 0;
            while ( 1 )
            {
              KiSetVpThreadSpinLockCount(v50, 1LL);
              if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
                break;
              KiSetVpThreadSpinLockCount(v50, 0LL);
              do
                KeYieldProcessorEx(&v67);
              while ( CurrentPrcb->PrcbLock );
            }
            NextThread = CurrentPrcb->NextThread;
            CurrentPrcb->NextThread = 0LL;
            _disable();
            KiEndThreadCycleAccumulation((__int64)CurrentPrcb, v37, 0LL);
            _enable();
            CurrentPrcb->CurrentThread = NextThread;
            if ( NextThread->WaitBlockFill6[68] == 1 )
            {
              v52 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
              NextThread->ReadyTime = v52 + MEMORY[0xFFFFF78000000320];
            }
            NextThread->WaitBlockFill6[68] = 2;
            *(_BYTE *)(v37 + 643) = 32;
            *(_BYTE *)(v37 + 390) = WaitIrql;
            KiQueueReadyThread(CurrentPrcb, v37, v52);
            if ( (unsigned __int8)KiSwapContext(v37, NextThread, WaitIrql) )
            {
              __writecr8(1uLL);
              *(_DWORD *)(v37 + 116) &= ~0x40u;
              KiDeliverApc(0LL, 0LL, 0LL);
            }
            v22 = EntryArray;
          }
          else if ( (*(_DWORD *)(v37 + 116) & 0x40) != 0 )
          {
            __writecr8(1uLL);
            *(_DWORD *)(v37 + 116) &= ~0x40u;
            KiDeliverApc(0LL, 0LL, 0LL);
          }
          __writecr8(WaitIrql);
        }
LABEL_56:
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          EtwTraceDequeueWork(CurrentThread, v22, (unsigned int)v32, Timeout);
        return v32;
      }
      v8 = Alertable;
    }
    _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
    goto LABEL_10;
  }
  if ( !Timeout || Timeout->QuadPart )
  {
LABEL_10:
    for ( i = CurrentThread->WaitIrql; ; CurrentThread->WaitIrql = i )
    {
      v72 = i;
      while ( 1 )
      {
        CurrentThread->MiscFlags &= ~0x10u;
        CurrentThread->WaitRegister.Flags = 0;
        CurrentThread->WaitMode = v7;
        if ( v8 )
          CurrentThread->MiscFlags |= 0x10u;
        v13 = KeGetCurrentPrcb();
        v70 = 0;
        SchedulerAssist = v13->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( v13->NestingLevel <= 1u )
          {
            v63 = SchedulerAssist[5];
            SchedulerAssist[5] = v63 + 1;
            if ( v63 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
              KiPerformUnboostKick(v13);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          KiSetVpThreadSpinLockCount(v13, 0LL);
          do
            KeYieldProcessorEx(&v70);
          while ( CurrentThread->ThreadLock );
          KiSetVpThreadSpinLockCount(v13, 1LL);
        }
        if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || (_BYTE)i )
          break;
        KiReleaseThreadLockSafe((__int64)CurrentThread);
        __writecr8(1uLL);
        KiDeliverApc(0LL, 0LL, 0LL);
        KeGetCurrentIrql();
        __writecr8(2uLL);
        CurrentThread->WaitIrql = 0;
      }
      v15 = &CurrentThread->320;
      if ( v8 )
      {
        if ( CurrentThread->Alerted[v7] )
        {
          CurrentThread->Alerted[v7] = 0;
          v18 = 257;
          goto LABEL_106;
        }
        if ( v7 && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
        {
          CurrentThread->ApcState.UserApcPending = 1;
LABEL_105:
          v18 = 192;
LABEL_106:
          KiReleaseThreadLockSafe((__int64)CurrentThread);
          v48 = KeGetCurrentPrcb();
          if ( (unsigned __int8)i >= 2u )
          {
            if ( v48->NextThread && !v48->DpcRoutineActive )
              KiRequestSoftwareInterrupt(v48, 2);
          }
          else
          {
            v49 = (__int64)v48->CurrentThread;
            if ( v48->NextThread )
            {
              KiAbProcessContextSwitch(v48->CurrentThread, 0LL);
              v54 = KeGetCurrentPrcb();
              v71 = 0;
              while ( 1 )
              {
                KiSetVpThreadSpinLockCount(v54, 1LL);
                if ( !_interlockedbittestandset64((volatile signed __int32 *)&v48->PrcbLock, 0LL) )
                  break;
                KiSetVpThreadSpinLockCount(v54, 0LL);
                do
                  KeYieldProcessorEx(&v71);
                while ( v48->PrcbLock );
              }
              v55 = v48->NextThread;
              v48->NextThread = 0LL;
              _disable();
              KiEndThreadCycleAccumulation((__int64)v48, v49, 0LL);
              _enable();
              v48->CurrentThread = v55;
              if ( v55->WaitBlockFill6[68] == 1 )
              {
                v56 = v55->ReadyTime - v55->WaitBlock[2].SpareLong;
                v55->ReadyTime = v56 + MEMORY[0xFFFFF78000000320];
              }
              v57 = v72;
              v55->WaitBlockFill6[68] = 2;
              *(_BYTE *)(v49 + 390) = v57;
              *(_BYTE *)(v49 + 643) = 32;
              KiQueueReadyThread(v48, v49, v56);
              if ( (unsigned __int8)KiSwapContext(v49, v55, (unsigned __int8)v72) )
                goto LABEL_142;
            }
            else
            {
              if ( (*(_DWORD *)(v49 + 116) & 0x40) == 0 )
                goto LABEL_109;
LABEL_142:
              __writecr8(1uLL);
              *(_DWORD *)(v49 + 116) &= ~0x40u;
              KiDeliverApc(0LL, 0LL, 0LL);
            }
LABEL_109:
            __writecr8((unsigned __int8)v72);
          }
          v7 = WaitMode;
          goto LABEL_24;
        }
        if ( CurrentThread->Alerted[0] )
        {
          CurrentThread->Alerted[0] = 0;
          v18 = 257;
          goto LABEL_106;
        }
      }
      else if ( CurrentThread->ApcState.UserApcPending && v7 )
      {
        goto LABEL_105;
      }
      CurrentThread->WaitBlockFill6[68] = 5;
      CurrentThread->WaitReason = 15;
      CurrentThread->ThreadLock = 0LL;
      v16 = KeGetCurrentPrcb();
      v17 = v16->SchedulerAssist;
      if ( v17 )
      {
        if ( v16->NestingLevel <= 1u )
        {
          v64 = v17[5] - 1;
          v17[5] = v64;
          if ( !v64 && !*((_BYTE *)v17 + 25) && !*((_BYTE *)v17 + 27) )
            KiPerformUnboostKick(v16);
        }
      }
      v18 = 0;
      CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
LABEL_24:
      if ( v18 )
      {
        v47 = EntryArray;
        *EntryArray = (PLIST_ENTRY)v18;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) == 0 )
          return v11;
        v62 = v47;
        goto LABEL_194;
      }
      v19 = (struct _KQUEUE *)CurrentThread->Queue;
      if ( Queue != v19 )
        KiSwitchQueue((__int64)CurrentThread, (__int64)Queue, (__int64)v19);
      CurrentThread->WaitBlock[0].WaitType = 3;
      CurrentThread->WaitBlockFill4[17] = 4;
      v20 = 0;
      CurrentThread->WaitBlock[0].WaitKey = 128;
      CurrentThread->WaitBlock[0].Object = Queue;
      if ( _interlockedbittestandset(&Queue->Header.Lock, 7u) )
      {
        do
        {
          if ( (++v20 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v20);
        }
        while ( (Queue->Header.LockNV & 0x80u) != 0 || _interlockedbittestandset(&Queue->Header.Lock, 7u) );
      }
      v21 = Count;
      v22 = EntryArray;
      if ( Queue->Header.SignalState )
      {
        if ( Queue->CurrentCount <= Queue->MaximumCount )
        {
          LODWORD(v32) = KiAttemptFastRemoveQueue((ULONG_PTR)Queue, (__int64)EntryArray, Count);
          if ( (_DWORD)v32 )
          {
            _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
LABEL_98:
            CurrentThread->WaitReason = 0;
            v46 = KeGetCurrentPrcb();
            if ( v46->DeferredReadyListHead.Next )
              KiProcessThreadWaitList((__int64)v46, 1u, 0);
            KiFastExitThreadWait((__int64)v46, (__int64)CurrentThread, 1LL);
            goto LABEL_56;
          }
        }
      }
      if ( (Queue->Header.Signalling & 1) != 0 )
      {
        if ( CurrentThread->Queue )
        {
          v65 = CurrentThread->QueueListEntry.Flink;
          v66 = CurrentThread->QueueListEntry.Blink;
          if ( v65->Blink != &CurrentThread->QueueListEntry || v66->Flink != &CurrentThread->QueueListEntry )
            __fastfail(3u);
          v66->Flink = v65;
          v65->Blink = v66;
          CurrentThread->Queue = 0LL;
        }
        _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
        *v22 = (PLIST_ENTRY)128;
        goto LABEL_126;
      }
      v23 = QuadPart;
      v24 = v74;
      v25 = QuadPart;
      if ( v74 == 2 )
      {
        ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
        v45 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
        v25 = QuadPart;
        if ( CurrentThread->WaitMode
          && !CurrentThread->WaitBlock[3].SpareLong
          && !CurrentThread->WaitIrql
          && !CurrentThread->ApcState.InProgressFlags
          && (_DWORD)ThreadTimerDelay )
        {
          v25 = QuadPart + ThreadTimerDelay;
        }
        v24 = 2;
      }
      else
      {
        if ( !v74 )
          goto LABEL_32;
        if ( !QuadPart )
        {
LABEL_125:
          _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
          *v22 = (PLIST_ENTRY)258;
LABEL_126:
          LODWORD(v32) = 1;
          goto LABEL_98;
        }
        v45 = MEMORY[0xFFFFF78000000014];
      }
      if ( v45 > v25 )
        goto LABEL_125;
LABEL_32:
      _InterlockedDecrement((volatile signed __int32 *)&Queue->CurrentCount);
      p_WaitListHead = &Queue->Header.WaitListHead;
      v27 = Queue->Header.WaitListHead.Flink;
      if ( v27->Blink != &Queue->Header.WaitListHead )
        __fastfail(3u);
      v15->WaitBlock[0].WaitListEntry.Flink = v27;
      CurrentThread->WaitBlock[0].WaitListEntry.Blink = p_WaitListHead;
      v27->Blink = (struct _LIST_ENTRY *)v15;
      p_WaitListHead->Flink = (struct _LIST_ENTRY *)v15;
      _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
      CurrentThread->WaitBlockCount = 1;
      v28 = KiCommitThreadWait(CurrentThread, &CurrentThread->320, v24, v23);
      CurrentThread->WaitReason = 0;
      if ( v28 != 256 )
      {
        *v22 = (PLIST_ENTRY)v28;
        if ( v21 > 1 && (unsigned __int64)(v28 - 257) > 1 && v28 != 128 && v28 != 192 && Queue->Header.SignalState )
        {
          v53 = KeGetCurrentIrql();
          __writecr8(2uLL);
          KiAcquireKobjectLockSafe(&Queue->Header.Lock);
          if ( Queue->Header.SignalState )
            v11 = KiAttemptFastRemoveQueue((ULONG_PTR)Queue, (__int64)(v22 + 1), v21 - 1) + 1;
          _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
          __writecr8(v53);
        }
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          v62 = v22;
          goto LABEL_194;
        }
        return v11;
      }
      i = KeGetCurrentIrql();
      __writecr8(2uLL);
      v8 = Alertable;
    }
  }
  if ( (Queue->Header.Signalling & 1) != 0 )
  {
    v40 = EntryArray;
    *EntryArray = (PLIST_ENTRY)128;
  }
  else
  {
    if ( Alertable )
    {
      v61 = KeGetCurrentPrcb();
      v68 = 0;
      while ( 1 )
      {
        KiSetVpThreadSpinLockCount(v61, 1LL);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          break;
        KiSetVpThreadSpinLockCount(v61, 0LL);
        do
          KeYieldProcessorEx(&v68);
        while ( CurrentThread->ThreadLock );
      }
    }
    v38 = KiTestForAlertPending((__int64)CurrentThread, v8, v7, 1);
    v39 = v38;
    if ( !v38 )
      v39 = 258LL;
    v40 = EntryArray;
    *EntryArray = (PLIST_ENTRY)v39;
    if ( v8 )
      KiReleaseThreadLockSafe((__int64)CurrentThread);
  }
  v41 = KeGetCurrentPrcb();
  v42 = CurrentThread->WaitIrql;
  if ( v42 >= 2u )
  {
    if ( v41->NextThread && !v41->DpcRoutineActive )
      KiRequestSoftwareInterrupt(v41, 2);
    goto LABEL_74;
  }
  v43 = (__int64)v41->CurrentThread;
  if ( v41->NextThread )
  {
    KiAbProcessContextSwitch(v41->CurrentThread, 0LL);
    v58 = KeGetCurrentPrcb();
    v69 = 0;
    while ( 1 )
    {
      KiSetVpThreadSpinLockCount(v58, 1LL);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&v41->PrcbLock, 0LL) )
        break;
      KiSetVpThreadSpinLockCount(v58, 0LL);
      do
        KeYieldProcessorEx(&v69);
      while ( v41->PrcbLock );
    }
    v59 = v41->NextThread;
    v41->NextThread = 0LL;
    _disable();
    KiEndThreadCycleAccumulation((__int64)v41, v43, 0LL);
    _enable();
    v41->CurrentThread = v59;
    if ( v59->WaitBlockFill6[68] == 1 )
    {
      v60 = v59->ReadyTime - v59->WaitBlock[2].SpareLong;
      v59->ReadyTime = v60 + MEMORY[0xFFFFF78000000320];
    }
    v59->WaitBlockFill6[68] = 2;
    *(_BYTE *)(v43 + 643) = 32;
    *(_BYTE *)(v43 + 390) = v42;
    KiQueueReadyThread(v41, v43, v60);
    if ( !(unsigned __int8)KiSwapContext(v43, v59, v42) )
      goto LABEL_73;
    goto LABEL_160;
  }
  if ( (*(_DWORD *)(v43 + 116) & 0x40) != 0 )
  {
LABEL_160:
    __writecr8(1uLL);
    *(_DWORD *)(v43 + 116) &= ~0x40u;
    KiDeliverApc(0LL, 0LL, 0LL);
  }
LABEL_73:
  __writecr8(v42);
LABEL_74:
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    v62 = v40;
LABEL_194:
    EtwTraceDequeueWork(CurrentThread, v62, v11, Timeout);
  }
  return v11;
}
