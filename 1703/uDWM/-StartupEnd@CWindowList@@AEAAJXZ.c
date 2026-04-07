/*
 * XREFs of ?StartupEnd@CWindowList@@AEAAJXZ @ 0x1800426D4
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180031E80 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012FF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x1800166B4 (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?ClearPreferences@CDesktopManager@@SAXK@Z @ 0x180041724 (-ClearPreferences@CDesktopManager@@SAXK@Z.c)
 *     ?CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z @ 0x180042214 (-CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z.c)
 *     ?CreateDesktopRenderTarget@CDesktopManager@@AEAAJXZ @ 0x180043580 (-CreateDesktopRenderTarget@CDesktopManager@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowList::StartupEnd(CWindowList *this)
{
  int v2; // eax
  int v3; // ebx
  CDesktopManager *v4; // rdi
  int DesktopRenderTarget; // eax
  __int64 v6; // rax
  unsigned int v7; // edx
  struct IDwmChannel *v8; // rcx
  int v9; // eax
  unsigned __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( *((_BYTE *)this + 384) )
    CDesktopManager::ClearPreferences();
  GetDesktopID(1LL, &v11);
  v2 = CDesktopManager::SendSwitchModeCommand(v11);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x140Cu);
  }
  else
  {
    v4 = CDesktopManager::s_pDesktopManagerInstance;
    v3 = 0;
    if ( !*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 8) )
    {
      DesktopRenderTarget = CDesktopManager::CreateDesktopRenderTarget(CDesktopManager::s_pDesktopManagerInstance);
      v3 = DesktopRenderTarget;
      if ( DesktopRenderTarget < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, DesktopRenderTarget, 0x480u);
      }
      else
      {
        CWindowList::CreateOrDestroyDesktopWindowReplacementForDesktops(
          *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 51),
          1);
        v6 = *((_QWORD *)v4 + 8);
        if ( v6 )
          v7 = *(_DWORD *)(v6 + 24);
        else
          v7 = 0;
        if ( v6 )
          v8 = *(struct IDwmChannel **)(v6 + 16);
        else
          v8 = 0LL;
        v9 = DwmRedirectionManagerSetClientRenderTarget(v8, v7);
        v3 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x494u);
      }
    }
    if ( v3 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x140Eu);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  return (unsigned int)v3;
}
