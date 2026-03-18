/*
 * XREFs of ?GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C013FCBC
 * Callers:
 *     GreEnableEUDC @ 0x1C0008EAC (GreEnableEUDC.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C013FEE4 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     GreEudcLoadLinkW @ 0x1C0277328 (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x1C0277580 (GreEudcUnloadLinkW.c)
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
  if ( KeReadStateEvent(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent)
    && UmfdHostLifeTimeManager::s_SessionRasterizerInitialized
    && KeReadStateEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent) )
  {
    return 0LL;
  }
  return 259LL;
}
