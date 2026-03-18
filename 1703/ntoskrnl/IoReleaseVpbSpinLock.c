/*
 * XREFs of IoReleaseVpbSpinLock @ 0x140038900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall IoReleaseVpbSpinLock(KIRQL Irql)
{
  KeReleaseQueuedSpinLock(9uLL, Irql);
}
