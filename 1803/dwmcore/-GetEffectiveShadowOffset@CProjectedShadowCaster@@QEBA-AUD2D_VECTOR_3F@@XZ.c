/*
 * XREFs of ?GetEffectiveShadowOffset@CProjectedShadowCaster@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x1801A0580
 * Callers:
 *     ?CalculateCasterUVs@CProjectedShadow@@AEBA?AVMatrix3x3@@PEAVCDrawingContext@@@Z @ 0x1801B3F3C (-CalculateCasterUVs@CProjectedShadow@@AEBA-AVMatrix3x3@@PEAVCDrawingContext@@@Z.c)
 *     ?GetTransformIntermediateProjectionMatrix@CProjectedShadow@@AEBA?AVCMILMatrix@@PEAVCDrawingContext@@@Z @ 0x1801B5D14 (-GetTransformIntermediateProjectionMatrix@CProjectedShadow@@AEBA-AVCMILMatrix@@PEAVCDrawingConte.c)
 * Callees:
 *     <none>
 */

struct D2D_VECTOR_3F *__fastcall CProjectedShadowCaster::GetEffectiveShadowOffset(
        CProjectedShadowCaster *this,
        struct D2D_VECTOR_3F *__return_ptr retstr)
{
  __m128 v2; // xmm1
  __m128 v3; // xmm1

  if ( *((_BYTE *)this + 96) )
    v2 = (__m128)LODWORD(FLOAT_16_0);
  else
    v2 = (__m128)*((unsigned int *)this + 23);
  v3 = _mm_xor_ps(v2, (__m128)_xmm);
  *(_QWORD *)&retstr->x = _mm_unpacklo_ps(v3, v3).m128_u64[0];
  retstr->z = 0.0;
  return retstr;
}
