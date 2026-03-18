/*
 * XREFs of KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400A3780
 * Callers:
 *     PnprMirrorMarkedPages @ 0x14048360C (PnprMirrorMarkedPages.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1400E0660 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140242390 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

void __stdcall KeAcquireInStackQueuedSpinLockAtDpcLevel(PKSPIN_LOCK SpinLock, PKLOCK_QUEUE_HANDLE LockHandle)
{
  volatile __int64 *v2; // r10
  PKLOCK_QUEUE_HANDLE v3; // r11
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v6; // eax

  LockHandle->LockQueue.Lock = SpinLock;
  v2 = (volatile __int64 *)SpinLock;
  LockHandle->LockQueue.Next = 0LL;
  v3 = LockHandle;
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
    KiAcquireQueuedSpinLockInstrumented(v3, v2);
  }
  else if ( _InterlockedExchange64(v2, (__int64)v3) )
  {
    KxWaitForLockOwnerShip(v3);
  }
}
