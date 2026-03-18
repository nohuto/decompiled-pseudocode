/*
 * XREFs of xxxLW_LoadFonts @ 0x1C00BF850
 * Callers:
 *     UserOnGreTextReady @ 0x1C00BF790 (UserOnGreTextReady.c)
 * Callees:
 *     xxxAddFontResourceW @ 0x1C0058B54 (xxxAddFontResourceW.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C00B0C98 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C00BF910 (-xxxLoadPermanentFonts@@YAHXZ.c)
 *     ?xxxLoadUserAndNetworkFonts@@YAXXZ @ 0x1C00BFAB0 (-xxxLoadUserAndNetworkFonts@@YAXXZ.c)
 *     ClientLoadLocalT1Fonts @ 0x1C00BFD2C (ClientLoadLocalT1Fonts.c)
 *     EngCloseFNTCache @ 0x1C00BFD94 (EngCloseFNTCache.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall xxxLW_LoadFonts(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 v3; // rcx
  unsigned int v5; // edi
  union _LARGE_INTEGER Interval; // [rsp+48h] [rbp+10h] BYREF

  v2 = a1;
  UserSessionSwitchLeaveCrit(a1, a2);
  if ( UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() < 0 )
  {
    EnterCrit(0LL, 1LL);
    return 0LL;
  }
  else
  {
    EnterCrit(0LL, 1LL);
    if ( v2 )
    {
      v5 = 0;
      if ( gbPermanentFontsLoaded )
      {
LABEL_9:
        xxxLoadUserAndNetworkFonts();
      }
      else
      {
        while ( !gbRemoteSession || v5 < 0x960 )
        {
          if ( gdwInAtomicOperation )
          {
            v3 = gdwExtraInstrumentations;
            if ( (gdwExtraInstrumentations & 1) != 0 )
              KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
          }
          UserSessionSwitchLeaveCrit(v3, gdwInAtomicOperation);
          Interval.QuadPart = -2500000LL;
          KeDelayExecutionThread(0, 0, &Interval);
          EnterCrit(0LL, 1LL);
          ++v5;
          if ( gbPermanentFontsLoaded )
            goto LABEL_9;
        }
      }
      gbNetworkFontsLoaded = 1;
    }
    else
    {
      xxxAddFontResourceW(L"marlett.ttf", 1u, 0LL);
      if ( (unsigned int)xxxLoadPermanentFonts() && !gbPermanentT1FontsLoaded )
      {
        if ( gbPermanentFontsLoaded )
        {
          ClientLoadLocalT1Fonts();
          gbPermanentT1FontsLoaded = 1;
          Interval.QuadPart = ghsemFntCache;
          GreAcquireSemaphore(ghsemFntCache);
          EngCloseFNTCache();
          SEMOBJ::vUnlock((SEMOBJ *)&Interval);
        }
      }
    }
    return 1LL;
  }
}
