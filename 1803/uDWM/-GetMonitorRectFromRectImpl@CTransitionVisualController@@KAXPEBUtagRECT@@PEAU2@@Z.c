/*
 * XREFs of ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x180005E4C
 * Callers:
 *     ?_WindowEnumCallback@CLauncherDismiss@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180001410 (-_WindowEnumCallback@CLauncherDismiss@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEA.c)
 *     ?_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z @ 0x1800080E8 (-_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x1800083B8 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180011A54 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180094DF0 (-_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x180096F58 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 *     ?_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x18009D328 (-_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_TARGET@@PEAPEAVCAnimationComponent@@3@Z @ 0x18009DB68 (-_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_T.c)
 *     ?_RecordMonitorRectForWindow@CLaunchSwitchBase@@IEAAXPEBVCWindowData@@@Z @ 0x18009E440 (-_RecordMonitorRectForWindow@CLaunchSwitchBase@@IEAAXPEBVCWindowData@@@Z.c)
 *     ?_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800A0730 (-_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800A1930 (-_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800A1F20 (-_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004B360 (memset_0.c)
 */

void __fastcall CTransitionVisualController::GetMonitorRectFromRectImpl(const struct tagRECT *a1, struct tagRECT *a2)
{
  HMONITOR v3; // rbx
  CDesktopManager *v4; // rdx
  LONG v5; // ecx
  LONG v6; // ecx
  struct tagMONITORINFO mi; // [rsp+20h] [rbp-38h] BYREF

  mi.cbSize = 40;
  v3 = MonitorFromRect(a1, 2u);
  memset_0(&mi.rcMonitor, 0, 0x24uLL);
  if ( GetMonitorInfoW(v3, &mi) )
  {
    *a2 = mi.rcMonitor;
  }
  else
  {
    v4 = CDesktopManager::s_pDesktopManagerInstance;
    v5 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 101);
    a2->left = v5;
    a2->right = *((_DWORD *)v4 + 103) + v5;
    v6 = *((_DWORD *)v4 + 102);
    a2->top = v6;
    a2->bottom = *((_DWORD *)v4 + 104) + v6;
  }
}
