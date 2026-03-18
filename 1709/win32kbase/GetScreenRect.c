/*
 * XREFs of GetScreenRect @ 0x1C00594A4
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C005C4E0 (xxxEnumDisplayMonitors.c)
 *     ?VirtualizedUnionRect@COutputConfig@@QEBA?AUtagRECT@@XZ @ 0x1C0094470 (-VirtualizedUnionRect@COutputConfig@@QEBA-AUtagRECT@@XZ.c)
 * Callees:
 *     GetScreenRectForDpi @ 0x1C00594D8 (GetScreenRectForDpi.c)
 *     ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C0059B24 (-GetCurrentThreadCompositedDpi@@YAGXZ.c)
 */

_OWORD *__fastcall GetScreenRect(_OWORD *a1)
{
  unsigned __int16 CurrentThreadCompositedDpi; // ax
  __int128 v3; // xmm0
  _OWORD *result; // rax
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi();
  v3 = *(_OWORD *)GetScreenRectForDpi(v5, CurrentThreadCompositedDpi);
  result = a1;
  *a1 = v3;
  return result;
}
