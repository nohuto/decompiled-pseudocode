/*
 * XREFs of ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x180084A24
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x18002DE1C (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 *     ?WasMaximized@CWindowIconic@@AEAA_NXZ @ 0x180039F94 (-WasMaximized@CWindowIconic@@AEAA_NXZ.c)
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z @ 0x180070F28 (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV?$DynArray@PEAVCWindowData@@$0A@@@_N@Z @ 0x180072B44 (-_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV-$DynArray@PEAVCWindowData@@$0A@@@_N@Z.c)
 *     ?LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK@Z @ 0x1800772BC (-LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK.c)
 *     ?PostActivateLivePreview@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z @ 0x180085658 (-PostActivateLivePreview@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z.c)
 *     ?GetWindowRectForLivePreview@CWindowIconic@@AEAAJPEAUtagRECT@@@Z @ 0x1800869FC (-GetWindowRectForLivePreview@CWindowIconic@@AEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x18002BA44 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 */

struct CWindowData *__fastcall CWindowData::GetMDIOwner(HWND *this)
{
  __int64 v1; // rbx
  HWND PropW; // rdx

  v1 = 0LL;
  PropW = (HWND)GetPropW(this[5], (LPCWSTR)0xA91B);
  if ( PropW )
    return CWindowList::FindWindowDataByHwnd(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 56), PropW);
  return (struct CWindowData *)v1;
}
