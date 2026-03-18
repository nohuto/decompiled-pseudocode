/*
 * XREFs of ?SetProperty@CLinearGradientBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180170120
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetEndPoint@CLinearGradientBrush@@AEAAXAEBUD2D_POINT_2F@@@Z @ 0x1801700D8 (-SetEndPoint@CLinearGradientBrush@@AEAAXAEBUD2D_POINT_2F@@@Z.c)
 *     ?SetStartPoint@CLinearGradientBrush@@AEAAXAEBUD2D_POINT_2F@@@Z @ 0x180170174 (-SetStartPoint@CLinearGradientBrush@@AEAAXAEBUD2D_POINT_2F@@@Z.c)
 */

__int64 __fastcall CLinearGradientBrush::SetProperty(
        CLinearGradientBrush *a1,
        int a2,
        int a3,
        const struct D2D_POINT_2F *a4)
{
  unsigned int v4; // ebx
  int v5; // edx

  v4 = 0;
  if ( a3 != 35 )
    goto LABEL_6;
  v5 = a2 - 4;
  if ( !v5 )
  {
    CLinearGradientBrush::SetStartPoint(a1, a4);
    return v4;
  }
  if ( v5 != 1 )
  {
LABEL_6:
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x57u);
    return v4;
  }
  CLinearGradientBrush::SetEndPoint((struct D2D_POINT_2F *)a1, a4);
  return v4;
}
