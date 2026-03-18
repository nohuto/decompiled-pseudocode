/*
 * XREFs of ?IsOverlayCompatible@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180028F20
 * Callers:
 *     ?DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z @ 0x18003B044 (-DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z.c)
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18005CFC0 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 * Callees:
 *     ?IsOverlayCompatible@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x18004D1D0 (-IsOverlayCompatible@CDxHandleBitmapRealization@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurfaceBitmap::IsOverlayCompatible(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rax
  char v2; // bl
  CDxHandleBitmapRealization *v4; // rcx
  __int64 (*v5)(void); // rax
  char IsOverlayCompatible; // al

  v1 = *((_QWORD *)this + 5);
  v2 = 0;
  if ( v1 )
  {
    v4 = (CDxHandleBitmapRealization *)(v1 + 144);
    v5 = *(__int64 (**)(void))(*(_QWORD *)(v1 + 144) + 56LL);
    if ( (char *)v5 == (char *)CDxHandleBitmapRealization::IsOverlayCompatible )
      IsOverlayCompatible = CDxHandleBitmapRealization::IsOverlayCompatible(v4);
    else
      IsOverlayCompatible = v5();
    if ( IsOverlayCompatible )
      return *(_DWORD *)(*((_QWORD *)this + 4) + 104LL) > 1u;
  }
  return v2;
}
