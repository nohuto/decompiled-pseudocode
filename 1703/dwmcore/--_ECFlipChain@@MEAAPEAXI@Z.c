/*
 * XREFs of ??_ECFlipChain@@MEAAPEAXI@Z @ 0x180163AB0
 * Callers:
 *     ??_ECFlipChain@@OBA@EAAPEAXI@Z @ 0x1800D5D00 (--_ECFlipChain@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CFlipChain@@MEAA@XZ @ 0x180163988 (--1CFlipChain@@MEAA@XZ.c)
 */

CFlipChain *__fastcall CFlipChain::`vector deleting destructor'(CFlipChain *this, char a2)
{
  CFlipChain::~CFlipChain(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
