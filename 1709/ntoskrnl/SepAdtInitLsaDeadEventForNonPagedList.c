/*
 * XREFs of SepAdtInitLsaDeadEventForNonPagedList @ 0x14025D9E0
 * Callers:
 *     SepRmCommandServerThread @ 0x1405A76C0 (SepRmCommandServerThread.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 */

char __fastcall SepAdtInitLsaDeadEventForNonPagedList(__int64 a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_14038D798, &LockHandle);
  qword_14038D7D8 = a1;
  LOBYTE(a1) = qword_14038D720 != (_QWORD)&qword_14038D720;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return a1;
}
