/*
 * XREFs of ??_GCPencil@@UEAAPEAXI@Z @ 0x180153F00
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CPencil@@UEAA@XZ @ 0x18015359C (--1CPencil@@UEAA@XZ.c)
 */

CPencil *__fastcall CPencil::`scalar deleting destructor'(CPencil *this, char a2)
{
  CPencil::~CPencil(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
