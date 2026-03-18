/*
 * XREFs of GetScreenRect @ 0x1C013FD78
 * Callers:
 *     ?MiPConvertPoint@@YA?AUtagPOINT@@PEBU1@@Z @ 0x1C000B298 (-MiPConvertPoint@@YA-AUtagPOINT@@PEBU1@@Z.c)
 *     _GetPointerDeviceRects @ 0x1C004A640 (_GetPointerDeviceRects.c)
 *     xxxSoundSentry @ 0x1C012362C (xxxSoundSentry.c)
 *     _GetMouseMovePointsEx @ 0x1C01BB284 (_GetMouseMovePointsEx.c)
 *     xxxInjectTouchInput @ 0x1C01BD79C (xxxInjectTouchInput.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x1C01C3EF0 (RemapHimetricPointsForMultiMonDigitizers.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C01C43B4 (VirtualizeMultiMonDigitizerSize.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C01E5870 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1C020E20C (-SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z.c)
 * Callees:
 *     ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C004BAB0 (-GetCurrentThreadCompositedDpi@@YAGXZ.c)
 *     GetScreenRectForDpi @ 0x1C005D54C (GetScreenRectForDpi.c)
 */

_OWORD *__fastcall GetScreenRect(_OWORD *a1, __int64 a2)
{
  unsigned __int16 CurrentThreadCompositedDpi; // ax
  __int128 v4; // xmm0
  _OWORD *result; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi((__int64)a1, a2);
  v4 = *GetScreenRectForDpi(&v6, CurrentThreadCompositedDpi);
  result = a1;
  *a1 = v4;
  return result;
}
