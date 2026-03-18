/*
 * XREFs of PopAcquireWakeSourceSpinLock @ 0x14014E350
 * Callers:
 *     PopHandleWakeSources @ 0x140470DF8 (PopHandleWakeSources.c)
 *     PopNewWakeInfo @ 0x140470EF8 (PopNewWakeInfo.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall PopAcquireWakeSourceSpinLock(PKLOCK_QUEUE_HANDLE LockHandle)
{
  KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, LockHandle);
}
