/*
 * XREFs of AnFwDisableBackgroundUpdateTimer @ 0x14083C5F0
 * Callers:
 *     ResFwFreeContext @ 0x14083B078 (ResFwFreeContext.c)
 *     AnFwDisplayFade @ 0x14083B548 (AnFwDisplayFade.c)
 *     BgpFwLibraryDisable @ 0x14083D0D8 (BgpFwLibraryDisable.c)
 *     AnFwDisplayBackgroundUpdate @ 0x14083D910 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140840410 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     KeCancelTimer @ 0x14005A760 (KeCancelTimer.c)
 */

BOOLEAN AnFwDisableBackgroundUpdateTimer()
{
  BOOLEAN result; // al

  if ( byte_1403E9AC1 )
  {
    result = KeCancelTimer(&stru_1403EBE10);
    byte_1403E9AC1 = 0;
  }
  return result;
}
