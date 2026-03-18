/*
 * XREFs of PopReleaseWakeSourceSpinLock @ 0x140241444
 * Callers:
 *     PopHandleWakeSources @ 0x140431A40 (PopHandleWakeSources.c)
 *     PopNewWakeInfo @ 0x140431C7C (PopNewWakeInfo.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 */

unsigned __int64 __fastcall PopReleaseWakeSourceSpinLock(struct _KLOCK_QUEUE_HANDLE *a1)
{
  unsigned __int64 result; // rax

  KeReleaseInStackQueuedSpinLockFromDpcLevel(a1);
  result = a1->OldIrql;
  __writecr8(result);
  return result;
}
