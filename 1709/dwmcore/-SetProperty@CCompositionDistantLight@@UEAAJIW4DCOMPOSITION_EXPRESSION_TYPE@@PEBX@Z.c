/*
 * XREFs of ?SetProperty@CCompositionDistantLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18015AFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetColor@CCompositionDistantLight@@AEAAXMMMM@Z @ 0x18015AE98 (-SetColor@CCompositionDistantLight@@AEAAXMMMM@Z.c)
 *     ?SetDirection@CCompositionDistantLight@@AEAAXMMM@Z @ 0x18015AF1C (-SetDirection@CCompositionDistantLight@@AEAAXMMM@Z.c)
 *     ?SetIntensity@CCompositionDistantLight@@AEAAXM@Z @ 0x18015AFAC (-SetIntensity@CCompositionDistantLight@@AEAAXM@Z.c)
 */

__int64 __fastcall CCompositionDistantLight::SetProperty(CCompositionDistantLight *a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( a3 == 18 )
  {
    if ( a2 == 5 )
    {
      CCompositionDistantLight::SetIntensity(a1, *a4);
      return v4;
    }
    goto LABEL_10;
  }
  if ( a3 == 52 )
  {
    if ( a2 == 4 )
    {
      CCompositionDistantLight::SetDirection(a1, *a4, a4[1], a4[2]);
      return v4;
    }
LABEL_10:
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0xCCu);
    return v4;
  }
  if ( a3 != 70 || a2 != 2 )
    goto LABEL_10;
  CCompositionDistantLight::SetColor(
    a1,
    COERCE_FLOAT(*(_OWORD *)a4),
    COERCE_FLOAT(HIDWORD(*(_QWORD *)a4)),
    COERCE_FLOAT(*((_QWORD *)a4 + 1)),
    COERCE_FLOAT(HIDWORD(*(_OWORD *)a4)));
  return v4;
}
