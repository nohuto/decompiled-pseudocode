/*
 * XREFs of ?GetProperty@CKeyframeAnimation@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18016F530
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetAnimationTimeLength@CKeyframeAnimation@@AEBAMXZ @ 0x1800A3818 (-GetAnimationTimeLength@CKeyframeAnimation@@AEBAMXZ.c)
 */

__int64 __fastcall CKeyframeAnimation::GetProperty(CKeyframeAnimation *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  float AnimationTimeLength; // xmm0_4
  __int64 v5; // r9
  float v6; // xmm0_4

  if ( a2 == 16 )
  {
    v6 = (float)*((int *)this + 94);
    *((_DWORD *)a3 + 16) = 42;
    *((_BYTE *)a3 + 68) = 1;
    *(float *)a3 = v6;
    return 0;
  }
  if ( a2 == 30 )
  {
    AnimationTimeLength = CKeyframeAnimation::GetAnimationTimeLength(this);
    *(_DWORD *)(v5 + 64) = 42;
    *(_BYTE *)(v5 + 68) = 1;
    *(float *)v5 = AnimationTimeLength * 1000.0;
    return 0;
  }
  v3 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x73Bu);
  return v3;
}
