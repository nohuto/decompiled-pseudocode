/*
 * XREFs of ?GetWindowBackgroundTreatmentVisual@CWindowBackgroundTreatment@@SAPEAVCVisual@@PEAV2@@Z @ 0x180017378
 * Callers:
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18009B2F0 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 * Callees:
 *     <none>
 */

struct CVisual *__fastcall CWindowBackgroundTreatment::GetWindowBackgroundTreatmentVisual(struct CVisual *a1)
{
  struct CVisual *result; // rax

  for ( result = a1; result; result = (struct CVisual *)*((_QWORD *)result + 10) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)result + 27) + 4LL) & 0x10000) != 0 )
      break;
  }
  return result;
}
