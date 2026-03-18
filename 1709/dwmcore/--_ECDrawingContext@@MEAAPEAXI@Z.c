/*
 * XREFs of ??_ECDrawingContext@@MEAAPEAXI@Z @ 0x180040AEC
 * Callers:
 *     ??_ECDrawingContext@@OBA@EAAPEAXI@Z @ 0x1800C5F90 (--_ECDrawingContext@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CDrawingContext@@MEAA@XZ @ 0x18004096C (--1CDrawingContext@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CDrawingContext *__fastcall CDrawingContext::`vector deleting destructor'(CDrawingContext *this, char a2)
{
  CDrawingContext::~CDrawingContext(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
