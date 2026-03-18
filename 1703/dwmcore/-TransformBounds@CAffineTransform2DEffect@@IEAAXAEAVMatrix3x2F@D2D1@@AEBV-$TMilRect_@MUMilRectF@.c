/*
 * XREFs of ?TransformBounds@CAffineTransform2DEffect@@IEAAXAEAVMatrix3x2F@D2D1@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV4@@Z @ 0x18017ABEC
 * Callers:
 *     ?CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CAffineTransform2DEffect@@UEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x18017A340 (-CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CAffineTransform2DEffect@@UEAAXA.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

float *__fastcall CAffineTransform2DEffect::TransformBounds(__int64 a1, float *a2, float *a3, float *a4)
{
  __m128 v4; // xmm11
  float *result; // rax
  float v6; // xmm8_4
  __m128 v7; // xmm2
  __int64 v8; // rcx
  float v9; // xmm6_4
  __m128 v10; // xmm9
  float v11; // xmm5_4
  float v12; // xmm4_4
  __m128 v13; // xmm1
  float v14; // xmm3_4
  float v15; // xmm13_4
  float v16; // xmm12_4
  __m128 v17; // xmm0
  __m128 v18; // xmm2
  __m128 v19; // xmm1
  float v20; // xmm6_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  _QWORD v23[3]; // [rsp+8h] [rbp-90h] BYREF

  v4 = (__m128)*(unsigned int *)a2;
  result = (float *)v23 + 1;
  v6 = a2[2];
  v7 = v4;
  v8 = 3LL;
  v9 = a2[3];
  v10 = (__m128)*((unsigned int *)a2 + 1);
  v11 = a2[5];
  v12 = a3[3];
  v13 = v10;
  v14 = a3[2];
  v15 = (float)((float)(*a2 * *a3) + (float)(v6 * a3[1])) + a2[4];
  v16 = (float)((float)(v10.m128_f32[0] * *a3) + (float)(v9 * a3[1])) + v11;
  v7.m128_f32[0] = (float)((float)(v4.m128_f32[0] * *a3) + (float)(v6 * v12)) + a2[4];
  v17 = v7;
  v18 = v4;
  v13.m128_f32[0] = (float)((float)(v10.m128_f32[0] * *a3) + (float)(v9 * v12)) + v11;
  v17.m128_u64[0] = _mm_unpacklo_ps(v17, v13).m128_u64[0];
  v19 = v10;
  v23[0] = v17.m128_u64[0];
  v18.m128_f32[0] = (float)(v4.m128_f32[0] * v14) + (float)(v6 * v12);
  v17.m128_f32[0] = v9;
  v20 = v9 * a3[1];
  v4.m128_f32[0] = (float)((float)(v4.m128_f32[0] * v14) + (float)(v6 * a3[1])) + a2[4];
  v18.m128_f32[0] = v18.m128_f32[0] + a2[4];
  *a4 = v15;
  a4[1] = v16;
  v19.m128_f32[0] = (float)(v10.m128_f32[0] * v14) + (float)(v17.m128_f32[0] * v12);
  a4[2] = v15;
  a4[3] = v16;
  v10.m128_f32[0] = (float)((float)(v10.m128_f32[0] * v14) + v20) + v11;
  v19.m128_f32[0] = v19.m128_f32[0] + v11;
  v17.m128_u64[0] = _mm_unpacklo_ps(v18, v19).m128_u64[0];
  v21 = v16;
  v23[1] = v17.m128_u64[0];
  v23[2] = _mm_unpacklo_ps(v4, v10).m128_u64[0];
  do
  {
    v22 = fminf(*a4, *(result - 1));
    v16 = fminf(v16, *result);
    v15 = fmaxf(v15, *(result - 1));
    v21 = fmaxf(v21, *result);
    result += 2;
    *a4 = v22;
    --v8;
  }
  while ( v8 );
  a4[1] = v16;
  a4[2] = v15;
  a4[3] = v21;
  return result;
}
