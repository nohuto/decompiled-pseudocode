/*
 * XREFs of ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C013FEE4
 * Callers:
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00226A8 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C002D170 (GreGetOutlineTextMetricsInternalW.c)
 *     GreGetTextFaceW @ 0x1C00872D0 (GreGetTextFaceW.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C008B1D0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     GreGetCharSet @ 0x1C00E09EC (GreGetCharSet.c)
 *     NtGdiAddFontResourceW @ 0x1C00EAB10 (NtGdiAddFontResourceW.c)
 *     GreWaitForTextReady @ 0x1C011C7C0 (GreWaitForTextReady.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z @ 0x1C026B638 (-dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z.c)
 *     NtGdiAddFontMemResourceEx @ 0x1C028CC60 (NtGdiAddFontMemResourceEx.c)
 * Callees:
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C0022778 (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C013FCBC (-GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ.c)
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
      return KeReadStateEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent) == 0 ? 0x103 : 0;
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
