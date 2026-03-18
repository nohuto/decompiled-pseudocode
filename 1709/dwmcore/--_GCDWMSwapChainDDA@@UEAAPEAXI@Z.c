/*
 * XREFs of ??_GCDWMSwapChainDDA@@UEAAPEAXI@Z @ 0x1801AFB80
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CDWMSwapChain@@MEAA@XZ @ 0x1801AFAEC (--1CDWMSwapChain@@MEAA@XZ.c)
 */

CDWMSwapChainDDA *__fastcall CDWMSwapChainDDA::`scalar deleting destructor'(CDWMSwapChainDDA *this, char a2)
{
  CDWMSwapChain::~CDWMSwapChain(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
