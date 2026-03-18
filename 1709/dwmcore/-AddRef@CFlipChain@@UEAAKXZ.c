/*
 * XREFs of ?AddRef@CFlipChain@@UEAAKXZ @ 0x180074360
 * Callers:
 *     ?AddRef@CCachedVisualImage@@WEI@EAAKXZ @ 0x1800C6550 (-AddRef@CCachedVisualImage@@WEI@EAAKXZ.c)
 *     ?AddRef@CCachedVisualImage@@WII@EAAKXZ @ 0x1800C6560 (-AddRef@CCachedVisualImage@@WII@EAAKXZ.c)
 *     ?AddRef@CImageSource@@W7EAAKXZ @ 0x1800C6620 (-AddRef@CImageSource@@W7EAAKXZ.c)
 *     ?AddRef@CFlipChain@@WBA@EAAKXZ @ 0x1800C66B0 (-AddRef@CFlipChain@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlipChain::AddRef(CFlipChain *this)
{
  return CMILCOMBase::InternalAddRef((CFlipChain *)((char *)this + 16));
}
