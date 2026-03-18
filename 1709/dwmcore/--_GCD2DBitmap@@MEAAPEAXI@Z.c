/*
 * XREFs of ??_GCD2DBitmap@@MEAAPEAXI@Z @ 0x18004C690
 * Callers:
 *     ?Release@CD2DBitmap@@UEAAKXZ @ 0x18004BF70 (-Release@CD2DBitmap@@UEAAKXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CD2DBitmap@@MEAA@XZ @ 0x18004C490 (--1CD2DBitmap@@MEAA@XZ.c)
 */

CD2DBitmap *__fastcall CD2DBitmap::`scalar deleting destructor'(CD2DBitmap *this, char a2)
{
  CD2DBitmap::~CD2DBitmap(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
