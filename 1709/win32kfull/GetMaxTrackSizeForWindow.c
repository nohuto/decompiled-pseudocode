/*
 * XREFs of GetMaxTrackSizeForWindow @ 0x1C005D45C
 * Callers:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00764D8 (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C01AAB10 (-ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z.c)
 * Callees:
 *     ?ComputeMaxTrackSize@@YA?AUtagSIZE@@UtagRECT@@G@Z @ 0x1C005D4BC (-ComputeMaxTrackSize@@YA-AUtagSIZE@@UtagRECT@@G@Z.c)
 *     GetScreenRectForDpi @ 0x1C005D54C (GetScreenRectForDpi.c)
 *     ?GetWindowCompositedDpi@@YAGPEAUtagWND@@@Z @ 0x1C005F570 (-GetWindowCompositedDpi@@YAGPEAUtagWND@@@Z.c)
 */

struct tagSIZE __fastcall GetMaxTrackSizeForWindow(__int64 a1)
{
  __int64 WindowCompositedDpi; // rbx
  struct tagRECT v3; // xmm0
  struct tagRECT v5; // [rsp+20h] [rbp-18h] BYREF

  WindowCompositedDpi = GetWindowCompositedDpi((struct tagWND *)a1);
  v3 = *(struct tagRECT *)GetScreenRectForDpi(&v5, WindowCompositedDpi);
  if ( !(_WORD)WindowCompositedDpi )
    LOWORD(WindowCompositedDpi) = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 400LL) + 284LL);
  v5 = v3;
  return ComputeMaxTrackSize(&v5, WindowCompositedDpi);
}
