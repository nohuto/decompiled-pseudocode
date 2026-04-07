/*
 * XREFs of ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x18000F5B4
 * Callers:
 *     ?GetPerspectiveValue@CTransitionVisualController@@SAJHHPEAM@Z @ 0x180006B1C (-GetPerspectiveValue@CTransitionVisualController@@SAJHHPEAM@Z.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x180006ED8 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x18000E308 (-SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x1800214DC (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?GetAnimationDuration@@YAJHHPEAK@Z @ 0x180038CCC (-GetAnimationDuration@@YAJHHPEAK@Z.c)
 *     ?GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z @ 0x18003C280 (-GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z.c)
 *     ?Initialize@CDirectTouchVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18003D6F0 (-Initialize@CDirectTouchVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x18003F0E0 (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 *     ?EnsureImages@CTopLevelWindow@@SAJPEAUIDwmChannel@@@Z @ 0x1800402BC (-EnsureImages@CTopLevelWindow@@SAJPEAUIDwmChannel@@@Z.c)
 *     ?ReadSystemColors@CTopLevelWindow@@SAXXZ @ 0x1800416BC (-ReadSystemColors@CTopLevelWindow@@SAXXZ.c)
 *     ?_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ @ 0x18008150C (-_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ.c)
 *     ?EnsureAnimationObjects@CWindowArrangementTransition@@AEAAJXZ @ 0x18008841C (-EnsureAnimationObjects@CWindowArrangementTransition@@AEAAJXZ.c)
 *     ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x18008D9B8 (-Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_.c)
 *     ?Initialize@CTextTetherVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18008E380 (-Initialize@CTextTetherVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CTouchDragVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x1800901D0 (-Initialize@CTouchDragVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CTetherVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180091080 (-Initialize@CTetherVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CPenBarrelKeyVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x1800917A0 (-Initialize@CPenBarrelKeyVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x180091E4C (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 *     ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x180092530 (-Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?Initialize@CPressTapVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180092880 (-Initialize@CPressTapVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CIndirectTouchVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18009A160 (-Initialize@CIndirectTouchVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopManager::GetTheme(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx

  if ( !a1 )
    return *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 71);
  v1 = a1 - 1;
  if ( !v1 )
    return *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 73);
  v2 = v1 - 1;
  if ( !v2 )
    return *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 74);
  v3 = v2 - 1;
  if ( !v3 )
    return *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 75);
  if ( v3 == 1 )
    return *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 76);
  return 0LL;
}
