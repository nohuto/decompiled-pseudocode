/*
 * XREFs of AlpcpFreeCompletionPacketLookaside @ 0x1400D2EC8
 * Callers:
 *     AlpcpDeletePort @ 0x140463E00 (AlpcpDeletePort.c)
 *     AlpcpAssociateIoCompletionPort @ 0x1404EB28C (AlpcpAssociateIoCompletionPort.c)
 *     AlpcpInitializeCompletionList @ 0x1406DD984 (AlpcpInitializeCompletionList.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x1400D2F28 (AlpcpDeferredFreeCompletionPacketLookaside.c)
 */

__int64 __fastcall AlpcpFreeCompletionPacketLookaside(KSPIN_LOCK *P)
{
  int v2; // edi
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(P, &LockHandle);
  if ( *((_DWORD *)P + 3) )
  {
    v2 = 0;
    *((_DWORD *)P + 6) = 1;
  }
  else
  {
    v2 = 1;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  if ( v2 )
    return AlpcpDeferredFreeCompletionPacketLookaside(P);
  return result;
}
