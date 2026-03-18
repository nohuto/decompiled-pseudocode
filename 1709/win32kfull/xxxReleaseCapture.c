/*
 * XREFs of xxxReleaseCapture @ 0x1C0046780
 * Callers:
 *     xxxDCETrackCaptionButton @ 0x1C00475C4 (xxxDCETrackCaptionButton.c)
 *     xxxFreeWindow @ 0x1C0060AD0 (xxxFreeWindow.c)
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C010FB34 (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxIsDragging @ 0x1C0140348 (xxxIsDragging.c)
 *     xxxOldNextWindow @ 0x1C01D0BF8 (xxxOldNextWindow.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01DAD48 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01DC988 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxMNReleaseCapture @ 0x1C0209100 (xxxMNReleaseCapture.c)
 *     xxxEndScroll @ 0x1C0210910 (xxxEndScroll.c)
 *     xxxTrackCaptionButton @ 0x1C02125C4 (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C02134AC (xxxDragObject.c)
 *     xxxHelpLoop @ 0x1C0219F1C (xxxHelpLoop.c)
 * Callees:
 *     xxxCapture @ 0x1C0046908 (xxxCapture.c)
 *     bSetDevDragRect @ 0x1C00E35F0 (bSetDevDragRect.c)
 *     xxxDrawDragRectEx @ 0x1C01DD710 (xxxDrawDragRectEx.c)
 */

__int64 xxxReleaseCapture()
{
  __int64 v1; // rcx

  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 380LL) & 0x100000) != 0 )
    return 0LL;
  if ( *(_QWORD *)(gptiCurrent + 648LL) && (*(_DWORD *)(gptiCurrent + 464LL) & 0x10) != 0 )
  {
    bSetDevDragRect(*(HDEV *)(gpDispInfo + 32LL));
    v1 = *(_QWORD *)(gptiCurrent + 648LL);
    if ( (*(_DWORD *)(v1 + 196) & 0x20) == 0 )
      xxxDrawDragRectEx((struct _MOVESIZEDATA *)v1);
    *(_DWORD *)(gptiCurrent + 464LL) &= 0xFFFF7FEF;
  }
  xxxCapture(gptiCurrent, 0LL, 0LL);
  return 1LL;
}
