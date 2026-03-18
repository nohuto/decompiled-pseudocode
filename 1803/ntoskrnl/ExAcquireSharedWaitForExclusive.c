/*
 * XREFs of ExAcquireSharedWaitForExclusive @ 0x140159160
 * Callers:
 *     FsRtlAcquireFileForModWriteEx @ 0x1401346A0 (FsRtlAcquireFileForModWriteEx.c)
 *     ExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x1402B9F70 (ExEnterCriticalRegionAndAcquireSharedWaitForExclusive.c)
 * Callees:
 *     ExpBoostIoAfterAcquire @ 0x1400884C0 (ExpBoostIoAfterAcquire.c)
 *     ExpFindCurrentThread @ 0x140088730 (ExpFindCurrentThread.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpGetThreadResourceHint @ 0x1400B1180 (ExpGetThreadResourceHint.c)
 *     ExpFindEmptyEntry @ 0x1400CF164 (ExpFindEmptyEntry.c)
 *     ExpPrepareToWaitForResourceShared @ 0x1400CF664 (ExpPrepareToWaitForResourceShared.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x1400EAFD0 (KxWaitForLockOwnerShipWithIrql.c)
 *     ExpApplyPrewaitBoost @ 0x1400EEEB0 (ExpApplyPrewaitBoost.c)
 *     ExpWaitForResource @ 0x1400F3F20 (ExpWaitForResource.c)
 *     ExpTryAcquireResourceShared @ 0x140159394 (ExpTryAcquireResourceShared.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x14024244C (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     PerfLogExecutiveResourceAcquire @ 0x1402B1794 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x1402B1C68 (PerfLogExecutiveResourceWait.c)
 */

BOOLEAN __stdcall ExAcquireSharedWaitForExclusive(PERESOURCE Resource, BOOLEAN Wait)
{
  ERESOURCE_THREAD CurrentThread; // rsi
  bool v5; // r14
  KSPIN_LOCK *p_SpinLock; // rdi
  int v7; // r15d
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  char v10; // al
  _QWORD *v11; // rdx
  __int16 v12; // ax
  unsigned int ThreadResourceHint; // eax
  ERESOURCE_THREAD *v14; // rax
  ERESOURCE_THREAD *v15; // r8
  int v16; // eax
  __int64 v17; // r8
  unsigned int v18; // edi
  __int64 v19; // rcx
  unsigned int v20; // eax
  BOOLEAN v21; // di
  ULONG v23; // ecx
  int v24; // eax
  _QWORD *EmptyEntry; // rax
  _QWORD *v26; // r13
  ULONG v27; // edi
  ULONG v28; // edi
  struct _KPRCB *v29; // rcx
  _DWORD *v30; // rdx
  int v31; // eax
  char v32; // al
  _QWORD *v33; // rdx
  _QWORD *v34; // rax
  int v35; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-19h] BYREF
  _BYTE v37[32]; // [rsp+50h] [rbp-1h] BYREF
  unsigned __int8 v38; // [rsp+C0h] [rbp+6Fh] BYREF
  unsigned __int8 v39; // [rsp+C8h] [rbp+77h] BYREF

  if ( (Resource->ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  CurrentThread = (ERESOURCE_THREAD)KeGetCurrentThread();
  v5 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x63BCu);
  p_SpinLock = &Resource->SpinLock;
  v7 = 0;
  v38 = 2;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = &Resource->SpinLock;
  _disable();
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v24 = SchedulerAssist[5];
      SchedulerAssist[5] = v24 + 1;
      if ( v24 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        KiPerformUnboostKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v10 = KiFastAcquireQueuedSpinLockInstrumented(&LockHandle, p_SpinLock, &v38);
  }
  else
  {
    v10 = 0;
    v11 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)p_SpinLock, (__int64)&LockHandle);
    if ( v11 )
    {
      KxWaitForLockOwnerShipWithIrql((__int64)&LockHandle, v11, &v38);
      v10 = 1;
    }
  }
  if ( v10 )
  {
    _disable();
    __writecr8(v38);
  }
  do
  {
    while ( 1 )
    {
      if ( !Resource->ActiveEntries )
      {
        v21 = ExpTryAcquireResourceShared(Resource);
        v23 = Resource->OwnerEntry.TableSize & 7;
        Resource->OwnerEntry.OwnerThread = CurrentThread;
        Resource->OwnerEntry.TableSize = v23 | 8;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        _enable();
        __incgsdword(0x63C4u);
        __incgsdword(0x6364u);
        if ( v5 )
          PerfLogExecutiveResourceAcquire(65601LL, Resource, 1LL, Resource->ContentionCount);
        return v21;
      }
      v12 = Resource->Flag & 0x80;
      if ( v12 && Resource->OwnerEntry.OwnerThread == CurrentThread )
      {
        v27 = Resource->OwnerEntry.TableSize + 8;
        Resource->OwnerEntry.TableSize = v27;
        v28 = v27 >> 3;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        _enable();
        __incgsdword(0x63C0u);
        __incgsdword(0x6364u);
        if ( v5 )
          PerfLogExecutiveResourceAcquire(65585LL, Resource, v28, Resource->ContentionCount);
        return 1;
      }
      if ( !v12 && !Resource->NumberOfExclusiveWaiters )
        break;
      if ( !Wait )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        _enable();
        __incgsdword(0x63D0u);
        return 0;
      }
      if ( !v12 )
      {
        v26 = 0LL;
        goto LABEL_42;
      }
      EmptyEntry = ExpFindEmptyEntry((__int64)Resource, &LockHandle);
      v26 = EmptyEntry;
      if ( EmptyEntry )
      {
        *EmptyEntry = CurrentThread;
        *((_DWORD *)EmptyEntry + 2) = EmptyEntry[1] & 7 | 8;
LABEL_42:
        ExpPrepareToWaitForResourceShared((__int64)Resource, (__int64)v37);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        _enable();
        __incgsdword(0x63CCu);
        if ( v5 )
          PerfLogExecutiveResourceWait(65604LL, Resource, 0LL);
        ExpApplyPrewaitBoost((__int64)Resource);
        ExpWaitForResource(
          &Resource->SystemResourcesList,
          (__int64)v37,
          0x10244u,
          (void (__fastcall *)(struct _LIST_ENTRY *))ExpApplyRewaitBoost);
        if ( !v26 )
        {
          v39 = 2;
          LockHandle.LockQueue.Lock = p_SpinLock;
          LockHandle.LockQueue.Next = 0LL;
          _disable();
          v29 = KeGetCurrentPrcb();
          v30 = v29->SchedulerAssist;
          if ( v30 )
          {
            if ( v29->NestingLevel <= 1u )
            {
              v31 = v30[5];
              v30[5] = v31 + 1;
              if ( v31 == -1 && !*((_BYTE *)v30 + 25) && !*((_BYTE *)v30 + 27) )
                KiPerformUnboostKick(v29);
            }
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            v32 = KiFastAcquireQueuedSpinLockInstrumented(&LockHandle, p_SpinLock, &v39);
          }
          else
          {
            v32 = 0;
            v33 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)p_SpinLock, (__int64)&LockHandle);
            if ( v33 )
            {
              KxWaitForLockOwnerShipWithIrql((__int64)&LockHandle, v33, &v39);
              v32 = 1;
            }
          }
          if ( v32 )
          {
            _disable();
            __writecr8(v39);
          }
          do
            v34 = ExpFindCurrentThread((__int64)Resource, CurrentThread, (__int64)&LockHandle, 1, 1, 0);
          while ( !v34 );
          v35 = v34[1] & 7;
          *v34 = CurrentThread;
          *((_DWORD *)v34 + 2) = v35 | 8;
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
    v14 = ExpFindCurrentThread((__int64)Resource, CurrentThread, (__int64)&LockHandle, 1, 1, ThreadResourceHint);
    v15 = v14;
  }
  while ( !v14 );
  v16 = *((_DWORD *)v14 + 2);
  if ( *v15 )
  {
    v18 = v16 + 8;
    *((_DWORD *)v15 + 2) = v16 + 8;
  }
  else
  {
    *v15 = CurrentThread;
    *((_DWORD *)v15 + 2) = v16 & 7 | 8;
    ExpTryAcquireResourceShared(Resource);
    v18 = *(_DWORD *)(v17 + 8);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  _enable();
  if ( v18 >> 3 == 1 )
  {
    v19 = 65601LL;
    v20 = 25540;
  }
  else
  {
    v19 = 65617LL;
    v20 = 25544;
  }
  __incgsdword(v20);
  __incgsdword(0x63C8u);
  if ( !v5 )
    return 1;
  PerfLogExecutiveResourceAcquire(v19, Resource, 1LL, Resource->ContentionCount);
  return 1;
}
