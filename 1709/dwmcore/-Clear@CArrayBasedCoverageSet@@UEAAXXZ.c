/*
 * XREFs of ?Clear@CArrayBasedCoverageSet@@UEAAXXZ @ 0x180036460
 * Callers:
 *     ?Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEBVCMILMatrix@@PEBV?$DynArray@PEAVCOverlayContext@@$0A@@@@Z @ 0x180060F58 (-Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

void __fastcall CArrayBasedCoverageSet::Clear(CArrayBasedCoverageSet *this)
{
  *((_DWORD *)this + 12) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 24, 36LL);
  *((_DWORD *)this + 110) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 416, 36LL);
}
