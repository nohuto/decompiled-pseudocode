/*
 * XREFs of ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C00B0C98
 * Callers:
 *     GreGetOutlineTextMetricsInternalW @ 0x1C00384F8 (GreGetOutlineTextMetricsInternalW.c)
 *     GreGetCharSet @ 0x1C00B0B68 (GreGetCharSet.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00B1074 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     xxxLW_LoadFonts @ 0x1C00BF850 (xxxLW_LoadFonts.c)
 *     NtGdiAddFontResourceW @ 0x1C00FB3A0 (NtGdiAddFontResourceW.c)
 *     GreWaitForTextReady @ 0x1C01263F0 (GreWaitForTextReady.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z @ 0x1C026A3B0 (-dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z.c)
 *     NtGdiAddFontMemResourceEx @ 0x1C02897B0 (NtGdiAddFontMemResourceEx.c)
 * Callees:
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00B0D48 (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C01454EC (-GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ.c)
 */

NTSTATUS UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization(void)
{
  NTSTATUS result; // eax

  result = UmfdHostLifeTimeManager::GetSessionTextStackStatus();
  if ( result == 259 )
  {
    if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost()
      || UmfdHostLifeTimeManager::s_CsrssAddInitialFontsThread == KeGetCurrentThread() )
    {
      return KeReadStateEvent((PRKEVENT)UmfdHostLifeTimeManager::s_InitialFontsAddedEvent) == 0 ? 0x103 : 0;
    }
    else
    {
      if ( !UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent
        || !UmfdHostLifeTimeManager::s_InitialFontsAddedEvent )
      {
        return -1073741595;
      }
      result = KeWaitForSingleObject(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent, Executive, 0, 0, 0LL);
      if ( result < 0 )
        return result;
      if ( UmfdHostLifeTimeManager::s_SessionRasterizerInitialized )
      {
        KeWaitForSingleObject(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent, Executive, 0, 0, 0LL);
        return 0;
      }
      else
      {
        return -1073741595;
      }
    }
  }
  return result;
}
