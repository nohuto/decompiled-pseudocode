/*
 * XREFs of xxxInternalGetMessage @ 0x1C0048DAC
 * Callers:
 *     xxxDCETrackCaptionButton @ 0x1C00475C4 (xxxDCETrackCaptionButton.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00484B0 (xxxRestoreCsrssThreadDesktop.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0048D04 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C0048FF0 (xxxSetCsrssThreadDesktop.c)
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     xxxIsDragging @ 0x1C0140348 (xxxIsDragging.c)
 *     xxxOldNextWindow @ 0x1C01D0BF8 (xxxOldNextWindow.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C01DAD00 (-xxxMS_FlushWigglies@@YAXXZ.c)
 *     xxxMoveSize @ 0x1C01DF270 (xxxMoveSize.c)
 *     ?xxxMNRemoveMessage@@YAHII@Z @ 0x1C020300C (-xxxMNRemoveMessage@@YAHII@Z.c)
 *     xxxMNLoop @ 0x1C0203CEC (xxxMNLoop.c)
 *     xxxMNDoubleClick @ 0x1C0206E14 (xxxMNDoubleClick.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C021009C (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxTrackCaptionButton @ 0x1C02125C4 (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C02134AC (xxxDragObject.c)
 *     xxxHelpLoop @ 0x1C0219F1C (xxxHelpLoop.c)
 * Callees:
 *     ClientGetMessageMPH @ 0x1C005C0BC (ClientGetMessageMPH.c)
 *     xxxRealInternalGetMessage @ 0x1C00A66B0 (xxxRealInternalGetMessage.c)
 */

__int64 __fastcall xxxInternalGetMessage(int a1, int a2, int a3, int a4, int a5, int a6)
{
  if ( *(int *)(*(_QWORD *)(gptiCurrent + 424LL) + 16LL) > 0 )
    return ClientGetMessageMPH(a1, a2, a3, a4, a5, a6);
  else
    return xxxRealInternalGetMessage(a1, a2, a3, a4, a5, a6);
}
