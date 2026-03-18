/*
 * XREFs of _strupr @ 0x140187B20
 * Callers:
 *     InbvDetermineFunction @ 0x14017C380 (InbvDetermineFunction.c)
 *     KdInitSystem @ 0x140803140 (KdInitSystem.c)
 *     InitBootProcessor @ 0x1408A6138 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x1408A6E00 (Phase1InitializationDiscard.c)
 *     InbvDriverInitialize @ 0x1408BA654 (InbvDriverInitialize.c)
 *     BvgaDriverInitialize @ 0x1408BA710 (BvgaDriverInitialize.c)
 *     RamdiskStart @ 0x1408E2E3C (RamdiskStart.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14016CD90 (xHalTimerWatchdogStop.c)
 */

char *__cdecl strupr(char *String)
{
  char v3; // cl
  char *v4; // r8

  if ( String )
  {
    v3 = *String;
    v4 = String;
    while ( v3 )
    {
      if ( (unsigned __int8)(v3 - 97) <= 0x19u )
        *v4 = v3 - 32;
      v3 = *++v4;
    }
    return String;
  }
  else
  {
    xHalTimerWatchdogStop();
    return 0LL;
  }
}
