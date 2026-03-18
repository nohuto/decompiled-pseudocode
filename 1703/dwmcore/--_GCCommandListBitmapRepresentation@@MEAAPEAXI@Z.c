/*
 * XREFs of ??_GCCommandListBitmapRepresentation@@MEAAPEAXI@Z @ 0x180153DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CCommandListBitmapRepresentation@@MEAA@XZ @ 0x1800C2D68 (--1CCommandListBitmapRepresentation@@MEAA@XZ.c)
 */

void **__fastcall CCommandListBitmapRepresentation::`scalar deleting destructor'(void **this, char a2)
{
  CCommandListBitmapRepresentation::~CCommandListBitmapRepresentation(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
