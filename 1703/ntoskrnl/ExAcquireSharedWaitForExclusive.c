/*
 * XREFs of ExAcquireSharedWaitForExclusive @ 0x140143640
 * Callers:
 *     FsRtlAcquireFileForModWriteEx @ 0x140022B88 (FsRtlAcquireFileForModWriteEx.c)
 *     ExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x14025C020 (ExEnterCriticalRegionAndAcquireSharedWaitForExclusive.c)
 * Callees:
 *     ExpApplyPrewaitBoost @ 0x140025088 (ExpApplyPrewaitBoost.c)
 *     ExpFindEmptyEntry @ 0x140027BC8 (ExpFindEmptyEntry.c)
 *     ExpPrepareToWaitForResourceShared @ 0x14003ABE0 (ExpPrepareToWaitForResourceShared.c)
 *     ExpIsResourceOwned @ 0x14008FC00 (ExpIsResourceOwned.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpFindCurrentThread @ 0x1400909C0 (ExpFindCurrentThread.c)
 *     ExpDoesResourceHaveExclusiveWaiter @ 0x140090AF0 (ExpDoesResourceHaveExclusiveWaiter.c)
 *     ExpGetThreadResourceHint @ 0x140090B10 (ExpGetThreadResourceHint.c)
 *     ExpBoostIoAfterAcquire @ 0x140091CD0 (ExpBoostIoAfterAcquire.c)
 *     ExpWaitForResource @ 0x1400E7CC0 (ExpWaitForResource.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x14011C530 (KxWaitForLockOwnerShipWithIrql.c)
 *     ExpTryAcquireResourceShared @ 0x140143838 (ExpTryAcquireResourceShared.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x1401FE96C (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     PerfLogExecutiveResourceAcquire @ 0x140255D0C (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x1402561E0 (PerfLogExecutiveResourceWait.c)
 */

BOOLEAN __stdcall ExAcquireSharedWaitForExclusive(PERESOURCE Resource, BOOLEAN Wait)
{
  ERESOURCE_THREAD CurrentThread; // r14
  KSPIN_LOCK *p_SpinLock; // r15
  bool v6; // r12
  char v7; // al
  _QWORD *v8; // rdx
  __int64 v9; // rcx
  __int16 v10; // dx
  unsigned int ThreadResourceHint; // eax
  _QWORD *v12; // rax
  _QWORD *v13; // r8
  int v14; // ebx
  __int64 v15; // rcx
  BOOLEAN v16; // bl
  ULONG v18; // ecx
  _QWORD *EmptyEntry; // rax
  _QWORD *v20; // rbx
  ULONG v21; // ebx
  ULONG v22; // ebx
  __int64 v23; // r8
  char v24; // al
  _QWORD *v25; // rdx
  _QWORD *v26; // rax
  int v27; // ecx
  unsigned int v28; // r8d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v30[40]; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int8 v31; // [rsp+B8h] [rbp+48h] BYREF
  unsigned __int8 v32; // [rsp+C0h] [rbp+50h] BYREF

  if ( (Resource->ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  CurrentThread = (ERESOURCE_THREAD)KeGetCurrentThread();
  p_SpinLock = &Resource->SpinLock;
  v6 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x64FCu);
  v31 = 2;
  LockHandle.LockQueue.Lock = &Resource->SpinLock;
  LockHandle.LockQueue.Next = 0LL;
  _disable();
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v7 = KiFastAcquireQueuedSpinLockInstrumented(&LockHandle, &Resource->SpinLock, &v31);
  }
  else
  {
    v7 = 0;
    v8 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)p_SpinLock, (__int64)&LockHandle);
    if ( v8 )
    {
      KxWaitForLockOwnerShipWithIrql((__int64)&LockHandle, v8, &v31);
      v7 = 1;
    }
  }
  if ( v7 )
  {
    _disable();
    __writecr8(v31);
  }
  while ( ExpIsResourceOwned((__int64)Resource) )
  {
    v10 = Resource->Flag & 0x80;
    if ( v10 && Resource->OwnerEntry.OwnerThread == CurrentThread )
    {
      v21 = Resource->OwnerEntry.TableSize & 7 | ((Resource->OwnerEntry.TableSize & 0xFFFFFFF8) + 8);
      Resource->OwnerEntry.TableSize = v21;
      v22 = v21 >> 3;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      _enable();
      __incgsdword(0x6500u);
      __incgsdword(0x64A4u);
      if ( v6 )
      {
        v23 = v22;
        v15 = 65585LL;
        goto LABEL_32;
      }
      return 1;
    }
    if ( v10 || ExpDoesResourceHaveExclusiveWaiter(v9) )
    {
      if ( !Wait )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        _enable();
        __incgsdword(0x6510u);
        return 0;
      }
      if ( !v10 )
      {
        v20 = 0LL;
LABEL_37:
        ExpPrepareToWaitForResourceShared((__int64)Resource, (__int64)v30);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        _enable();
        __incgsdword(0x650Cu);
        if ( v6 )
          PerfLogExecutiveResourceWait(65604LL, Resource, 0LL);
        ExpApplyPrewaitBoost();
        ExpWaitForResource(
          Resource,
          (__int64)v30,
          0x10244u,
          (void (__fastcall *)(_DWORD *, unsigned __int64, unsigned __int64))ExpApplyRewaitBoost);
        if ( !v20 )
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
            v26 = ExpFindCurrentThread((__int64)Resource, CurrentThread, &LockHandle, 1, 1, 0);
          while ( !v26 );
          v27 = v26[1] & 7;
          *v26 = CurrentThread;
          *((_DWORD *)v26 + 2) = v27 | 8;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          _enable();
        }
        v28 = 0;
        if ( (CurrentThread & 3) == 0 )
          v28 = *(unsigned __int8 *)(CurrentThread + 649);
        ExpBoostIoAfterAcquire((__int64)Resource, CurrentThread, v28);
        __incgsdword(0x6504u);
        __incgsdword(0x64A4u);
        if ( !v6 )
          return 1;
        v23 = 1LL;
        v15 = 65601LL;
LABEL_32:
        PerfLogExecutiveResourceAcquire(v15, Resource, v23, Resource->ContentionCount);
        return 1;
      }
      EmptyEntry = ExpFindEmptyEntry((__int64)Resource);
      v20 = EmptyEntry;
      if ( EmptyEntry )
      {
        *EmptyEntry = CurrentThread;
        *((_DWORD *)EmptyEntry + 2) = EmptyEntry[1] & 7 | 8;
        goto LABEL_37;
      }
    }
    else
    {
      ThreadResourceHint = ExpGetThreadResourceHint(CurrentThread);
      v12 = ExpFindCurrentThread((__int64)Resource, CurrentThread, &LockHandle, 1, 1, ThreadResourceHint);
      v13 = v12;
      if ( v12 )
      {
        if ( *v12 )
        {
          *((_DWORD *)v12 + 2) = v12[1] & 7 | ((v12[1] & 0xFFFFFFF8) + 8);
        }
        else
        {
          *v12 = CurrentThread;
          *((_DWORD *)v12 + 2) = v12[1] & 7 | 8;
          ExpTryAcquireResourceShared(Resource);
        }
        v14 = *((_DWORD *)v13 + 2) >> 3;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        _enable();
        if ( v14 == 1 )
        {
          __incgsdword(0x6504u);
          v15 = 65601LL;
        }
        else
        {
          __incgsdword(0x6508u);
          v15 = 65617LL;
        }
        __incgsdword(0x6508u);
        if ( !v6 )
          return 1;
        v23 = 1LL;
        goto LABEL_32;
      }
    }
  }
  v16 = ((__int64 (*)(void))ExpTryAcquireResourceShared)();
  v18 = Resource->OwnerEntry.TableSize & 7;
  Resource->OwnerEntry.OwnerThread = CurrentThread;
  Resource->OwnerEntry.TableSize = v18 | 8;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  _enable();
  __incgsdword(0x6504u);
  __incgsdword(0x64A4u);
  if ( v6 )
    PerfLogExecutiveResourceAcquire(65601LL, Resource, 1LL, Resource->ContentionCount);
  return v16;
}
