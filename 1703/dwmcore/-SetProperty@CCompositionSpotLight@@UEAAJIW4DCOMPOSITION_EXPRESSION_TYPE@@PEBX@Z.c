/*
 * XREFs of ?SetProperty@CCompositionSpotLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180174570
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetAttenuation1@CCompositionPointLight@@AEAAXM@Z @ 0x180173948 (-SetAttenuation1@CCompositionPointLight@@AEAAXM@Z.c)
 *     ?SetAttenuation0@CCompositionPointLight@@AEAAXM@Z @ 0x180174268 (-SetAttenuation0@CCompositionPointLight@@AEAAXM@Z.c)
 *     ?SetAttenuation2@CCompositionPointLight@@AEAAXM@Z @ 0x1801742A0 (-SetAttenuation2@CCompositionPointLight@@AEAAXM@Z.c)
 *     ?SetDirection@CCompositionSpotLight@@AEAAXMMM@Z @ 0x1801742D8 (-SetDirection@CCompositionSpotLight@@AEAAXMMM@Z.c)
 *     ?SetInnerConeAngle@CCompositionSpotLight@@AEAAXM@Z @ 0x18017436C (-SetInnerConeAngle@CCompositionSpotLight@@AEAAXM@Z.c)
 *     ?SetInnerConeColor@CCompositionSpotLight@@AEAAXMMMM@Z @ 0x1801743AC (-SetInnerConeColor@CCompositionSpotLight@@AEAAXMMMM@Z.c)
 *     ?SetOffset@CCompositionSpotLight@@AEAAXMMM@Z @ 0x180174434 (-SetOffset@CCompositionSpotLight@@AEAAXMMM@Z.c)
 *     ?SetOuterConeAngle@CCompositionSpotLight@@AEAAXM@Z @ 0x1801744A4 (-SetOuterConeAngle@CCompositionSpotLight@@AEAAXM@Z.c)
 *     ?SetOuterConeColor@CCompositionSpotLight@@AEAAXMMMM@Z @ 0x1801744E4 (-SetOuterConeColor@CCompositionSpotLight@@AEAAXMMMM@Z.c)
 */

__int64 __fastcall CCompositionSpotLight::SetProperty(CCompositionPointLight *a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  float v5; // xmm1_4
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  __int128 v13; // [rsp+30h] [rbp-18h]

  v4 = 0;
  if ( a3 == 18 )
  {
    v5 = *a4;
    v6 = a2 - 1;
    if ( !v6 )
    {
      CCompositionPointLight::SetAttenuation0(a1, v5);
      return v4;
    }
    v7 = v6 - 1;
    if ( !v7 )
    {
      CCompositionPointLight::SetAttenuation1(a1, v5);
      return v4;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      CCompositionPointLight::SetAttenuation2(a1, v5);
      return v4;
    }
    v9 = v8 - 3;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 3;
        if ( v11 )
        {
          if ( v11 != 1 )
            goto LABEL_19;
          v5 = v5 * 0.017453292;
        }
        CCompositionSpotLight::SetOuterConeAngle(a1, v5);
        return v4;
      }
      v5 = v5 * 0.017453292;
    }
    CCompositionSpotLight::SetInnerConeAngle(a1, v5);
    return v4;
  }
  if ( a3 == 52 )
  {
    if ( a2 == 5 )
    {
      CCompositionSpotLight::SetDirection(a1, *a4, a4[1], a4[2]);
      return v4;
    }
    if ( a2 == 9 )
    {
      CCompositionSpotLight::SetOffset(a1, *a4, a4[1], a4[2]);
      return v4;
    }
    goto LABEL_19;
  }
  if ( a3 != 70 )
    goto LABEL_19;
  v13 = *(_OWORD *)a4;
  if ( a2 == 8 )
  {
    CCompositionSpotLight::SetInnerConeColor(
      a1,
      *(float *)&v13,
      *((float *)&v13 + 1),
      *((float *)&v13 + 2),
      *((float *)&v13 + 3));
    return v4;
  }
  if ( a2 != 12 )
  {
LABEL_19:
    v4 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x10Du);
    return v4;
  }
  CCompositionSpotLight::SetOuterConeColor(
    a1,
    *(float *)&v13,
    *((float *)&v13 + 1),
    *((float *)&v13 + 2),
    *((float *)&v13 + 3));
  return v4;
}
