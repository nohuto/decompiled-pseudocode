/*
 * XREFs of GetMonitorRectForWindow @ 0x1C005EF48
 * Callers:
 *     xxxCheckFullScreen @ 0x1C005F0B8 (xxxCheckFullScreen.c)
 *     CalcWindowFullScreen @ 0x1C0066940 (CalcWindowFullScreen.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00764D8 (xxxInitSendValidateMinMaxInfoEx.c)
 *     GetMonitorMaxArea @ 0x1C0086F24 (GetMonitorMaxArea.c)
 *     ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C00CA334 (-xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 *     GetPrimaryMonitorRectForWindow @ 0x1C010ED78 (GetPrimaryMonitorRectForWindow.c)
 *     DetectNewMonitor @ 0x1C01C3688 (DetectNewMonitor.c)
 *     ?ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C01D7CE8 (-ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0204850 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     FindBestPos @ 0x1C021494C (FindBestPos.c)
 *     xxxTrackPopupMenuEx @ 0x1C0214E34 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C005EF84 (GetMonitorRectForDpi.c)
 *     ?GetWindowCompositedDpi@@YAGPEAUtagWND@@@Z @ 0x1C005F570 (-GetWindowCompositedDpi@@YAGPEAUtagWND@@@Z.c)
 */

_OWORD *__fastcall GetMonitorRectForWindow(_OWORD *a1, __int64 a2, struct tagWND *a3)
{
  unsigned __int16 WindowCompositedDpi; // ax
  __int64 v5; // r9
  __int128 v6; // xmm0
  _OWORD *result; // rax
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  WindowCompositedDpi = GetWindowCompositedDpi(a3);
  v6 = *(_OWORD *)GetMonitorRectForDpi(v8, v5, WindowCompositedDpi);
  result = a1;
  *a1 = v6;
  return result;
}
