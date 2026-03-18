/*
 * XREFs of ?SetProperty@CCompositionAmbientLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18015A0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetColor@CCompositionAmbientLight@@AEAAXMMMM@Z @ 0x1800B11F4 (-SetColor@CCompositionAmbientLight@@AEAAXMMMM@Z.c)
 *     ?SetIntensity@CCompositionAmbientLight@@AEAAXM@Z @ 0x18015A06C (-SetIntensity@CCompositionAmbientLight@@AEAAXM@Z.c)
 */

__int64 __fastcall CCompositionAmbientLight::SetProperty(CCompositionAmbientLight *a1, int a2, int a3, _OWORD *a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( a3 == 18 )
  {
    if ( a2 == 3 )
    {
      CCompositionAmbientLight::SetIntensity(a1, *(float *)a4);
      return v4;
    }
LABEL_7:
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x93u);
    return v4;
  }
  if ( a3 != 70 || a2 != 2 )
    goto LABEL_7;
  CCompositionAmbientLight::SetColor(
    a1,
    COERCE_FLOAT(*a4),
    COERCE_FLOAT(HIDWORD(*(_QWORD *)a4)),
    COERCE_FLOAT(*((_QWORD *)a4 + 1)),
    COERCE_FLOAT(HIDWORD(*a4)));
  return v4;
}
