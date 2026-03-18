/*
 * XREFs of _strupr @ 0x14015DE20
 * Callers:
 *     InbvDetermineFunction @ 0x14013EB6C (InbvDetermineFunction.c)
 *     KdInitSystem @ 0x140796140 (KdInitSystem.c)
 *     InitBootProcessor @ 0x14082FD94 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140830A1C (Phase1InitializationDiscard.c)
 *     InbvDriverInitialize @ 0x140832D94 (InbvDriverInitialize.c)
 *     BvgaDriverInitialize @ 0x140832E50 (BvgaDriverInitialize.c)
 *     RamdiskStart @ 0x14086E0DC (RamdiskStart.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140131CB0 (xHalTimerWatchdogStop.c)
 */

char *__cdecl strupr(char *String)
{
  char *v1; // rdx

  v1 = String;
  if ( String )
  {
    while ( *String )
    {
      if ( (unsigned __int8)(*String - 97) <= 0x19u )
        *String -= 32;
      ++String;
    }
    return v1;
  }
  else
  {
    xHalTimerWatchdogStop();
    return 0LL;
  }
}
