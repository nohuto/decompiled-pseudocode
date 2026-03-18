/*
 * XREFs of KiInsertTimer2 @ 0x1400BBA54
 * Callers:
 *     KiTimer2Expiration @ 0x1400E8E30 (KiTimer2Expiration.c)
 *     KiExpireTimer2 @ 0x1400EA230 (KiExpireTimer2.c)
 *     KiAdjustTimer2DueTimes @ 0x1401683AC (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x1400E7BC0 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x1400EE044 (KiHvEnlightenedGuestPriorityKick.c)
 */

char __fastcall KiInsertTimer2(__int64 a1, char a2, __int64 a3)
{
  __int64 v6; // rdx
  char inserted; // bl
  char v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0;
  KxAcquireSpinLock(&KiTimer2CollectionLock);
  LOBYTE(v6) = a2;
  inserted = KiInsertTimer2WithCollectionLockHeld(a1, v6, a3, &v9);
  KxReleaseSpinLock(&KiTimer2CollectionLock);
  if ( v9 )
    KiHvEnlightenedGuestPriorityKick(
      KeGetCurrentPrcb(),
      KiProcessorBlock[KiClockTimerOwner],
      (unsigned int)KiVpThreadSystemWorkPriority);
  return inserted;
}
