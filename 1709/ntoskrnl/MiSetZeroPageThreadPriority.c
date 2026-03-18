/*
 * XREFs of MiSetZeroPageThreadPriority @ 0x14015C5E0
 * Callers:
 *     MiZeroPage @ 0x14004E9F0 (MiZeroPage.c)
 *     MiZeroPageThread @ 0x140135630 (MiZeroPageThread.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetActualBasePriorityThread @ 0x1400A7A70 (KeSetActualBasePriorityThread.c)
 */

__int64 __fastcall MiSetZeroPageThreadPriority(__int64 a1, __int64 a2, int a3)
{
  _SINGLE_LIST_ENTRY *v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ebx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 4800), &LockHandle);
  if ( *(_BYTE *)(a1 + 5209) )
    v8 = 32;
  else
    v8 = KeSetActualBasePriorityThread(a2, a3, v6, v7);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return v8;
}
