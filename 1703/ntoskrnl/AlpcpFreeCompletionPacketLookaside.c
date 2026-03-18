/*
 * XREFs of AlpcpFreeCompletionPacketLookaside @ 0x14003F3F0
 * Callers:
 *     AlpcpDeletePort @ 0x1404736A0 (AlpcpDeletePort.c)
 *     AlpcpAssociateIoCompletionPort @ 0x14055D608 (AlpcpAssociateIoCompletionPort.c)
 *     AlpcpInitializeCompletionList @ 0x14056B364 (AlpcpInitializeCompletionList.c)
 * Callees:
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x14003F300 (AlpcpDeferredFreeCompletionPacketLookaside.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall AlpcpFreeCompletionPacketLookaside(__int64 a1)
{
  int v2; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1, &LockHandle);
  if ( *(_DWORD *)(a1 + 12) )
  {
    v2 = 0;
    *(_DWORD *)(a1 + 24) = 1;
  }
  else
  {
    v2 = 1;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( v2 )
    AlpcpDeferredFreeCompletionPacketLookaside((_DWORD *)a1);
}
