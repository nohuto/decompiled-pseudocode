/*
 * XREFs of KiDetachProcess @ 0x1400BF4A0
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x14009C460 (MiTrimOrAgeWorkingSet.c)
 *     KeUnstackDetachProcess @ 0x1400BD880 (KeUnstackDetachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     KeDetachProcess @ 0x140126F10 (KeDetachProcess.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiWakeOtherQueueWaiters @ 0x140061290 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140061410 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400728B0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400757E0 (KiTryUnwaitThread.c)
 *     KiMoveApcState @ 0x1400C001C (KiMoveApcState.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 *     KiSetAddressPolicy @ 0x14017B484 (KiSetAddressPolicy.c)
 *     KeBugCheck @ 0x140181270 (KeBugCheck.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1401F0B80 (HvlSwitchVirtualAddressSpace.c)
 *     KeIsThreadRunning @ 0x14020277C (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14027B28C (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KiDetachProcess(struct _KTHREAD *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  volatile signed __int32 *p_Lock; // rdi
  unsigned __int8 CurrentIrql; // r15
  $B476B70DB57F76B110DA5B9238C3E934 *v7; // r12
  $709EDFC2F9E0D4565D6AA3C4377BC643 *v8; // rdx
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *v11; // rcx
  _LIST_ENTRY *v12; // rax
  struct _LIST_ENTRY *v13; // rcx
  struct _LIST_ENTRY *v14; // rdx
  unsigned __int64 CurrentPrcb; // rcx
  _KPROCESS *Process; // rdx
  unsigned __int64 v17; // r14
  __int64 v18; // rbp
  unsigned __int64 DirectoryTableBase; // rsi
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 result; // rax
  char v23; // si
  unsigned __int8 v24; // r15
  unsigned __int32 v25; // eax
  unsigned __int32 v26; // ett
  signed __int64 *v27; // rdi
  signed __int64 v28; // rax
  int v29; // edi
  struct _KPRCB *v30; // r10
  LONG SignalState; // eax
  struct _KEVENT *v32; // r12
  __int64 v33; // rdi
  __int64 v34; // rcx
  _QWORD *v35; // rax
  char v36; // al
  __int64 v37; // rsi
  _QWORD *v38; // rbp
  struct _KPRCB *v39; // r15
  _KTHREAD *v40; // r14
  unsigned __int8 IsThreadRunning; // al
  int v42; // r8d
  __int64 *v43; // rdx
  struct _KEVENT *v44; // r15
  __int64 v45; // rdi
  char v46; // al
  __int64 v47; // r8
  __int64 v48; // rsi
  _QWORD *v49; // rbp
  struct _KPRCB *v50; // r13
  _KTHREAD *v51; // r14
  unsigned __int8 v52; // al
  int v53; // r8d
  __int64 *v54; // rdx
  unsigned __int8 v55; // [rsp+30h] [rbp-58h]
  __int64 v56; // [rsp+38h] [rbp-50h]
  int v57; // [rsp+40h] [rbp-48h] BYREF
  int v58; // [rsp+44h] [rbp-44h] BYREF
  int v59; // [rsp+48h] [rbp-40h] BYREF
  int v60; // [rsp+4Ch] [rbp-3Ch] BYREF
  __int64 v61; // [rsp+50h] [rbp-38h]

  CurrentThread = KeGetCurrentThread();
  p_Lock = &CurrentThread->ApcState.Process->Header.Lock;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v57 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v57);
    while ( CurrentThread->ThreadLock );
  }
  while ( CurrentThread->ApcState.KernelApcPending )
  {
    if ( CurrentThread->SpecialApcDisable )
      break;
    if ( CurrentIrql )
      break;
    CurrentThread->ThreadLock = 0LL;
    __writecr8(0LL);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v58 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v58);
      while ( CurrentThread->ThreadLock );
    }
  }
  if ( !CurrentThread->ApcStateIndex
    || (CurrentThread->ApcState.InProgressFlags & 1) != 0
    || (v7 = &CurrentThread->152, ($B476B70DB57F76B110DA5B9238C3E934 *)v7->ApcState.ApcListHead[0].Flink != v7)
    || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
  {
    KeBugCheck(6u);
  }
  CurrentThread->MiscFlags |= 0x800u;
  v8 = &CurrentThread->600;
  if ( a1 == (struct _KTHREAD *)&CurrentThread->600 )
  {
    CurrentThread->ApcState.Process = CurrentThread->SavedApcState.Process;
    CurrentThread->ApcState.InProgressFlags = CurrentThread->SavedApcState.InProgressFlags;
    CurrentThread->ApcState.KernelApcPending = CurrentThread->SavedApcState.KernelApcPending;
    CurrentThread->ApcState.UserApcPending = CurrentThread->SavedApcState.UserApcPending;
    Flink = v8->SavedApcState.ApcListHead[0].Flink;
    if ( ($709EDFC2F9E0D4565D6AA3C4377BC643 *)v8->SavedApcState.ApcListHead[0].Flink == v8 )
    {
      CurrentThread->ApcState.ApcListHead[0].Blink = CurrentThread->ApcState.ApcListHead;
      v7->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v7;
      CurrentThread->ApcState.KernelApcPending = 0;
    }
    else
    {
      Blink = CurrentThread->SavedApcState.ApcListHead[0].Blink;
      v7->ApcState.ApcListHead[0].Flink = Flink;
      CurrentThread->ApcState.ApcListHead[0].Blink = Blink;
      Flink->Blink = (struct _LIST_ENTRY *)v7;
      Blink->Flink = (struct _LIST_ENTRY *)v7;
    }
    v11 = &CurrentThread->SavedApcState.ApcListHead[1];
    v12 = &CurrentThread->ApcState.ApcListHead[1];
    if ( v11->Flink == v11 )
    {
      CurrentThread->ApcState.ApcListHead[1].Blink = &CurrentThread->ApcState.ApcListHead[1];
      v12->Flink = v12;
      CurrentThread->ApcState.UserApcPending = 0;
    }
    else
    {
      v13 = v11->Flink;
      v14 = CurrentThread->SavedApcState.ApcListHead[1].Blink;
      v12->Flink = v13;
      CurrentThread->ApcState.ApcListHead[1].Blink = v14;
      v13->Blink = v12;
      v14->Flink = v12;
    }
    CurrentThread->SavedApcState.Process = 0LL;
    CurrentThread->ApcStateIndex = 0;
  }
  else
  {
    KiMoveApcState(a1, &CurrentThread->152);
  }
  CurrentThread->ThreadLock = 0LL;
  CurrentPrcb = (unsigned __int64)KeGetCurrentPrcb();
  Process = CurrentThread->ApcState.Process;
  v17 = *(unsigned __int8 *)(CurrentPrcb + 209);
  v18 = 8LL * *(unsigned __int8 *)(CurrentPrcb + 208) + 280;
  _interlockedbittestandset64((volatile signed __int32 *)((char *)&Process->Header.Lock + v18), v17);
  DirectoryTableBase = Process->DirectoryTableBase;
  if ( KiKvaShadow )
  {
    v20 = Process->DirectoryTableBase;
    if ( (DirectoryTableBase & 2) != 0 )
      v20 = DirectoryTableBase | 0x8000000000000000uLL;
    __writegsqword(0x7000u, v20);
    KiSetAddressPolicy(Process->AddressPolicy);
  }
  if ( (HvlEnlightenments & 1) != 0 )
    HvlSwitchVirtualAddressSpace(DirectoryTableBase);
  else
    __writecr3(DirectoryTableBase);
  if ( KiKvaShadow && !KiFlushPcid )
  {
    CurrentPrcb = __readcr4();
    if ( (CurrentPrcb & 0x20080) != 0 )
    {
      __writecr4(CurrentPrcb ^ 0x80);
      __writecr4(CurrentPrcb);
    }
    else
    {
      v21 = __readcr3();
      __writecr3(v21);
    }
  }
  _interlockedbittestandreset64((volatile signed __int32 *)((char *)p_Lock + v18), v17);
  CurrentThread->MiscFlags &= ~0x800u;
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( !a2 )
  {
    result = _InterlockedExchangeAdd(p_Lock + 143, 0xFFFFFFF8) & 0xFFFFFFF8;
    if ( (_DWORD)result == 8 )
    {
      v23 = 0;
      v24 = KeGetCurrentIrql();
      v55 = v24;
      __writecr8(2uLL);
      v59 = 0;
      while ( _interlockedbittestandset(p_Lock, 7u) )
      {
        do
          KeYieldProcessorEx(&v59);
        while ( (*p_Lock & 0x80u) != 0 );
      }
      v25 = *((_DWORD *)p_Lock + 143);
      if ( (v25 & 7) == 0 )
      {
        CurrentPrcb = (unsigned __int64)(p_Lock + 12);
        if ( *(_QWORD *)CurrentPrcb != CurrentPrcb && v25 < 8 )
        {
          while ( 1 )
          {
            CurrentPrcb = v25 & 0xFFFFFFF8 | 3;
            v26 = v25;
            v25 = _InterlockedCompareExchange(p_Lock + 143, CurrentPrcb, v25);
            if ( v26 == v25 )
              break;
            if ( v25 >= 8 )
              goto LABEL_50;
          }
          v23 = 1;
        }
      }
LABEL_50:
      _InterlockedAnd(p_Lock, 0xFFFFFF7F);
      if ( !v23 )
        goto LABEL_115;
      v27 = (signed __int64 *)(p_Lock + 66);
      _m_prefetchw(&KiProcessOutSwapListHead);
      v28 = KiProcessOutSwapListHead;
      do
      {
        *v27 = v28;
        CurrentPrcb = v28;
        v28 = _InterlockedCompareExchange64(&KiProcessOutSwapListHead, (signed __int64)v27, v28);
      }
      while ( v28 != CurrentPrcb );
      if ( v28 )
        goto LABEL_115;
      if ( (KiSwapEvent.Header.Type & 0x7F) != 0 )
      {
        v29 = 0;
      }
      else
      {
        if ( KiSwapEvent.Header.SignalState == 1 )
        {
LABEL_115:
          result = v24;
          __writecr8(v24);
          goto LABEL_116;
        }
        v29 = 1;
      }
      v61 = KeGetCurrentIrql();
      __writecr8(2uLL);
      v30 = KeGetCurrentPrcb();
      v60 = 0;
      v56 = (__int64)v30;
      if ( _interlockedbittestandset((volatile signed __int32 *)&KiSwapEvent, 7u) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v60);
          while ( (KiSwapEvent.Header.Type & 0x80u) != 0 );
        }
        while ( _interlockedbittestandset((volatile signed __int32 *)&KiSwapEvent, 7u) );
        v30 = (struct _KPRCB *)v56;
      }
      SignalState = KiSwapEvent.Header.SignalState;
      KiSwapEvent.Header.SignalState = 1;
      if ( SignalState )
      {
LABEL_114:
        _InterlockedAnd((volatile signed __int32 *)&KiSwapEvent, 0xFFFFFF7F);
        KiExitDispatcher(v56, 0LL, 1u, 0xAu, v61);
        goto LABEL_115;
      }
      if ( !v29 )
      {
        v32 = (struct _KEVENT *)KiSwapEvent.Header.WaitListHead.Flink;
        if ( KiSwapEvent.Header.WaitListHead.Flink != &KiSwapEvent.Header.WaitListHead )
        {
          while ( 1 )
          {
            v33 = (__int64)v32;
            v32 = *(struct _KEVENT **)&v32->Header.Lock;
            v34 = *(_QWORD *)v33;
            v35 = *(_QWORD **)(v33 + 8);
            if ( *(_QWORD *)(*(_QWORD *)v33 + 8LL) != v33 || *v35 != v33 )
              __fastfail(3u);
            *v35 = v34;
            *(_QWORD *)(v34 + 8) = v35;
            v36 = *(_BYTE *)(v33 + 16);
            if ( v36 == 1 )
            {
              if ( (unsigned __int8)KiTryUnwaitThread((__int64)v30, v33, *(unsigned __int16 *)(v33 + 18), 0LL) )
              {
                if ( !--KiSwapEvent.Header.SignalState )
                  goto LABEL_112;
              }
            }
            else if ( v36 == 2 )
            {
              *(_BYTE *)(v33 + 17) = 5;
              v37 = *(_QWORD *)(v33 + 24);
              *(_QWORD *)v33 = 0LL;
              v38 = (_QWORD *)(v37 + 8);
              KeGetCurrentIrql();
              __writecr8(2uLL);
              v39 = KeGetCurrentPrcb();
              v40 = v39->CurrentThread;
              if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
              {
                IsThreadRunning = KeIsThreadRunning(v39->CurrentThread);
                EtwTraceEnqueueWork(v40, v33, IsThreadRunning);
              }
              KiAcquireKobjectLockSafe(v37);
              if ( (_QWORD *)*v38 == v38
                || *(_DWORD *)(v37 + 40) >= *(_DWORD *)(v37 + 44)
                || v40->Queue == (_DISPATCHER_HEADER *volatile)v37 && v40->WaitReason == 15
                || !KiWakeQueueWaiter((__int64)v39, v37, v33) )
              {
                v42 = *(_DWORD *)(v37 + 4);
                *(_DWORD *)(v37 + 4) = v42 + 1;
                v43 = *(__int64 **)(v37 + 32);
                if ( *v43 != v37 + 24 )
                  __fastfail(3u);
                *(_QWORD *)v33 = v37 + 24;
                *(_QWORD *)(v33 + 8) = v43;
                *v43 = v33;
                *(_QWORD *)(v37 + 32) = v33;
                if ( !v42 && (_QWORD *)*v38 != v38 )
                  KiWakeOtherQueueWaiters((__int64)v39, v37);
              }
              _InterlockedAnd((volatile signed __int32 *)v37, 0xFFFFFF7F);
              if ( !--KiSwapEvent.Header.SignalState )
                goto LABEL_112;
            }
            else
            {
              KiTryUnwaitThread((__int64)v30, v33, 256LL, 0LL);
            }
            if ( v32 == (struct _KEVENT *)&KiSwapEvent.Header.WaitListHead )
              goto LABEL_112;
            v30 = (struct _KPRCB *)v56;
          }
        }
        goto LABEL_113;
      }
      v44 = (struct _KEVENT *)KiSwapEvent.Header.WaitListHead.Flink;
      if ( KiSwapEvent.Header.WaitListHead.Flink == &KiSwapEvent.Header.WaitListHead )
      {
LABEL_111:
        KiSwapEvent.Header.WaitListHead.Blink = &KiSwapEvent.Header.WaitListHead;
        KiSwapEvent.Header.WaitListHead.Flink = &KiSwapEvent.Header.WaitListHead;
LABEL_112:
        v24 = v55;
LABEL_113:
        v7 = &CurrentThread->152;
        goto LABEL_114;
      }
      while ( 1 )
      {
        v45 = (__int64)v44;
        v44 = *(struct _KEVENT **)&v44->Header.Lock;
        v46 = *(_BYTE *)(v45 + 16);
        if ( v46 == 1 )
          break;
        if ( v46 != 2 )
        {
          v47 = 256LL;
          goto LABEL_107;
        }
        *(_BYTE *)(v45 + 17) = 5;
        v48 = *(_QWORD *)(v45 + 24);
        *(_QWORD *)v45 = 0LL;
        v49 = (_QWORD *)(v48 + 8);
        KeGetCurrentIrql();
        __writecr8(2uLL);
        v50 = KeGetCurrentPrcb();
        v51 = v50->CurrentThread;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          v52 = KeIsThreadRunning(v50->CurrentThread);
          EtwTraceEnqueueWork(v51, v45, v52);
        }
        KiAcquireKobjectLockSafe(v48);
        if ( (_QWORD *)*v49 == v49
          || *(_DWORD *)(v48 + 40) >= *(_DWORD *)(v48 + 44)
          || v51->Queue == (_DISPATCHER_HEADER *volatile)v48 && v51->WaitReason == 15
          || !KiWakeQueueWaiter((__int64)v50, v48, v45) )
        {
          v53 = *(_DWORD *)(v48 + 4);
          *(_DWORD *)(v48 + 4) = v53 + 1;
          v54 = *(__int64 **)(v48 + 32);
          if ( *v54 != v48 + 24 )
            __fastfail(3u);
          *(_QWORD *)v45 = v48 + 24;
          *(_QWORD *)(v45 + 8) = v54;
          *v54 = v45;
          *(_QWORD *)(v48 + 32) = v45;
          if ( !v53 && (_QWORD *)*v49 != v49 )
            KiWakeOtherQueueWaiters((__int64)v50, v48);
        }
        _InterlockedAnd((volatile signed __int32 *)v48, 0xFFFFFF7F);
LABEL_108:
        if ( v44 == (struct _KEVENT *)&KiSwapEvent.Header.WaitListHead )
          goto LABEL_111;
        v30 = (struct _KPRCB *)v56;
      }
      v47 = *(unsigned __int16 *)(v45 + 18);
LABEL_107:
      KiTryUnwaitThread((__int64)v30, v45, v47, 0LL);
      goto LABEL_108;
    }
  }
LABEL_116:
  if ( ($B476B70DB57F76B110DA5B9238C3E934 *)v7->ApcState.ApcListHead[0].Flink != v7 )
  {
    LOBYTE(CurrentPrcb) = 1;
    CurrentThread->ApcState.KernelApcPending = 1;
    return HalRequestSoftwareInterrupt(CurrentPrcb);
  }
  return result;
}
