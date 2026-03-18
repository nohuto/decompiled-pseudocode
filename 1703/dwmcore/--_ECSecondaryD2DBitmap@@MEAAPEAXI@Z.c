/*
 * XREFs of ??_ECSecondaryD2DBitmap@@MEAAPEAXI@Z @ 0x1800C8940
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSecondaryD2DBitmap@@MEAA@XZ @ 0x180006E2C (--1CSecondaryD2DBitmap@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CSecondaryD2DBitmap *__fastcall CSecondaryD2DBitmap::`vector deleting destructor'(CSecondaryD2DBitmap *this, char a2)
{
  CSecondaryD2DBitmap::~CSecondaryD2DBitmap(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
