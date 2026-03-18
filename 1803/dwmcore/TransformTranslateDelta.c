/*
 * XREFs of TransformTranslateDelta @ 0x18020E9E8
 * Callers:
 *     ?UnTransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUInteractionOutput@@K_NPEAU2@@Z @ 0x18020EA68 (-UnTransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUInteractionOutput@@K_NPEAU2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

float *__fastcall TransformTranslateDelta(float a1, float a2, __m128 *a3, float *a4, float *a5)
{
  float *result; // rax
  __m128 v6; // xmm4

  result = a5;
  v6 = *a3;
  *a4 = (float)((float)(COERCE_FLOAT(*a3) * a1) + (float)(_mm_shuffle_ps(*a3, *a3, 170).m128_f32[0] * a2)) + 0.0;
  *a5 = (float)((float)(_mm_shuffle_ps(v6, v6, 85).m128_f32[0] * a1)
              + (float)(_mm_shuffle_ps(v6, v6, 255).m128_f32[0] * a2))
      + 0.0;
  return result;
}
