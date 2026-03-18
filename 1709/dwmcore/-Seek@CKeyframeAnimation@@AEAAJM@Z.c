/*
 * XREFs of ?Seek@CKeyframeAnimation@@AEAAJM@Z @ 0x1800A38CC
 * Callers:
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x1800A4D50 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetAnimationTimeLength@CKeyframeAnimation@@AEBAMXZ @ 0x1800A3818 (-GetAnimationTimeLength@CKeyframeAnimation@@AEBAMXZ.c)
 *     ?PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z @ 0x1800A3848 (-PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z.c)
 *     ?ResetTime@KeyframeSequence@@QEAAXI_N@Z @ 0x1800A6C58 (-ResetTime@KeyframeSequence@@QEAAXI_N@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CKeyframeAnimation::Seek(CKeyframeAnimation *this, double a2)
{
  __m128 v2; // xmm0
  __m128 v3; // xmm3
  char v4; // al
  unsigned int v5; // ebx
  int v6; // eax
  int *v7; // r9
  int v8; // edx
  __m128 v9; // xmm2
  int v10; // ecx
  __int64 v11; // r9
  float v12; // xmm4_4
  unsigned int v13; // edx
  float v15; // xmm1_4
  int v16; // edx
  __m128 v17; // rt1
  float v18; // [rsp+48h] [rbp+10h]

  v3 = *(__m128 *)&a2;
  if ( *(float *)&a2 < 0.0 )
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x86Bu);
  }
  else
  {
    v4 = *((_BYTE *)this + 456);
    v5 = 0;
    if ( (v4 & 0x40) != 0 && v4 >= 0 )
    {
      v6 = *((_DWORD *)this + 94);
      if ( v6 > 0 )
      {
        v2 = (__m128)COERCE_UNSIGNED_INT((float)v6);
        v15 = *(float *)&a2 * 1000.0;
        if ( v15 <= v2.m128_f32[0] )
        {
          v6 = (int)v15;
          v3 = 0LL;
        }
        else
        {
          v3.m128_f32[0] = v3.m128_f32[0] - (float)(v2.m128_f32[0] / 1000.0);
        }
        *((_DWORD *)this + 95) = v6;
      }
      v2.m128_f32[0] = CKeyframeAnimation::GetAnimationTimeLength(this);
      v8 = v7[105];
      v9 = v2;
      v10 = (int)(float)(v3.m128_f32[0] / v2.m128_f32[0]);
      if ( v8 >= 0 && (v7[104] = v10, v7[106] = v8 - v10, v8 - v10 < 0) )
      {
        v7[106] = 0;
        v7[104] = v8;
      }
      else
      {
        v7[104] = v10;
        v9 = v3;
        v9.m128_f32[0] = v3.m128_f32[0] - (float)((float)v10 * v2.m128_f32[0]);
      }
      CKeyframeAnimation::PrepareSequenceForIteration((CKeyframeAnimation *)v7, v7[104]);
      v9.m128_f32[0] = v9.m128_f32[0] * v12;
      if ( (v9.m128_i32[0] & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        v16 = (int)v9.m128_f32[0];
        v9.m128_f32[0] = (float)(int)v9.m128_f32[0] - v9.m128_f32[0];
        v17.m128_f32[0] = FLOAT_N0_5;
        v13 = v16 - _mm_cmple_ss(v9, v17).m128_u32[0];
      }
      else
      {
        v18 = v9.m128_f32[0] + 6291456.25;
        v13 = (int)(LODWORD(v18) << 10) >> 11;
      }
      KeyframeSequence::ResetTime(*(KeyframeSequence **)(v11 + 312), v13, 0);
    }
  }
  return v5;
}
