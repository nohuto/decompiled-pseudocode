/*
 * XREFs of ?SetProperty@CCompositionSpotLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18002A950
 * Callers:
 *     <none>
 * Callees:
 *     ?SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800518C0 (-SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@IW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800C24F4 (-FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV-$span@QEBUAnimatedPro.c)
 */

__int64 __fastcall CCompositionSpotLight::SetProperty(CResource *a1, __int64 a2, __int64 a3, float *a4)
{
  float *v4; // rbx
  const struct AnimationHelper::AnimatedProperty *AnimatablePropertyInfo; // rax
  int v7; // eax
  unsigned int v8; // ebx
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF
  float v11; // [rsp+60h] [rbp+18h] BYREF

  v4 = a4;
  if ( (_DWORD)a3 == 18 )
  {
    if ( (_DWORD)a2 == 9 )
    {
      AnimatablePropertyInfo = (const struct AnimationHelper::AnimatedProperty *)&CCompositionSpotLight::sc_InnerConeAngle;
    }
    else
    {
      if ( (_DWORD)a2 != 14 )
        goto LABEL_2;
      AnimatablePropertyInfo = (const struct AnimationHelper::AnimatedProperty *)&CCompositionSpotLight::sc_OuterConeAngle;
    }
    v4 = &v11;
    v11 = *a4 * 0.017453292;
    goto LABEL_3;
  }
LABEL_2:
  v10[0] = 13LL;
  v10[1] = &CCompositionSpotLight::k_rgAnimDef;
  AnimatablePropertyInfo = (const struct AnimationHelper::AnimatedProperty *)AnimationHelper::FindAnimatablePropertyInfo(
                                                                               v10,
                                                                               a2,
                                                                               a3);
  if ( !AnimatablePropertyInfo )
  {
    v8 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0xE1u);
    return v8;
  }
LABEL_3:
  v7 = CResource::SetPropertyImpl(a1, AnimatablePropertyInfo, v4);
  v8 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xDDu);
  return v8;
}
