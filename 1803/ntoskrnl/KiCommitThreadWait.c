/*
 * XREFs of KiCommitThreadWait @ 0x1400F64C0
 * Callers:
 *     KeWaitForGate @ 0x140086DE8 (KeWaitForGate.c)
 *     KiWaitForAllObjects @ 0x140086EF0 (KiWaitForAllObjects.c)
 *     KeWaitForAlertByThreadId @ 0x140088D40 (KeWaitForAlertByThreadId.c)
 *     KeRemoveQueueEx @ 0x1400F5070 (KeRemoveQueueEx.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeWaitForMultipleObjects @ 0x1400FF3A0 (KeWaitForMultipleObjects.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     KeRemovePriQueue @ 0x1401264C0 (KeRemovePriQueue.c)
 * Callees:
 *     KiDecrementProcessStackCount @ 0x140008690 (KiDecrementProcessStackCount.c)
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiWakeQueueWaiter @ 0x14002F920 (KiWakeQueueWaiter.c)
 *     KiIncrementConcurrencyCount @ 0x14002FB5C (KiIncrementConcurrencyCount.c)
 *     KiComputeDueTime @ 0x14005AE10 (KiComputeDueTime.c)
 *     KiExitThreadWait @ 0x140089090 (KiExitThreadWait.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1400AF378 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiActivateWaiterPriQueue @ 0x1400AF538 (KiActivateWaiterPriQueue.c)
 *     KiProcessThreadWaitList @ 0x1400B19F0 (KiProcessThreadWaitList.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSwapThread @ 0x1400F6B40 (KiSwapThread.c)
 *     KiInsertTimerTable @ 0x1400F87E0 (KiInsertTimerTable.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiTimerWaitTest @ 0x1401089B0 (KiTimerWaitTest.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     KiTraceSetTimer @ 0x14024ADF0 (KiTraceSetTimer.c)
 */

__int64 __fastcall KiCommitThreadWait(__int64 a1, __int64 *a2, int a3, __int64 a4)
{
  int v4; // r13d
  __int64 v5; // r15
  __int64 *v7; // r14
  struct _KPRCB *CurrentPrcb; // rbp
  BOOL v10; // r12d
  struct _KPRCB *v11; // rdi
  _DWORD *SchedulerAssist; // rcx
  char v13; // al
  int v14; // edx
  _BYTE *v15; // rdi
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  __int64 v18; // rdi
  struct _KPRCB *v20; // rdi
  _DWORD *v21; // rcx
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v23; // rcx
  struct _KPRCB *v24; // rcx
  _DWORD *v25; // rdx
  __int64 v26; // rcx
  char v27; // r10
  __int64 v28; // r11
  struct _KPRCB *v29; // rcx
  _DWORD *v30; // rdx
  _QWORD *v31; // r12
  _BYTE *v32; // r14
  __int64 v33; // rax
  unsigned __int64 v34; // rcx
  bool v35; // zf
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // rcx
  _QWORD *v39; // rax
  __int64 v40; // rdx
  char v41; // r10
  __int64 *v42; // r15
  volatile signed __int32 *v43; // rsi
  __int64 v44; // rdx
  __int64 *v45; // rcx
  __int64 **v46; // rax
  __int64 v47; // rax
  struct _KPRCB *v48; // rsi
  char v49; // r15
  __int64 v50; // rdx
  _BYTE *v51; // rcx
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  __int64 v56; // rax
  int v57; // eax
  int v58; // [rsp+30h] [rbp-68h] BYREF
  int v59; // [rsp+34h] [rbp-64h] BYREF
  __int64 v60; // [rsp+38h] [rbp-60h]
  int v61; // [rsp+40h] [rbp-58h]
  int v62; // [rsp+A0h] [rbp+8h] BYREF
  int v63; // [rsp+A8h] [rbp+10h] BYREF
  char v64; // [rsp+B0h] [rbp+18h]

  v60 = a4;
  v4 = 0;
  v5 = a1 + 256;
  v7 = a2;
  _m_prefetchw((const void *)(a1 + 112));
  if ( a3 )
  {
    *(_DWORD *)(a1 + 116) |= 0x200u;
    *(_DWORD *)v5 |= 0x40000080u;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  *(_QWORD *)(a1 + 208) = a2;
  v10 = *(_BYTE *)(a1 + 391) && (*(_DWORD *)(a1 + 120) & 0x40) != 0 && *(char *)(a1 + 195) < 25;
  v11 = KeGetCurrentPrcb();
  v63 = 0;
  SchedulerAssist = v11->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( v11->NestingLevel <= 1u )
    {
      v52 = SchedulerAssist[5];
      SchedulerAssist[5] = v52 + 1;
      if ( v52 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        KiPerformUnboostKick(v11);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    KiSetVpThreadSpinLockCount(v11, 0LL);
    do
      KeYieldProcessorEx(&v63);
    while ( *(_QWORD *)(a1 + 64) );
    LOBYTE(v44) = 1;
    KiSetVpThreadSpinLockCount(v11, v44);
  }
  v13 = *(_BYTE *)(a1 + 112);
  if ( (v13 & 0xE7) == 0 )
  {
    *(_BYTE *)(a1 + 112) = v13 & 0xF8 | 1;
    if ( v10 )
    {
      v20 = KeGetCurrentPrcb();
      v58 = 0;
      v21 = v20->SchedulerAssist;
      if ( v21 )
      {
        if ( v20->NestingLevel <= 1u )
        {
          v53 = v21[5];
          v21[5] = v53 + 1;
          if ( v53 == -1 && !*((_BYTE *)v21 + 25) && !*((_BYTE *)v21 + 27) )
            KiPerformUnboostKick(v20);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->WaitLock, 0LL) )
      {
        KiSetVpThreadSpinLockCount(v20, 0LL);
        do
          KeYieldProcessorEx(&v58);
        while ( CurrentPrcb->WaitLock );
        LOBYTE(v50) = 1;
        KiSetVpThreadSpinLockCount(v20, v50);
      }
      Blink = CurrentPrcb->WaitListHead.Blink;
      v23 = (struct _LIST_ENTRY *)(a1 + 216);
      if ( Blink->Flink != &CurrentPrcb->WaitListHead )
        __fastfail(3u);
      v23->Flink = &CurrentPrcb->WaitListHead;
      *(_QWORD *)(a1 + 224) = Blink;
      Blink->Flink = v23;
      CurrentPrcb->WaitListHead.Blink = v23;
      *(_QWORD *)(a1 + 712) = CurrentPrcb;
      _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->WaitLock, 0LL);
      v24 = KeGetCurrentPrcb();
      v25 = v24->SchedulerAssist;
      if ( v25 )
      {
        if ( v24->NestingLevel <= 1u )
        {
          v54 = v25[5] - 1;
          v25[5] = v54;
          if ( !v54 && !*((_BYTE *)v25 + 25) && !*((_BYTE *)v25 + 27) )
            KiPerformUnboostKick(v24);
        }
      }
    }
    v14 = *(_DWORD *)(a1 + 120);
    if ( (v14 & 0x1000) != 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xCu);
      v14 = *(_DWORD *)(a1 + 120);
    }
    if ( (_bittest((const signed __int32 *)(a1 + 116), 0x13u) & ((v14 & 0x4000) != 0)) != 0
      && !_interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0x14u) )
    {
      v4 = 1;
    }
    v64 = 0;
    if ( a3 == 2 )
    {
      v33 = *(unsigned int *)(a1 + 1504);
      if ( *(_BYTE *)(a1 + 391) )
      {
        if ( !*(_DWORD *)(a1 + 484) && !*(_BYTE *)(a1 + 390) && !*(_BYTE *)(a1 + 192) )
        {
          v64 = 1;
          if ( (_DWORD)v33 )
            v60 += v33;
        }
      }
    }
    if ( *(_BYTE *)(a1 + 643) != 15 && (v15 = *(_BYTE **)(a1 + 232)) != 0LL )
    {
      _m_prefetchw(v15);
      if ( (*v15 & 0x7F) == 0x15 )
      {
        v37 = (unsigned __int8)*(_DWORD *)(a1 + 540);
        v26 = 4 * v37 + 536;
        *(_DWORD *)(a1 + 540) = v37 | 0x100;
      }
      else
      {
        v26 = 40LL;
      }
      _InterlockedDecrement((volatile signed __int32 *)&v15[v26]);
      if ( _interlockedbittestandset((volatile signed __int32 *)v15, 7u) )
        v27 = 0;
      else
        v27 = 1;
      v28 = 0LL;
      *(_QWORD *)(a1 + 64) = 0LL;
      v29 = KeGetCurrentPrcb();
      v30 = v29->SchedulerAssist;
      if ( v30 )
      {
        if ( v29->NestingLevel <= 1u )
        {
          v55 = v30[5] - 1;
          v30[5] = v55;
          if ( !v55 && !*((_BYTE *)v30 + 25) && !*((_BYTE *)v30 + 27) )
            KiPerformUnboostKick(v29);
        }
      }
      if ( v27 )
      {
        if ( (*v15 & 0x7F) == 0x15 )
        {
          KiActivateWaiterPriQueue((ULONG_PTR)v15, (signed int)v30);
          goto LABEL_16;
        }
        if ( *((_DWORD *)v15 + 10) < *((_DWORD *)v15 + 11) )
        {
          v31 = (_QWORD *)*((_QWORD *)v15 + 3);
          v32 = v15 + 24;
          if ( v31 != (_QWORD *)(v15 + 24) && *((_BYTE **)v15 + 1) != v15 + 8 )
          {
            v38 = *v31;
            v39 = (_QWORD *)v31[1];
            if ( *(_QWORD **)(*v31 + 8LL) != v31 || (_QWORD *)*v39 != v31 )
              __fastfail(3u);
            *v39 = v38;
            *(_QWORD *)(v38 + 8) = v39;
            *v31 = v28;
            if ( KiWakeQueueWaiter((__int64)KeGetCurrentPrcb(), (__int64)v15, (__int64)v31) )
            {
              --*((_DWORD *)v15 + 1);
              _InterlockedAnd((volatile signed __int32 *)v15, 0xFFFFFF7F);
              goto LABEL_16;
            }
            v56 = *(_QWORD *)v32;
            if ( *(_BYTE **)(*(_QWORD *)v32 + 8LL) != v32 )
              __fastfail(3u);
            *v31 = v56;
            v31[1] = v32;
            *(_QWORD *)(v56 + 8) = v31;
            *(_QWORD *)v32 = v31;
          }
        }
        _InterlockedAnd((volatile signed __int32 *)v15, 0xFFFFFF7F);
        goto LABEL_16;
      }
      KiActivateWaiterQueueWithNoLocks(a1, (unsigned __int64)v15, 0LL);
    }
    else
    {
      *(_QWORD *)(a1 + 64) = 0LL;
      v16 = KeGetCurrentPrcb();
      v17 = v16->SchedulerAssist;
      if ( v17 )
      {
        if ( v16->NestingLevel <= 1u )
        {
          v57 = v17[5] - 1;
          v17[5] = v57;
          if ( !v57 && !*((_BYTE *)v17 + 25) && !*((_BYTE *)v17 + 27) )
            KiPerformUnboostKick(v16);
        }
      }
    }
LABEL_16:
    if ( v4 )
      KiDecrementProcessStackCount(*(_QWORD *)(a1 + 184));
    *(_BYTE *)(a1 + 565) = 0;
    if ( !a3 )
      return KiSwapThread(a1, CurrentPrcb);
    if ( a3 == 2 )
    {
      v34 = v60 + MEMORY[0xFFFFF780000003B0] + *(_QWORD *)(a1 + 248);
      *(_QWORD *)(v5 + 24) = v34;
      v34 >>= 18;
      v62 = (unsigned __int8)v34;
      v61 = *(_DWORD *)v5;
      BYTE1(v61) &= ~1u;
      v35 = v64 == 0;
      BYTE2(v61) = v34;
      *(_DWORD *)v5 = v61;
      if ( !v35 )
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 544) + 2008LL));
    }
    else if ( !(unsigned int)KiComputeDueTime((int *)v5, v60, 0, &v62) )
    {
      goto LABEL_94;
    }
    if ( (unsigned __int8)KiInsertTimerTable((_DWORD)CurrentPrcb, v5, 0, v62, 0LL) )
    {
      if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
      {
        LOBYTE(v36) = 1;
        KiTraceSetTimer(v5, 0LL, v36);
      }
      else
      {
        _InterlockedAnd((volatile signed __int32 *)v5, 0xFFFFFF7F);
      }
      return KiSwapThread(a1, CurrentPrcb);
    }
LABEL_94:
    KiTimerWaitTest(CurrentPrcb, v5, 0LL);
    return KiSwapThread(a1, CurrentPrcb);
  }
  if ( (v13 & 7) == 0 )
  {
    if ( (v13 & 0x20) != 0 )
    {
      *(_QWORD *)(a1 + 200) = 256LL;
    }
    else
    {
      v35 = (v13 & 0x40) == 0;
      v47 = 192LL;
      if ( v35 )
        v47 = 257LL;
      *(_QWORD *)(a1 + 200) = v47;
    }
  }
  *(_BYTE *)(a1 + 388) = 2;
  if ( *(_BYTE *)(a1 + 643) == 15 )
  {
    v51 = *(_BYTE **)(a1 + 232);
    if ( v51 )
      KiIncrementConcurrencyCount(v51, a1);
  }
  KiReleaseThreadLockSafe(a1);
  if ( a3 )
    *(_DWORD *)(a1 + 116) &= ~0x200u;
  v18 = *(_QWORD *)(a1 + 200);
  if ( v41 )
  {
    v48 = KeGetCurrentPrcb();
    v49 = *(_BYTE *)(a1 + 391);
    v59 = 0;
    while ( 1 )
    {
      LOBYTE(v40) = 1;
      KiSetVpThreadSpinLockCount(v48, v40);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        break;
      KiSetVpThreadSpinLockCount(v48, 0LL);
      do
        KeYieldProcessorEx(&v59);
      while ( *(_QWORD *)(a1 + 64) );
    }
    if ( v18 == 257 )
    {
      if ( (*(_DWORD *)(a1 + 116) & 0x10) != 0 )
      {
        if ( *(_BYTE *)(v49 + a1 + 114) )
        {
          *(_BYTE *)(v49 + a1 + 114) = 0;
        }
        else if ( v49 )
        {
          *(_BYTE *)(a1 + 114) = 0;
        }
      }
      else
      {
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 4u);
      }
    }
    else if ( *(_QWORD *)(a1 + 168) != a1 + 168 )
    {
      *(_BYTE *)(a1 + 194) = 1;
    }
    KiReleaseThreadLockSafe(a1);
  }
  v42 = &v7[6 * *(unsigned __int8 *)(a1 + 587)];
  do
  {
    if ( *((_BYTE *)v7 + 17) < 5u )
    {
      v43 = (volatile signed __int32 *)v7[4];
      KiAcquireKobjectLockSafe(v43);
      if ( *((_BYTE *)v7 + 17) == 4 )
      {
        v45 = (__int64 *)*v7;
        v46 = (__int64 **)v7[1];
        if ( *(__int64 **)(*v7 + 8) != v7 || *v46 != v7 )
          __fastfail(3u);
        *v46 = v45;
        v45[1] = (__int64)v46;
      }
      _InterlockedAnd(v43, 0xFFFFFF7F);
    }
    v7 += 6;
  }
  while ( v7 != v42 );
  if ( CurrentPrcb->DeferredReadyListHead.Next )
    KiProcessThreadWaitList((__int64)CurrentPrcb, 1u, 0);
  KiExitThreadWait(CurrentPrcb, a1, 1);
  return v18;
}
