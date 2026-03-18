/*
 * XREFs of ?SetProperty@CCompositionAmbientLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801732B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetColor@CCompositionDistantLight@@AEAAXMMMM@Z @ 0x18017351C (-SetColor@CCompositionDistantLight@@AEAAXMMMM@Z.c)
 */

__int64 __fastcall CCompositionAmbientLight::SetProperty(CCompositionDistantLight *a1, int a2, int a3, __int64 a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( a3 == 70 && a2 == 1 )
  {
    CCompositionDistantLight::SetColor(
      a1,
      COERCE_FLOAT(*(_OWORD *)a4),
      COERCE_FLOAT(HIDWORD(*(_QWORD *)a4)),
      COERCE_FLOAT(*(_QWORD *)(a4 + 8)),
      COERCE_FLOAT(HIDWORD(*(_OWORD *)a4)));
  }
  else
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x7Cu);
  }
  return v4;
}
