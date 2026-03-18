/*
 * XREFs of ??_ECInk@@UEAAPEAXI@Z @ 0x1800016D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInk@@UEAA@XZ @ 0x180001864 (--1CInk@@UEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CInk *__fastcall CInk::`vector deleting destructor'(CInk *this, char a2)
{
  CInk::~CInk(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
