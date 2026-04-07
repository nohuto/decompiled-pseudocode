/*
 * XREFs of ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x1800753CC
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x18003F568 (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 *     ?DwmClientShutdown@@YAJXZ @ 0x18007A5A0 (-DwmClientShutdown@@YAJXZ.c)
 * Callees:
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x18000715C (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?SetPreferences@CDesktopManager@@SAXK@Z @ 0x1800418E0 (-SetPreferences@CDesktopManager@@SAXK@Z.c)
 *     ?ClearPreferences@CDesktopManager@@SAXK@Z @ 0x180041900 (-ClearPreferences@CDesktopManager@@SAXK@Z.c)
 *     ?EnableDesktopTarget@CDesktopManager@@SAJ_N@Z @ 0x18004A470 (-EnableDesktopTarget@CDesktopManager@@SAJ_N@Z.c)
 *     ?ReleaseDesktopRenderTarget@CDesktopManager@@AEAAXXZ @ 0x18004AF84 (-ReleaseDesktopRenderTarget@CDesktopManager@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     McTemplateU0 @ 0x180073C8C (McTemplateU0.c)
 */

__int64 __fastcall CDesktopManager::NotifyRedirectionShutdown(CDesktopManager *this)
{
  int v2; // eax
  signed int v3; // ebx
  char v4; // si
  signed int LastError; // eax
  signed int v6; // eax
  void *v7; // rcx

  *((_BYTE *)this + 20) = 1;
  v2 = CDesktopManager::EnableDesktopTarget(0LL);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x218u);
  CDesktopManager::ReleaseDesktopRenderTarget(this);
  v4 = CDesktopManager::CheckAnyPreference(0x10u);
  CDesktopManager::SetPreferences();
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0(Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmShutdownMessage_Info);
  if ( *((_QWORD *)this + 78) )
  {
    SetLastError(0);
    if ( !PostThreadMessageW(*((_DWORD *)this + 154), 0x12u, 0LL, 0LL) )
    {
      LastError = GetLastError();
      v3 = LastError;
      if ( LastError > 0 )
        v3 = (unsigned __int16)LastError | 0x80070000;
      if ( v3 >= 0 )
        v3 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x224u);
    }
    if ( v3 >= 0 )
    {
      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
      SetLastError(0);
      if ( WaitForSingleObject(*((HANDLE *)this + 78), 0xFFFFFFFF) )
      {
        v6 = GetLastError();
        v3 = v6;
        if ( v6 > 0 )
          v3 = (unsigned __int16)v6 | 0x80070000;
        if ( v3 >= 0 )
          v3 = -2003304445;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x22Cu);
      }
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    }
    *((_DWORD *)this + 154) = 0;
    v7 = (void *)*((_QWORD *)this + 78);
    if ( v7 )
    {
      CloseHandle(v7);
      *((_QWORD *)this + 78) = 0LL;
    }
  }
  if ( !v4 )
    CDesktopManager::ClearPreferences();
  return (unsigned int)v3;
}
