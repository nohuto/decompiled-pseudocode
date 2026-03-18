/*
 * XREFs of ??_GCCompositionSurfaceBitmap@@MEAAPEAXI@Z @ 0x1800371D0
 * Callers:
 *     ?Release@CCompositionSurfaceBitmap@@UEAAKXZ @ 0x180037610 (-Release@CCompositionSurfaceBitmap@@UEAAKXZ.c)
 *     ??_ECCompositionSurfaceBitmap@@OFI@EAAPEAXI@Z @ 0x1800D56C0 (--_ECCompositionSurfaceBitmap@@OFI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CCompositionSurfaceBitmap@@MEAA@XZ @ 0x1800374DC (--1CCompositionSurfaceBitmap@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CCompositionSurfaceBitmap *__fastcall CCompositionSurfaceBitmap::`scalar deleting destructor'(
        CCompositionSurfaceBitmap *this,
        char a2)
{
  CCompositionSurfaceBitmap::~CCompositionSurfaceBitmap(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
