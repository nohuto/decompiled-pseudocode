/*
 * XREFs of ?GetAnimationTimeLength@CKeyframeAnimation@@AEBAMXZ @ 0x1800A3818
 * Callers:
 *     ?Seek@CKeyframeAnimation@@AEAAJM@Z @ 0x1800A38CC (-Seek@CKeyframeAnimation@@AEAAJM@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x1800A39D4 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?UpdateTime@CKeyframeAnimation@@AEAAXH@Z @ 0x18011AAD0 (-UpdateTime@CKeyframeAnimation@@AEAAXH@Z.c)
 *     ?AdjustAllKeyframeTime@CKeyframeAnimation@@AEAAXM@Z @ 0x18016F460 (-AdjustAllKeyframeTime@CKeyframeAnimation@@AEAAXM@Z.c)
 *     ?GetProperty@CKeyframeAnimation@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18016F530 (-GetProperty@CKeyframeAnimation@@UEAAJIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall CKeyframeAnimation::GetAnimationTimeLength(CKeyframeAnimation *this)
{
  __int64 v1; // r8
  float result; // xmm0_4
  int v3; // eax

  v1 = *((_QWORD *)this + 39);
  result = 0.0;
  v3 = *(_DWORD *)(v1 + 104);
  if ( v3 > 0 )
    return (float)*(int *)(*(_QWORD *)(v1 + 96) + 24LL * (unsigned int)(v3 - 1)) / 1000.0;
  return result;
}
