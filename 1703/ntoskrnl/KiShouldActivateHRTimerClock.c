/*
 * XREFs of KiShouldActivateHRTimerClock @ 0x140144020
 * Callers:
 *     KiAdjustTimer2DueTimes @ 0x140143E38 (KiAdjustTimer2DueTimes.c)
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
