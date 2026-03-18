/*
 * XREFs of ?ProgressSeek@CKeyframeAnimation@@AEAAJM@Z @ 0x180197C68
 * Callers:
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x18003E4C0 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?GetAnimationTimeLength@CKeyframeAnimation@@AEBAMXZ @ 0x18003CE68 (-GetAnimationTimeLength@CKeyframeAnimation@@AEBAMXZ.c)
 *     ?PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z @ 0x18003CE98 (-PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z.c)
 *     ?ResetTime@KeyframeSequence@@QEAAXI_N@Z @ 0x18003F04C (-ResetTime@KeyframeSequence@@QEAAXI_N@Z.c)
 *     ?UpdateTime@CKeyframeAnimation@@AEAAXH@Z @ 0x18013CE5C (-UpdateTime@CKeyframeAnimation@@AEAAXH@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CKeyframeAnimation::ProgressSeek(CKeyframeAnimation *this, float a2, double a3)
{
  int v4; // edx
  int v5; // eax
  int v6; // r10d
  float v7; // xmm0_4
  float v8; // xmm4_4
  float v9; // xmm0_4
  int v10; // eax
  __m128 v11; // rt1
  float v12; // xmm5_4
  double v13; // xmm2_8
  float v14; // xmm1_4
  float v15; // xmm5_4
  float v16; // xmm4_4
  float v17; // xmm5_4
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 >= 0.0 && a2 <= 1.0 )
  {
    v4 = 0;
    if ( *((char *)this + 508) >= 0 || (*((_BYTE *)this + 509) & 1) != 0 )
      return 0LL;
    v5 = *((_DWORD *)this + 125);
    *((_DWORD *)this + 117) = 0;
    if ( (v5 == 2 || v5 == 3) && a2 >= 0.5 )
    {
      *((_DWORD *)this + 117) = 1;
      v4 = 1;
    }
    CKeyframeAnimation::PrepareSequenceForIteration(this, v4);
    v7 = CKeyframeAnimation::GetAnimationTimeLength(this) * 1000.0;
    if ( (LODWORD(v7) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      *(float *)&a3 = (float)(int)v7 - v7;
      v11.m128_f32[0] = FLOAT_N0_5;
      v10 = (int)v7 - _mm_cmple_ss(*(__m128 *)&a3, v11).m128_u32[0];
    }
    else
    {
      v9 = v7 + 6291456.25;
      v10 = (int)(LODWORD(v9) << 10) >> 11;
    }
    v12 = (float)v10;
    if ( *((_DWORD *)this + 116) == v6 )
    {
      *(_QWORD *)&v13 = COERCE_UNSIGNED_INT((float)*((int *)this + 104));
      v14 = *(float *)&v13 / (float)(v12 + *(float *)&v13);
      if ( v14 >= v8 )
      {
        CKeyframeAnimation::UpdateTime(this, (int)(float)((float)(v8 / v14) * *(float *)&v13), v13);
        return 0LL;
      }
      CKeyframeAnimation::UpdateTime(this, *((_DWORD *)this + 104), v13);
      v17 = (float)((float)(v15 + (float)*((int *)this + 104)) * v16) - (float)*((int *)this + 104);
    }
    else
    {
      v17 = v12 * v8;
    }
    KeyframeSequence::ResetTime(*((KeyframeSequence **)this + 41), (int)v17, 0);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9F3,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\keyframeanimation.cpp",
    (const char *)0x80070057LL);
  return 2147942487LL;
}
