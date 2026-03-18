/*
 * XREFs of GetMonitorMenuRect @ 0x1C023A788
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C004D930 (xxxSystemParametersInfo.c)
 *     FindBestPos @ 0x1C021494C (FindBestPos.c)
 * Callees:
 *     ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C004BAB0 (-GetCurrentThreadCompositedDpi@@YAGXZ.c)
 *     ?GetMonitorMenuRectForDpi@@YA?AUtagRECT@@PEBUtagMONITOR@@G@Z @ 0x1C023A620 (-GetMonitorMenuRectForDpi@@YA-AUtagRECT@@PEBUtagMONITOR@@G@Z.c)
 */

_OWORD *__fastcall GetMonitorMenuRect(_OWORD *a1, const struct tagMONITOR *a2)
{
  unsigned __int16 CurrentThreadCompositedDpi; // ax
  __int128 v5; // xmm0
  _OWORD *result; // rax
  struct tagRECT v7; // [rsp+20h] [rbp-18h] BYREF

  CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi((__int64)a1, (__int64)a2);
  v5 = (__int128)*GetMonitorMenuRectForDpi(&v7, a2, CurrentThreadCompositedDpi);
  result = a1;
  *a1 = v5;
  return result;
}
