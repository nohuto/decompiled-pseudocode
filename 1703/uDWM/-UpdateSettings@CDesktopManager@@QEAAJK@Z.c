/*
 * XREFs of ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180021FE8
 * Callers:
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x1800334AC (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x180043D10 (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 * Callees:
 *     ?RefreshPresentationModeSettings@CContactManager@@QEAAJXZ @ 0x180013808 (-RefreshPresentationModeSettings@CContactManager@@QEAAJXZ.c)
 *     ?EnsureWindowFrames@CTopLevelWindow@@CAJXZ @ 0x180016C8C (-EnsureWindowFrames@CTopLevelWindow@@CAJXZ.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x18001C8A0 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?ModeChangeImpl@CDesktopManager@@AEAAJXZ @ 0x1800231E4 (-ModeChangeImpl@CDesktopManager@@AEAAJXZ.c)
 *     ?RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ @ 0x18002EE60 (-RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ.c)
 *     ?SetupDPIValues@CDesktopManager@@QEAAXXZ @ 0x1800432A0 (-SetupDPIValues@CDesktopManager@@QEAAXXZ.c)
 *     ?UpdateWindowShadows@CDesktopManager@@QEAAXXZ @ 0x18004349C (-UpdateWindowShadows@CDesktopManager@@QEAAXXZ.c)
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x180043780 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 *     ?SetupColorization@CDesktopManager@@AEAAXXZ @ 0x180043878 (-SetupColorization@CDesktopManager@@AEAAXXZ.c)
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x180043A08 (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 *     ?ReadSystemColors@CTopLevelWindow@@SAXXZ @ 0x1800499C8 (-ReadSystemColors@CTopLevelWindow@@SAXXZ.c)
 *     ?ReleaseCVICache@CDesktopManager@@SAXXZ @ 0x18004A634 (-ReleaseCVICache@CDesktopManager@@SAXXZ.c)
 *     ?SetWindowAnimation@CDesktopManager@@SAX_N@Z @ 0x18004A6B8 (-SetWindowAnimation@CDesktopManager@@SAX_N@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004DE90 (memset_0.c)
 */

__int64 __fastcall CDesktopManager::UpdateSettings(CDesktopManager *this, __int16 a2)
{
  int Theme; // edi
  char v3; // r14
  int v6; // eax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  HMONITOR v11; // rax
  int v12; // eax
  struct CRenderDataVisual **v13; // rcx
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
  if ( (a2 & 0x20) != 0 && (v15 = CDesktopManager::ModeChangeImpl(this), Theme = v15, v15 < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xACBu);
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
      *(_OWORD *)((char *)this + 264) = v22;
      v8 = v24;
      *(_OWORD *)((char *)this + 280) = v7;
      v9 = v25;
      *(_OWORD *)((char *)this + 296) = v8;
      v10 = v26;
      *(_OWORD *)((char *)this + 312) = v9;
      *(_QWORD *)&v9 = v27;
      *(_OWORD *)((char *)this + 328) = v10;
      *((_QWORD *)this + 43) = v9;
      *((_DWORD *)this + 88) = v6;
      *((_DWORD *)this + 89) = GetSystemMetrics(76);
      *((_DWORD *)this + 90) = GetSystemMetrics(77);
      *((_DWORD *)this + 91) = GetSystemMetrics(78);
      *((_DWORD *)this + 92) = GetSystemMetrics(79);
      v11 = MonitorFromWindow(0LL, 1u);
      mi.cbSize = 40;
      if ( GetMonitorInfoW(v11, &mi) )
      {
        if ( !EqualRect((const RECT *)((char *)this + 372), &mi.rcMonitor) )
          CDesktopManager::ReleaseCVICache();
        *(RECT *)((char *)this + 372) = mi.rcMonitor;
      }
      else
      {
        v16 = CDesktopManager::s_pDesktopManagerInstance;
        v17 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 89);
        *((_DWORD *)this + 93) = v17;
        *((_DWORD *)this + 95) = *((_DWORD *)v16 + 91) + v17;
        v18 = *((_DWORD *)v16 + 90);
        *((_DWORD *)this + 94) = v18;
        *((_DWORD *)this + 96) = *((_DWORD *)v16 + 92) + v18;
      }
      v12 = CTopLevelWindow::EnsureWindowFrames();
      Theme = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x202u);
      }
      else
      {
        CTopLevelWindow::s_marMinInflationThickness.cxLeftWidth = GetSystemMetrics(5);
        dword_1800C0E30 = GetSystemMetrics(6);
        dword_1800C0E2C = CTopLevelWindow::s_marMinInflationThickness.cxLeftWidth;
        dword_1800C0E34 = dword_1800C0E30;
      }
      if ( Theme < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, Theme, 0xAEEu);
        return (unsigned int)Theme;
      }
      v13 = (struct CRenderDataVisual **)*((_QWORD *)this + 24);
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
                                                               + 51));
    if ( (a2 & 0x40) != 0 )
      CDesktopManager::UpdateWindowShadows(this);
    if ( (a2 & 0x80u) != 0 )
      CDesktopManager::SetupDPIValues(this);
    if ( (a2 & 0x100) != 0 )
      CContactManager::RefreshPresentationModeSettings(*((CContactManager **)this + 18));
    if ( (a2 & 0x200) != 0 )
    {
      v19[0] = 8;
      if ( SystemParametersInfoW(0x48u, 8u, v19, 0) )
        CDesktopManager::SetWindowAnimation(v19[1] != 0);
    }
  }
  return (unsigned int)Theme;
}
