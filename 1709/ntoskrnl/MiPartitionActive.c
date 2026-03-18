/*
 * XREFs of MiPartitionActive @ 0x1400B7264
 * Callers:
 *     MiCreateNewSection @ 0x1404F96D0 (MiCreateNewSection.c)
 *     MmCreateProcessAddressSpace @ 0x1404FB5AC (MmCreateProcessAddressSpace.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall MiPartitionActive(__int64 a1)
{
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_140388AA8, &LockHandle);
  *(_DWORD *)(a1 + 4) &= ~8u;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
