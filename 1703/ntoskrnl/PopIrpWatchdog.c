/*
 * XREFs of PopIrpWatchdog @ 0x140227330
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     PopIrpWatchdogBugcheck @ 0x14022735C (PopIrpWatchdogBugcheck.c)
 */

void __fastcall __noreturn PopIrpWatchdog(__int64 a1, __int64 a2)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
  PopIrpWatchdogBugcheck(a2);
}
