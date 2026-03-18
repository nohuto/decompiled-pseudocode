/*
 * XREFs of ?GetProperty@CCompositionSpotLight@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18002A9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z @ 0x1800517BC (-GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@IW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800C24F4 (-FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV-$span@QEBUAnimatedPro.c)
 */

__int64 __fastcall CCompositionSpotLight::GetProperty(
        CCompositionSpotLight *this,
        __int64 a2,
        struct CExpressionValue *a3)
{
  unsigned int v3; // edi
  const struct AnimationHelper::AnimatedProperty *AnimatablePropertyInfo; // rax
  float v8; // xmm0_4
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0;
  if ( (_DWORD)a2 == 9 )
  {
    v8 = *((float *)this + 71);
    goto LABEL_9;
  }
  if ( (_DWORD)a2 == 14 )
  {
    v8 = *((float *)this + 72);
LABEL_9:
    *((_BYTE *)a3 + 76) = 1;
    *((_DWORD *)a3 + 18) = 18;
    *(float *)a3 = v8 * 57.295776;
    return v3;
  }
  v9[0] = 13LL;
  v9[1] = &CCompositionSpotLight::k_rgAnimDef;
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0xA4u);
  }
  return v3;
}
