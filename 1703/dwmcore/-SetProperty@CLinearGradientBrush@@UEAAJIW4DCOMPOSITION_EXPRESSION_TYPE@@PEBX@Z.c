/*
 * XREFs of ?SetProperty@CLinearGradientBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180162220
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetEndPoint@CLinearGradientBrush@@AEAAXAEBUD2D_POINT_2F@@@Z @ 0x1800C0D4C (-SetEndPoint@CLinearGradientBrush@@AEAAXAEBUD2D_POINT_2F@@@Z.c)
 *     ?SetStartPoint@CLinearGradientBrush@@AEAAXAEBUD2D_POINT_2F@@@Z @ 0x1800C0D88 (-SetStartPoint@CLinearGradientBrush@@AEAAXAEBUD2D_POINT_2F@@@Z.c)
 *     ?SetProperty@CSurfaceBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180161FE0 (-SetProperty@CSurfaceBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 */

__int64 __fastcall CLinearGradientBrush::SetProperty(struct D2D_POINT_2F *a1, int a2, int a3, struct D2D_POINT_2F *a4)
{
  unsigned int v4; // ebx
  int v5; // eax

  v4 = 0;
  if ( a3 != 35 )
    goto LABEL_6;
  if ( a2 == 8 )
  {
    CLinearGradientBrush::SetStartPoint(a1, a4);
    return v4;
  }
  if ( a2 == 9 )
  {
    CLinearGradientBrush::SetEndPoint(a1, a4);
  }
  else
  {
LABEL_6:
    v5 = CSurfaceBrush::SetProperty((CSurfaceBrush *)a1, a2, a3, (float *)a4);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x58u);
  }
  return v4;
}
