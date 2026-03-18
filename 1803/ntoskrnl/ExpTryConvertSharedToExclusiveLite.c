/*
 * XREFs of ExpTryConvertSharedToExclusiveLite @ 0x1402BA2F0
 * Callers:
 *     ExTryConvertSharedToExclusiveLite @ 0x1402BA0B8 (ExTryConvertSharedToExclusiveLite.c)
 * Callees:
 *     ExpFindCurrentThread @ 0x140088730 (ExpFindCurrentThread.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x1400EAFD0 (KxWaitForLockOwnerShipWithIrql.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x14024244C (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     ExpTryUpgradeResource @ 0x1402BCDDC (ExpTryUpgradeResource.c)
 */

char __fastcall ExpTryConvertSharedToExclusiveLite(__int64 a1)
{
  __int64 CurrentThread; // rsi
  volatile __int64 *v2; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v6; // eax
  char v7; // al
  _QWORD *v8; // rdx
  __int64 v9; // rcx
  char v10; // di
  unsigned int v11; // eax
  _QWORD *v12; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 v15; // [rsp+60h] [rbp+8h] BYREF

  CurrentThread = (__int64)KeGetCurrentThread();
  v2 = (volatile __int64 *)(a1 + 96);
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
  v15 = 2;
  _disable();
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v6 = SchedulerAssist[5];
      SchedulerAssist[5] = v6 + 1;
      if ( v6 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        KiPerformUnboostKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v7 = KiFastAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, v2, &v15);
  }
  else
  {
    v7 = 0;
    v8 = (_QWORD *)_InterlockedExchange64(v2, (__int64)&LockHandle);
    if ( v8 )
    {
      KxWaitForLockOwnerShipWithIrql((__int64)&LockHandle, v8, &v15);
      v7 = 1;
    }
  }
  if ( v7 )
  {
    _disable();
    __writecr8(v15);
  }
  v10 = ExpTryUpgradeResource(a1);
  if ( v10 )
  {
    if ( (CurrentThread & 3) != 0 )
      v11 = 0;
    else
      v11 = *(unsigned __int8 *)(CurrentThread + 649);
    v12 = ExpFindCurrentThread(v9, CurrentThread, (__int64)&LockHandle, 0, 0, v11);
    if ( v12 != (_QWORD *)(a1 + 48) )
    {
      *(_OWORD *)(a1 + 48) = *(_OWORD *)v12;
      *(_DWORD *)(a1 + 56) = *(_DWORD *)(a1 + 56) & 7 | 8;
      *v12 = 0LL;
      v12[1] = 0LL;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  _enable();
  return v10;
}
