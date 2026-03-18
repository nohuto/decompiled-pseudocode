/*
 * XREFs of ?GetBoundsFromInputs@CAffineTransform2DEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18017A590
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?GetBoundsFromInputs@CFilterEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18016F040 (-GetBoundsFromInputs@CFilterEffect@@MEBAXAEBV-$DynArray@UInputBoundsPair@@$0A@@@PEAV-$TMilRect_@.c)
 */

char __fastcall CAffineTransform2DEffect::GetBoundsFromInputs(__int64 a1, _DWORD *a2, float *a3)
{
  float *v3; // rax
  __m128 v4; // xmm10
  __m128 v5; // xmm2
  float v6; // xmm9_4
  __m128 v7; // xmm11
  __m128 v8; // xmm1
  float v9; // xmm4_4
  float v10; // xmm5_4
  float v11; // xmm3_4
  float v12; // xmm13_4
  float v13; // xmm12_4
  float v14; // xmm0_4
  float v15; // xmm4_4
  __m128 v16; // xmm0
  __m128 v17; // xmm2
  __m128 v18; // xmm1
  float v19; // xmm1_4
  __int64 v20; // rcx
  float v21; // xmm0_4
  _QWORD v23[3]; // [rsp+28h] [rbp-80h] BYREF

  if ( a2[6] == 1 )
  {
    v4 = (__m128)*(unsigned int *)(a1 + 224);
    v5 = v4;
    v6 = *(float *)(a1 + 220);
    v7 = (__m128)*(unsigned int *)(a1 + 228);
    v8 = v7;
    v9 = *(float *)(*(_QWORD *)a2 + 4LL);
    v10 = *(float *)(*(_QWORD *)a2 + 8LL);
    v11 = *(float *)(*(_QWORD *)a2 + 16LL);
    v12 = (float)((float)(*(float *)(a1 + 224) * v10) + (float)(v9 * *(float *)(a1 + 216))) + *(float *)(a1 + 232);
    v13 = (float)((float)(v7.m128_f32[0] * v10) + (float)(v6 * v9)) + *(float *)(a1 + 236);
    v5.m128_f32[0] = (float)(v4.m128_f32[0] * v11) + (float)(v9 * *(float *)(a1 + 216));
    v14 = v6 * v9;
    v15 = *(float *)(*(_QWORD *)a2 + 12LL);
    v3 = (float *)v23 + 1;
    v5.m128_f32[0] = v5.m128_f32[0] + *(float *)(a1 + 232);
    v8.m128_f32[0] = (float)(v7.m128_f32[0] * v11) + v14;
    v16 = v5;
    v17 = v4;
    v8.m128_f32[0] = v8.m128_f32[0] + *(float *)(a1 + 236);
    v16.m128_u64[0] = _mm_unpacklo_ps(v16, v8).m128_u64[0];
    v18 = v7;
    v23[0] = v16.m128_u64[0];
    v17.m128_f32[0] = (float)((float)(v4.m128_f32[0] * v11) + (float)(v15 * *(float *)(a1 + 216)))
                    + *(float *)(a1 + 232);
    v18.m128_f32[0] = (float)(v7.m128_f32[0] * v11) + (float)(v6 * v15);
    v7.m128_f32[0] = (float)((float)(v7.m128_f32[0] * v10) + (float)(v6 * v15)) + *(float *)(a1 + 236);
    v18.m128_f32[0] = v18.m128_f32[0] + *(float *)(a1 + 236);
    v16.m128_u64[0] = _mm_unpacklo_ps(v17, v18).m128_u64[0];
    v19 = v13;
    v23[1] = v16.m128_u64[0];
    v4.m128_f32[0] = (float)((float)(v4.m128_f32[0] * v10) + (float)(v15 * *(float *)(a1 + 216))) + *(float *)(a1 + 232);
    *a3 = v12;
    v20 = 3LL;
    a3[1] = v13;
    a3[2] = v12;
    a3[3] = v13;
    v23[2] = _mm_unpacklo_ps(v4, v7).m128_u64[0];
    do
    {
      v21 = fminf(*a3, *(v3 - 1));
      v13 = fminf(v13, *v3);
      v12 = fmaxf(v12, *(v3 - 1));
      v19 = fmaxf(v19, *v3);
      v3 += 2;
      *a3 = v21;
      --v20;
    }
    while ( v20 );
    a3[1] = v13;
    a3[2] = v12;
    a3[3] = v19;
  }
  else
  {
    LOBYTE(v3) = CFilterEffect::GetBoundsFromInputs(a1, (__int64)a2, a3);
  }
  return (char)v3;
}
