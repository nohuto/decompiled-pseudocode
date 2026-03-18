/*
 * XREFs of VirtualizeMultiMonDigitizerSize @ 0x1C01C43B4
 * Callers:
 *     _GetPointerDeviceRects @ 0x1C004A640 (_GetPointerDeviceRects.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x1C01C3EF0 (RemapHimetricPointsForMultiMonDigitizers.c)
 *     MiPGetPhysicalRect @ 0x1C01CA450 (MiPGetPhysicalRect.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetScreenRect @ 0x1C013FD78 (GetScreenRect.c)
 *     ExpandedMonitorSpace @ 0x1C01C2914 (ExpandedMonitorSpace.c)
 */

char __fastcall VirtualizeMultiMonDigitizerSize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  INT v5; // eax
  __int64 v6; // rdx
  __m128i *ScreenRect; // rax
  __m128i v8; // xmm6
  INT v9; // eax
  INT v10; // r8d
  INT v11; // ecx
  __int64 v13; // [rsp+20h] [rbp-38h] BYREF
  int v14; // [rsp+28h] [rbp-30h]
  int v15; // [rsp+2Ch] [rbp-2Ch]
  __int128 v16; // [rsp+30h] [rbp-28h] BYREF

  LOBYTE(v5) = W32GetCurrentThreadDpiAwarenessContext(a1, a2, a3, a4) & 0xF;
  if ( (_BYTE)v5 != 2 )
  {
    ExpandedMonitorSpace(&v13);
    ScreenRect = (__m128i *)GetScreenRect(&v16, v6);
    v8 = *ScreenRect;
    v9 = EngMulDiv(
           *(_DWORD *)(a1 + 8),
           _mm_cvtsi128_si32(_mm_srli_si128(*ScreenRect, 8)) - _mm_cvtsi128_si32(*ScreenRect),
           v14 - v13);
    v10 = v15 - HIDWORD(v13);
    v11 = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(a1 + 8) = v9;
    v5 = EngMulDiv(v11, _mm_cvtsi128_si32(_mm_srli_si128(v8, 12)) - _mm_cvtsi128_si32(_mm_srli_si128(v8, 4)), v10);
    *(_DWORD *)(a1 + 12) = v5;
  }
  return v5;
}
