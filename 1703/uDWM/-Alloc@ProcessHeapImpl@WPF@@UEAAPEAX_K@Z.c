/*
 * XREFs of ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002C8A0
 * Callers:
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x1800084E8 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x18000A424 (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 *     ?Create@CDWMDXGIAdapter@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z @ 0x18000F10C (-Create@CDWMDXGIAdapter@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z.c)
 *     ?Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z @ 0x180012E10 (-Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z.c)
 *     ?Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ @ 0x1800131B0 (-Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ.c)
 *     ?HrgnFromRects@@YAJPEBUtagRECT@@IPEAPEAUHRGN__@@@Z @ 0x1800149E0 (-HrgnFromRects@@YAJPEBUtagRECT@@IPEAPEAUHRGN__@@@Z.c)
 *     ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z @ 0x180014B70 (-CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z.c)
 *     ?AllocTableData@?$CGenericTableMap@PEAVCWindowData@@U?$SetElement@PEAVCWindowData@@@?$CGenericSet@PEAVCWindowData@@@@@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x180016E90 (-AllocTableData@-$CGenericTableMap@PEAVCWindowData@@U-$SetElement@PEAVCWindowData@@@-$CGenericSe.c)
 *     ?SetText@CText@@QEAAJPEBG@Z @ 0x18001C468 (-SetText@CText@@QEAAJPEBG@Z.c)
 *     ?SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z @ 0x18002115C (-SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z.c)
 *     ?UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ @ 0x180021270 (-UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x180029EF0 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x18002CCB8 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@II@Z @ 0x180032820 (-RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T.c)
 *     ?SetTitle@CWindowData@@QEAAJPEAGH@Z @ 0x180035D50 (-SetTitle@CWindowData@@QEAAJPEAGH@Z.c)
 *     ?QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE@@@Z @ 0x18003D30C (-QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAI.c)
 * Callees:
 *     <none>
 */

LPVOID __fastcall WPF::ProcessHeapImpl::Alloc(WPF::ProcessHeapImpl *this, SIZE_T a2)
{
  SIZE_T v2; // r8

  v2 = 1LL;
  if ( a2 )
    v2 = a2;
  return HeapAlloc(g_hProcessHeap, 0, v2);
}
