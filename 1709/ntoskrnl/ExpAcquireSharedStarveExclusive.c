/*
 * XREFs of ExpAcquireSharedStarveExclusive @ 0x14007CE20
 * Callers:
 *     CcPinFileData @ 0x140079AD0 (CcPinFileData.c)
 *     ExAcquireSharedStarveExclusive @ 0x140115FD0 (ExAcquireSharedStarveExclusive.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpWaitForResource @ 0x14006B490 (ExpWaitForResource.c)
 *     ExpFindCurrentThread @ 0x140080790 (ExpFindCurrentThread.c)
 *     ExpGetThreadResourceHint @ 0x1400808E0 (ExpGetThreadResourceHint.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x14008B4F0 (KxWaitForLockOwnerShipWithIrql.c)
 *     ExpBoostIoAfterAcquire @ 0x1400F19F0 (ExpBoostIoAfterAcquire.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     ExpApplyPrewaitBoost @ 0x140117340 (ExpApplyPrewaitBoost.c)
 *     ExpFindEmptyEntry @ 0x14011D590 (ExpFindEmptyEntry.c)
 *     ExpTryAcquireResourceSharedStarveExclusive @ 0x1401270FC (ExpTryAcquireResourceSharedStarveExclusive.c)
 *     ExpPrepareToWaitForResourceShared @ 0x14012DBF4 (ExpPrepareToWaitForResourceShared.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x140204C6C (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     PerfLogExecutiveResourceAcquire @ 0x14027E5C8 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x14027EA9C (PerfLogExecutiveResourceWait.c)
 */

char __fastcall ExpAcquireSharedStarveExclusive(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // r14
  bool v5; // si
  unsigned __int64 *v6; // rcx
  unsigned int SpareByte0; // edi
  char v8; // al
  __int64 v9; // rdx
  int v10; // eax
  __int64 Next; // rax
  __int16 v13; // ax
  int ThreadResourceHint; // eax
  __int64 EmptyEntry; // rax
  __int64 v16; // rdx
  int v17; // eax
  unsigned int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  unsigned int v24; // edi
  __int64 v25; // r8
  __int64 v26; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v28[40]; // [rsp+48h] [rbp-28h] BYREF
  void *retaddr; // [rsp+98h] [rbp+28h]
  unsigned __int8 v30; // [rsp+A0h] [rbp+30h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x63A4u);
  v6 = (unsigned __int64 *)(a1 + 96);
  SpareByte0 = 0;
  v30 = 2;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = v6;
  _disable();
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v8 = KiFastAcquireQueuedSpinLockInstrumented(&LockHandle, v6, &v30);
  }
  else
  {
    v8 = 0;
    v9 = _InterlockedExchange64((volatile __int64 *)v6, (__int64)&LockHandle);
    if ( v9 )
    {
      KxWaitForLockOwnerShipWithIrql(&LockHandle, v9, &v30);
      v8 = 1;
    }
  }
  if ( v8 )
  {
    _disable();
    __writecr8(v30);
  }
  do
  {
    if ( !*(_DWORD *)(a1 + 64) )
    {
      v10 = *(_DWORD *)(a1 + 56) & 7;
      *(_WORD *)(a1 + 24) = 1;
      *(_DWORD *)(a1 + 64) = 1;
      *(_DWORD *)(a1 + 56) = v10 | 8;
      *(_QWORD *)(a1 + 48) = CurrentThread;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
      }
      else
      {
        _m_prefetchw(&LockHandle);
        Next = (__int64)LockHandle.LockQueue.Next;
        if ( !LockHandle.LockQueue.Next )
        {
          if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                               (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                               0LL,
                                               (signed __int64)&LockHandle) == &LockHandle )
            goto LABEL_10;
          Next = KxWaitForLockChainValid(&LockHandle);
        }
        LockHandle.LockQueue.Next = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
      }
LABEL_10:
      _enable();
      __incgsdword(0x63ACu);
      __incgsdword(0x6364u);
      if ( !v5 )
        return 1;
      goto LABEL_39;
    }
    v13 = *(_WORD *)(a1 + 26) & 0x80;
    if ( v13 && *(struct _KTHREAD **)(a1 + 48) == CurrentThread )
    {
      v23 = *(_DWORD *)(a1 + 56);
      *(_DWORD *)(a1 + 56) = v23 + 8;
      v24 = (unsigned int)(v23 + 8) >> 3;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      _enable();
      __incgsdword(0x63A8u);
      __incgsdword(0x6364u);
      if ( !v5 )
        return 1;
      v25 = v24;
      v26 = 65585LL;
      goto LABEL_40;
    }
    if ( v13 )
    {
      EmptyEntry = ExpFindEmptyEntry(a1, &LockHandle);
    }
    else
    {
      ThreadResourceHint = ExpGetThreadResourceHint(CurrentThread);
      EmptyEntry = ExpFindCurrentThread(
                     a1,
                     (_DWORD)CurrentThread,
                     (unsigned int)&LockHandle,
                     1,
                     *(_DWORD *)(a1 + 76) != 0,
                     ThreadResourceHint);
    }
    v16 = EmptyEntry;
  }
  while ( !EmptyEntry );
  if ( *(struct _KTHREAD **)EmptyEntry == CurrentThread )
  {
    v17 = *(_DWORD *)(EmptyEntry + 8);
    *(_DWORD *)(v16 + 8) = v17 + 8;
    v18 = (unsigned int)(v17 + 8) >> 3;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    _enable();
    __incgsdword(0x63B0u);
    __incgsdword(0x6364u);
    if ( v5 )
    {
      v25 = v18;
      v26 = 65617LL;
      goto LABEL_40;
    }
    return 1;
  }
  if ( (unsigned __int8)ExpTryAcquireResourceSharedStarveExclusive(a1, EmptyEntry) )
  {
    v21 = *(_DWORD *)(v19 + 8) & 7;
    *(_QWORD *)v19 = CurrentThread;
    *(_DWORD *)(v19 + 8) = v21 | 8;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    _enable();
LABEL_21:
    if ( ((unsigned __int8)CurrentThread & 3) == 0 )
      SpareByte0 = CurrentThread->SchedulerApc.SpareByte0;
    ExpBoostIoAfterAcquire(a1, CurrentThread, SpareByte0);
    __incgsdword(0x63ACu);
    __incgsdword(0x6364u);
    if ( !v5 )
      return 1;
LABEL_39:
    v26 = 65601LL;
    v25 = 1LL;
LABEL_40:
    PerfLogExecutiveResourceAcquire(v26, a1, v25, *(unsigned int *)(a1 + 68));
    return 1;
  }
  if ( a2 )
  {
    v22 = *(_DWORD *)(v19 + 8) & 7;
    *(_QWORD *)v19 = CurrentThread;
    *(_DWORD *)(v19 + 8) = v22 | 8;
    ExpPrepareToWaitForResourceShared(v20, v28);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    _enable();
    __incgsdword(0x63B4u);
    if ( v5 )
      PerfLogExecutiveResourceWait(65604LL, a1, 0LL);
    ExpApplyPrewaitBoost(a1);
    ExpWaitForResource(
      (struct _LIST_ENTRY *)a1,
      (__int64)v28,
      0x10244u,
      (void (__fastcall *)(struct _LIST_ENTRY *))ExpApplyRewaitBoost);
    goto LABEL_21;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  _enable();
  __incgsdword(0x63B8u);
  return 0;
}
