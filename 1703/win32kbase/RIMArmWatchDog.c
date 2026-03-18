/*
 * XREFs of RIMArmWatchDog @ 0x1C0099B04
 * Callers:
 *     RIMWatchDog @ 0x1C0051AD0 (RIMWatchDog.c)
 *     rimSignalReadComplete @ 0x1C00999CC (rimSignalReadComplete.c)
 * Callees:
 *     <none>
 */

BOOLEAN RIMArmWatchDog()
{
  BOOLEAN result; // al

  if ( gWatchDogTimer )
  {
    if ( !gbWatchDogTimerArmed )
    {
      gbWatchDogTimerArmed = 1;
      return KeSetTimer(gWatchDogTimer, (LARGE_INTEGER)-50000000LL, 0LL);
    }
  }
  return result;
}
