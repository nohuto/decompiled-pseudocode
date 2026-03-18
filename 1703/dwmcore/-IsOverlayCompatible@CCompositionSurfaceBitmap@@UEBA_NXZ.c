/*
 * XREFs of ?IsOverlayCompatible@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000AC20
 * Callers:
 *     ?IsOverlayAssigned@CDrawingContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@PEA_N@Z @ 0x18000CE14 (-IsOverlayAssigned@CDrawingContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@PEA_N@Z.c)
 * Callees:
 *     ?IsOverlayCompatible@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x18000B440 (-IsOverlayCompatible@CDxHandleBitmapRealization@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurfaceBitmap::IsOverlayCompatible(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rax
  char v2; // bl
  CDxHandleBitmapRealization *v4; // rcx
  __int64 (*v5)(void); // rax
  char IsOverlayCompatible; // al

  v1 = *((_QWORD *)this + 52);
  v2 = 0;
  if ( v1 )
  {
    v4 = (CDxHandleBitmapRealization *)(v1 + 104);
    v5 = *(__int64 (**)(void))(*(_QWORD *)(v1 + 104) + 72LL);
    if ( (char *)v5 == (char *)CDxHandleBitmapRealization::IsOverlayCompatible )
      IsOverlayCompatible = CDxHandleBitmapRealization::IsOverlayCompatible(v4);
    else
      IsOverlayCompatible = v5();
    if ( IsOverlayCompatible )
      return *(_DWORD *)(*((_QWORD *)this + 51) + 104LL) > 1u;
  }
  return v2;
}
