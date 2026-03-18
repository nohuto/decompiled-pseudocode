/*
 * XREFs of ?IsDirectFlipCompatible@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180028EC0
 * Callers:
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18005CFC0 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 * Callees:
 *     ?IsDirectFlipCompatible@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x18004D1C0 (-IsDirectFlipCompatible@CDxHandleBitmapRealization@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurfaceBitmap::IsDirectFlipCompatible(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rax
  char v2; // bl
  CDxHandleBitmapRealization *v4; // rcx
  __int64 (*v5)(void); // rax
  char IsDirectFlipCompatible; // al

  v1 = *((_QWORD *)this + 5);
  v2 = 0;
  if ( v1 )
  {
    v4 = (CDxHandleBitmapRealization *)(v1 + 144);
    v5 = *(__int64 (**)(void))(*(_QWORD *)(v1 + 144) + 80LL);
    if ( (char *)v5 == (char *)CDxHandleBitmapRealization::IsDirectFlipCompatible )
      IsDirectFlipCompatible = CDxHandleBitmapRealization::IsDirectFlipCompatible(v4);
    else
      IsDirectFlipCompatible = v5();
    if ( IsDirectFlipCompatible )
      return *(_DWORD *)(*((_QWORD *)this + 4) + 104LL) > 1u;
  }
  return v2;
}
