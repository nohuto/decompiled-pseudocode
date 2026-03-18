/*
 * XREFs of ?SetProperty@CCompositionSkyBoxBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18015D3B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetOffset@CCompositionSkyBoxBrush@@AEAAXMMM@Z @ 0x18015D360 (-SetOffset@CCompositionSkyBoxBrush@@AEAAXMMM@Z.c)
 *     ?SetSize@CCompositionSkyBoxBrush@@AEAAXM@Z @ 0x18015D414 (-SetSize@CCompositionSkyBoxBrush@@AEAAXM@Z.c)
 */

__int64 __fastcall CCompositionSkyBoxBrush::SetProperty(CCompositionSkyBoxBrush *a1, int a2, int a3, float *a4)
{
  if ( a3 == 18 )
  {
    if ( a2 == 7 )
      CCompositionSkyBoxBrush::SetSize(a1, *a4);
  }
  else if ( a3 == 52 && a2 == 6 )
  {
    CCompositionSkyBoxBrush::SetOffset(a1, *a4, a4[1], a4[2]);
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x8Du);
  return 2147942487LL;
}
