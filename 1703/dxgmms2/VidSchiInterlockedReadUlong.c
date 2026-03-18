/*
 * XREFs of VidSchiInterlockedReadUlong @ 0x1C0002224
 * Callers:
 *     VidSchFlushDevice @ 0x1C004EE80 (VidSchFlushDevice.c)
 *     VidSchFlushContext @ 0x1C004FDC0 (VidSchFlushContext.c)
 *     VidSchFlushAdapter @ 0x1C00AB9E0 (VidSchFlushAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiInterlockedReadUlong(KSPIN_LOCK *a1, _DWORD *a2)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(a1, &LockHandle);
  LODWORD(a2) = *a2;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return (unsigned int)a2;
}
