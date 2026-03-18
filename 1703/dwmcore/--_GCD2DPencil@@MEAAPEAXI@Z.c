/*
 * XREFs of ??_GCD2DPencil@@MEAAPEAXI@Z @ 0x18019E8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CD2DPencil@@MEAA@XZ @ 0x18019E868 (--1CD2DPencil@@MEAA@XZ.c)
 */

CD2DPencil *__fastcall CD2DPencil::`scalar deleting destructor'(CD2DPencil *this, char a2)
{
  CD2DPencil::~CD2DPencil(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
