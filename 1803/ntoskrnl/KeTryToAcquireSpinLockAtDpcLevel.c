/*
 * XREFs of KeTryToAcquireSpinLockAtDpcLevel @ 0x1400B8060
 * Callers:
 *     <none>
 * Callees:
 *     KxTryToAcquireSpinLock @ 0x1400B8074 (KxTryToAcquireSpinLock.c)
 */

BOOLEAN __stdcall KeTryToAcquireSpinLockAtDpcLevel(PKSPIN_LOCK SpinLock)
{
  return KxTryToAcquireSpinLock(SpinLock);
}
