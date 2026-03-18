/*
 * XREFs of MmSetMemoryPriorityProcess @ 0x14006B70C
 * Callers:
 *     NtSetInformationProcess @ 0x1404E4550 (NtSetInformationProcess.c)
 *     PspComputeQuantumAndPriority @ 0x1404F0094 (PspComputeQuantumAndPriority.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall MmSetMemoryPriorityProcess(__int64 a1, char a2)
{
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_1403CC4C0, &LockHandle);
  *(_BYTE *)(a1 + 1466) = a2;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
