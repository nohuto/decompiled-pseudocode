/*
 * XREFs of ?D3DXVec4Normalize@@YAPEAUD2DVector4@@PEAU1@PEBU1@@Z @ 0x1801AFB5C
 * Callers:
 *     ?Normalize@CExpressionValueStack@@QEAAJXZ @ 0x18017ECC8 (-Normalize@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     WithinEpsilon @ 0x180029340 (WithinEpsilon.c)
 *     sqrtf_0 @ 0x1800D53C0 (sqrtf_0.c)
 *     ??KD2DVector4@@QEBA?AU0@M@Z @ 0x1801AEC20 (--KD2DVector4@@QEBA-AU0@M@Z.c)
 */

struct D2DVector4 *__fastcall D3DXVec4Normalize(struct D2DVector4 *a1, __m128 *a2)
{
  float v4; // xmm3_4
  struct D2DVector4 *v5; // rdx
  __m128 v6; // xmm0
  float v7; // xmm0_4
  __m128 v9; // [rsp+20h] [rbp-18h] BYREF

  v4 = (float)((float)((float)(a2->m128_f32[0] * a2->m128_f32[0]) + (float)(a2->m128_f32[1] * a2->m128_f32[1]))
             + (float)(a2->m128_f32[2] * a2->m128_f32[2]))
     + (float)(a2->m128_f32[3] * a2->m128_f32[3]);
  if ( !WithinEpsilon(v4, 1.0) )
  {
    if ( v4 <= 1.1754944e-38 )
    {
      *(_QWORD *)a1 = 0LL;
      *((_QWORD *)a1 + 1) = 0LL;
      return a1;
    }
    v7 = sqrtf_0(v4);
    v6 = *D2DVector4::operator/(a2, &v9, v7);
    goto LABEL_6;
  }
  if ( a1 != v5 )
  {
    v6 = *(__m128 *)v5;
LABEL_6:
    *(__m128 *)a1 = v6;
  }
  return a1;
}
