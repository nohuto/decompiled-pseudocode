/*
 * XREFs of ?InterpolateValueLinear@CAnimatedGlassSheet@@AEAAJJJM@Z @ 0x18007E470
 * Callers:
 *     ?UpdateTransition@CAnimatedGlassSheet@@AEAAJXZ @ 0x18007E9D8 (-UpdateTransition@CAnimatedGlassSheet@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimatedGlassSheet::InterpolateValueLinear(
        CAnimatedGlassSheet *this,
        signed int a2,
        signed int a3,
        float a4)
{
  __m128i v4; // xmm1
  __m128i v5; // xmm0
  signed int v6; // eax
  int v7; // ecx

  if ( a2 != a3 )
  {
    v4 = _mm_cvtsi32_si128(a3);
    v5 = _mm_cvtsi32_si128(a2);
    v6 = a2;
    if ( a3 >= a2 )
    {
      v6 = a3;
      a3 = a2;
    }
    v7 = (int)(float)((float)((float)(1.0 - a4) * _mm_cvtepi32_ps(v5).m128_f32[0])
                    + (float)(_mm_cvtepi32_ps(v4).m128_f32[0] * a4));
    if ( v7 > a3 )
    {
      a3 = v7;
      if ( v7 >= v6 )
        return (unsigned int)v6;
    }
  }
  return (unsigned int)a3;
}
