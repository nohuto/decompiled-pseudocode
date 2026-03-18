/*
 * XREFs of ?GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C01454EC
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0030F20 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     GreGetTextFaceW @ 0x1C00AEF00 (GreGetTextFaceW.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C00B0C98 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     GreEnableEUDC @ 0x1C00BF0E4 (GreEnableEUDC.c)
 *     GreEudcLoadLinkW @ 0x1C0273D04 (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x1C0273F4C (GreEudcUnloadLinkW.c)
 * Callees:
 *     <none>
 */

__int64 UmfdHostLifeTimeManager::GetSessionTextStackStatus(void)
{
  if ( !UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent
    || !UmfdHostLifeTimeManager::s_InitialFontsAddedEvent )
  {
    return 3221225701LL;
  }
  if ( KeReadStateEvent((PRKEVENT)UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent)
    && UmfdHostLifeTimeManager::s_SessionRasterizerInitialized
    && KeReadStateEvent((PRKEVENT)UmfdHostLifeTimeManager::s_InitialFontsAddedEvent) )
  {
    return 0LL;
  }
  return 259LL;
}
