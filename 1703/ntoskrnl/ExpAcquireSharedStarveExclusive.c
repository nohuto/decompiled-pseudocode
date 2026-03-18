/*
 * XREFs of ExpAcquireSharedStarveExclusive @ 0x14009C290
 * Callers:
 *     ExAcquireSharedStarveExclusive @ 0x140020280 (ExAcquireSharedStarveExclusive.c)
 *     CcPinFileData @ 0x14009C5A0 (CcPinFileData.c)
 * Callees:
 *     ExpApplyPrewaitBoost @ 0x140025088 (ExpApplyPrewaitBoost.c)
 *     ExpFindEmptyEntry @ 0x140027BC8 (ExpFindEmptyEntry.c)
 *     ExpTryAcquireResourceSharedStarveExclusive @ 0x1400331C0 (ExpTryAcquireResourceSharedStarveExclusive.c)
 *     ExpPrepareToWaitForResourceShared @ 0x14003ABE0 (ExpPrepareToWaitForResourceShared.c)
 *     ExpIsResourceOwned @ 0x14008FC00 (ExpIsResourceOwned.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpFindCurrentThread @ 0x1400909C0 (ExpFindCurrentThread.c)
 *     ExpDoesResourceHaveExclusiveWaiter @ 0x140090AF0 (ExpDoesResourceHaveExclusiveWaiter.c)
 *     ExpGetThreadResourceHint @ 0x140090B10 (ExpGetThreadResourceHint.c)
 *     ExpBoostIoAfterAcquire @ 0x140091CD0 (ExpBoostIoAfterAcquire.c)
 *     ExpWaitForResource @ 0x1400E7CC0 (ExpWaitForResource.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x14011C530 (KxWaitForLockOwnerShipWithIrql.c)
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x1401FE96C (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     PerfLogExecutiveResourceAcquire @ 0x140255D0C (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x1402561E0 (PerfLogExecutiveResourceWait.c)
 */

char __fastcall ExpAcquireSharedStarveExclusive(__int64 a1, char a2)
{
  __int64 CurrentThread; // r15
  bool v5; // r14
  unsigned __int64 *v6; // rcx
  unsigned int v7; // edi
  char v8; // al
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ecx
  char v12; // si
  int v13; // eax
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  __int16 v16; // ax
  bool HaveExclusiveWaiter; // al
  unsigned int v18; // edx
  _QWORD *EmptyEntry; // rax
  unsigned int v20; // edi
  unsigned int v21; // edi
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  int v25; // eax
  unsigned int v26; // edi
  unsigned int v27; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v29[40]; // [rsp+48h] [rbp-28h] BYREF
  void *retaddr; // [rsp+98h] [rbp+28h]
  unsigned __int8 v31; // [rsp+A0h] [rbp+30h] BYREF

  CurrentThread = (__int64)KeGetCurrentThread();
  v5 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x64E4u);
  v6 = (unsigned __int64 *)(a1 + 96);
  v7 = 0;
  v31 = 2;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = v6;
  _disable();
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v8 = KiFastAcquireQueuedSpinLockInstrumented(&LockHandle, v6, &v31);
  }
  else
  {
    v8 = 0;
    v9 = _InterlockedExchange64((volatile __int64 *)v6, (__int64)&LockHandle);
    if ( v9 )
    {
      KxWaitForLockOwnerShipWithIrql(&LockHandle, v9, &v31);
      v8 = 1;
    }
  }
  if ( v8 )
  {
    _disable();
    __writecr8(v31);
  }
  do
  {
    if ( !ExpIsResourceOwned(a1) )
    {
      v11 = *(_DWORD *)(a1 + 64);
      if ( v11 && (*(char *)(a1 + 26) < 0 || *(_DWORD *)(a1 + 76)) )
      {
        v12 = 0;
      }
      else
      {
        *(_WORD *)(a1 + 24) = 1;
        *(_DWORD *)(a1 + 64) = v11 + 1;
        v12 = 1;
      }
      v13 = *(_DWORD *)(a1 + 56) & 7;
      *(_QWORD *)(a1 + 48) = CurrentThread;
      *(_DWORD *)(a1 + 56) = v13 | 8;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
        goto LABEL_12;
      }
      _m_prefetchw(&LockHandle);
      Next = LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
        {
LABEL_12:
          _enable();
          __incgsdword(0x64ECu);
          __incgsdword(0x64A4u);
          if ( v5 )
            PerfLogExecutiveResourceAcquire(65601LL, a1, 1LL, *(unsigned int *)(a1 + 68));
          return v12;
        }
        Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
      goto LABEL_12;
    }
    v16 = *(_WORD *)(a1 + 26) & 0x80;
    if ( v16 && *(_QWORD *)(a1 + 48) == CurrentThread )
    {
      v26 = *(_DWORD *)(a1 + 56) & 7 | ((*(_DWORD *)(a1 + 56) & 0xFFFFFFF8) + 8);
      *(_DWORD *)(a1 + 56) = v26;
      v27 = v26 >> 3;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      _enable();
      __incgsdword(0x64E8u);
      __incgsdword(0x64A4u);
      if ( v5 )
        PerfLogExecutiveResourceAcquire(65585LL, a1, v27, *(unsigned int *)(a1 + 68));
      return 1;
    }
    if ( v16 )
    {
      EmptyEntry = ExpFindEmptyEntry(v10);
    }
    else
    {
      ExpGetThreadResourceHint(CurrentThread);
      HaveExclusiveWaiter = ExpDoesResourceHaveExclusiveWaiter(a1);
      EmptyEntry = ExpFindCurrentThread(a1, CurrentThread, &LockHandle, 1, HaveExclusiveWaiter, v18);
    }
  }
  while ( !EmptyEntry );
  if ( *EmptyEntry == CurrentThread )
  {
    v20 = EmptyEntry[1] & 7 | ((EmptyEntry[1] & 0xFFFFFFF8) + 8);
    *((_DWORD *)EmptyEntry + 2) = v20;
    v21 = v20 >> 3;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    _enable();
    __incgsdword(0x64F0u);
    __incgsdword(0x64A4u);
    if ( !v5 )
      return 1;
    PerfLogExecutiveResourceAcquire(65617LL, a1, v21, *(unsigned int *)(a1 + 68));
    return 1;
  }
  else
  {
    if ( ExpTryAcquireResourceSharedStarveExclusive(a1) )
    {
      v24 = *(_DWORD *)(v22 + 8) & 7;
      *(_QWORD *)v22 = CurrentThread;
      *(_DWORD *)(v22 + 8) = v24 | 8;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      _enable();
    }
    else
    {
      if ( !a2 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        _enable();
        __incgsdword(0x64F8u);
        return 0;
      }
      v25 = *(_DWORD *)(v22 + 8) & 7;
      *(_QWORD *)v22 = CurrentThread;
      *(_DWORD *)(v22 + 8) = v25 | 8;
      ExpPrepareToWaitForResourceShared(v23, (__int64)v29);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      _enable();
      __incgsdword(0x64F4u);
      if ( v5 )
        PerfLogExecutiveResourceWait(65604LL, a1, 0LL);
      ExpApplyPrewaitBoost();
      ExpWaitForResource(a1, v29, 66116LL, ExpApplyRewaitBoost);
    }
    if ( (CurrentThread & 3) == 0 )
      v7 = *(unsigned __int8 *)(CurrentThread + 649);
    ExpBoostIoAfterAcquire(a1, CurrentThread, v7);
    __incgsdword(0x64ECu);
    __incgsdword(0x64A4u);
    if ( !v5 )
      return 1;
    PerfLogExecutiveResourceAcquire(65601LL, a1, 1LL, *(unsigned int *)(a1 + 68));
    return 1;
  }
}
