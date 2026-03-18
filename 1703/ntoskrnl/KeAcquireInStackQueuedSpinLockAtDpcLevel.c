/*
 * XREFs of KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400AD580
 * Callers:
 *     PnprMirrorMarkedPages @ 0x140417A44 (PnprMirrorMarkedPages.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1400AB2F0 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 */

void __stdcall KeAcquireInStackQueuedSpinLockAtDpcLevel(PKSPIN_LOCK SpinLock, PKLOCK_QUEUE_HANDLE LockHandle)
{
  _QWORD *v3; // rdx

  LockHandle->LockQueue.Lock = SpinLock;
  LockHandle->LockQueue.Next = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(LockHandle, SpinLock);
  }
  else
  {
    v3 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)SpinLock, (__int64)LockHandle);
    if ( v3 )
      KxWaitForLockOwnerShip((__int64)LockHandle, v3);
  }
}
