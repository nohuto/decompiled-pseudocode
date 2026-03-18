/*
 * XREFs of VidSchiUnwaitFlipQueueUnderSchedulerSpinLock @ 0x1C002A5A0
 * Callers:
 *     VidSchiResumeFlipQueues @ 0x1C00B3930 (VidSchiResumeFlipQueues.c)
 * Callees:
 *     VidSchUnwaitFlipQueue @ 0x1C0003BD0 (VidSchUnwaitFlipQueue.c)
 */

void __fastcall VidSchiUnwaitFlipQueueUnderSchedulerSpinLock(KSPIN_LOCK *a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(a1 + 236, &LockHandle);
  VidSchUnwaitFlipQueue((struct _VIDSCH_GLOBAL *)a1);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
