/*
 * XREFs of SepAdtInitLsaDeadEventForNonPagedList @ 0x14029F2B8
 * Callers:
 *     SepRmCommandServerThread @ 0x1406316F0 (SepRmCommandServerThread.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 */

char __fastcall SepAdtInitLsaDeadEventForNonPagedList(__int64 a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_1403D1708, &LockHandle);
  qword_1403D1748 = a1;
  LOBYTE(a1) = qword_1403D1690 != (_QWORD)&qword_1403D1690;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return a1;
}
