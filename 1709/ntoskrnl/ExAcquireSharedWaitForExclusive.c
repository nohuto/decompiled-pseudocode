/*
 * XREFs of ExAcquireSharedWaitForExclusive @ 0x14013EE50
 * Callers:
 *     FsRtlAcquireFileForModWriteEx @ 0x1400EF610 (FsRtlAcquireFileForModWriteEx.c)
 *     ExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x140285940 (ExEnterCriticalRegionAndAcquireSharedWaitForExclusive.c)
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
 *     ExpPrepareToWaitForResourceShared @ 0x14012DBF4 (ExpPrepareToWaitForResourceShared.c)
 *     ExpTryAcquireResourceShared @ 0x14013FED8 (ExpTryAcquireResourceShared.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x140204C6C (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     PerfLogExecutiveResourceAcquire @ 0x14027E5C8 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x14027EA9C (PerfLogExecutiveResourceWait.c)
 */

BOOLEAN __stdcall ExAcquireSharedWaitForExclusive(PERESOURCE Resource, BOOLEAN Wait)
{
  ERESOURCE_THREAD CurrentThread; // rsi
  bool v5; // r15
  KSPIN_LOCK *p_SpinLock; // rdi
  unsigned int v7; // r14d
  char v8; // al
  _QWORD *v9; // rdx
  __int16 v10; // ax
  unsigned int ThreadResourceHint; // eax
  _QWORD *v12; // rax
  ULONG ActiveEntries; // edx
  int v14; // edi
  __int64 Next; // rax
  __int64 v16; // rcx
  BOOLEAN v17; // di
  ULONG v19; // ecx
  _QWORD *EmptyEntry; // rax
  _QWORD *v21; // r13
  ULONG v22; // edi
  ULONG v23; // edi
  char v24; // al
  _QWORD *v25; // rdx
  _QWORD *v26; // rax
  int v27; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-19h] BYREF
  _BYTE v29[32]; // [rsp+50h] [rbp-1h] BYREF
  void *retaddr; // [rsp+B0h] [rbp+5Fh]
  unsigned __int8 v31; // [rsp+C0h] [rbp+6Fh] BYREF
  unsigned __int8 v32; // [rsp+C8h] [rbp+77h] BYREF

  if ( (Resource->ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  CurrentThread = (ERESOURCE_THREAD)KeGetCurrentThread();
  v5 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x63BCu);
  p_SpinLock = &Resource->SpinLock;
  v7 = 0;
  v31 = 2;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = &Resource->SpinLock;
  _disable();
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v8 = KiFastAcquireQueuedSpinLockInstrumented(&LockHandle, &Resource->SpinLock, &v31);
  }
  else
  {
    v8 = 0;
    v9 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)p_SpinLock, (__int64)&LockHandle);
    if ( v9 )
    {
      KxWaitForLockOwnerShipWithIrql((__int64)&LockHandle, v9, &v31);
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
    while ( 1 )
    {
      if ( !Resource->ActiveEntries )
      {
        v17 = ExpTryAcquireResourceShared(Resource);
        v19 = Resource->OwnerEntry.TableSize & 7;
        Resource->OwnerEntry.OwnerThread = CurrentThread;
        Resource->OwnerEntry.TableSize = v19 | 8;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        _enable();
        __incgsdword(0x63C4u);
        __incgsdword(0x6364u);
        if ( v5 )
          PerfLogExecutiveResourceAcquire(65601LL, Resource, 1LL, Resource->ContentionCount);
        return v17;
      }
      v10 = Resource->Flag & 0x80;
      if ( v10 && Resource->OwnerEntry.OwnerThread == CurrentThread )
      {
        v22 = Resource->OwnerEntry.TableSize + 8;
        Resource->OwnerEntry.TableSize = v22;
        v23 = v22 >> 3;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        _enable();
        __incgsdword(0x63C0u);
        __incgsdword(0x6364u);
        if ( v5 )
          PerfLogExecutiveResourceAcquire(65585LL, Resource, v23, Resource->ContentionCount);
        return 1;
      }
      if ( !v10 && !Resource->NumberOfExclusiveWaiters )
        break;
      if ( !Wait )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        _enable();
        __incgsdword(0x63D0u);
        return 0;
      }
      if ( !v10 )
      {
        v21 = 0LL;
        goto LABEL_45;
      }
      EmptyEntry = ExpFindEmptyEntry((__int64)Resource, (__int64)&LockHandle);
      v21 = EmptyEntry;
      if ( EmptyEntry )
      {
        *EmptyEntry = CurrentThread;
        *((_DWORD *)EmptyEntry + 2) = EmptyEntry[1] & 7 | 8;
LABEL_45:
        ExpPrepareToWaitForResourceShared((__int64)Resource, (__int64)v29);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        _enable();
        __incgsdword(0x63CCu);
        if ( v5 )
          PerfLogExecutiveResourceWait(65604LL, Resource, 0LL);
        ExpApplyPrewaitBoost();
        ExpWaitForResource(
          &Resource->SystemResourcesList,
          (__int64)v29,
          0x10244u,
          (void (__fastcall *)(struct _LIST_ENTRY *))ExpApplyRewaitBoost);
        if ( !v21 )
        {
          v32 = 2;
          LockHandle.LockQueue.Lock = p_SpinLock;
          LockHandle.LockQueue.Next = 0LL;
          _disable();
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            v24 = KiFastAcquireQueuedSpinLockInstrumented(&LockHandle, p_SpinLock, &v32);
          }
          else
          {
            v24 = 0;
            v25 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)p_SpinLock, (__int64)&LockHandle);
            if ( v25 )
            {
              KxWaitForLockOwnerShipWithIrql((__int64)&LockHandle, v25, &v32);
              v24 = 1;
            }
          }
          if ( v24 )
          {
            _disable();
            __writecr8(v32);
          }
          do
            v26 = ExpFindCurrentThread((__int64)Resource, CurrentThread, (__int64)&LockHandle, 1, 1, 0);
          while ( !v26 );
          v27 = v26[1] & 7;
          *v26 = CurrentThread;
          *((_DWORD *)v26 + 2) = v27 | 8;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          _enable();
        }
        if ( (CurrentThread & 3) == 0 )
          v7 = *(unsigned __int8 *)(CurrentThread + 649);
        ExpBoostIoAfterAcquire((__int64)Resource, CurrentThread, v7);
        __incgsdword(0x63C4u);
        __incgsdword(0x6364u);
        if ( !v5 )
          return 1;
        PerfLogExecutiveResourceAcquire(65601LL, Resource, 1LL, Resource->ContentionCount);
        return 1;
      }
    }
    ThreadResourceHint = ExpGetThreadResourceHint(CurrentThread);
    v12 = ExpFindCurrentThread((__int64)Resource, CurrentThread, (__int64)&LockHandle, 1, 1, ThreadResourceHint);
  }
  while ( !v12 );
  if ( *v12 )
  {
    *((_DWORD *)v12 + 2) += 8;
  }
  else
  {
    *v12 = CurrentThread;
    *((_DWORD *)v12 + 2) = v12[1] & 7 | 8;
    ActiveEntries = Resource->ActiveEntries;
    if ( !ActiveEntries || (Resource->ReservedLowFlags & 0x80u) == 0 && !Resource->NumberOfExclusiveWaiters )
    {
      Resource->ActiveCount = 1;
      Resource->ActiveEntries = ActiveEntries + 1;
    }
  }
  v14 = *((_DWORD *)v12 + 2) >> 3;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    goto LABEL_20;
  }
  _m_prefetchw(&LockHandle);
  Next = (__int64)LockHandle.LockQueue.Next;
  if ( LockHandle.LockQueue.Next )
    goto LABEL_26;
  if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                       (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                       0LL,
                                       (signed __int64)&LockHandle) != &LockHandle )
  {
    Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
LABEL_26:
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
  }
LABEL_20:
  _enable();
  if ( v14 == 1 )
  {
    __incgsdword(0x63C4u);
    v16 = 65601LL;
  }
  else
  {
    __incgsdword(0x63C8u);
    v16 = 65617LL;
  }
  __incgsdword(0x63C8u);
  if ( !v5 )
    return 1;
  PerfLogExecutiveResourceAcquire(v16, Resource, 1LL, Resource->ContentionCount);
  return 1;
}
