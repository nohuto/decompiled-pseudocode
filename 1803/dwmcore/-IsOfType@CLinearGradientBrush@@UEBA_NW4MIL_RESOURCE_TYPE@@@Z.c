/*
 * XREFs of ?IsOfType@CLinearGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180011910
 * Callers:
 *     ?EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z @ 0x180098F50 (-EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z.c)
 * Callees:
 *     ?IsOfType@CGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180012438 (-IsOfType@CGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CLinearGradientBrush::IsOfType(__int64 a1, int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 87 )
    return 1;
  v2 = CGradientBrush::IsOfType();
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
