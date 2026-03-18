/*
 * XREFs of ?IsReadyToDraw@CBackdropBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800C7D30
 * Callers:
 *     ?IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x180010B50 (-IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CBackdropBrush::IsReadyToDraw(CBackdropBrush *this, struct CDrawingContext *a2, bool *a3)
{
  *a3 = 1;
  return 1;
}
