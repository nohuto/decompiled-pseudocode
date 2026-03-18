/*
 * XREFs of ExpAcquireSharedStarveExclusive @ 0x140120020
 * Callers:
 *     ExAcquireSharedStarveExclusive @ 0x1400B6530 (ExAcquireSharedStarveExclusive.c)
 *     CcPinFileData @ 0x14011C510 (CcPinFileData.c)
 * Callees:
 *     ExpBoostIoAfterAcquire @ 0x1400884C0 (ExpBoostIoAfterAcquire.c)
 *     ExpFindCurrentThread @ 0x140088730 (ExpFindCurrentThread.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x1400889A0 (KxWaitForLockChainValid.c)
 *     ExpGetThreadResourceHint @ 0x1400B1180 (ExpGetThreadResourceHint.c)
 *     ExpTryAcquireResourceSharedStarveExclusive @ 0x1400C76D4 (ExpTryAcquireResourceSharedStarveExclusive.c)
 *     ExpFindEmptyEntry @ 0x1400CF164 (ExpFindEmptyEntry.c)
 *     ExpPrepareToWaitForResourceShared @ 0x1400CF664 (ExpPrepareToWaitForResourceShared.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x1400EAFD0 (KxWaitForLockOwnerShipWithIrql.c)
 *     ExpApplyPrewaitBoost @ 0x1400EEEB0 (ExpApplyPrewaitBoost.c)
 *     ExpWaitForResource @ 0x1400F3F20 (ExpWaitForResource.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x14024244C (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     PerfLogExecutiveResourceAcquire @ 0x1402B1794 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x1402B1C68 (PerfLogExecutiveResourceWait.c)
 */

char __fastcall ExpAcquireSharedStarveExclusive(__int64 a1, char a2)
{
  __int64 CurrentThread; // r14
  bool v5; // si
  volatile __int64 *v6; // r10
  int v7; // edi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  char v10; // al
  _QWORD *v11; // rdx
  int v12; // eax
  __int64 Next; // rax
  struct _KPRCB *v14; // rcx
  _DWORD *v15; // rdx
  __int16 v17; // ax
  unsigned int ThreadResourceHint; // eax
  _QWORD *EmptyEntry; // rax
  _QWORD *v20; // rdx
  int v21; // eax
  unsigned int v22; // edi
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // eax
  int v26; // eax
  unsigned int v27; // edi
  int v28; // eax
  int v29; // eax
  __int64 v30; // r8
  __int64 v31; // rcx
  int v32; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v34[40]; // [rsp+48h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+28h]
  unsigned __int8 v36; // [rsp+A0h] [rbp+30h] BYREF

  CurrentThread = (__int64)KeGetCurrentThread();
  v5 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x63A4u);
  v6 = (volatile __int64 *)(a1 + 96);
  v7 = 0;
  v36 = 2;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
  _disable();
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v29 = SchedulerAssist[5];
      SchedulerAssist[5] = v29 + 1;
      if ( v29 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        KiPerformUnboostKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v10 = KiFastAcquireQueuedSpinLockInstrumented(&LockHandle, v6, &v36);
  }
  else
  {
    v10 = 0;
    v11 = (_QWORD *)_InterlockedExchange64(v6, (__int64)&LockHandle);
    if ( v11 )
    {
      KxWaitForLockOwnerShipWithIrql((__int64)&LockHandle, v11, &v36);
      v10 = 1;
    }
  }
  if ( v10 )
  {
    _disable();
    __writecr8(v36);
  }
  do
  {
    if ( !*(_DWORD *)(a1 + 64) )
    {
      *(_WORD *)(a1 + 24) = 1;
      *(_DWORD *)(a1 + 64) = 1;
      v12 = *(_DWORD *)(a1 + 56) & 7;
      *(_QWORD *)(a1 + 48) = CurrentThread;
      *(_DWORD *)(a1 + 56) = v12 | 8;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
        goto LABEL_11;
      }
      _m_prefetchw(&LockHandle);
      Next = (__int64)LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
        {
LABEL_11:
          v14 = KeGetCurrentPrcb();
          v15 = v14->SchedulerAssist;
          if ( v15 )
          {
            if ( v14->NestingLevel <= 1u )
            {
              v32 = v15[5] - 1;
              v15[5] = v32;
              if ( !v32 && !*((_BYTE *)v15 + 25) && !*((_BYTE *)v15 + 27) )
                KiPerformUnboostKick(v14);
            }
          }
          _enable();
          __incgsdword(0x63ACu);
          __incgsdword(0x6364u);
          if ( !v5 )
            return 1;
          goto LABEL_50;
        }
        Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
      goto LABEL_11;
    }
    v17 = *(_WORD *)(a1 + 26) & 0x80;
    if ( v17 && *(_QWORD *)(a1 + 48) == CurrentThread )
    {
      v26 = *(_DWORD *)(a1 + 56);
      *(_DWORD *)(a1 + 56) = v26 + 8;
      v27 = (unsigned int)(v26 + 8) >> 3;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      _enable();
      __incgsdword(0x63A8u);
      __incgsdword(0x6364u);
      if ( !v5 )
        return 1;
      v30 = v27;
      v31 = 65585LL;
      goto LABEL_51;
    }
    if ( v17 )
    {
      EmptyEntry = ExpFindEmptyEntry(a1, &LockHandle);
    }
    else
    {
      ThreadResourceHint = ExpGetThreadResourceHint(CurrentThread);
      EmptyEntry = ExpFindCurrentThread(
                     a1,
                     CurrentThread,
                     (__int64)&LockHandle,
                     1,
                     *(_DWORD *)(a1 + 76) != 0,
                     ThreadResourceHint);
    }
    v20 = EmptyEntry;
  }
  while ( !EmptyEntry );
  if ( *EmptyEntry == CurrentThread )
  {
    v21 = *((_DWORD *)EmptyEntry + 2);
    *((_DWORD *)v20 + 2) = v21 + 8;
    v22 = (unsigned int)(v21 + 8) >> 3;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    _enable();
    __incgsdword(0x63B0u);
    __incgsdword(0x6364u);
    if ( v5 )
    {
      v30 = v22;
      v31 = 65617LL;
      goto LABEL_51;
    }
    return 1;
  }
  if ( ExpTryAcquireResourceSharedStarveExclusive(a1) )
  {
    v25 = *(_DWORD *)(v23 + 8) & 7;
    *(_QWORD *)v23 = CurrentThread;
    *(_DWORD *)(v23 + 8) = v25 | 8;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    _enable();
LABEL_23:
    if ( (CurrentThread & 3) == 0 )
      v7 = *(unsigned __int8 *)(CurrentThread + 649);
    ExpBoostIoAfterAcquire(a1, CurrentThread, v7);
    __incgsdword(0x63ACu);
    __incgsdword(0x6364u);
    if ( !v5 )
      return 1;
LABEL_50:
    v31 = 65601LL;
    v30 = 1LL;
LABEL_51:
    PerfLogExecutiveResourceAcquire(v31, a1, v30, *(unsigned int *)(a1 + 68));
    return 1;
  }
  if ( a2 )
  {
    v28 = *(_DWORD *)(v23 + 8) & 7;
    *(_QWORD *)v23 = CurrentThread;
    *(_DWORD *)(v23 + 8) = v28 | 8;
    ExpPrepareToWaitForResourceShared(v24, (__int64)v34);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    _enable();
    __incgsdword(0x63B4u);
    if ( v5 )
      PerfLogExecutiveResourceWait(65604LL, a1, 0LL);
    ExpApplyPrewaitBoost(a1);
    ExpWaitForResource(
      (struct _LIST_ENTRY *)a1,
      (__int64)v34,
      0x10244u,
      (void (__fastcall *)(struct _LIST_ENTRY *))ExpApplyRewaitBoost);
    goto LABEL_23;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  _enable();
  __incgsdword(0x63B8u);
  return 0;
}
