/*
 * XREFs of ExpConvertExclusiveToSharedLite @ 0x1400BB3D8
 * Callers:
 *     ExConvertExclusiveToSharedLite @ 0x1400BB350 (ExConvertExclusiveToSharedLite.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWakeWaitChain @ 0x1400BDED8 (KeWakeWaitChain.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x1400EAFD0 (KxWaitForLockOwnerShipWithIrql.c)
 *     ExpApplyPriorityBoost @ 0x1400EE7A0 (ExpApplyPriorityBoost.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x14024244C (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

__int64 __fastcall ExpConvertExclusiveToSharedLite(__int64 a1)
{
  volatile __int64 *v1; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  char v5; // al
  __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // ebx
  char v9; // si
  __int64 result; // rax
  int v11; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int8 v13; // [rsp+60h] [rbp+20h] BYREF
  __int64 v14; // [rsp+68h] [rbp+28h] BYREF

  LockHandle.LockQueue.Next = 0LL;
  v1 = (volatile __int64 *)(a1 + 96);
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
  v13 = 2;
  _disable();
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v11 = SchedulerAssist[5];
      SchedulerAssist[5] = v11 + 1;
      if ( v11 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        KiPerformUnboostKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v5 = KiFastAcquireQueuedSpinLockInstrumented(&LockHandle, v1, &v13);
  }
  else
  {
    v5 = 0;
    v6 = _InterlockedExchange64(v1, (__int64)&LockHandle);
    if ( v6 )
    {
      KxWaitForLockOwnerShipWithIrql(&LockHandle, v6, &v13);
      v5 = 1;
    }
  }
  if ( v5 )
  {
    _disable();
    __writecr8(v13);
  }
  *(_WORD *)(a1 + 26) &= ~0x80u;
  v7 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = 0LL;
  v8 = *(_DWORD *)(a1 + 72);
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 64) += v8;
  v9 = *(_BYTE *)(a1 + 27);
  v14 = v7;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  _enable();
  result = KeWakeWaitChain(&v14, 0LL, 0LL);
  if ( v8 && v9 )
    result = ExpApplyPriorityBoost(a1, 65280LL, KeGetCurrentThread());
  __incgsdword(0x6374u);
  return result;
}
