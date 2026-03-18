/*
 * XREFs of _strupr @ 0x1401694E0
 * Callers:
 *     InbvDetermineFunction @ 0x14015E03C (InbvDetermineFunction.c)
 *     KdInitSystem @ 0x140789150 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140809FC8 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x14080AC64 (Phase1InitializationDiscard.c)
 *     InbvDriverInitialize @ 0x140818F1C (InbvDriverInitialize.c)
 *     BvgaDriverInitialize @ 0x140818FD0 (BvgaDriverInitialize.c)
 *     RamdiskStart @ 0x140836EAC (RamdiskStart.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14014A440 (xHalTimerWatchdogStop.c)
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
