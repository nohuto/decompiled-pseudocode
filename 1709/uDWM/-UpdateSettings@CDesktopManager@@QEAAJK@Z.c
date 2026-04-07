/*
 * XREFs of ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180016C9C
 * Callers:
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x180025BF4 (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x18003C138 (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 * Callees:
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x180012990 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?ModeChangeImpl@CDesktopManager@@AEAAJXZ @ 0x180017F28 (-ModeChangeImpl@CDesktopManager@@AEAAJXZ.c)
 *     ?RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ @ 0x180027E30 (-RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EnsureWindowFrames@CTopLevelWindow@@CAJXZ @ 0x180036238 (-EnsureWindowFrames@CTopLevelWindow@@CAJXZ.c)
 *     ?RefreshPresentationModeSettings@CContactManager@@QEAAJXZ @ 0x180036658 (-RefreshPresentationModeSettings@CContactManager@@QEAAJXZ.c)
 *     ?InvalidateColors@ColorCache@@SAXXZ @ 0x18003689C (-InvalidateColors@ColorCache@@SAXXZ.c)
 *     ?SetWindowAnimation@CDesktopManager@@SAX_N@Z @ 0x180038E34 (-SetWindowAnimation@CDesktopManager@@SAX_N@Z.c)
 *     ?ReadSystemColors@CTopLevelWindow@@SAXXZ @ 0x180039564 (-ReadSystemColors@CTopLevelWindow@@SAXXZ.c)
 *     ?SetupDPIValues@CDesktopManager@@QEAAXXZ @ 0x18003B448 (-SetupDPIValues@CDesktopManager@@QEAAXXZ.c)
 *     ?UpdateWindowShadows@CDesktopManager@@QEAAXXZ @ 0x18003B6A0 (-UpdateWindowShadows@CDesktopManager@@QEAAXXZ.c)
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x18003BB78 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 *     ?SetupColorization@CDesktopManager@@AEAAXXZ @ 0x18003BC70 (-SetupColorization@CDesktopManager@@AEAAXXZ.c)
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x18003BE00 (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 *     ?ReleaseCVICache@CDesktopManager@@SAXXZ @ 0x18003F654 (-ReleaseCVICache@CDesktopManager@@SAXXZ.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     memset_0 @ 0x180045938 (memset_0.c)
 */

__int64 __fastcall CDesktopManager::UpdateSettings(CDesktopManager *this, __int16 a2)
{
  int Theme; // esi
  char v3; // r14
  int v6; // eax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  HMONITOR v11; // rax
  int v12; // eax
  CAccent *v13; // rcx
  int v15; // eax
  CDesktopManager *v16; // rdx
  int v17; // ecx
  int v18; // ecx
  _DWORD v19[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct tagMONITORINFO mi; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD pvParam[6]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v22; // [rsp+78h] [rbp-88h]
  __int128 v23; // [rsp+88h] [rbp-78h]
  __int128 v24; // [rsp+98h] [rbp-68h]
  __int128 v25; // [rsp+A8h] [rbp-58h]
  __int128 v26; // [rsp+B8h] [rbp-48h]
  __int64 v27; // [rsp+C8h] [rbp-38h]
  int v28; // [rsp+D0h] [rbp-30h]

  Theme = 0;
  v3 = 0;
  if ( (a2 & 0x40D) != 0 )
    ColorCache::InvalidateColors();
  if ( (a2 & 0x20) != 0 && (v15 = CDesktopManager::ModeChangeImpl(this), Theme = v15, v15 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xB7Eu);
  }
  else
  {
    if ( (a2 & 1) != 0 )
    {
      memset_0(pvParam, 0, 0x1F8uLL);
      pvParam[0] = 504;
      SystemParametersInfoW(0x29u, 0x1F8u, pvParam, 0);
      v6 = v28;
      v7 = v23;
      *(_OWORD *)((char *)this + 312) = v22;
      v8 = v24;
      *(_OWORD *)((char *)this + 328) = v7;
      v9 = v25;
      *(_OWORD *)((char *)this + 344) = v8;
      v10 = v26;
      *(_OWORD *)((char *)this + 360) = v9;
      *(_QWORD *)&v9 = v27;
      *(_OWORD *)((char *)this + 376) = v10;
      *((_QWORD *)this + 49) = v9;
      *((_DWORD *)this + 100) = v6;
      *((_DWORD *)this + 101) = GetSystemMetrics(76);
      *((_DWORD *)this + 102) = GetSystemMetrics(77);
      *((_DWORD *)this + 103) = GetSystemMetrics(78);
      *((_DWORD *)this + 104) = GetSystemMetrics(79);
      v11 = MonitorFromWindow(0LL, 1u);
      mi.cbSize = 40;
      if ( GetMonitorInfoW(v11, &mi) )
      {
        if ( !EqualRect((const RECT *)((char *)this + 420), &mi.rcMonitor) )
          CDesktopManager::ReleaseCVICache();
        *(RECT *)((char *)this + 420) = mi.rcMonitor;
      }
      else
      {
        v16 = CDesktopManager::s_pDesktopManagerInstance;
        v17 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 101);
        *((_DWORD *)this + 105) = v17;
        *((_DWORD *)this + 107) = *((_DWORD *)v16 + 103) + v17;
        v18 = *((_DWORD *)v16 + 102);
        *((_DWORD *)this + 106) = v18;
        *((_DWORD *)this + 108) = *((_DWORD *)v16 + 104) + v18;
      }
      v12 = CTopLevelWindow::EnsureWindowFrames();
      Theme = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x1FBu);
      }
      else
      {
        CTopLevelWindow::s_marMinInflationThickness.cxLeftWidth = GetSystemMetrics(5);
        dword_1800BEEA0 = GetSystemMetrics(6);
        dword_1800BEE9C = CTopLevelWindow::s_marMinInflationThickness.cxLeftWidth;
        dword_1800BEEA4 = dword_1800BEEA0;
      }
      if ( Theme < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Theme, 0xBA1u);
        return (unsigned int)Theme;
      }
      v13 = (CAccent *)*((_QWORD *)this + 30);
      if ( v13 )
        CAccent::UpdateLayout(v13, 0);
    }
    if ( (a2 & 4) != 0 )
    {
      CDesktopManager::UnloadTheme(this);
      Theme = CDesktopManager::LoadTheme(this);
      if ( Theme < 0 )
        return (unsigned int)Theme;
      v3 = 1;
    }
    if ( (a2 & 0x400) != 0 || v3 )
      CDesktopManager::SetupColorization(this);
    if ( (a2 & 8) != 0 )
      CTopLevelWindow::ReadSystemColors();
    if ( (a2 & 2) != 0 )
      CWindowList::RecreateDesktopWindowReplacementForDesktops(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                               + 57));
    if ( (a2 & 0x40) != 0 )
      CDesktopManager::UpdateWindowShadows(this);
    if ( (a2 & 0x80u) != 0 )
      CDesktopManager::SetupDPIValues(this);
    if ( (a2 & 0x100) != 0 )
      CContactManager::RefreshPresentationModeSettings(*((CContactManager **)this + 22));
    if ( (a2 & 0x200) != 0 )
    {
      v19[0] = 8;
      if ( SystemParametersInfoW(0x48u, 8u, v19, 0) )
        CDesktopManager::SetWindowAnimation(v19[1] != 0);
    }
  }
  return (unsigned int)Theme;
}
