/*
 * XREFs of ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0074B8C
 * Callers:
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C00A6188 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     GreGradientFill @ 0x1C00A9038 (GreGradientFill.c)
 *     NtGdiFastPolyPolyline @ 0x1C0121530 (NtGdiFastPolyPolyline.c)
 *     NtGdiExtFloodFill @ 0x1C012BE60 (NtGdiExtFloodFill.c)
 * Callees:
 *     ??_5ERECTL@@QEAAXAEAU_RECTL@@@Z @ 0x1C0081748 (--_5ERECTL@@QEAAXAEAU_RECTL@@@Z.c)
 */

void __fastcall XDCOBJ::vAccumulate(XDCOBJ *this, struct ECLIPOBJ *a2, __m128i *a3)
{
  __m128i v3; // xmm0
  __int64 v4; // r8
  XDCOBJ *v5; // r9
  __int64 v6; // rdx
  int v7; // ecx
  int v8; // eax
  __m128i v9; // [rsp+20h] [rbp-18h] BYREF

  v3 = *a3;
  v4 = *(_QWORD *)this;
  v5 = this;
  v9 = v3;
  v6 = (*(_BYTE *)(v4 + 40) & 1) != 0 ? 8 : 0;
  v7 = *(_DWORD *)(v6 + v4 + 1432);
  v9.m128i_i32[2] = v3.m128i_i32[2] - v7;
  v9.m128i_i32[0] = _mm_cvtsi128_si32(v3) - v7;
  v8 = *(_DWORD *)(v6 + v4 + 1436);
  v9.m128i_i32[1] = v3.m128i_i32[1] - v8;
  v9.m128i_i32[3] = v3.m128i_i32[3] - v8;
  if ( (*(_DWORD *)(v4 + 36) & 0x20) != 0 )
    ERECTL::operator|=(v4 + 1480, &v9);
  if ( (*(_DWORD *)(*(_QWORD *)v5 + 36LL) & 0x80u) != 0 )
    ERECTL::operator|=(*(_QWORD *)v5 + 1512LL, &v9);
}
