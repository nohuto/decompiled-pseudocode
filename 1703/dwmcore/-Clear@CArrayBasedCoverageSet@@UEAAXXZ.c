/*
 * XREFs of ?Clear@CArrayBasedCoverageSet@@UEAAXXZ @ 0x18006FAD0
 * Callers:
 *     ?Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEBVCMILMatrix@@PEBV?$DynArray@PEAVCOverlayContext@@$0A@@@@Z @ 0x18009F160 (-Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

void __fastcall CArrayBasedCoverageSet::Clear(CArrayBasedCoverageSet *this)
{
  *((_DWORD *)this + 12) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 24, 20LL);
  *((_DWORD *)this + 70) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 256, 20LL);
}
