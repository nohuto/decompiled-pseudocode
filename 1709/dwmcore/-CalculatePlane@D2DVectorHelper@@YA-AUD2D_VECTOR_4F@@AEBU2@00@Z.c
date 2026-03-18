/*
 * XREFs of ?CalculatePlane@D2DVectorHelper@@YA?AUD2D_VECTOR_4F@@AEBU2@00@Z @ 0x18017DD00
 * Callers:
 *     ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMatrix@@MW4Enum@MilBitmapBorderMode@@W46MilCompositingMode@@W46MilBitmapInterpolationMode@@_N7PEAUD2D_VECTOR_4F@@PEAPEAV1@@Z @ 0x18017E634 (-Create@CPolygon@@SAJPEAV-$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMa.c)
 * Callees:
 *     sqrtf_0 @ 0x1800C5DAA (sqrtf_0.c)
 */

struct D2D_VECTOR_4F *__fastcall D2DVectorHelper::CalculatePlane(
        struct D2D_VECTOR_4F *this,
        __m128 *__return_ptr retstr,
        __m128 *a3,
        __m128 *a4)
{
  __m128 v6; // xmm6
  __m128 v7; // xmm7
  float v8; // xmm4_4
  float v9; // xmm5_4
  float v10; // xmm3_4
  float v11; // xmm2_4
  __m128 v12; // xmm7
  float v13; // xmm6_4
  float v14; // xmm8_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  struct D2D_VECTOR_4F *result; // rax
  float v19; // xmm6_4
  float v20; // xmm6_4
  float v21; // xmm0_4
  __m128 v22; // [rsp+20h] [rbp-48h]

  v6 = _mm_sub_ps(*a4, *a3);
  v7 = _mm_sub_ps(*a3, *retstr);
  v8 = _mm_shuffle_ps(v6, v6, 85).m128_f32[0];
  v9 = _mm_shuffle_ps(v7, v7, 85).m128_f32[0];
  v10 = _mm_shuffle_ps(v6, v6, 170).m128_f32[0];
  v11 = _mm_shuffle_ps(v7, v7, 170).m128_f32[0];
  v22.m128_f32[0] = (float)(v9 * v10) - (float)(v8 * v11);
  v22.m128_i32[3] = 0;
  v22.m128_f32[1] = (float)(v6.m128_f32[0] * v11) - (float)(v7.m128_f32[0] * v10);
  v22.m128_f32[2] = (float)(v7.m128_f32[0] * v8) - (float)(v6.m128_f32[0] * v9);
  v12 = v22;
  v13 = _mm_shuffle_ps(v12, v12, 85).m128_f32[0];
  v14 = _mm_shuffle_ps(v12, v12, 170).m128_f32[0];
  v15 = sqrtf_0((float)((float)(v13 * v13) + (float)(v12.m128_f32[0] * v12.m128_f32[0])) + (float)(v14 * v14));
  v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v15) & _xmm);
  if ( v16 < 0.0000011920929 )
    v15 = FLOAT_1_0;
  v17 = v13;
  result = this;
  v19 = (float)(v13 * retstr->m128_f32[1]) + (float)(v22.m128_f32[0] * retstr->m128_f32[0]);
  this->x = v22.m128_f32[0] / v15;
  v20 = v19 + (float)(v14 * retstr->m128_f32[2]);
  this->z = v14 / v15;
  v21 = 0.0 * retstr->m128_f32[3];
  this->y = v17 / v15;
  LODWORD(this->w) = COERCE_UNSIGNED_INT((float)(v20 + v21) / v15) ^ _xmm;
  return result;
}
