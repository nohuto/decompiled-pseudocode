/*
 * XREFs of ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00226A8
 * Callers:
 *     UmfdLoadFontFileView @ 0x1C0027684 (UmfdLoadFontFileView.c)
 *     ?vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAVPDEV@@PEAU_FNTCHECKSUM@@@Z @ 0x1C0027AF4 (-vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAV.c)
 *     cMapRemoteFonts @ 0x1C026AC44 (cMapRemoteFonts.c)
 *     AtmDrvFontManagementRedirector @ 0x1C027F7B0 (AtmDrvFontManagementRedirector.c)
 *     GreMakeFontDir @ 0x1C0297420 (GreMakeFontDir.c)
 *     ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z @ 0x1C029D510 (-TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z.c)
 * Callees:
 *     ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00227D8 (-IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ??0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00227F8 (--0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0024574 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002459C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00BADD4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C013FEE4 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 */

char UmfdHostLifeTimeManager::EnsureUmfdHost(void)
{
  char v0; // bl
  int v2; // eax
  const GUID *v3; // r8
  const GUID *v4; // r9
  __int64 v5; // [rsp+30h] [rbp-38h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-30h] BYREF

  AutoSharedPushLock::AutoSharedPushLock(
    (AutoSharedPushLock *)&v5,
    (struct _EX_PUSH_LOCK *)&UmfdHostLifeTimeManager::s_ReadyLock);
  v0 = 0;
  if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock() )
  {
    if ( v5 )
    {
      GreReleasePushLockShared(v5);
      KeLeaveCriticalRegion();
    }
    return 1;
  }
  else
  {
    if ( v5 )
    {
      GreReleasePushLockShared(v5);
      KeLeaveCriticalRegion();
    }
    if ( (int)UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() >= 0 )
    {
      CAutoPushLockEx::CAutoPushLockEx(
        (CAutoPushLockEx *)&v5,
        (struct _EX_PUSH_LOCK *)&UmfdHostLifeTimeManager::s_LaunchLock);
      if ( UmfdHostLifeTimeManager::s_Launched )
      {
LABEL_6:
        v0 = 1;
LABEL_7:
        PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v5);
        return v0;
      }
      KeClearEvent(UmfdHostLifeTimeManager::s_WinlogonCallbackEvent);
      if ( gpidLogon )
        v2 = PostWinlogonMessage(1033LL, 0LL);
      else
        v2 = -1073741271;
      if ( v2 >= 0 )
      {
        if ( !KeWaitForSingleObject(UmfdHostLifeTimeManager::s_WinlogonCallbackEvent, Executive, 0, 0, 0LL)
          && UmfdHostLifeTimeManager::s_UmfdHostProcess )
        {
          goto LABEL_6;
        }
        if ( dword_1C0324850 <= 5u || !TlgKeywordOn((TraceLoggingHProvider)&dword_1C0324850, 0x200000000000uLL) )
          goto LABEL_7;
      }
      else if ( dword_1C0324850 <= 5u || !TlgKeywordOn((TraceLoggingHProvider)&dword_1C0324850, 0x200000000000uLL) )
      {
        goto LABEL_7;
      }
      TlgWrite((TraceLoggingHProvider)&dword_1C0324850, &unk_1C02ECF62, v3, v4, 2u, &pData);
      goto LABEL_7;
    }
    return 0;
  }
}
