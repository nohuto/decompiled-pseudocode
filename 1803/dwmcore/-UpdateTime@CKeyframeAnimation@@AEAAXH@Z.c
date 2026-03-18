/*
 * XREFs of ?UpdateTime@CKeyframeAnimation@@AEAAXH@Z @ 0x18013CE5C
 * Callers:
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x18003E4C0 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?ProgressSeek@CKeyframeAnimation@@AEAAJM@Z @ 0x180197C68 (-ProgressSeek@CKeyframeAnimation@@AEAAJM@Z.c)
 * Callees:
 *     ?GetAnimationTimeLength@CKeyframeAnimation@@AEBAMXZ @ 0x18003CE68 (-GetAnimationTimeLength@CKeyframeAnimation@@AEBAMXZ.c)
 *     ?Update@Timer@@QEAAXH_N@Z @ 0x1800C3EFC (-Update@Timer@@QEAAXH_N@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall CKeyframeAnimation::UpdateTime(CKeyframeAnimation *this, int a2, double a3)
{
  __int64 v4; // r9
  float AnimationTimeLength; // xmm0_4
  float v6; // xmm0_4
  float v7; // xmm0_4
  unsigned __int32 v8; // edx
  __m128 v9; // rt1
  int v10; // eax
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // rcx

  if ( (*((_BYTE *)this + 508) & 0x40) != 0 )
  {
    if ( *((_DWORD *)this + 125) == 4 )
    {
      AnimationTimeLength = CKeyframeAnimation::GetAnimationTimeLength(this);
      v6 = (float)(AnimationTimeLength * *(float *)(v4 + 484)) * 1000.0;
      if ( (LODWORD(v6) & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        *(float *)&a3 = (float)(int)v6 - v6;
        v9.m128_f32[0] = FLOAT_N0_5;
        v8 = (int)v6 - _mm_cmple_ss(*(__m128 *)&a3, v9).m128_u32[0];
      }
      else
      {
        v7 = v6 + 6291456.25;
        v8 = (int)(LODWORD(v7) << 10) >> 11;
      }
      KeyframeSequence::ResetTime(*(KeyframeSequence **)(v4 + 328), v8, 0);
    }
    else
    {
      v10 = *((_DWORD *)this + 105);
      v11 = *((_DWORD *)this + 104);
      if ( v10 < v11 )
      {
        v12 = v11 - v10;
        if ( a2 < v12 )
          v12 = a2;
        *((_DWORD *)this + 105) = v12 + v10;
        a2 -= v12;
      }
      v13 = *((_QWORD *)this + 41);
      if ( (*(_BYTE *)(v13 + 140) & 2) != 0 )
        Timer::Update((Timer *)(v13 + 80), a2, 1);
    }
  }
}
