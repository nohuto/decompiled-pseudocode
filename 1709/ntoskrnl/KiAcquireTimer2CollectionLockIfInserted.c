/*
 * XREFs of KiAcquireTimer2CollectionLockIfInserted @ 0x1400623AC
 * Callers:
 *     KeSetTimer2 @ 0x1400605A0 (KeSetTimer2.c)
 *     KeDisableTimer2 @ 0x1400E36A0 (KeDisableTimer2.c)
 *     KeCancelTimer2 @ 0x1400E3990 (KeCancelTimer2.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 */

char __fastcall KiAcquireTimer2CollectionLockIfInserted(__int64 a1)
{
  char v1; // bl

  v1 = 0;
  if ( (*(_BYTE *)(a1 + 1) & 1) != 0 )
  {
    KxAcquireSpinLock(&KiTimer2CollectionLock);
    if ( (*(_BYTE *)(a1 + 1) & 1) != 0 )
      return 1;
    else
      KxReleaseSpinLock(&KiTimer2CollectionLock);
  }
  return v1;
}
