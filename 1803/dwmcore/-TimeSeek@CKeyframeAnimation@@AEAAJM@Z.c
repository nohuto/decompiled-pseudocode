/*
 * XREFs of ?TimeSeek@CKeyframeAnimation@@AEAAJM@Z @ 0x18003CF88
 * Callers:
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x18003E4C0 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?GetAnimationTimeLength@CKeyframeAnimation@@AEBAMXZ @ 0x18003CE68 (-GetAnimationTimeLength@CKeyframeAnimation@@AEBAMXZ.c)
 *     ?PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z @ 0x18003CE98 (-PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z.c)
 *     ?ResetTime@KeyframeSequence@@QEAAXI_N@Z @ 0x18003F04C (-ResetTime@KeyframeSequence@@QEAAXI_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CKeyframeAnimation::TimeSeek(CKeyframeAnimation *this, double a2)
{
  __m128 v2; // xmm0
  __m128 v3; // xmm3
  unsigned int v4; // ebx
  int v5; // eax
  CKeyframeAnimation *v6; // r10
  int v7; // edx
  __m128 v8; // xmm2
  int v9; // ecx
  __int64 v10; // r10
  float v11; // xmm4_4
  unsigned int v12; // edx
  float v14; // xmm1_4
  int v15; // edx
  __m128 v16; // rt1
  float v17; // [rsp+48h] [rbp+10h]

  v3 = *(__m128 *)&a2;
  if ( *(float *)&a2 < 0.0 )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x99Eu);
  }
  else
  {
    v4 = 0;
    if ( *((char *)this + 508) < 0 && (*((_BYTE *)this + 509) & 1) == 0 )
    {
      v5 = *((_DWORD *)this + 104);
      if ( v5 > 0 )
      {
        v2 = (__m128)COERCE_UNSIGNED_INT((float)v5);
        v14 = *(float *)&a2 * 1000.0;
        if ( v14 <= v2.m128_f32[0] )
        {
          v5 = (int)v14;
          v3 = 0LL;
        }
        else
        {
          v3.m128_f32[0] = v3.m128_f32[0] - (float)(v2.m128_f32[0] / 1000.0);
        }
        *((_DWORD *)this + 105) = v5;
      }
      v2.m128_f32[0] = CKeyframeAnimation::GetAnimationTimeLength(this);
      v7 = *((_DWORD *)v6 + 118);
      v8 = v2;
      v9 = (int)(float)(v3.m128_f32[0] / v2.m128_f32[0]);
      if ( v7 >= 0 && (*((_DWORD *)v6 + 117) = v9, *((_DWORD *)v6 + 119) = v7 - v9, v7 - v9 < 0) )
      {
        *((_DWORD *)v6 + 119) = 0;
      }
      else
      {
        v7 = (int)(float)(v3.m128_f32[0] / v2.m128_f32[0]);
        v8 = v3;
        v8.m128_f32[0] = v3.m128_f32[0] - (float)((float)v9 * v2.m128_f32[0]);
      }
      *((_DWORD *)v6 + 117) = v7;
      CKeyframeAnimation::PrepareSequenceForIteration(v6, v7);
      v8.m128_f32[0] = v8.m128_f32[0] * v11;
      if ( (v8.m128_i32[0] & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        v15 = (int)v8.m128_f32[0];
        v8.m128_f32[0] = (float)(int)v8.m128_f32[0] - v8.m128_f32[0];
        v16.m128_f32[0] = FLOAT_N0_5;
        v12 = v15 - _mm_cmple_ss(v8, v16).m128_u32[0];
      }
      else
      {
        v17 = v8.m128_f32[0] + 6291456.25;
        v12 = (int)(LODWORD(v17) << 10) >> 11;
      }
      KeyframeSequence::ResetTime(*(KeyframeSequence **)(v10 + 328), v12, 0);
    }
  }
  return v4;
}
