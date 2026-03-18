/*
 * XREFs of GetDPIServerInfoForDpi @ 0x1C00825C8
 * Callers:
 *     GetScaledLogFontForDpi @ 0x1C007810C (GetScaledLogFontForDpi.c)
 *     xxxDrawMenuItem @ 0x1C007FB1C (xxxDrawMenuItem.c)
 *     ?xxxMNGetBitmapSize@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x1C0082310 (-xxxMNGetBitmapSize@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z.c)
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x1C00824D0 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 *     ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C009853C (-xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z.c)
 *     InitProcessSystemDpi @ 0x1C00E0EF0 (InitProcessSystemDpi.c)
 *     GetProcessDpiServerInfo @ 0x1C0108FBC (GetProcessDpiServerInfo.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01A1600 (_ScaleSystemMetricForDPIWithoutCache.c)
 * Callees:
 *     GetDpiDepSysMetCachePlateauSlot @ 0x1C0077DC8 (GetDpiDepSysMetCachePlateauSlot.c)
 *     ?EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z @ 0x1C01A11E4 (-EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z.c)
 */

__int64 __fastcall GetDPIServerInfoForDpi(__int64 a1, __int64 a2, __int64 a3)
{
  int DpiDepSysMetCachePlateauSlot; // eax
  int v5; // r11d
  struct tagDPISERVERINFO *v6; // rbx

  if ( (_DWORD)a1 == *(unsigned __int16 *)(gpsi + 9974LL) )
    return GetSessionDpiServerInfo();
  if ( (_DWORD)a1 == 96 )
    return Get96DpiServerInfo(a1, a2, a3);
  DpiDepSysMetCachePlateauSlot = GetDpiDepSysMetCachePlateauSlot(a1);
  if ( DpiDepSysMetCachePlateauSlot == -1 )
    DpiDepSysMetCachePlateauSlot = 0;
  v6 = (struct tagDPISERVERINFO *)(gpsi + 104 * (DpiDepSysMetCachePlateauSlot + 49LL));
  EnsureServerInfoForDpi(v6, v5);
  return (__int64)v6;
}
