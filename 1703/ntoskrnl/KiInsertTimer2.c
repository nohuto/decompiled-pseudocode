/*
 * XREFs of KiInsertTimer2 @ 0x14004B87C
 * Callers:
 *     KiTimer2Expiration @ 0x140047B60 (KiTimer2Expiration.c)
 *     KiExpireTimer2 @ 0x140048CA0 (KiExpireTimer2.c)
 *     KiAdjustTimer2DueTimes @ 0x140143E38 (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x140049B80 (KiInsertTimer2WithCollectionLockHeld.c)
 */

char __fastcall KiInsertTimer2(__int64 a1, char a2, _BYTE *a3)
{
  KxAcquireSpinLock(&KiTimer2CollectionLock);
  LOBYTE(a3) = KiInsertTimer2WithCollectionLockHeld(a1, a2, a3);
  KxReleaseSpinLock(&KiTimer2CollectionLock);
  return (char)a3;
}
