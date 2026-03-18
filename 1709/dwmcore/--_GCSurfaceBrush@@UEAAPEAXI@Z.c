/*
 * XREFs of ??_GCSurfaceBrush@@UEAAPEAXI@Z @ 0x180024F70
 * Callers:
 *     ?Release@CResource@@UEAAKXZ @ 0x1800A9F20 (-Release@CResource@@UEAAKXZ.c)
 * Callees:
 *     ??1CSurfaceBrush@@UEAA@XZ @ 0x180024FB8 (--1CSurfaceBrush@@UEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CSurfaceBrush *__fastcall CSurfaceBrush::`scalar deleting destructor'(CSurfaceBrush *this, char a2)
{
  CSurfaceBrush::~CSurfaceBrush(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
