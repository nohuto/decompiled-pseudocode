/*
 * XREFs of PopReleaseWakeSourceSpinLock @ 0x1401384D8
 * Callers:
 *     PopHandleWakeSources @ 0x14040A1B8 (PopHandleWakeSources.c)
 *     PopNewWakeInfo @ 0x14040A2B8 (PopNewWakeInfo.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 */

unsigned __int64 __fastcall PopReleaseWakeSourceSpinLock(struct _KLOCK_QUEUE_HANDLE *a1)
{
  unsigned __int64 result; // rax

  KeReleaseInStackQueuedSpinLockFromDpcLevel(a1);
  result = a1->OldIrql;
  __writecr8(result);
  return result;
}
