/*
 * XREFs of ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180020DE0
 * Callers:
 *     ?SetTitle@CWindowData@@QEAAJPEAGH@Z @ 0x180010E50 (-SetTitle@CWindowData@@QEAAJPEAGH@Z.c)
 *     ?SetText@CText@@QEAAJPEBG@Z @ 0x180014B28 (-SetText@CText@@QEAAJPEBG@Z.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18001E690 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x1800211E0 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ @ 0x180023880 (-UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ.c)
 *     ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@II@Z @ 0x18002B780 (-RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T.c)
 *     ?Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ @ 0x18002FEA4 (-Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ.c)
 *     ?HrgnFromRects@@YAJPEBUtagRECT@@IPEAPEAUHRGN__@@@Z @ 0x180030A80 (-HrgnFromRects@@YAJPEBUtagRECT@@IPEAPEAUHRGN__@@@Z.c)
 *     ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z @ 0x180030C10 (-CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z.c)
 *     ?Create@CDWMDXGIAdapter@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z @ 0x1800332DC (-Create@CDWMDXGIAdapter@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z.c)
 *     ?AllocTableData@?$CGenericTableMap@PEAVCWindowData@@U?$SetElement@PEAVCWindowData@@@?$CGenericSet@PEAVCWindowData@@@@@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x1800367F0 (-AllocTableData@-$CGenericTableMap@PEAVCWindowData@@U-$SetElement@PEAVCWindowData@@@-$CGenericSe.c)
 *     ?QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE@@@Z @ 0x1800385CC (-QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAI.c)
 * Callees:
 *     <none>
 */

LPVOID __fastcall WPF::ProcessHeapImpl::Alloc(WPF::ProcessHeapImpl *this, SIZE_T a2)
{
  if ( !a2 )
    a2 = 1LL;
  return HeapAlloc(g_hProcessHeap, 0, a2);
}
