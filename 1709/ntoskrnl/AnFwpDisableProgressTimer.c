/*
 * XREFs of AnFwpDisableProgressTimer @ 0x1407CE49C
 * Callers:
 *     AnFwDisplayFade @ 0x1407CEDC0 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x1407CFA7C (AnFwDisplayProgressIndicator.c)
 *     AnFwpBackgroundUpdateTimer @ 0x1407D3CF0 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     KeCancelTimer @ 0x1400E2110 (KeCancelTimer.c)
 *     RaspClearCache @ 0x1407CF9E4 (RaspClearCache.c)
 *     TxtpClearCache @ 0x1407CFF14 (TxtpClearCache.c)
 */

void __fastcall AnFwpDisableProgressTimer(_BOOL8 a1)
{
  if ( byte_14038D870 )
  {
    LOBYTE(a1) = 0;
    if ( (dword_14035A1B0 & 0x100000) != 0 )
      a1 = (dword_14035A1B0 & 0x1000) != 0;
    byte_14038D870 = 0;
    if ( (dword_14035A1B0 & 0xC00) != 0xC00 && !a1 )
      KeCancelTimer(&stru_1403A29F0);
    TxtpClearCache(a1);
    if ( RasterizerInitialized )
      RaspClearCache();
  }
}
