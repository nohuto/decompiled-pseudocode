/*
 * XREFs of KiMaskToLength @ 0x140412344
 * Callers:
 *     KiInitializeMTRR @ 0x140817890 (KiInitializeMTRR.c)
 * Callees:
 *     RtlFindLeastSignificantBit @ 0x140025670 (RtlFindLeastSignificantBit.c)
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
