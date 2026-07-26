/*
 * XREFs of NdisAcquireSpinLock @ 0x1C005AF40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

KIRQL __fastcall NdisAcquireSpinLock(__int64 a1)
{
  KIRQL result; // al

  result = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1);
  *(_BYTE *)(a1 + 8) = result;
  return result;
}
