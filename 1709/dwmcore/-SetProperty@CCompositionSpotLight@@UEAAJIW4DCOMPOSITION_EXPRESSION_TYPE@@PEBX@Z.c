/*
 * XREFs of ?SetProperty@CCompositionSpotLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800A0A90
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x1800A1DF0 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetOuterConeColor@CCompositionSpotLight@@AEAAXMMMM@Z @ 0x1800A08D0 (-SetOuterConeColor@CCompositionSpotLight@@AEAAXMMMM@Z.c)
 *     ?SetOuterConeAngle@CCompositionSpotLight@@AEAAXM@Z @ 0x1800A092C (-SetOuterConeAngle@CCompositionSpotLight@@AEAAXM@Z.c)
 *     ?SetOffset@CCompositionSpotLight@@AEAAXMMM@Z @ 0x1800A0964 (-SetOffset@CCompositionSpotLight@@AEAAXMMM@Z.c)
 *     ?SetInnerConeColor@CCompositionSpotLight@@AEAAXMMMM@Z @ 0x1800A09CC (-SetInnerConeColor@CCompositionSpotLight@@AEAAXMMMM@Z.c)
 *     ?SetInnerConeAngle@CCompositionSpotLight@@AEAAXM@Z @ 0x1800A0A28 (-SetInnerConeAngle@CCompositionSpotLight@@AEAAXM@Z.c)
 *     ?SetAttenuation0@CCompositionPointLight@@AEAAXM@Z @ 0x1800A0A50 (-SetAttenuation0@CCompositionPointLight@@AEAAXM@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A9868 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?IssueLightChangedNotification@CCompositionLight@@IEAAXXZ @ 0x1800B12EC (-IssueLightChangedNotification@CCompositionLight@@IEAAXXZ.c)
 *     ?SetAttenuation1@CCompositionPointLight@@AEAAXM@Z @ 0x18015C26C (-SetAttenuation1@CCompositionPointLight@@AEAAXM@Z.c)
 *     ?SetAttenuation2@CCompositionPointLight@@AEAAXM@Z @ 0x18015D93C (-SetAttenuation2@CCompositionPointLight@@AEAAXM@Z.c)
 *     ?SetDirection@CCompositionSpotLight@@AEAAXMMM@Z @ 0x18015D974 (-SetDirection@CCompositionSpotLight@@AEAAXMMM@Z.c)
 *     ?SetInnerConeIntensity@CCompositionSpotLight@@AEAAXM@Z @ 0x18015DA04 (-SetInnerConeIntensity@CCompositionSpotLight@@AEAAXM@Z.c)
 *     ?SetOuterConeIntensity@CCompositionSpotLight@@AEAAXM@Z @ 0x18015DA3C (-SetOuterConeIntensity@CCompositionSpotLight@@AEAAXM@Z.c)
 */

__int64 __fastcall CCompositionSpotLight::SetProperty(float *a1, int a2, int a3, float *a4)
{
  unsigned int v4; // edi
  float v6; // xmm1_4
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  float v12; // xmm1_4
  int v14; // edx
  int v15; // edx
  int v16; // edx
  float v17[6]; // [rsp+30h] [rbp-18h]

  v4 = 0;
  if ( a3 != 18 )
  {
    if ( a3 == 52 )
    {
      if ( a2 == 6 )
      {
        CCompositionSpotLight::SetDirection((CCompositionSpotLight *)a1, *a4, a4[1], a4[2]);
        return v4;
      }
      if ( a2 == 11 )
      {
        CCompositionSpotLight::SetOffset((CCompositionSpotLight *)a1, *a4, a4[1], a4[2]);
        return v4;
      }
    }
    else if ( a3 == 70 )
    {
      *(_OWORD *)v17 = *(_OWORD *)a4;
      if ( a2 == 9 )
      {
        CCompositionSpotLight::SetInnerConeColor((CCompositionSpotLight *)a1, v17[0], v17[1], v17[2], v17[3]);
        return v4;
      }
      if ( a2 == 14 )
      {
        CCompositionSpotLight::SetOuterConeColor((CCompositionSpotLight *)a1, v17[0], v17[1], v17[2], v17[3]);
        return v4;
      }
    }
    goto LABEL_28;
  }
  v6 = *a4;
  v7 = a2 - 2;
  if ( !v7 )
  {
    CCompositionPointLight::SetAttenuation0((CCompositionPointLight *)a1, v6);
    return v4;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    CCompositionPointLight::SetAttenuation1((CCompositionPointLight *)a1, v6);
    return v4;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    CCompositionPointLight::SetAttenuation2((CCompositionPointLight *)a1, v6);
    return v4;
  }
  v10 = v9 - 3;
  if ( !v10 )
  {
    CCompositionSpotLight::SetInnerConeAngle((CCompositionSpotLight *)a1, v6);
    return v4;
  }
  v11 = v10 - 1;
  if ( v11 )
  {
    v14 = v11 - 2;
    if ( !v14 )
    {
      CCompositionSpotLight::SetInnerConeIntensity((CCompositionSpotLight *)a1, v6);
      return v4;
    }
    v15 = v14 - 2;
    if ( !v15 )
      goto LABEL_14;
    v16 = v15 - 1;
    if ( !v16 )
    {
      v6 = v6 * 0.017453292;
LABEL_14:
      CCompositionSpotLight::SetOuterConeAngle((CCompositionSpotLight *)a1, v6);
      return v4;
    }
    if ( v16 == 2 )
    {
      CCompositionSpotLight::SetOuterConeIntensity((CCompositionSpotLight *)a1, v6);
      return v4;
    }
LABEL_28:
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x127u);
    return v4;
  }
  v12 = v6 * 0.017453292;
  if ( a1[52] != v12 )
  {
    a1[52] = v12;
    CCompositionLight::IssueLightChangedNotification((CCompositionLight *)a1);
    CResource::InvalidateAnimationSources((CResource *)a1, 7u);
  }
  return v4;
}
