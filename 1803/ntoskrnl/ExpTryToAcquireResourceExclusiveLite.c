/*
 * XREFs of ExpTryToAcquireResourceExclusiveLite @ 0x1402BA428
 * Callers:
 *     ExTryToAcquireResourceExclusiveLite @ 0x1402BA100 (ExTryToAcquireResourceExclusiveLite.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x1400EAFD0 (KxWaitForLockOwnerShipWithIrql.c)
 *     ExpTryAcquireResourceExclusive @ 0x140100700 (ExpTryAcquireResourceExclusive.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x14024244C (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     PerfLogExecutiveResourceAcquire @ 0x1402B1794 (PerfLogExecutiveResourceAcquire.c)
 */

char __fastcall ExpTryToAcquireResourceExclusiveLite(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r12
  volatile __int64 *v2; // r10
  unsigned int v3; // esi
  int v4; // ebp
  int v5; // r15d
  int v7; // r14d
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v10; // eax
  char v11; // al
  _QWORD *v12; // rdx
  char v13; // di
  int v14; // ecx
  unsigned int v15; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int8 v18; // [rsp+70h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = (volatile __int64 *)(a1 + 96);
  v3 = 0;
  v4 = DWORD1(PerfGlobalGroupMask) & 0x20000;
  v5 = 0;
  __incgsdword(0x63E0u);
  LockHandle.LockQueue.Next = 0LL;
  v7 = 65537;
  v18 = 2;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
  _disable();
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v10 = SchedulerAssist[5];
      SchedulerAssist[5] = v10 + 1;
      if ( v10 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        KiPerformUnboostKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v11 = KiFastAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, v2, &v18);
  }
  else
  {
    v11 = 0;
    v12 = (_QWORD *)_InterlockedExchange64(v2, (__int64)&LockHandle);
    if ( v12 )
    {
      KxWaitForLockOwnerShipWithIrql((__int64)&LockHandle, v12, &v18);
      v11 = 1;
    }
  }
  if ( v11 )
  {
    _disable();
    __writecr8(v18);
  }
  v13 = ExpTryAcquireResourceExclusive(a1);
  if ( v13 )
  {
    v14 = *(_DWORD *)(a1 + 56) & 7;
    *(_QWORD *)(a1 + 48) = CurrentThread;
    *(_DWORD *)(a1 + 56) = v14 | 8;
    if ( v4 )
    {
      v5 = *(_DWORD *)(a1 + 68);
      v3 = 1;
      v7 = 65569;
    }
  }
  else if ( *(char *)(a1 + 26) < 0 && *(struct _KTHREAD **)(a1 + 48) == CurrentThread )
  {
    v15 = *(_DWORD *)(a1 + 56) + 8;
    *(_DWORD *)(a1 + 56) = v15;
    if ( v4 )
    {
      v5 = *(_DWORD *)(a1 + 68);
      v3 = v15 >> 3;
    }
    v13 = 1;
    v7 = v4 != 0 ? 65585 : 65537;
  }
  else
  {
    v13 = 0;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  _enable();
  if ( v13 )
  {
    __incgsdword(0x63E4u);
    __incgsdword(0x6364u);
  }
  if ( v4 )
    PerfLogExecutiveResourceAcquire(v7, a1, v3, v5);
  return v13;
}
