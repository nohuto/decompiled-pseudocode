/*
 * XREFs of ?SetInitialDelay@CKeyframeAnimation@@AEAAJM@Z @ 0x18016F644
 * Callers:
 *     ?SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800A3C30 (-SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CKeyframeAnimation::SetInitialDelay(CKeyframeAnimation *this, float a2, double a3)
{
  int v3; // eax
  __m128 v4; // rt1
  unsigned int v5; // ebx
  float v7; // [rsp+48h] [rbp+10h]

  if ( (LODWORD(a2) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    *(float *)&a3 = (float)(int)a2 - a2;
    v4.m128_f32[0] = FLOAT_N0_5;
    v3 = (int)a2 - _mm_cmple_ss(*(__m128 *)&a3, v4).m128_u32[0];
  }
  else
  {
    v7 = a2 + 6291456.25;
    v3 = (int)(LODWORD(v7) << 10) >> 11;
  }
  v5 = 0;
  if ( v3 >= 0 )
  {
    *((_DWORD *)this + 94) = v3;
    *((_DWORD *)this + 95) = 0;
  }
  else
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x9E3u);
  }
  return v5;
}
