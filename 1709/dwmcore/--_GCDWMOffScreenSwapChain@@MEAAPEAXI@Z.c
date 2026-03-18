/*
 * XREFs of ??_GCDWMOffScreenSwapChain@@MEAAPEAXI@Z @ 0x1801B0FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CDWMOffScreenSwapChain@@MEAA@XZ @ 0x1801B0E7C (--1CDWMOffScreenSwapChain@@MEAA@XZ.c)
 */

CDWMOffScreenSwapChain *__fastcall CDWMOffScreenSwapChain::`scalar deleting destructor'(
        CDWMOffScreenSwapChain *this,
        char a2)
{
  CDWMOffScreenSwapChain::~CDWMOffScreenSwapChain(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
