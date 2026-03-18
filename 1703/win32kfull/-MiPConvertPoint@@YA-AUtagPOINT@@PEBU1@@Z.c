/*
 * XREFs of ?MiPConvertPoint@@YA?AUtagPOINT@@PEBU1@@Z @ 0x1C0005D90
 * Callers:
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C0005AC0 (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 * Callees:
 *     MiPConvertLogicalRect @ 0x1C0007B80 (MiPConvertLogicalRect.c)
 *     GetDwmDependentMetric @ 0x1C003E228 (GetDwmDependentMetric.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

struct tagPOINT __fastcall MiPConvertPoint(const struct tagPOINT *a1)
{
  int v2; // eax
  __m128i v4; // xmm6
  INT DwmDependentMetric; // ebx
  int v6; // eax
  INT v7; // ebx
  int v8; // eax
  _BYTE v9[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+58h] [rbp+10h]

  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
  {
    LODWORD(v10) = 2540 * (a1->x - *(_DWORD *)(*gpDispInfo + 24LL)) / *(unsigned __int16 *)(gpDispInfo + 144LL);
    v2 = 2540 * (a1->y - *(_DWORD *)(*gpDispInfo + 28LL)) / *(unsigned __int16 *)(gpDispInfo + 144LL);
  }
  else
  {
    v4 = *(__m128i *)MiPConvertLogicalRect(v9, *gpDispInfo + 24LL);
    DwmDependentMetric = GetDwmDependentMetric(78LL);
    v6 = GetDwmDependentMetric(76LL);
    LODWORD(v10) = EngMulDiv(a1->x - v6, _mm_cvtsi128_si32(_mm_srli_si128(v4, 8)), DwmDependentMetric);
    v7 = GetDwmDependentMetric(79LL);
    v8 = GetDwmDependentMetric(77LL);
    v2 = EngMulDiv(a1->y - v8, _mm_cvtsi128_si32(_mm_srli_si128(v4, 12)), v7);
  }
  HIDWORD(v10) = v2;
  return (struct tagPOINT)v10;
}
