/*
 * XREFs of AnFwDisableBackgroundUpdateTimer @ 0x1407CE2F4
 * Callers:
 *     AnFwDisplayBackgroundUpdate @ 0x1407CE288 (AnFwDisplayBackgroundUpdate.c)
 *     BgpFwLibraryDisable @ 0x1407CE670 (BgpFwLibraryDisable.c)
 *     AnFwDisplayFade @ 0x1407CEDC0 (AnFwDisplayFade.c)
 *     ResFwFreeContext @ 0x1407D3A5C (ResFwFreeContext.c)
 *     AnFwpBackgroundUpdateTimer @ 0x1407D3CF0 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     KeCancelTimer @ 0x1400E2110 (KeCancelTimer.c)
 */

BOOLEAN AnFwDisableBackgroundUpdateTimer()
{
  BOOLEAN result; // al

  if ( byte_1403A3590 )
  {
    result = KeCancelTimer(&stru_1403A7EC0);
    byte_1403A3590 = 0;
  }
  return result;
}
