/*
 * XREFs of AnFwpDisableProgressTimer @ 0x140755A34
 * Callers:
 *     AnFwDisplayFade @ 0x14075651C (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x140757A8C (AnFwDisplayProgressIndicator.c)
 *     AnFwpBackgroundUpdateTimer @ 0x14075A770 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     KeCancelTimer @ 0x14004D010 (KeCancelTimer.c)
 *     RaspClearCache @ 0x140755AA0 (RaspClearCache.c)
 *     TxtpClearCache @ 0x140757CB0 (TxtpClearCache.c)
 */

void __fastcall AnFwpDisableProgressTimer(_BOOL8 a1)
{
  if ( byte_14036F158 )
  {
    LOBYTE(a1) = 0;
    if ( (dword_140341A30 & 0x100000) != 0 )
      a1 = (dword_140341A30 & 0x1000) != 0;
    byte_14036F158 = 0;
    if ( (dword_140341A30 & 0xC00) != 0xC00 && !a1 )
      KeCancelTimer(&Timer);
    TxtpClearCache(a1);
    if ( RasterizerInitialized )
      RaspClearCache();
  }
}
