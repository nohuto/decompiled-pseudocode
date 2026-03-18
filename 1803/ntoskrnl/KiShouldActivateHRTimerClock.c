/*
 * XREFs of KiShouldActivateHRTimerClock @ 0x1400EA6A4
 * Callers:
 *     KeSetTimer2 @ 0x140037E50 (KeSetTimer2.c)
 *     KiTimer2Expiration @ 0x1400E8E30 (KiTimer2Expiration.c)
 *     KiAdjustTimer2DueTimes @ 0x1401683AC (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     <none>
 */

char __fastcall KiShouldActivateHRTimerClock(__int64 a1, unsigned __int64 a2)
{
  char v2; // r8

  v2 = 0;
  if ( (KiVelocityFlags & 0x100) != 0 )
  {
    if ( a2 >= a1 + (unsigned __int64)KeMaximumIncrement
      || KiClockOwnerOneShotRequest
      && (a2 >= KiClockOwnerOneShotRequest || KiClockOwnerOneShotRequest - a2 <= (unsigned int)KeMinimumIncrement) )
    {
      return v2;
    }
    return 1;
  }
  if ( !KiHRTimerClockActive && a2 < a1 + (unsigned __int64)KeMaximumIncrement )
    return 1;
  return v2;
}
