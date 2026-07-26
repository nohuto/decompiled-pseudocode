/*
 * XREFs of NdisDprAcquireSpinLock @ 0x1C005AFD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall NdisDprAcquireSpinLock(PKSPIN_LOCK SpinLock)
{
  KeAcquireSpinLockAtDpcLevel(SpinLock);
}
