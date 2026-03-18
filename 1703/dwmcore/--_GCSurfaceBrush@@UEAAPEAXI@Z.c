/*
 * XREFs of ??_GCSurfaceBrush@@UEAAPEAXI@Z @ 0x180037EE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSurfaceBrush@@UEAA@XZ @ 0x180037F8C (--1CSurfaceBrush@@UEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CSurfaceBrush *__fastcall CSurfaceBrush::`scalar deleting destructor'(CSurfaceBrush *this, char a2)
{
  CSurfaceBrush::~CSurfaceBrush(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
