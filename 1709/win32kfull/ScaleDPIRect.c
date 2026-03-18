/*
 * XREFs of ScaleDPIRect @ 0x1C005EC88
 * Callers:
 *     GetMonitorRectForDpi @ 0x1C005EF84 (GetMonitorRectForDpi.c)
 *     GetMonitorWorkRectForDpi @ 0x1C005F4DC (GetMonitorWorkRectForDpi.c)
 *     xxxInheritWindowMonitor @ 0x1C0062068 (xxxInheritWindowMonitor.c)
 *     ?InitializeMiniWinInfo@@YAXQEAUtagWND@@PEAUtagMINIWINDOWINFO@@@Z @ 0x1C00925F4 (-InitializeMiniWinInfo@@YAXQEAUtagWND@@PEAUtagMINIWINDOWINFO@@@Z.c)
 *     DwmChildRectChange @ 0x1C009BDCC (DwmChildRectChange.c)
 *     ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C00CA334 (-xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C0107F90 (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C013FDAC (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     ?GetMonitorMenuRectForDpi@@YA?AUtagRECT@@PEBUtagMONITOR@@G@Z @ 0x1C023A620 (-GetMonitorMenuRectForDpi@@YA-AUtagRECT@@PEBUtagMONITOR@@G@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ScaleDPIRect(
        _DWORD *a1,
        __m128i *a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        __int64 a5,
        __int64 a6)
{
  INT v7; // ebp
  __m128i v8; // xmm6
  INT v9; // esi
  int v10; // edi
  int v11; // ebx
  __int64 result; // rax

  v7 = a3;
  v8 = *a2;
  v9 = a4;
  v10 = _mm_cvtsi128_si32(*a2);
  v11 = _mm_cvtsi128_si32(_mm_srli_si128(*a2, 4));
  *a1 = a5 + EngMulDiv(v10 - a6, a3, a4);
  a1[1] = HIDWORD(a5) + EngMulDiv(v11 - HIDWORD(a6), v7, v9);
  a1[2] = *a1 + EngMulDiv(_mm_cvtsi128_si32(_mm_srli_si128(v8, 8)) - v10, v7, v9);
  result = (unsigned int)(a1[1] + EngMulDiv(_mm_cvtsi128_si32(_mm_srli_si128(v8, 12)) - v11, v7, v9));
  a1[3] = result;
  return result;
}
