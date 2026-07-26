/*
 * XREFs of NdisDprReleaseSpinLock @ 0x1C005AFF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall NdisDprReleaseSpinLock(PKSPIN_LOCK SpinLock)
{
  KeReleaseSpinLockFromDpcLevel(SpinLock);
}
