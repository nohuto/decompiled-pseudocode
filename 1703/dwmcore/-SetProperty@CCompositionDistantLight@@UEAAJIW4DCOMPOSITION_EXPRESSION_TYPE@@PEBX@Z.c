/*
 * XREFs of ?SetProperty@CCompositionDistantLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180173620
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetColor@CCompositionDistantLight@@AEAAXMMMM@Z @ 0x18017351C (-SetColor@CCompositionDistantLight@@AEAAXMMMM@Z.c)
 *     ?SetDirection@CCompositionDistantLight@@AEAAXMMM@Z @ 0x18017358C (-SetDirection@CCompositionDistantLight@@AEAAXMMM@Z.c)
 */

__int64 __fastcall CCompositionDistantLight::SetProperty(CCompositionDistantLight *a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( a3 == 52 )
  {
    if ( a2 == 3 )
    {
      CCompositionDistantLight::SetDirection(a1, *a4, a4[1], a4[2]);
      return v4;
    }
LABEL_7:
    v4 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xB4u);
    return v4;
  }
  if ( a3 != 70 || a2 != 1 )
    goto LABEL_7;
  CCompositionDistantLight::SetColor(
    a1,
    COERCE_FLOAT(*(_OWORD *)a4),
    COERCE_FLOAT(HIDWORD(*(_QWORD *)a4)),
    COERCE_FLOAT(*((_QWORD *)a4 + 1)),
    COERCE_FLOAT(HIDWORD(*(_OWORD *)a4)));
  return v4;
}
