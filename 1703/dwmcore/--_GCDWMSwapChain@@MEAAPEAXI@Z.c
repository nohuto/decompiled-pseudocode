/*
 * XREFs of ??_GCDWMSwapChain@@MEAAPEAXI@Z @ 0x1800CE0C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CDWMSwapChain@@MEAA@XZ @ 0x1800CE018 (--1CDWMSwapChain@@MEAA@XZ.c)
 */

CDWMSwapChain *__fastcall CDWMSwapChain::`scalar deleting destructor'(CDWMSwapChain *this, char a2)
{
  CDWMSwapChain::~CDWMSwapChain(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
