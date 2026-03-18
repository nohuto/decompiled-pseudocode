/*
 * XREFs of ?Normalize@Quaternion@Animations@Components@@QEAAXXZ @ 0x1800CBD5C
 * Callers:
 *     ?GetValue@StartingValueInput@Animations@Components@@UEAAJPEAVValue@23@@Z @ 0x1800293A0 (-GetValue@StartingValueInput@Animations@Components@@UEAAJPEAVValue@23@@Z.c)
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x18002F7D8 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 *     ?GetQuaternion@Value@Animations@Components@@QEBA?AUQuaternion@23@XZ @ 0x1801B9744 (-GetQuaternion@Value@Animations@Components@@QEBA-AUQuaternion@23@XZ.c)
 *     ?GetValue@ExpressionInput@Animations@Components@@UEAAJPEAVValue@23@@Z @ 0x1801B9AA0 (-GetValue@ExpressionInput@Animations@Components@@UEAAJPEAVValue@23@@Z.c)
 * Callees:
 *     ?IsWithinEpsilon@Math@Animations@Components@@SA_NM@Z @ 0x1800C5BEC (-IsWithinEpsilon@Math@Animations@Components@@SA_NM@Z.c)
 *     sqrtf_0 @ 0x1800D53C0 (sqrtf_0.c)
 */

void __fastcall Components::Animations::Quaternion::Normalize(__m128 *this)
{
  __m128 v2; // xmm6
  float v3; // xmm3_4

  v2 = (__m128)LODWORD(FLOAT_1_0);
  v3 = (float)((float)((float)(this->m128_f32[0] * this->m128_f32[0]) + (float)(this->m128_f32[1] * this->m128_f32[1]))
             + (float)(this->m128_f32[2] * this->m128_f32[2]))
     + (float)(this->m128_f32[3] * this->m128_f32[3]);
  if ( !Components::Animations::Math::IsWithinEpsilon(v3 - 1.0) )
  {
    if ( v3 <= 1.1754944e-38 )
    {
      this->m128_u64[0] = 0LL;
      this->m128_i32[2] = 0;
      this->m128_i32[3] = 1065353216;
    }
    else
    {
      v2.m128_f32[0] = 1.0 / sqrtf_0(v3);
      *this = _mm_mul_ps(_mm_shuffle_ps(v2, v2, 0), *this);
    }
  }
}
