/*
 * XREFs of GetMonitorRectForDpi @ 0x1C005EF84
 * Callers:
 *     GetMonitorRect @ 0x1C004BA6C (GetMonitorRect.c)
 *     _MonitorFromPoint @ 0x1C0055A30 (_MonitorFromPoint.c)
 *     InternalGetRealClientRect @ 0x1C005D230 (InternalGetRealClientRect.c)
 *     GetScreenRectForDpi @ 0x1C005D54C (GetScreenRectForDpi.c)
 *     GetMonitorTransform @ 0x1C005D640 (GetMonitorTransform.c)
 *     _MonitorFromRect @ 0x1C005D960 (_MonitorFromRect.c)
 *     GetMonitorRectForWindow @ 0x1C005EF48 (GetMonitorRectForWindow.c)
 *     ?CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z @ 0x1C0080A38 (-CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z.c)
 *     InitializeDPIINFO @ 0x1C0092178 (InitializeDPIINFO.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C00C9AD8 (xxxDeferWindowPosAndCheckPoint.c)
 *     FindOldMonitor @ 0x1C00CA0DC (FindOldMonitor.c)
 *     ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C00CA334 (-xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 *     ?GetMonitorMenuRectForDpi@@YA?AUtagRECT@@PEBUtagMONITOR@@G@Z @ 0x1C023A620 (-GetMonitorMenuRectForDpi@@YA-AUtagRECT@@PEBUtagMONITOR@@G@Z.c)
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C023A6EC (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
 * Callees:
 *     ExpandMonitorSpaceVertex @ 0x1C005EC34 (ExpandMonitorSpaceVertex.c)
 *     ScaleDPIRect @ 0x1C005EC88 (ScaleDPIRect.c)
 */

__m128i *__fastcall GetMonitorRectForDpi(__m128i *a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v7; // rax

  *a1 = *(__m128i *)(*(_QWORD *)(a2 + 40) + 28LL);
  if ( a3 )
  {
    v7 = ExpandMonitorSpaceVertex(a3, *(_WORD *)(*(_QWORD *)(a2 + 40) + 66LL), a1->m128i_i64[0]);
    ScaleDPIRect(a1, a1, a3, *(_WORD *)(*(_QWORD *)(a2 + 40) + 64LL), v7, a1->m128i_i64[0]);
  }
  return a1;
}
