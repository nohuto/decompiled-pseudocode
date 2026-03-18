/*
 * XREFs of KiCommitThreadWait @ 0x1400EAB20
 * Callers:
 *     KeWaitForGate @ 0x140017A68 (KeWaitForGate.c)
 *     KiWaitForAllObjects @ 0x140017B70 (KiWaitForAllObjects.c)
 *     KeWaitForAlertByThreadId @ 0x1400448F8 (KeWaitForAlertByThreadId.c)
 *     ExpWaitForResource @ 0x1400E7CC0 (ExpWaitForResource.c)
 *     KeWaitForMultipleObjects @ 0x1400E8C50 (KeWaitForMultipleObjects.c)
 *     KeRemoveQueueEx @ 0x1400E9870 (KeRemoveQueueEx.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     KeRemovePriQueue @ 0x1400FC3E0 (KeRemovePriQueue.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x140011680 (KiWakeQueueWaiter.c)
 *     KiExitThreadWait @ 0x140017FB0 (KiExitThreadWait.c)
 *     KiProcessThreadWaitList @ 0x14001C060 (KiProcessThreadWaitList.c)
 *     KiIncrementConcurrencyCount @ 0x14002E710 (KiIncrementConcurrencyCount.c)
 *     KiComputeDueTime @ 0x140038E70 (KiComputeDueTime.c)
 *     KiDecrementProcessStackCount @ 0x14003FB0C (KiDecrementProcessStackCount.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     KiTimerWaitTest @ 0x1400E43F0 (KiTimerWaitTest.c)
 *     KiSwapThread @ 0x1400EB0F0 (KiSwapThread.c)
 *     KiInsertTimerTable @ 0x1400EC830 (KiInsertTimerTable.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x140114EE8 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiActivateWaiterPriQueue @ 0x140115EEC (KiActivateWaiterPriQueue.c)
 *     KiTraceSetTimer @ 0x1402064DC (KiTraceSetTimer.c)
 */

__int64 __fastcall KiCommitThreadWait(__int64 a1, __int64 *a2, int a3, __int64 a4)
{
  __int64 v5; // r15
  int v6; // r13d
  char v7; // r12
  __int64 *v8; // r14
  struct _KPRCB *CurrentPrcb; // rbp
  BOOL v11; // edi
  char v12; // al
  volatile signed __int32 *v13; // rdi
  __int64 v14; // rdi
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v17; // rcx
  char v18; // al
  volatile signed __int32 *v19; // r12
  _BYTE *v20; // r14
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  bool v23; // zf
  __int64 v24; // r8
  __int64 v25; // rcx
  volatile signed __int32 **v26; // rax
  __int64 v27; // rcx
  __int64 *v28; // r15
  volatile signed __int32 *v29; // rsi
  __int64 *v30; // rcx
  __int64 **v31; // rax
  __int64 v32; // rcx
  char v33; // si
  __int64 v34; // rax
  int v35; // [rsp+30h] [rbp-68h] BYREF
  int v36; // [rsp+34h] [rbp-64h] BYREF
  __int64 v37; // [rsp+38h] [rbp-60h]
  int v38; // [rsp+40h] [rbp-58h]
  int v39; // [rsp+A0h] [rbp+8h] BYREF
  int v40; // [rsp+A8h] [rbp+10h] BYREF
  char v41; // [rsp+B0h] [rbp+18h]

  v37 = a4;
  v5 = a1 + 256;
  v6 = 0;
  v7 = 0;
  v8 = a2;
  _m_prefetchw((const void *)(a1 + 112));
  if ( a3 )
  {
    *(_DWORD *)(a1 + 116) |= 0x200u;
    *(_DWORD *)v5 |= 0x40000080u;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  *(_QWORD *)(a1 + 208) = a2;
  v11 = *(_BYTE *)(a1 + 391) && (*(_DWORD *)(a1 + 120) & 0x20) != 0 && *(char *)(a1 + 195) < 25;
  v40 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v40);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v12 = *(_BYTE *)(a1 + 112);
  if ( (v12 & 0xE7) == 0 )
  {
    *(_BYTE *)(a1 + 112) = v12 & 0xF8 | 1;
    if ( v11 )
    {
      v35 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->WaitLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v35);
        while ( CurrentPrcb->WaitLock );
      }
      Blink = CurrentPrcb->WaitListHead.Blink;
      v17 = (struct _LIST_ENTRY *)(a1 + 216);
      if ( Blink->Flink != &CurrentPrcb->WaitListHead )
        __fastfail(3u);
      v17->Flink = &CurrentPrcb->WaitListHead;
      *(_QWORD *)(a1 + 224) = Blink;
      Blink->Flink = v17;
      CurrentPrcb->WaitListHead.Blink = v17;
      *(_QWORD *)(a1 + 712) = CurrentPrcb;
      _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->WaitLock, 0LL);
    }
    if ( (*(_DWORD *)(a1 + 120) & 0x800) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xBu);
    if ( (*(_DWORD *)(a1 + 116) & 0x80000) != 0
      && (*(_DWORD *)(a1 + 120) & 0x2000) != 0
      && !_interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0x13u) )
    {
      v6 = 1;
    }
    v41 = 0;
    if ( a3 == 2 )
    {
      v21 = *(unsigned int *)(a1 + 1504);
      if ( *(_BYTE *)(a1 + 391) )
      {
        if ( !*(_DWORD *)(a1 + 484) && !*(_BYTE *)(a1 + 390) && !*(_BYTE *)(a1 + 192) )
        {
          v41 = 1;
          if ( (_DWORD)v21 )
            v37 += v21;
        }
      }
    }
    if ( *(_BYTE *)(a1 + 643) == 15 || (v13 = *(volatile signed __int32 **)(a1 + 232)) == 0LL )
    {
      *(_QWORD *)(a1 + 64) = 0LL;
      goto LABEL_16;
    }
    _m_prefetchw((const void *)v13);
    if ( (*(_BYTE *)v13 & 0x7F) == 0x15 )
    {
      v27 = (unsigned __int8)*(_DWORD *)(a1 + 540);
      *(_DWORD *)(a1 + 540) = (unsigned __int8)*(_DWORD *)(a1 + 540) | 0x100;
      _InterlockedDecrement(&v13[v27 + 134]);
    }
    else
    {
      _InterlockedDecrement(v13 + 10);
    }
    if ( _interlockedbittestandset(v13, 7u) )
      v18 = 0;
    else
      v18 = 1;
    *(_QWORD *)(a1 + 64) = 0LL;
    if ( v18 )
    {
      if ( (*(_BYTE *)v13 & 0x7F) != 0x15 )
      {
        if ( *((_DWORD *)v13 + 10) < *((_DWORD *)v13 + 11) )
        {
          v19 = (volatile signed __int32 *)*((_QWORD *)v13 + 3);
          v20 = v13 + 6;
          if ( v19 != v13 + 6 && *((volatile signed __int32 **)v13 + 1) != v13 + 2 )
          {
            v25 = *(_QWORD *)v19;
            v26 = (volatile signed __int32 **)*((_QWORD *)v19 + 1);
            if ( *(volatile signed __int32 **)(*(_QWORD *)v19 + 8LL) != v19 || *v26 != v19 )
              __fastfail(3u);
            *v26 = (volatile signed __int32 *)v25;
            *(_QWORD *)(v25 + 8) = v26;
            *(_QWORD *)v19 = 0LL;
            if ( KiWakeQueueWaiter((__int64)KeGetCurrentPrcb(), (__int64)v13, (__int64)v19) )
            {
              --*((_DWORD *)v13 + 1);
              _InterlockedAnd(v13, 0xFFFFFF7F);
              goto LABEL_16;
            }
            v34 = *(_QWORD *)v20;
            if ( *(_BYTE **)(*(_QWORD *)v20 + 8LL) != v20 )
              __fastfail(3u);
            *(_QWORD *)v19 = v34;
            *((_QWORD *)v19 + 1) = v20;
            *(_QWORD *)(v34 + 8) = v19;
            *(_QWORD *)v20 = v19;
          }
        }
        _InterlockedAnd(v13, 0xFFFFFF7F);
        goto LABEL_16;
      }
      KiActivateWaiterPriQueue(v13);
    }
    else
    {
      KiActivateWaiterQueueWithNoLocks(a1, v13, 0LL);
    }
LABEL_16:
    if ( v6 )
      KiDecrementProcessStackCount(*(_QWORD *)(a1 + 184));
    *(_BYTE *)(a1 + 565) = 0;
    if ( !a3 )
      return KiSwapThread(a1);
    if ( a3 == 2 )
    {
      v22 = v37 + MEMORY[0xFFFFF780000003B0] + *(_QWORD *)(a1 + 248);
      *(_QWORD *)(v5 + 24) = v22;
      v22 >>= 18;
      v39 = (unsigned __int8)v22;
      v38 = *(_DWORD *)v5;
      BYTE1(v38) &= ~1u;
      v23 = v41 == 0;
      BYTE2(v38) = v22;
      *(_DWORD *)v5 = v38;
      if ( !v23 )
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 544) + 1984LL));
    }
    else if ( !(unsigned int)KiComputeDueTime((int *)v5, v37, 0, &v39) )
    {
      goto LABEL_93;
    }
    if ( (unsigned __int8)KiInsertTimerTable((_DWORD)CurrentPrcb, v5, 0, v39, 0LL) )
    {
      if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
      {
        LOBYTE(v24) = 1;
        KiTraceSetTimer(v5, 0LL, v24);
      }
      else
      {
        _InterlockedAnd((volatile signed __int32 *)v5, 0xFFFFFF7F);
      }
      return KiSwapThread(a1);
    }
LABEL_93:
    KiTimerWaitTest((__int64)CurrentPrcb, v5, 0LL);
    return KiSwapThread(a1);
  }
  if ( (v12 & 7) == 0 )
  {
    if ( (v12 & 0x20) != 0 )
    {
      *(_QWORD *)(a1 + 200) = 256LL;
    }
    else
    {
      v7 = 1;
      if ( (v12 & 0x40) != 0 )
        *(_QWORD *)(a1 + 200) = 192LL;
      else
        *(_QWORD *)(a1 + 200) = 257LL;
    }
  }
  *(_BYTE *)(a1 + 388) = 2;
  if ( *(_BYTE *)(a1 + 643) == 15 )
  {
    v32 = *(_QWORD *)(a1 + 232);
    if ( v32 )
      KiIncrementConcurrencyCount(v32, a1);
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( a3 )
    *(_DWORD *)(a1 + 116) &= ~0x200u;
  v14 = *(_QWORD *)(a1 + 200);
  if ( v7 )
  {
    v33 = *(_BYTE *)(a1 + 391);
    v36 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v36);
      while ( *(_QWORD *)(a1 + 64) );
    }
    if ( v14 == 257 )
    {
      if ( (*(_DWORD *)(a1 + 116) & 0x10) != 0 )
      {
        if ( *(_BYTE *)(v33 + a1 + 114) )
        {
          *(_BYTE *)(v33 + a1 + 114) = 0;
        }
        else if ( v33 )
        {
          *(_BYTE *)(a1 + 114) = 0;
        }
      }
      else
      {
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 3u);
      }
    }
    else if ( *(_QWORD *)(a1 + 168) != a1 + 168 )
    {
      *(_BYTE *)(a1 + 194) = 1;
    }
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  v28 = &v8[6 * *(unsigned __int8 *)(a1 + 587)];
  do
  {
    if ( *((_BYTE *)v8 + 17) < 5u )
    {
      v29 = (volatile signed __int32 *)v8[4];
      KiAcquireKobjectLockSafe(v29);
      if ( *((_BYTE *)v8 + 17) == 4 )
      {
        v30 = (__int64 *)*v8;
        v31 = (__int64 **)v8[1];
        if ( *(__int64 **)(*v8 + 8) != v8 || *v31 != v8 )
          __fastfail(3u);
        *v31 = v30;
        v30[1] = (__int64)v31;
      }
      _InterlockedAnd(v29, 0xFFFFFF7F);
    }
    v8 += 6;
  }
  while ( v8 != v28 );
  if ( CurrentPrcb->DeferredReadyListHead.Next )
    KiProcessThreadWaitList((__int64)CurrentPrcb, 1u, 0, 0);
  KiExitThreadWait((__int64)CurrentPrcb, a1, 1);
  return v14;
}
