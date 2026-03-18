/*
 * XREFs of ?GetProperty@CComponentTransform2D@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180002C90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z @ 0x1800517BC (-GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@IW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800C24F4 (-FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV-$span@QEBUAnimatedPro.c)
 */

__int64 __fastcall CComponentTransform2D::GetProperty(
        CComponentTransform2D *this,
        __int64 a2,
        struct CExpressionValue *a3)
{
  unsigned int v3; // edi
  const struct AnimationHelper::AnimatedProperty *AnimatablePropertyInfo; // rax
  float v8; // xmm0_4
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0;
  if ( (_DWORD)a2 == 4 )
  {
    v8 = *((float *)this + 46) * 57.295776;
    *((_DWORD *)a3 + 18) = 18;
    *((_BYTE *)a3 + 76) = 1;
    *(float *)a3 = v8;
  }
  else
  {
    v9[0] = 6LL;
    v9[1] = &CComponentTransform2D::k_rgAnimDef;
    AnimatablePropertyInfo = (const struct AnimationHelper::AnimatedProperty *)AnimationHelper::FindAnimatablePropertyInfo(
                                                                                 v9,
                                                                                 a2,
                                                                                 0LL);
    if ( AnimatablePropertyInfo )
    {
      CResource::GetPropertyImpl(this, AnimatablePropertyInfo, a3);
    }
    else
    {
      v3 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x71u);
    }
  }
  return v3;
}
