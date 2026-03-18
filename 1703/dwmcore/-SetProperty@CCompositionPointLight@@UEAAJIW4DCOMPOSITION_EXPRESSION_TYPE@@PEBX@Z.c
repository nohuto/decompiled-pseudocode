/*
 * XREFs of ?SetProperty@CCompositionPointLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180173A70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetAttenuation1@CCompositionPointLight@@AEAAXM@Z @ 0x180173948 (-SetAttenuation1@CCompositionPointLight@@AEAAXM@Z.c)
 *     ?SetColor@CCompositionPointLight@@AEAAXMMMM@Z @ 0x180173980 (-SetColor@CCompositionPointLight@@AEAAXMMMM@Z.c)
 *     ?SetOffset@CCompositionPointLight@@AEAAXMMM@Z @ 0x180173A04 (-SetOffset@CCompositionPointLight@@AEAAXMMM@Z.c)
 *     ?SetAttenuation0@CCompositionPointLight@@AEAAXM@Z @ 0x180174268 (-SetAttenuation0@CCompositionPointLight@@AEAAXM@Z.c)
 *     ?SetAttenuation2@CCompositionPointLight@@AEAAXM@Z @ 0x1801742A0 (-SetAttenuation2@CCompositionPointLight@@AEAAXM@Z.c)
 */

__int64 __fastcall CCompositionPointLight::SetProperty(CCompositionPointLight *a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  int v5; // edx
  int v6; // edx

  v4 = 0;
  if ( a3 == 18 )
  {
    v5 = a2 - 1;
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
    if ( v6 == 1 )
    {
      CCompositionPointLight::SetAttenuation2(a1, *a4);
      return v4;
    }
    goto LABEL_11;
  }
  if ( a3 == 52 )
  {
    if ( a2 == 6 )
    {
      CCompositionPointLight::SetOffset(a1, *a4, a4[1], a4[2]);
      return v4;
    }
LABEL_11:
    v4 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xDEu);
    return v4;
  }
  if ( a3 != 70 || a2 != 4 )
    goto LABEL_11;
  CCompositionPointLight::SetColor(
    a1,
    COERCE_FLOAT(*(_OWORD *)a4),
    COERCE_FLOAT(HIDWORD(*(_QWORD *)a4)),
    COERCE_FLOAT(*((_QWORD *)a4 + 1)),
    COERCE_FLOAT(HIDWORD(*(_OWORD *)a4)));
  return v4;
}
