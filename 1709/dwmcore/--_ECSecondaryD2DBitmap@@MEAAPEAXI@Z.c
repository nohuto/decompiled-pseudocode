/*
 * XREFs of ??_ECSecondaryD2DBitmap@@MEAAPEAXI@Z @ 0x180092220
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CSecondaryD2DBitmap@@MEAA@XZ @ 0x1800922CC (--1CSecondaryD2DBitmap@@MEAA@XZ.c)
 */

CSecondaryD2DBitmap *__fastcall CSecondaryD2DBitmap::`vector deleting destructor'(CSecondaryD2DBitmap *this, char a2)
{
  CSecondaryD2DBitmap::~CSecondaryD2DBitmap(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
