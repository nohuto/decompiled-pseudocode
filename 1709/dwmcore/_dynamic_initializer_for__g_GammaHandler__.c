/*
 * XREFs of _dynamic_initializer_for__g_GammaHandler__ @ 0x180001350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_initializer_for__g_GammaHandler__()
{
  _BYTE *v0; // rdx
  signed int v1; // ecx
  __m128i v2; // xmm3
  float v3; // xmm2_4
  float v4; // xmm0_4
  __int64 result; // rax
  float v6; // [rsp+10h] [rbp+10h]

  v0 = &unk_180272301;
  v1 = 0;
  do
  {
    v2 = _mm_cvtsi32_si128(v1++);
    *(float *)v2.m128i_i32 = _mm_cvtepi32_ps(v2).m128_f32[0];
    v3 = (float)(1.0 - (float)(*(float *)v2.m128i_i32 * 0.0039215689)) * (float)(*(float *)v2.m128i_i32 * 0.0039215689);
    v4 = (float)((float)((float)(*(float *)v2.m128i_i32 * 0.0039215689)
                       - (float)((float)((float)((float)(*(float *)v2.m128i_i32 * 0.0039215689) * 1.0209882) + 0.33601257)
                               * v3))
               * 255.0)
       + 6291456.25;
    *(v0 - 1) = (int)(LODWORD(v4) << 10) >> 11;
    v6 = (float)((float)((float)((float)((float)(*(float *)v2.m128i_i32 * 0.0039215689) * 0.16397858) + 1.6177137) * v3)
               * 255.0)
       + 6291456.25;
    result = (unsigned int)((int)(LODWORD(v6) << 10) >> 11);
    *v0 = result;
    v0 += 2;
  }
  while ( v1 < 256 );
  return result;
}
