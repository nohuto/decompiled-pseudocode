/*
 * XREFs of ?GetSize@CCachedVisualImage@@UEBAXPEAI0@Z @ 0x18008DFA0
 * Callers:
 *     ?FillRectanglesAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@I0PEAVIImageSource@@PEBUD2D_MATRIX_3X2_F@@MW4Enum@MilCompositingMode@@_N@Z @ 0x18003EEF0 (-FillRectanglesAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@I0PEAVIImageSource@@PEBUD2D_MATRIX.c)
 * Callees:
 *     <none>
 */

void __fastcall CCachedVisualImage::GetSize(CCachedVisualImage *this, unsigned int *a2, unsigned int *a3)
{
  CCachedVisualImage::GetCurrentSize((CCachedVisualImage *)((char *)this - 136), a2, a3);
}
