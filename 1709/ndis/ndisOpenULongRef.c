/*
 * XREFs of ndisOpenULongRef @ 0x1C005D714
 * Callers:
 *     ndisReinitializeMiniportBlock @ 0x1C010DA28 (ndisReinitializeMiniportBlock.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisOpenULongRef(PKSPIN_LOCK SpinLock)
{
  KIRQL v2; // al

  v2 = KeAcquireSpinLockRaiseToDpc(SpinLock);
  *((_BYTE *)SpinLock + 12) = 0;
  KeReleaseSpinLock(SpinLock, v2);
}
