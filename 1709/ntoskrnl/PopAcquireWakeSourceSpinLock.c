/*
 * XREFs of PopAcquireWakeSourceSpinLock @ 0x1402412FC
 * Callers:
 *     PopHandleWakeSources @ 0x140431A40 (PopHandleWakeSources.c)
 *     PopNewWakeInfo @ 0x140431C7C (PopNewWakeInfo.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall PopAcquireWakeSourceSpinLock(PKLOCK_QUEUE_HANDLE LockHandle)
{
  KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, LockHandle);
}
