/*
 * XREFs of ?SetProperty@CSurfaceBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180176520
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetHorizontalAlignmentRatio@CSurfaceBrush@@AEAAXM@Z @ 0x1801764E8 (-SetHorizontalAlignmentRatio@CSurfaceBrush@@AEAAXM@Z.c)
 *     ?SetVerticalAlignmentRatio@CSurfaceBrush@@AEAAXM@Z @ 0x180176578 (-SetVerticalAlignmentRatio@CSurfaceBrush@@AEAAXM@Z.c)
 */

__int64 __fastcall CSurfaceBrush::SetProperty(CSurfaceBrush *a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  int v5; // edx

  v4 = 0;
  if ( a3 != 18 )
    goto LABEL_6;
  v5 = a2 - 2;
  if ( !v5 )
  {
    CSurfaceBrush::SetHorizontalAlignmentRatio(a1, *a4);
    return v4;
  }
  if ( v5 != 1 )
  {
LABEL_6:
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x87u);
    return v4;
  }
  CSurfaceBrush::SetVerticalAlignmentRatio(a1, *a4);
  return v4;
}
