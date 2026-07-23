/*
 * XREFs of HvUpdateUnreconciledVector @ 0x1404B64D8
 * Callers:
 *     CmpFlushHive @ 0x1404D6DE0 (CmpFlushHive.c)
 *     HvSyncHive @ 0x14066CBA0 (HvSyncHive.c)
 * Callees:
 *     RtlMergeBitMaps @ 0x14006DC7C (RtlMergeBitMaps.c)
 *     RtlNumberOfSetBits @ 0x14006E280 (RtlNumberOfSetBits.c)
 */

ULONG __fastcall HvUpdateUnreconciledVector(_RTL_BITMAP *a1, char a2)
{
  ULONG result; // eax

  RtlMergeBitMaps((__int64)&a1[6], (unsigned int *)((char *)&a1[4].Buffer + (a2 != 0 ? 0xAE0 : 0)));
  result = RtlNumberOfSetBits(a1 + 6);
  a1[7].SizeOfBitMap = result;
  return result;
}
