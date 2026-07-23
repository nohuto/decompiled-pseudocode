/*
 * XREFs of KiInsertTimer2 @ 0x1400E339C
 * Callers:
 *     KiTimer2Expiration @ 0x140092BD0 (KiTimer2Expiration.c)
 *     KiExpireTimer2 @ 0x1400E2E30 (KiExpireTimer2.c)
 *     KiAdjustTimer2DueTimes @ 0x14014A20C (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     KiInsertTimer2WithCollectionLockHeld @ 0x14005DD20 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 */

char __fastcall KiInsertTimer2(__int64 a1, char a2, _BYTE *a3)
{
  KxAcquireSpinLock(&KiTimer2CollectionLock);
  LOBYTE(a3) = KiInsertTimer2WithCollectionLockHeld(a1, a2, a3);
  KxReleaseSpinLock(&KiTimer2CollectionLock);
  return (char)a3;
}
