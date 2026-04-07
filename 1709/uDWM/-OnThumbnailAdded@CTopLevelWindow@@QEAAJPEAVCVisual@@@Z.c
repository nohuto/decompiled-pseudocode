/*
 * XREFs of ?OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z @ 0x180009CDC
 * Callers:
 *     ?RegisterThumbnail@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL@@@Z @ 0x180007C38 (-RegisterThumbnail@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL@@@Z.c)
 *     ?UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180025D48 (-UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x18007AB50 (-DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z.c)
 * Callees:
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x180011B0C (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180013150 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTopLevelWindow::OnThumbnailAdded(CTopLevelWindow *this, struct CVisual *a2)
{
  int inserted; // eax
  unsigned int v4; // ebx
  int v5; // eax

  inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 66) + 32LL), a2, 0LL, 0, 1);
  v4 = inserted;
  if ( inserted < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x628u);
  }
  else if ( *(_DWORD *)(*((_QWORD *)this + 66) + 72LL) == (*((_QWORD *)this + 59) != 0LL) + 1 )
  {
    v5 = CWindowData::NotifyRepresentationChanged(*((CWindowData **)this + 90));
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x62Eu);
  }
  return v4;
}
