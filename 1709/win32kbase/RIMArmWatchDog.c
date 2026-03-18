/*
 * XREFs of RIMArmWatchDog @ 0x1C00A47F0
 * Callers:
 *     RIMWatchDog @ 0x1C00180F0 (RIMWatchDog.c)
 *     rimSignalReadComplete @ 0x1C00A46B8 (rimSignalReadComplete.c)
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
