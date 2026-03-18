/*
 * XREFs of ?MiPConvertPoint@@YA?AUtagPOINT@@PEBU1@@Z @ 0x1C000B298
 * Callers:
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C000AFC0 (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetScreenRect @ 0x1C013FD78 (GetScreenRect.c)
 *     MiPGetPhysicalRect @ 0x1C01CA450 (MiPGetPhysicalRect.c)
 */

struct tagPOINT __fastcall MiPConvertPoint(const struct tagPOINT *a1)
{
  __int64 v2; // rcx
  int v3; // eax
  __m128i v5; // xmm7
  __m128i v6; // xmm6
  int v7; // eax
  int v8; // eax
  _BYTE v9[16]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+68h] [rbp+10h]

  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
  {
    v2 = *(_QWORD *)(*gpDispInfo + 24LL);
    LODWORD(v10) = 2540 * (a1->x - (int)v2) / *(unsigned __int16 *)(gpsi + 9974LL);
    v3 = 2540 * (a1->y - HIDWORD(v2)) / *(unsigned __int16 *)(gpsi + 9974LL);
  }
  else
  {
    v5 = *(__m128i *)MiPGetPhysicalRect(v9);
    v6 = *(__m128i *)GetScreenRect(v9);
    v7 = _mm_cvtsi128_si32(v6);
    LODWORD(v10) = EngMulDiv(
                     a1->x - v7,
                     _mm_cvtsi128_si32(_mm_srli_si128(v5, 8)),
                     _mm_cvtsi128_si32(_mm_srli_si128(v6, 8)) - v7);
    v8 = _mm_cvtsi128_si32(_mm_srli_si128(v6, 4));
    v3 = EngMulDiv(
           a1->y - v8,
           _mm_cvtsi128_si32(_mm_srli_si128(v5, 12)),
           _mm_cvtsi128_si32(_mm_srli_si128(v6, 12)) - v8);
  }
  HIDWORD(v10) = v3;
  return (struct tagPOINT)v10;
}
