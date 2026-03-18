/*
 * XREFs of PopReleaseWakeSourceSpinLock @ 0x14014E32C
 * Callers:
 *     PopHandleWakeSources @ 0x140470DF8 (PopHandleWakeSources.c)
 *     PopNewWakeInfo @ 0x140470EF8 (PopNewWakeInfo.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 */

unsigned __int64 __fastcall PopReleaseWakeSourceSpinLock(struct _KLOCK_QUEUE_HANDLE *a1)
{
  unsigned __int64 result; // rax

  KeReleaseInStackQueuedSpinLockFromDpcLevel(a1);
  result = a1->OldIrql;
  __writecr8(result);
  return result;
}
