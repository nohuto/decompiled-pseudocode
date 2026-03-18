/*
 * XREFs of MiCreateNewProcessTopLevelMappings @ 0x140070A20
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1405129E8 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     MiCopyTopLevelMappings @ 0x140070BCC (MiCopyTopLevelMappings.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall MiCreateNewProcessTopLevelMappings(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_1403CC4C0, &LockHandle);
  MiCopyTopLevelMappings(a1, a2);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
