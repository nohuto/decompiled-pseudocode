/*
 * XREFs of xxxReleaseCapture @ 0x1C003C3F0
 * Callers:
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C003BBCC (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 *     xxxFreeWindow @ 0x1C005DD44 (xxxFreeWindow.c)
 *     xxxDCETrackCaptionButton @ 0x1C00C61FC (xxxDCETrackCaptionButton.c)
 *     xxxIsDragging @ 0x1C0139758 (xxxIsDragging.c)
 *     xxxOldNextWindow @ 0x1C01CC84C (xxxOldNextWindow.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01F33EC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01F56B4 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxMNReleaseCapture @ 0x1C020717C (xxxMNReleaseCapture.c)
 *     xxxEndScroll @ 0x1C020F160 (xxxEndScroll.c)
 *     xxxTrackCaptionButton @ 0x1C02110AC (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C0211F88 (xxxDragObject.c)
 *     xxxHelpLoop @ 0x1C0218D34 (xxxHelpLoop.c)
 * Callees:
 *     xxxCapture @ 0x1C003C570 (xxxCapture.c)
 *     bSetDevDragRect @ 0x1C00A2540 (bSetDevDragRect.c)
 *     xxxDrawDragRectEx @ 0x1C01F64F0 (xxxDrawDragRectEx.c)
 */

__int64 xxxReleaseCapture()
{
  __int64 v1; // rcx

  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 340LL) & 0x100000) != 0 )
    return 0LL;
  if ( *(_QWORD *)(gptiCurrent + 592LL) && (*(_DWORD *)(gptiCurrent + 440LL) & 0x10) != 0 )
  {
    bSetDevDragRect(*(HDEV *)(gpDispInfo + 32LL));
    v1 = *(_QWORD *)(gptiCurrent + 592LL);
    if ( (*(_DWORD *)(v1 + 180) & 0x20) == 0 )
      xxxDrawDragRectEx((struct _MOVESIZEDATA *)v1);
    *(_DWORD *)(gptiCurrent + 440LL) &= 0xFFFF7FEF;
  }
  xxxCapture(gptiCurrent, 0LL, 0LL);
  return 1LL;
}
