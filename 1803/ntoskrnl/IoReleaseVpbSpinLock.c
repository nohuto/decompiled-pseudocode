/*
 * XREFs of IoReleaseVpbSpinLock @ 0x1400CDDB0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140068140 (KeReleaseQueuedSpinLock.c)
 */

void __stdcall IoReleaseVpbSpinLock(KIRQL Irql)
{
  KeReleaseQueuedSpinLock(9uLL, Irql);
}
