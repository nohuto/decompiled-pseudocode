/*
 * XREFs of ??_GCNineGridBrush@@MEAAPEAXI@Z @ 0x1800BF9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CNineGridBrush@@MEAA@XZ @ 0x1800BFDE0 (--1CNineGridBrush@@MEAA@XZ.c)
 */

CNineGridBrush *__fastcall CNineGridBrush::`scalar deleting destructor'(CNineGridBrush *this, char a2)
{
  CNineGridBrush::~CNineGridBrush(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
