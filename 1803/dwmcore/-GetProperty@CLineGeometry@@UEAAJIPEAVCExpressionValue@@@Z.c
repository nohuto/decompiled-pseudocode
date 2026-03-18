/*
 * XREFs of ?GetProperty@CLineGeometry@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180198B60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z @ 0x1800517BC (-GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@IW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800C24F4 (-FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV-$span@QEBUAnimatedPro.c)
 *     ?GetProperty@CGeometry@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18018FBD0 (-GetProperty@CGeometry@@UEAAJIPEAVCExpressionValue@@@Z.c)
 */

__int64 __fastcall CLineGeometry::GetProperty(CLineGeometry *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v5; // ebx
  const struct AnimationHelper::AnimatedProperty *AnimatablePropertyInfo; // rax
  int v7; // edx
  int Property; // eax
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF

  v10[0] = 2LL;
  v10[1] = &CLineGeometry::k_rgAnimDef;
  v5 = 0;
  AnimatablePropertyInfo = (const struct AnimationHelper::AnimatedProperty *)AnimationHelper::FindAnimatablePropertyInfo(
                                                                               v10,
                                                                               a2,
                                                                               0);
  if ( AnimatablePropertyInfo )
  {
    CResource::GetPropertyImpl(this, AnimatablePropertyInfo, a3);
  }
  else
  {
    Property = CGeometry::GetProperty(this, v7, a3);
    v5 = Property;
    if ( Property < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Property, 0x40u);
  }
  return v5;
}
