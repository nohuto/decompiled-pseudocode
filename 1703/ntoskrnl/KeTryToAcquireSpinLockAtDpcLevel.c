/*
 * XREFs of KeTryToAcquireSpinLockAtDpcLevel @ 0x140031B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall KeTryToAcquireSpinLockAtDpcLevel(PKSPIN_LOCK SpinLock)
{
  return KxTryToAcquireSpinLock(SpinLock);
}
