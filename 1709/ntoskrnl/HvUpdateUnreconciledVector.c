/*
 * XREFs of HvUpdateUnreconciledVector @ 0x14056FAF4
 * Callers:
 *     CmpFlushHive @ 0x1404DD950 (CmpFlushHive.c)
 *     HvSyncHive @ 0x140697218 (HvSyncHive.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x1400D4B40 (RtlNumberOfSetBits.c)
 *     RtlMergeBitMaps @ 0x140116B14 (RtlMergeBitMaps.c)
 */

ULONG __fastcall HvUpdateUnreconciledVector(_RTL_BITMAP *a1, char a2)
{
  ULONG result; // eax

  RtlMergeBitMaps(&a1[6].SizeOfBitMap, (__int64)a1 + (a2 != 0 ? 2856LL : 72LL));
  result = RtlNumberOfSetBits(a1 + 6);
  a1[7].SizeOfBitMap = result;
  return result;
}
