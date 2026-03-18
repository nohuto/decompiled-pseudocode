/*
 * XREFs of ??$SAFE_DELETE_ARRAY@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@@YAXAEAPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x180004170
 * Callers:
 *     ??1CTransformGroup@@MEAA@XZ @ 0x180004304 (--1CTransformGroup@@MEAA@XZ.c)
 *     ?ReleaseMultiplaneOverlayPresentInfo@CDWMSwapChain@@AEAAXXZ @ 0x1800CDFC0 (-ReleaseMultiplaneOverlayPresentInfo@CDWMSwapChain@@AEAAXXZ.c)
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x180134740 (-Clear@CTreeData@@MEAAXXZ.c)
 *     ??1CTransform3DGroup@@MEAA@XZ @ 0x18017AF9C (--1CTransform3DGroup@@MEAA@XZ.c)
 *     ??_ECRoundedRectangleShape@@UEAAPEAXI@Z @ 0x1801B0910 (--_ECRoundedRectangleShape@@UEAAPEAXI@Z.c)
 *     ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1801B0F30 (-GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall SAFE_DELETE_ARRAY<_DXGI_PRESENT_MULTIPLANE_OVERLAY>(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    WPF::ProcessHeapImpl::Free(v2);
    *a1 = 0LL;
  }
}
