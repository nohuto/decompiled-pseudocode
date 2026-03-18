/*
 * XREFs of ??_GCD2DCommandList@@MEAAPEAXI@Z @ 0x1800AF810
 * Callers:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CD2DCommandList@@MEAA@XZ @ 0x1800AF8EC (--1CD2DCommandList@@MEAA@XZ.c)
 */

CD2DCommandList *__fastcall CD2DCommandList::`scalar deleting destructor'(CD2DCommandList *this, char a2)
{
  CD2DCommandList::~CD2DCommandList(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
