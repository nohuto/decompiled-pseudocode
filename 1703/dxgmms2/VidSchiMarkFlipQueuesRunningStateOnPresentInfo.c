/*
 * XREFs of VidSchiMarkFlipQueuesRunningStateOnPresentInfo @ 0x1C00262F8
 * Callers:
 *     VidSchiResumeFlipQueues @ 0x1C00AB01C (VidSchiResumeFlipQueues.c)
 *     VidSchiSuspendFlipQueues @ 0x1C00AB610 (VidSchiSuspendFlipQueues.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiMarkFlipQueuesRunningStateOnPresentInfo(__int64 a1, __int64 a2, char a3)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1880), &LockHandle);
  *(_BYTE *)(a2 + 46932) = a3;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
