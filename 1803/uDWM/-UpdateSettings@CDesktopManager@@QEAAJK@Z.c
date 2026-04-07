/*
 * XREFs of ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180024928
 * Callers:
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x18002C010 (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x18003F568 (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 * Callees:
 *     ?ModeChangeImpl@CDesktopManager@@AEAAJXZ @ 0x180025418 (-ModeChangeImpl@CDesktopManager@@AEAAJXZ.c)
 *     ?RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ @ 0x18002714C (-RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ.c)
 *     ?EnsureWindowFrames@CTopLevelWindow@@CAJXZ @ 0x180038E54 (-EnsureWindowFrames@CTopLevelWindow@@CAJXZ.c)
 *     ?RefreshPresentationModeSettings@CContactManager@@QEAAJXZ @ 0x1800390A8 (-RefreshPresentationModeSettings@CContactManager@@QEAAJXZ.c)
 *     ?InvalidateColors@ColorCache@@SAXXZ @ 0x1800394B8 (-InvalidateColors@ColorCache@@SAXXZ.c)
 *     ?SetupDPIValues@CDesktopManager@@QEAAXXZ @ 0x18003EA70 (-SetupDPIValues@CDesktopManager@@QEAAXXZ.c)
 *     ?UpdateWindowShadows@CDesktopManager@@QEAAXXZ @ 0x18003ECA0 (-UpdateWindowShadows@CDesktopManager@@QEAAXXZ.c)
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x18003EE58 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 *     ?SetupColorization@CDesktopManager@@AEAAXXZ @ 0x18003EF50 (-SetupColorization@CDesktopManager@@AEAAXXZ.c)
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x18003F0E0 (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 *     ?ReleaseCVICache@CDesktopManager@@SAXXZ @ 0x18004027C (-ReleaseCVICache@CDesktopManager@@SAXXZ.c)
 *     ?ReadSystemColors@CTopLevelWindow@@SAXXZ @ 0x1800416BC (-ReadSystemColors@CTopLevelWindow@@SAXXZ.c)
 *     ?SetWindowAnimation@CDesktopManager@@SAX_N@Z @ 0x180041F4C (-SetWindowAnimation@CDesktopManager@@SAX_N@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?InitializeHighContrast@CDesktopManager@@AEAAXXZ @ 0x18004AF34 (-InitializeHighContrast@CDesktopManager@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004B360 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::UpdateSettings(CDesktopManager *this, __int16 a2)
{
  int Theme; // esi
  char v3; // r14
  int v6; // eax
  int v7; // eax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  HMONITOR v12; // rax
  CDesktopManager *v13; // rdx
  int v14; // ecx
  int v15; // ecx
  int v16; // eax
  __int64 v17; // rcx
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
  if ( (a2 & 0x20) != 0 )
  {
    v6 = CDesktopManager::ModeChangeImpl(this);
    Theme = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xBCFu);
      return (unsigned int)Theme;
    }
  }
  if ( (a2 & 1) != 0 )
  {
    memset_0(pvParam, 0, 0x1F8uLL);
    pvParam[0] = 504;
    SystemParametersInfoW(0x29u, 0x1F8u, pvParam, 0);
    v7 = v28;
    v8 = v23;
    *(_OWORD *)((char *)this + 312) = v22;
    v9 = v24;
    *(_OWORD *)((char *)this + 328) = v8;
    v10 = v25;
    *(_OWORD *)((char *)this + 344) = v9;
    v11 = v26;
    *(_OWORD *)((char *)this + 360) = v10;
    *(_QWORD *)&v10 = v27;
    *(_OWORD *)((char *)this + 376) = v11;
    *((_QWORD *)this + 49) = v10;
    *((_DWORD *)this + 100) = v7;
    *((_DWORD *)this + 101) = GetSystemMetrics(76);
    *((_DWORD *)this + 102) = GetSystemMetrics(77);
    *((_DWORD *)this + 103) = GetSystemMetrics(78);
    *((_DWORD *)this + 104) = GetSystemMetrics(79);
    v12 = MonitorFromWindow(0LL, 1u);
    mi.cbSize = 40;
    if ( GetMonitorInfoW(v12, &mi) )
    {
      if ( !EqualRect((const RECT *)((char *)this + 420), &mi.rcMonitor) )
        CDesktopManager::ReleaseCVICache();
      *(RECT *)((char *)this + 420) = mi.rcMonitor;
    }
    else
    {
      v13 = CDesktopManager::s_pDesktopManagerInstance;
      v14 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 101);
      *((_DWORD *)this + 105) = v14;
      *((_DWORD *)this + 107) = *((_DWORD *)v13 + 103) + v14;
      v15 = *((_DWORD *)v13 + 102);
      *((_DWORD *)this + 106) = v15;
      *((_DWORD *)this + 108) = *((_DWORD *)v13 + 104) + v15;
    }
    v16 = CTopLevelWindow::EnsureWindowFrames();
    Theme = v16;
    if ( v16 >= 0 )
    {
      CTopLevelWindow::s_marMinInflationThickness.cxLeftWidth = GetSystemMetrics(5);
      dword_1800C9E30 = GetSystemMetrics(6);
      dword_1800C9E2C = CTopLevelWindow::s_marMinInflationThickness.cxLeftWidth;
      dword_1800C9E34 = dword_1800C9E30;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x23Au);
    }
    if ( Theme < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Theme, 0xBF2u);
      return (unsigned int)Theme;
    }
    v17 = *((_QWORD *)this + 30);
    if ( v17 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 72LL))(v17, 0LL);
  }
  if ( (a2 & 0x800) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
LABEL_24:
      CDesktopManager::UnloadTheme(this);
      Theme = CDesktopManager::LoadTheme(this);
      if ( Theme < 0 )
        return (unsigned int)Theme;
      v3 = 1;
      goto LABEL_26;
    }
    CDesktopManager::InitializeHighContrast(this);
  }
  if ( (a2 & 4) != 0 )
    goto LABEL_24;
LABEL_26:
  if ( (a2 & 0x400) != 0 || v3 )
    CDesktopManager::SetupColorization(this);
  if ( (a2 & 0x808) != 0 )
    CTopLevelWindow::ReadSystemColors();
  if ( (a2 & 2) != 0 )
    CWindowList::RecreateDesktopWindowReplacementForDesktops(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                             + 56));
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
  return (unsigned int)Theme;
}
