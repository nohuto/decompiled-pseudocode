/*
 * XREFs of ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x180078A98
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x180043D10 (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 *     ?DwmClientShutdown@@YAJXZ @ 0x18007E2E0 (-DwmClientShutdown@@YAJXZ.c)
 * Callees:
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x180013454 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?ClearPreferences@CDesktopManager@@SAXK@Z @ 0x180041724 (-ClearPreferences@CDesktopManager@@SAXK@Z.c)
 *     ?SetPreferences@CDesktopManager@@SAXK@Z @ 0x1800420B8 (-SetPreferences@CDesktopManager@@SAXK@Z.c)
 *     ?CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z @ 0x180042214 (-CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     TemplateEventDescriptor @ 0x1800777AC (TemplateEventDescriptor.c)
 *     ?ReleaseDesktopRenderTarget@CDesktopManager@@AEAAJXZ @ 0x180078DD4 (-ReleaseDesktopRenderTarget@CDesktopManager@@AEAAJXZ.c)
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
  __int64 v9; // rcx
  signed int LastError; // eax
  signed int v11; // eax
  void *v12; // rcx

  v1 = CDesktopManager::s_pDesktopManagerInstance;
  v2 = 0;
  *((_BYTE *)this + 19) = 1;
  if ( *((_QWORD *)v1 + 8) )
  {
    CDesktopManager::ReleaseDesktopRenderTarget(v1);
    CWindowList::CreateOrDestroyDesktopWindowReplacementForDesktops(
      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 51),
      0);
    v4 = *((_QWORD *)v1 + 8);
    v5 = v4 ? *(_DWORD *)(v4 + 24) : 0;
    v6 = v4 ? *(struct IDwmChannel **)(v4 + 16) : 0LL;
    v7 = DwmRedirectionManagerSetClientRenderTarget(v6, v5);
    v2 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x494u);
  }
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x1C7u);
  v8 = CDesktopManager::CheckAnyPreference(0x10u);
  CDesktopManager::SetPreferences();
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    TemplateEventDescriptor(v9, (__int64)&UdwmShutdownMessage_Info);
  CWindowList::CreateOrDestroyDesktopWindowReplacementForDesktops(
    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 51),
    0);
  if ( *((_QWORD *)this + 73) )
  {
    SetLastError(0);
    if ( !PostThreadMessageW(*((_DWORD *)this + 144), 0x12u, 0LL, 0LL) )
    {
      LastError = GetLastError();
      v2 = LastError;
      if ( LastError > 0 )
        v2 = (unsigned __int16)LastError | 0x80070000;
      if ( v2 >= 0 )
        v2 = -2003304445;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x1D3u);
    }
    if ( v2 >= 0 )
    {
      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
      SetLastError(0);
      if ( WaitForSingleObject(*((HANDLE *)this + 73), 0xFFFFFFFF) )
      {
        v11 = GetLastError();
        v2 = v11;
        if ( v11 > 0 )
          v2 = (unsigned __int16)v11 | 0x80070000;
        if ( v2 >= 0 )
          v2 = -2003304445;
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x1DBu);
      }
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    }
    *((_DWORD *)this + 144) = 0;
    v12 = (void *)*((_QWORD *)this + 73);
    if ( v12 )
    {
      CloseHandle(v12);
      *((_QWORD *)this + 73) = 0LL;
    }
  }
  if ( !v8 )
    CDesktopManager::ClearPreferences();
  return (unsigned int)v2;
}
