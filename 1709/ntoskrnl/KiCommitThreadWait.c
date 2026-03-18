/*
 * XREFs of KiCommitThreadWait @ 0x14006DBD0
 * Callers:
 *     KeRemovePriQueue @ 0x140061A80 (KeRemovePriQueue.c)
 *     KeWaitForMultipleObjects @ 0x14006B570 (KeWaitForMultipleObjects.c)
 *     KeRemoveQueueEx @ 0x14006C920 (KeRemoveQueueEx.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     KiWaitForAllObjects @ 0x1400E3B9C (KiWaitForAllObjects.c)
 *     KeWaitForGate @ 0x1400E3F18 (KeWaitForGate.c)
 *     KeWaitForAlertByThreadId @ 0x1400E41B0 (KeWaitForAlertByThreadId.c)
 * Callees:
 *     KiWakePriQueueWaiter @ 0x140021A0C (KiWakePriQueueWaiter.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiWakeQueueWaiter @ 0x140061410 (KiWakeQueueWaiter.c)
 *     KiSwapThread @ 0x14006E1D0 (KiSwapThread.c)
 *     KiInsertTimerTable @ 0x14006FA60 (KiInsertTimerTable.c)
 *     KiIncrementConcurrencyCount @ 0x140076388 (KiIncrementConcurrencyCount.c)
 *     KiTimerWaitTest @ 0x140093D00 (KiTimerWaitTest.c)
 *     KiDecrementProcessStackCount @ 0x1400AD3D8 (KiDecrementProcessStackCount.c)
 *     KiComputeDueTime @ 0x1400E2250 (KiComputeDueTime.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x140107730 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiAttemptFastRemovePriQueue @ 0x140107950 (KiAttemptFastRemovePriQueue.c)
 *     KiProcessThreadWaitList @ 0x1401122C0 (KiProcessThreadWaitList.c)
 *     KiExitThreadWait @ 0x14011B140 (KiExitThreadWait.c)
 *     KiTraceSetTimer @ 0x14020CA7C (KiTraceSetTimer.c)
 */

__int64 __fastcall KiCommitThreadWait(__int64 a1, __int64 *a2, int a3, __int64 a4)
{
  int *v5; // r15
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
  __int64 v26; // rax
  _QWORD *v27; // r14
  __int64 v28; // r12
  __int64 v29; // rcx
  volatile signed __int32 **v30; // rax
  __int64 v31; // r8
  __int64 *v32; // r15
  volatile signed __int32 *v33; // rsi
  __int64 *v34; // rcx
  __int64 **v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  char v38; // si
  volatile signed __int32 *v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  int v42; // [rsp+30h] [rbp-68h] BYREF
  signed int v43; // [rsp+34h] [rbp-64h]
  int v44; // [rsp+38h] [rbp-60h] BYREF
  __int64 v45; // [rsp+40h] [rbp-58h]
  int v46; // [rsp+48h] [rbp-50h]
  int v47; // [rsp+A0h] [rbp+8h] BYREF
  int v48; // [rsp+A8h] [rbp+10h] BYREF
  char v49; // [rsp+B0h] [rbp+18h]

  v45 = a4;
  v5 = (int *)(a1 + 256);
  v6 = 0;
  v7 = 0;
  v8 = a2;
  _m_prefetchw((const void *)(a1 + 112));
  if ( a3 )
  {
    *(_DWORD *)(a1 + 116) |= 0x200u;
    *v5 |= 0x40000080u;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  *(_QWORD *)(a1 + 208) = a2;
  v11 = *(_BYTE *)(a1 + 391) && (*(_DWORD *)(a1 + 120) & 0x40) != 0 && *(char *)(a1 + 195) < 25;
  v48 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v48);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v12 = *(_BYTE *)(a1 + 112);
  if ( (v12 & 0xE7) == 0 )
  {
    *(_BYTE *)(a1 + 112) = v12 & 0xF8 | 1;
    if ( v11 )
    {
      v42 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->WaitLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v42);
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
    if ( (*(_DWORD *)(a1 + 120) & 0x1000) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xCu);
    if ( (((*(_DWORD *)(a1 + 116) & 0x80000) != 0) & _bittest((const signed __int32 *)(a1 + 120), 0xEu)) != 0
      && !_interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0x14u) )
    {
      v6 = 1;
    }
    v49 = 0;
    if ( a3 == 2 )
    {
      v21 = *(unsigned int *)(a1 + 1504);
      if ( *(_BYTE *)(a1 + 391) )
      {
        if ( !*(_DWORD *)(a1 + 484) && !*(_BYTE *)(a1 + 390) && !*(_BYTE *)(a1 + 192) )
        {
          v49 = 1;
          if ( (_DWORD)v21 )
            v45 += v21;
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
      v25 = (unsigned __int8)*(_DWORD *)(a1 + 540);
      *(_DWORD *)(a1 + 540) = (unsigned __int8)*(_DWORD *)(a1 + 540) | 0x100;
      _InterlockedDecrement(&v13[v25 + 134]);
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
      if ( (*(_BYTE *)v13 & 0x7F) == 0x15 )
      {
        if ( *((volatile signed __int32 **)v13 + 1) != v13 + 2 )
        {
          if ( *((_DWORD *)v13 + 1) )
          {
            v26 = KiAttemptFastRemovePriQueue((ULONG_PTR)v13);
            v27 = (_QWORD *)v26;
            if ( v26 )
            {
              v28 = v43;
              if ( !(unsigned __int8)KiWakePriQueueWaiter((__int64)KeGetCurrentPrcb(), (__int64)v13, v26, v43) )
              {
                ++*((_DWORD *)v13 + 1);
                v39 = &v13[4 * v28 + 6];
                v40 = *(_QWORD *)v39;
                if ( *(volatile signed __int32 **)(*(_QWORD *)v39 + 8LL) != v39 )
                  __fastfail(3u);
                *v27 = v40;
                v27[1] = v39;
                *(_QWORD *)(v40 + 8) = v27;
                *(_QWORD *)v39 = v27;
              }
            }
          }
        }
      }
      else if ( *((_DWORD *)v13 + 10) < *((_DWORD *)v13 + 11) )
      {
        v19 = (volatile signed __int32 *)*((_QWORD *)v13 + 3);
        v20 = v13 + 6;
        if ( v19 != v13 + 6 && *((volatile signed __int32 **)v13 + 1) != v13 + 2 )
        {
          v29 = *(_QWORD *)v19;
          v30 = (volatile signed __int32 **)*((_QWORD *)v19 + 1);
          if ( *(volatile signed __int32 **)(*(_QWORD *)v19 + 8LL) != v19 || *v30 != v19 )
            __fastfail(3u);
          *v30 = (volatile signed __int32 *)v29;
          *(_QWORD *)(v29 + 8) = v30;
          *(_QWORD *)v19 = 0LL;
          if ( KiWakeQueueWaiter((__int64)KeGetCurrentPrcb(), (__int64)v13, (__int64)v19) )
          {
            --*((_DWORD *)v13 + 1);
            _InterlockedAnd(v13, 0xFFFFFF7F);
            goto LABEL_16;
          }
          v41 = *(_QWORD *)v20;
          if ( *(_BYTE **)(*(_QWORD *)v20 + 8LL) != v20 )
            __fastfail(3u);
          *(_QWORD *)v19 = v41;
          *((_QWORD *)v19 + 1) = v20;
          *(_QWORD *)(v41 + 8) = v19;
          *(_QWORD *)v20 = v19;
        }
      }
      _InterlockedAnd(v13, 0xFFFFFF7F);
      goto LABEL_16;
    }
    KiActivateWaiterQueueWithNoLocks(a1, v13);
LABEL_16:
    if ( v6 )
      KiDecrementProcessStackCount(*(_QWORD *)(a1 + 184));
    *(_BYTE *)(a1 + 565) = 0;
    if ( !a3 )
      return KiSwapThread(a1, CurrentPrcb);
    if ( a3 == 2 )
    {
      v22 = v45 + MEMORY[0xFFFFF780000003B0] + *(_QWORD *)(a1 + 248);
      *((_QWORD *)v5 + 3) = v22;
      v22 >>= 18;
      v47 = (unsigned __int8)v22;
      v46 = *v5;
      BYTE1(v46) &= ~1u;
      v23 = v49 == 0;
      BYTE2(v46) = v22;
      *v5 = v46;
      if ( !v23 )
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 544) + 2008LL));
    }
    else if ( !(unsigned int)KiComputeDueTime(v5, v45, 0LL, &v47) )
    {
      goto LABEL_88;
    }
    if ( (unsigned __int8)KiInsertTimerTable((_DWORD)CurrentPrcb, (_DWORD)v5, 0, v47, 0LL) )
    {
      if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
      {
        LOBYTE(v24) = 1;
        KiTraceSetTimer(v5, 0LL, v24);
      }
      else
      {
        _InterlockedAnd(v5, 0xFFFFFF7F);
      }
      return KiSwapThread(a1, CurrentPrcb);
    }
LABEL_88:
    KiTimerWaitTest(CurrentPrcb, v5, 0LL);
    return KiSwapThread(a1, CurrentPrcb);
  }
  if ( (v12 & 7) == 0 )
  {
    if ( (v12 & 0x20) != 0 )
    {
      *(_QWORD *)(a1 + 200) = 256LL;
    }
    else
    {
      v23 = (v12 & 0x40) == 0;
      v7 = 1;
      v37 = 192LL;
      if ( v23 )
        v37 = 257LL;
      *(_QWORD *)(a1 + 200) = v37;
    }
  }
  *(_BYTE *)(a1 + 388) = 2;
  if ( *(_BYTE *)(a1 + 643) == 15 )
  {
    v36 = *(_QWORD *)(a1 + 232);
    if ( v36 )
      KiIncrementConcurrencyCount(v36, a1);
  }
  v31 = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( a3 )
    *(_DWORD *)(a1 + 116) &= ~0x200u;
  v14 = *(_QWORD *)(a1 + 200);
  if ( v7 )
  {
    v38 = *(_BYTE *)(a1 + 391);
    v44 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v44);
      while ( *(_QWORD *)(a1 + 64) );
    }
    if ( v14 == 257 )
    {
      if ( (*(_DWORD *)(a1 + 116) & 0x10) != 0 )
      {
        if ( *(_BYTE *)(v38 + a1 + 114) )
        {
          *(_BYTE *)(v38 + a1 + 114) = 0;
        }
        else if ( v38 )
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
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  v32 = &v8[6 * *(unsigned __int8 *)(a1 + 587)];
  do
  {
    if ( *((_BYTE *)v8 + 17) < 5u )
    {
      v33 = (volatile signed __int32 *)v8[4];
      KiAcquireKobjectLockSafe(v33);
      if ( *((_BYTE *)v8 + 17) == 4 )
      {
        v34 = (__int64 *)*v8;
        v35 = (__int64 **)v8[1];
        if ( *(__int64 **)(*v8 + 8) != v8 || *v35 != v8 )
          __fastfail(3u);
        *v35 = v34;
        v34[1] = (__int64)v35;
      }
      _InterlockedAnd(v33, 0xFFFFFF7F);
    }
    v8 += 6;
  }
  while ( v8 != v32 );
  if ( CurrentPrcb->DeferredReadyListHead.Next )
    KiProcessThreadWaitList(CurrentPrcb, 1LL, 0LL, 0LL);
  LOBYTE(v31) = 1;
  KiExitThreadWait(CurrentPrcb, a1, v31);
  return v14;
}
