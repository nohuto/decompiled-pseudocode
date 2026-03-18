/*
 * XREFs of KiMaskToLength @ 0x140426B48
 * Callers:
 *     KiInitializeMTRR @ 0x1408388B4 (KiInitializeMTRR.c)
 * Callees:
 *     RtlFindLeastSignificantBit @ 0x14011C790 (RtlFindLeastSignificantBit.c)
 */

__int64 __fastcall KiMaskToLength(ULONGLONG a1)
{
  CCHAR LeastSignificantBit; // cl

  if ( a1 )
    LeastSignificantBit = RtlFindLeastSignificantBit(a1);
  else
    LeastSignificantBit = KiMtrrMaxRangeShift;
  return 1LL << LeastSignificantBit;
}
