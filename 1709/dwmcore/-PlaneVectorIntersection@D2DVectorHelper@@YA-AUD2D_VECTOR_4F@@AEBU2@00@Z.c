/*
 * XREFs of ?PlaneVectorIntersection@D2DVectorHelper@@YA?AUD2D_VECTOR_4F@@AEBU2@00@Z @ 0x18017EF34
 * Callers:
 *     ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x18017DECC (-CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z.c)
 * Callees:
 *     <none>
 */

struct D2D_VECTOR_4F *__fastcall D2DVectorHelper::PlaneVectorIntersection(
        struct D2D_VECTOR_4F *this,
        struct D2D_VECTOR_4F *__return_ptr retstr,
        __m128 *a3,
        __m128 *a4)
{
  __m128 v4; // xmm7
  float v5; // xmm9_4
  float v6; // xmm10_4
  float v7; // xmm11_4
  float v8; // xmm8_4
  float v9; // xmm1_4
  float v10; // xmm2_4
  unsigned int v11; // xmm4_4
  unsigned int v12; // xmm5_4
  float v13; // xmm1_4
  __m128 v14; // xmm0
  struct D2D_VECTOR_4F *result; // rax
  __m128 v16; // [rsp+0h] [rbp-78h]

  v4 = _mm_sub_ps(*a4, *a3);
  v5 = _mm_shuffle_ps(v4, v4, 85).m128_f32[0];
  v6 = _mm_shuffle_ps(v4, v4, 170).m128_f32[0];
  v7 = _mm_shuffle_ps(v4, v4, 255).m128_f32[0];
  v8 = (float)((float)((float)(retstr->x * v4.m128_f32[0]) + (float)(retstr->y * v5)) + (float)(retstr->z * v6))
     + (float)(retstr->w * v7);
  v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v8) & _xmm);
  if ( v9 < 0.0000011920929 )
  {
    v14 = *a3;
  }
  else
  {
    v10 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                         (float)((float)((float)(a3->m128_f32[0] * retstr->x) + (float)(a3->m128_f32[1] * retstr->y))
                               + (float)(a3->m128_f32[2] * retstr->z))
                       + (float)(a3->m128_f32[3] * retstr->w)) ^ _xmm)
        / v8;
    v16.m128_f32[0] = v4.m128_f32[0] * v10;
    v16.m128_f32[1] = v5 * v10;
    v16.m128_f32[2] = v6 * v10;
    v16.m128_f32[3] = v7 * v10;
    *(float *)&v11 = a3->m128_f32[1] + _mm_shuffle_ps(v16, v16, 85).m128_f32[0];
    *(float *)&v12 = a3->m128_f32[2] + _mm_shuffle_ps(v16, v16, 170).m128_f32[0];
    v13 = _mm_shuffle_ps(v16, v16, 255).m128_f32[0];
    v16.m128_f32[0] = a3->m128_f32[0] + (float)(v4.m128_f32[0] * v10);
    *(unsigned __int64 *)((char *)v16.m128_u64 + 4) = __PAIR64__(v12, v11);
    v16.m128_f32[3] = a3->m128_f32[3] + v13;
    v14 = v16;
  }
  result = this;
  *this = (struct D2D_VECTOR_4F)v14;
  return result;
}
