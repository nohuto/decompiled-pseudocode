/*
 * XREFs of AnFwpDisableProgressTimer @ 0x14083C60C
 * Callers:
 *     AnFwDisplayFade @ 0x14083B548 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x14083D254 (AnFwDisplayProgressIndicator.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140840410 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     KeCancelTimer @ 0x14005A760 (KeCancelTimer.c)
 *     TxtpClearCache @ 0x14083C4B0 (TxtpClearCache.c)
 *     RaspClearCache @ 0x14083C73C (RaspClearCache.c)
 */

void AnFwpDisableProgressTimer()
{
  bool v0; // cl

  if ( byte_1403D1808 )
  {
    v0 = 0;
    if ( (dword_14039D7F0 & 0x100000) != 0 )
      v0 = (dword_14039D7F0 & 0x1000) != 0;
    byte_1403D1808 = 0;
    if ( (dword_14039D7F0 & 0xC00) != 0xC00 && !v0 )
      KeCancelTimer(&Timer);
    TxtpClearCache();
    if ( RasterizerInitialized )
      RaspClearCache();
  }
}
