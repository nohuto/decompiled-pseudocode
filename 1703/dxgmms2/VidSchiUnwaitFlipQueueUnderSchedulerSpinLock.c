/*
 * XREFs of VidSchiUnwaitFlipQueueUnderSchedulerSpinLock @ 0x1C00283F4
 * Callers:
 *     VidSchiResumeFlipQueues @ 0x1C00AB01C (VidSchiResumeFlipQueues.c)
 * Callees:
 *     VidSchUnwaitFlipQueue @ 0x1C000C020 (VidSchUnwaitFlipQueue.c)
 */

void __fastcall VidSchiUnwaitFlipQueueUnderSchedulerSpinLock(__int64 a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1880), &LockHandle);
  VidSchUnwaitFlipQueue((struct _VIDSCH_GLOBAL *)a1);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
