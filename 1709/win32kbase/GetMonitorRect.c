/*
 * XREFs of GetMonitorRect @ 0x1C005955C
 * Callers:
 *     GetMonitorDC @ 0x1C0056170 (GetMonitorDC.c)
 *     xxxEnumDisplayMonitors @ 0x1C005C4E0 (xxxEnumDisplayMonitors.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C005C980 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     ?AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z @ 0x1C009A848 (-AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z.c)
 *     UserProcessInputIsolationPolicy @ 0x1C01305A0 (UserProcessInputIsolationPolicy.c)
 *     GetPrimaryMonitorRect @ 0x1C013D6D4 (GetPrimaryMonitorRect.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C0059998 (GetMonitorRectForDpi.c)
 *     ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C0059B24 (-GetCurrentThreadCompositedDpi@@YAGXZ.c)
 */

_OWORD *__fastcall GetMonitorRect(_OWORD *a1, __int64 a2)
{
  unsigned __int16 CurrentThreadCompositedDpi; // ax
  __int128 v5; // xmm0
  _OWORD *result; // rax
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi();
  v5 = *(_OWORD *)GetMonitorRectForDpi(v7, a2, CurrentThreadCompositedDpi);
  result = a1;
  *a1 = v5;
  return result;
}
