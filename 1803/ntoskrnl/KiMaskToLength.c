/*
 * XREFs of KiMaskToLength @ 0x14047C57C
 * Callers:
 *     KiInitializeMTRR @ 0x1408B2DEC (KiInitializeMTRR.c)
 * Callees:
 *     RtlFindLeastSignificantBit @ 0x1400BB2A0 (RtlFindLeastSignificantBit.c)
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
