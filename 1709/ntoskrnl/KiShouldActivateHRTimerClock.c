/*
 * XREFs of KiShouldActivateHRTimerClock @ 0x1401268E8
 * Callers:
 *     KeSetTimer2 @ 0x1400605A0 (KeSetTimer2.c)
 *     KiAdjustTimer2DueTimes @ 0x14014A20C (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiShouldActivateHRTimerClock(__int64 a1, unsigned __int64 a2)
{
  char v2; // r8

  v2 = 0;
  if ( !KiHRTimerClockActive )
    return a2 < a1 + (unsigned __int64)KeMaximumIncrement;
  return v2;
}
