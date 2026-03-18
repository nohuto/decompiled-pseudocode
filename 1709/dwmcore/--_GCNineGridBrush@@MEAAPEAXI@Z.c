/*
 * XREFs of ??_GCNineGridBrush@@MEAAPEAXI@Z @ 0x180070490
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CNineGridBrush@@MEAA@XZ @ 0x180070930 (--1CNineGridBrush@@MEAA@XZ.c)
 */

CNineGridBrush *__fastcall CNineGridBrush::`scalar deleting destructor'(CNineGridBrush *this, char a2)
{
  CNineGridBrush::~CNineGridBrush(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
