/*
 * XREFs of PopAcquireWakeSourceSpinLock @ 0x1401384FC
 * Callers:
 *     PopHandleWakeSources @ 0x14040A1B8 (PopHandleWakeSources.c)
 *     PopNewWakeInfo @ 0x14040A2B8 (PopNewWakeInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall PopAcquireWakeSourceSpinLock(struct _KLOCK_QUEUE_HANDLE *a1)
{
  KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, a1);
}
