/*
 * XREFs of RemapHimetricPointsForMultiMonDigitizers @ 0x1C01C3EF0
 * Callers:
 *     PointerInfoCopyOutHelperInternal @ 0x1C01CE5E0 (PointerInfoCopyOutHelperInternal.c)
 * Callees:
 *     GetMonitorRect @ 0x1C004BA6C (GetMonitorRect.c)
 *     GetScreenRect @ 0x1C013FD78 (GetScreenRect.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C01C43B4 (VirtualizeMultiMonDigitizerSize.c)
 */

__int64 __fastcall RemapHimetricPointsForMultiMonDigitizers(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v4; // r15
  __m128i v6; // xmm1
  INT v7; // edx
  __m128i v8; // xmm6
  int v9; // esi
  INT v10; // r14d
  int v11; // ebx
  INT v12; // edi
  INT v13; // eax
  __m128i v14; // xmm6
  __int64 v15; // rdx
  __m128i *ScreenRect; // rax
  __int64 v17; // rbx
  unsigned __int64 v18; // xmm0_8
  unsigned __int64 v19; // rsi
  INT v20; // edi
  INT v21; // r12d
  INT v22; // edi
  INT v23; // eax
  INT v24; // ecx
  __int64 result; // rax
  INT v26; // [rsp+20h] [rbp-58h]
  INT v27; // [rsp+24h] [rbp-54h]
  INT b[4]; // [rsp+28h] [rbp-50h] BYREF
  __m128i v29; // [rsp+38h] [rbp-40h] BYREF
  __int128 v30; // [rsp+48h] [rbp-30h] BYREF
  INT v31; // [rsp+C0h] [rbp+48h]
  INT v32; // [rsp+C8h] [rbp+50h]

  v4 = a1;
  v6 = *(__m128i *)(*(_QWORD *)(a2 + 40) + 28LL);
  v7 = *(_DWORD *)(a1 + 8);
  *(__m128i *)b = v6;
  v8 = *(__m128i *)(*gpDispInfo + 24LL);
  v9 = _mm_cvtsi128_si32(v8);
  v10 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 8)) - v9;
  v11 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 4));
  v31 = EngMulDiv(_mm_cvtsi128_si32(v6) - v9, v7, v10);
  v12 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 12)) - v11;
  v27 = EngMulDiv(v6.m128i_i32[1] - v11, *(_DWORD *)(v4 + 12), v12);
  v32 = EngMulDiv(v6.m128i_i32[2] - v9, *(_DWORD *)(v4 + 8), v10);
  v13 = EngMulDiv(v6.m128i_i32[3] - v11, *(_DWORD *)(v4 + 12), v12);
  *(_OWORD *)b = *(_OWORD *)v4;
  v26 = v13;
  VirtualizeMultiMonDigitizerSize(b);
  v14 = *(__m128i *)GetMonitorRect(&v29, a2);
  v29 = v14;
  ScreenRect = (__m128i *)GetScreenRect(&v30, v15);
  v17 = ScreenRect->m128i_i64[0];
  v18 = _mm_srli_si128(*ScreenRect, 8).m128i_u64[0];
  v19 = HIDWORD(ScreenRect->m128i_i64[0]);
  v20 = v18 - ScreenRect->m128i_i64[0];
  LODWORD(v4) = EngMulDiv(_mm_cvtsi128_si32(v14) - ScreenRect->m128i_i64[0], b[2], v20);
  v21 = EngMulDiv(v29.m128i_i32[1] - v19, b[3], HIDWORD(v18) - v19);
  LODWORD(v17) = EngMulDiv(v29.m128i_i32[2] - v17, b[2], v20) - v4;
  v22 = EngMulDiv(v29.m128i_i32[3] - v19, b[3], HIDWORD(v18) - v19) - v21;
  *a3 = v4 + EngMulDiv(*a3 - v31, v17, v32 - v31);
  a3[1] = v21 + EngMulDiv(a3[1] - v27, v22, v26 - v27);
  v23 = EngMulDiv(*a4 - v31, v17, v32 - v31);
  v24 = a4[1] - v27;
  *a4 = v4 + v23;
  result = (unsigned int)(v21 + EngMulDiv(v24, v22, v26 - v27));
  a4[1] = result;
  return result;
}
