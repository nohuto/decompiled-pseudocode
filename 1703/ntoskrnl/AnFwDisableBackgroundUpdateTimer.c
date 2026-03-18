/*
 * XREFs of AnFwDisableBackgroundUpdateTimer @ 0x1407557D8
 * Callers:
 *     ResFwFreeContext @ 0x140755078 (ResFwFreeContext.c)
 *     AnFwDisplayFade @ 0x14075651C (AnFwDisplayFade.c)
 *     BgpFwLibraryDisable @ 0x140758B48 (BgpFwLibraryDisable.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140758E44 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpBackgroundUpdateTimer @ 0x14075A770 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     KeCancelTimer @ 0x14004D010 (KeCancelTimer.c)
 */

BOOLEAN AnFwDisableBackgroundUpdateTimer()
{
  BOOLEAN result; // al

  if ( byte_140388005 )
  {
    result = KeCancelTimer(&stru_14038C2D0);
    byte_140388005 = 0;
  }
  return result;
}
