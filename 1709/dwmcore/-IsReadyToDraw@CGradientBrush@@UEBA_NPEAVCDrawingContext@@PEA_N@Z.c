/*
 * XREFs of ?IsReadyToDraw@CGradientBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x180071470
 * Callers:
 *     ?IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800247B0 (-IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CGradientBrush::IsReadyToDraw(CGradientBrush *this, struct CDrawingContext *a2, bool *a3)
{
  bool result; // al

  result = 1;
  *a3 = (unsigned __int64)((__int64)(*((_QWORD *)this + 15) - *((_QWORD *)this + 14)) >> 3) <= 1;
  return result;
}
