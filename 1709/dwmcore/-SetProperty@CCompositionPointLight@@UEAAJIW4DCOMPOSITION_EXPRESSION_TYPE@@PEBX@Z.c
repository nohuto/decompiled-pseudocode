/*
 * XREFs of ?SetProperty@CCompositionPointLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18015C3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetAttenuation0@CCompositionPointLight@@AEAAXM@Z @ 0x1800A0A50 (-SetAttenuation0@CCompositionPointLight@@AEAAXM@Z.c)
 *     ?SetAttenuation1@CCompositionPointLight@@AEAAXM@Z @ 0x18015C26C (-SetAttenuation1@CCompositionPointLight@@AEAAXM@Z.c)
 *     ?SetColor@CCompositionPointLight@@AEAAXMMMM@Z @ 0x18015C2A4 (-SetColor@CCompositionPointLight@@AEAAXMMMM@Z.c)
 *     ?SetIntensity@CCompositionPointLight@@AEAAXM@Z @ 0x18015C328 (-SetIntensity@CCompositionPointLight@@AEAAXM@Z.c)
 *     ?SetOffset@CCompositionPointLight@@AEAAXMMM@Z @ 0x18015C360 (-SetOffset@CCompositionPointLight@@AEAAXMMM@Z.c)
 *     ?SetAttenuation2@CCompositionPointLight@@AEAAXM@Z @ 0x18015D93C (-SetAttenuation2@CCompositionPointLight@@AEAAXM@Z.c)
 */

__int64 __fastcall CCompositionPointLight::SetProperty(CCompositionPointLight *a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  int v5; // edx
  int v6; // edx
  int v7; // edx

  v4 = 0;
  if ( a3 == 18 )
  {
    v5 = a2 - 2;
    if ( !v5 )
    {
      CCompositionPointLight::SetAttenuation0(a1, *a4);
      return v4;
    }
    v6 = v5 - 1;
    if ( !v6 )
    {
      CCompositionPointLight::SetAttenuation1(a1, *a4);
      return v4;
    }
    v7 = v6 - 1;
    if ( !v7 )
    {
      CCompositionPointLight::SetAttenuation2(a1, *a4);
      return v4;
    }
    if ( v7 == 4 )
    {
      CCompositionPointLight::SetIntensity(a1, *a4);
      return v4;
    }
    goto LABEL_12;
  }
  if ( a3 == 52 )
  {
    if ( a2 == 7 )
    {
      CCompositionPointLight::SetOffset(a1, *a4, a4[1], a4[2]);
      return v4;
    }
LABEL_12:
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0xEBu);
    return v4;
  }
  if ( a3 != 70 || a2 != 5 )
    goto LABEL_12;
  CCompositionPointLight::SetColor(
    a1,
    COERCE_FLOAT(*(_OWORD *)a4),
    COERCE_FLOAT(HIDWORD(*(_QWORD *)a4)),
    COERCE_FLOAT(*((_QWORD *)a4 + 1)),
    COERCE_FLOAT(HIDWORD(*(_OWORD *)a4)));
  return v4;
}
