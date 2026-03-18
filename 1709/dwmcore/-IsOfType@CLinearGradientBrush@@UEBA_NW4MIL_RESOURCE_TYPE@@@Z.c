/*
 * XREFs of ?IsOfType@CLinearGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180070F60
 * Callers:
 *     ?ProcessSetSource@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MASKBRUSH_SETSOURCE@@@Z @ 0x180024560 (-ProcessSetSource@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MASKBRUSH_SETSOURCE@@@Z.c)
 *     ?IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800247B0 (-IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z @ 0x180024B30 (-EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CLinearGradientBrush::IsOfType(__int64 a1, unsigned int a2)
{
  __int64 v2; // rcx
  bool result; // al

  result = a2 <= 0x3B && (v2 = 0x800002000004000LL, _bittest64(&v2, (int)a2)) || a2 == 81;
  return result;
}
