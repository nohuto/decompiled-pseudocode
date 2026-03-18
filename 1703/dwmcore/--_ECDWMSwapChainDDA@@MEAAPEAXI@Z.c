/*
 * XREFs of ??_ECDWMSwapChainDDA@@MEAAPEAXI@Z @ 0x18019D9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CDWMSwapChain@@MEAA@XZ @ 0x1800CE018 (--1CDWMSwapChain@@MEAA@XZ.c)
 */

CDWMSwapChainDDA *__fastcall CDWMSwapChainDDA::`vector deleting destructor'(CDWMSwapChainDDA *this, char a2)
{
  *(_QWORD *)this = &CDWMSwapChainDDA::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 3) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
  CDWMSwapChain::~CDWMSwapChain(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
