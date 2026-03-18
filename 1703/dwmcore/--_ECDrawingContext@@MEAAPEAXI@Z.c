/*
 * XREFs of ??_ECDrawingContext@@MEAAPEAXI@Z @ 0x1800A9C18
 * Callers:
 *     ??_ECDrawingContext@@OBA@EAAPEAXI@Z @ 0x1800D56A0 (--_ECDrawingContext@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CDrawingContext@@MEAA@XZ @ 0x1800A9A7C (--1CDrawingContext@@MEAA@XZ.c)
 */

CDrawingContext *__fastcall CDrawingContext::`vector deleting destructor'(
        CDrawingContext *this,
        __int64 a2,
        __int64 a3)
{
  char v3; // bl

  v3 = a2;
  CDrawingContext::~CDrawingContext(this, a2, a3);
  if ( (v3 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
