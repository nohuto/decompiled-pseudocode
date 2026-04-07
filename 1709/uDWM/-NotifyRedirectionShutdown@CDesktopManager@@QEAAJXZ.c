/*
 * XREFs of ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x18006E7F8
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x18003C138 (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 *     ?DwmClientShutdown@@YAJXZ @ 0x180073BA0 (-DwmClientShutdown@@YAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x18003583C (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z @ 0x18003D5B0 (-CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z.c)
 *     ?SetPreferences@CDesktopManager@@SAXK@Z @ 0x18003DD98 (-SetPreferences@CDesktopManager@@SAXK@Z.c)
 *     ?ClearPreferences@CDesktopManager@@SAXK@Z @ 0x18003F634 (-ClearPreferences@CDesktopManager@@SAXK@Z.c)
 *     McTemplateU0 @ 0x18006CEDC (McTemplateU0.c)
 *     ?ReleaseDesktopRenderTarget@CDesktopManager@@AEAAJXZ @ 0x18006EB3C (-ReleaseDesktopRenderTarget@CDesktopManager@@AEAAJXZ.c)
 */

__int64 __fastcall CDesktopManager::NotifyRedirectionShutdown(CDesktopManager *this)
{
  CDesktopManager *v1; // rsi
  signed int v2; // ebx
  __int64 v4; // rax
  unsigned int v5; // edx
  struct IDwmChannel *v6; // rcx
  int v7; // eax
  char v8; // si
  signed int LastError; // eax
  signed int v10; // eax
  void *v11; // rcx

  v1 = CDesktopManager::s_pDesktopManagerInstance;
  v2 = 0;
  *((_BYTE *)this + 19) = 1;
  if ( *((_QWORD *)v1 + 8) )
  {
    CDesktopManager::ReleaseDesktopRenderTarget(v1);
    CWindowList::CreateOrDestroyDesktopWindowReplacementForDesktops(
      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 57),
      0);
    v4 = *((_QWORD *)v1 + 8);
    v5 = v4 ? *(_DWORD *)(v4 + 24) : 0;
    v6 = v4 ? *(struct IDwmChannel **)(v4 + 16) : 0LL;
    v7 = DwmRedirectionManagerSetClientRenderTarget(v6, v5);
    v2 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x541u);
  }
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x202u);
  v8 = CDesktopManager::CheckAnyPreference(0x10u);
  CDesktopManager::SetPreferences();
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmShutdownMessage_Info);
  CWindowList::CreateOrDestroyDesktopWindowReplacementForDesktops(
    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 57),
    0);
  if ( *((_QWORD *)this + 79) )
  {
    SetLastError(0);
    if ( !PostThreadMessageW(*((_DWORD *)this + 156), 0x12u, 0LL, 0LL) )
    {
      LastError = GetLastError();
      v2 = LastError;
      if ( LastError > 0 )
        v2 = (unsigned __int16)LastError | 0x80070000;
      if ( v2 >= 0 )
        v2 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x20Eu);
    }
    if ( v2 >= 0 )
    {
      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
      SetLastError(0);
      if ( WaitForSingleObject(*((HANDLE *)this + 79), 0xFFFFFFFF) )
      {
        v10 = GetLastError();
        v2 = v10;
        if ( v10 > 0 )
          v2 = (unsigned __int16)v10 | 0x80070000;
        if ( v2 >= 0 )
          v2 = -2003304445;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x216u);
      }
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    }
    *((_DWORD *)this + 156) = 0;
    v11 = (void *)*((_QWORD *)this + 79);
    if ( v11 )
    {
      CloseHandle(v11);
      *((_QWORD *)this + 79) = 0LL;
    }
  }
  if ( !v8 )
    CDesktopManager::ClearPreferences();
  return (unsigned int)v2;
}
