/*
 * XREFs of MiSetZeroPageThreadPriority @ 0x140186734
 * Callers:
 *     MiZeroPage @ 0x1400299B0 (MiZeroPage.c)
 *     MiZeroPageThread @ 0x140173040 (MiZeroPageThread.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x1400402B0 (KeSetActualBasePriorityThread.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall MiSetZeroPageThreadPriority(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // ebx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 4864), &LockHandle);
  if ( *(_BYTE *)(a1 + 6297) )
    v6 = 32;
  else
    v6 = KeSetActualBasePriorityThread(a2, a3);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return v6;
}
