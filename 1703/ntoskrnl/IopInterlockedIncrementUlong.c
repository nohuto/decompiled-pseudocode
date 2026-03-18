/*
 * XREFs of IopInterlockedIncrementUlong @ 0x1400A9358
 * Callers:
 *     IopIncrementVpbRefCount @ 0x1400A9314 (IopIncrementVpbRefCount.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1400A9390 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A9410 (KeAcquireQueuedSpinLock.c)
 */

__int64 __fastcall IopInterlockedIncrementUlong(KSPIN_LOCK_QUEUE_NUMBER Number, _DWORD *a2)
{
  KIRQL v4; // al

  v4 = KeAcquireQueuedSpinLock(Number);
  LODWORD(a2) = ++*a2;
  KeReleaseQueuedSpinLock(Number, v4);
  return (unsigned int)a2;
}
