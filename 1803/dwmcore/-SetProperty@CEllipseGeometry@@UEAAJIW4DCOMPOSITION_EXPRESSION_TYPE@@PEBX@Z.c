/*
 * XREFs of ?SetProperty@CEllipseGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18018B900
 * Callers:
 *     <none>
 * Callees:
 *     ?SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800518C0 (-SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@IW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800C24F4 (-FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV-$span@QEBUAnimatedPro.c)
 *     ?SetProperty@CGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18018FDC0 (-SetProperty@CGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 */

__int64 __fastcall CEllipseGeometry::SetProperty(CResource *a1, int a2, unsigned int a3, struct _D3DCOLORVALUE *a4)
{
  const struct AnimationHelper::AnimatedProperty *AnimatablePropertyInfo; // rax
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  _QWORD v13[3]; // [rsp+30h] [rbp-18h] BYREF

  v13[0] = 2LL;
  v13[1] = &CEllipseGeometry::k_rgAnimDef;
  AnimatablePropertyInfo = (const struct AnimationHelper::AnimatedProperty *)AnimationHelper::FindAnimatablePropertyInfo(
                                                                               v13,
                                                                               a2,
                                                                               a3);
  if ( AnimatablePropertyInfo )
  {
    v9 = CResource::SetPropertyImpl(a1, AnimatablePropertyInfo, a4);
    v10 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x22u);
  }
  else
  {
    v11 = CGeometry::SetProperty(a1, v8, a3, a4);
    v10 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x26u);
  }
  return v10;
}
