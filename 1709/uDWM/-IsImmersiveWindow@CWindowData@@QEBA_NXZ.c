/*
 * XREFs of ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180010B70
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x1800063A4 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x18000B084 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@11111@Z @ 0x18000DE38 (-GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@11111@Z.c)
 *     ?CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCResource@@_N@Z @ 0x18000E2D8 (-CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCResource@@_N@Z.c)
 *     ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCResource@@0PEBUMilPointAndSizeL@@@Z @ 0x18000E4AC (-SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCResource@@0PEBUMilPointAndSizeL@@@Z.c)
 *     ?OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18000E5F0 (-OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18000E800 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x18000EB30 (-OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     ?UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ @ 0x18000ED48 (-UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x18000F768 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x18001006C (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x18001019C (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180010FBC (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?HasNonTrivialRepresentation@CWindowData@@QEBA_NXZ @ 0x1800112B8 (-HasNonTrivialRepresentation@CWindowData@@QEBA_NXZ.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x1800115DC (-RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4Win.c)
 *     ?AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x1800116B8 (-AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4Window.c)
 *     ?GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z @ 0x1800118F0 (-GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z.c)
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x180025BF4 (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180028460 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x18002C114 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE@@@Z @ 0x1800385CC (-QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAI.c)
 *     ?_CollectWindows@CLivePreview@@AEAAJXZ @ 0x18006A81C (-_CollectWindows@CLivePreview@@AEAAJXZ.c)
 *     ?ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18007B210 (-ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?InvalidateIconicBitmaps@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS@@@Z @ 0x18007BD20 (-InvalidateIconicBitmaps@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS@@.c)
 *     ?SetIconicBitmapBackgroundColor@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETIMMERSIVEICONICDEFAULTCOLOR@@@Z @ 0x18007C7BC (-SetIconicBitmapBackgroundColor@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETIMMERSIVEICONICD.c)
 *     ?SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x18007C858 (-SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBI.c)
 *     ?SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x18007C988 (-SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOT.c)
 * Callees:
 *     <none>
 */

char __fastcall CWindowData::IsImmersiveWindow(CWindowData *this)
{
  char result; // al

  if ( *((int *)this + 28) >= 8 && *((int *)this + 28) <= 11 )
    return 1;
  result = *((_BYTE *)this + 596) >> 7;
  if ( *((char *)this + 596) < 0 )
    return GetPropW(*((HWND *)this + 5), L"Microsoft.Windows.ShellManagedWindowAsNormalWindow") == 0LL;
  return result;
}
