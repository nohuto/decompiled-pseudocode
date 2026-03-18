/*
 * XREFs of ExDisableResourceBoostLite @ 0x14014B7B0
 * Callers:
 *     CcAllocateInitializeBcb @ 0x1400DA798 (CcAllocateInitializeBcb.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x1400EAFD0 (KxWaitForLockOwnerShipWithIrql.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x14024244C (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

void __stdcall ExDisableResourceBoostLite(PERESOURCE Resource)
{
  KSPIN_LOCK *p_SpinLock; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  char v5; // al
  _QWORD *v6; // rdx
  int v7; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 v9; // [rsp+68h] [rbp+10h] BYREF

  if ( (Resource->ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  LockHandle.LockQueue.Next = 0LL;
  p_SpinLock = &Resource->SpinLock;
  LockHandle.LockQueue.Lock = &Resource->SpinLock;
  v9 = 2;
  _disable();
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v7 = SchedulerAssist[5];
      SchedulerAssist[5] = v7 + 1;
      if ( v7 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        KiPerformUnboostKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v5 = KiFastAcquireQueuedSpinLockInstrumented(&LockHandle, p_SpinLock, &v9);
  }
  else
  {
    v5 = 0;
    v6 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)p_SpinLock, (__int64)&LockHandle);
    if ( v6 )
    {
      KxWaitForLockOwnerShipWithIrql((__int64)&LockHandle, v6, &v9);
      v5 = 1;
    }
  }
  if ( v5 )
  {
    _disable();
    __writecr8(v9);
  }
  Resource->Flag |= 8u;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  _enable();
}
