/*
 * XREFs of ??_0D2DQuaternion@@QEAAAEAU0@M@Z @ 0x1801AEC84
 * Callers:
 *     ?D3DXQuaternionInverse@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x1801AF430 (-D3DXQuaternionInverse@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 * Callees:
 *     <none>
 */

__m128 *__fastcall D2DQuaternion::operator/=(__m128 *a1, float a2)
{
  __m128 v2; // xmm3

  v2 = (__m128)LODWORD(FLOAT_1_0);
  v2.m128_f32[0] = 1.0 / a2;
  *a1 = _mm_mul_ps(_mm_shuffle_ps(v2, v2, 0), *a1);
  return a1;
}
