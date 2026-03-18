/*
 * XREFs of ?AddRef@CArrayBasedCoverageSet@@UEAAKXZ @ 0x1800903B0
 * Callers:
 *     ?InternalAddRef@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEBAXXZ @ 0x18000A370 (-InternalAddRef@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x180048580 (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?AddRef@CHolographicExclusivePresentData@@W7EAAKXZ @ 0x1800C6270 (-AddRef@CHolographicExclusivePresentData@@W7EAAKXZ.c)
 *     ?AddRef@CRenderTargetImageSource@@WBI@EAAKXZ @ 0x1800C6280 (-AddRef@CRenderTargetImageSource@@WBI@EAAKXZ.c)
 *     ?AddRef@CRenderTargetImageSource@@WGA@EAAKXZ @ 0x1800C6290 (-AddRef@CRenderTargetImageSource@@WGA@EAAKXZ.c)
 *     ?AddRef@CRenderTargetImageSource@@WJI@EAAKXZ @ 0x1800C62A0 (-AddRef@CRenderTargetImageSource@@WJI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CArrayBasedCoverageSet::AddRef(CArrayBasedCoverageSet *this)
{
  return CMILCOMBase::InternalAddRef((CArrayBasedCoverageSet *)((char *)this + 8));
}
