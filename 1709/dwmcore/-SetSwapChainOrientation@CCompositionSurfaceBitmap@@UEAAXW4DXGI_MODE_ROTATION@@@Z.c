/*
 * XREFs of ?SetSwapChainOrientation@CCompositionSurfaceBitmap@@UEAAXW4DXGI_MODE_ROTATION@@@Z @ 0x180028DB0
 * Callers:
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18003AEA4 (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 * Callees:
 *     ?IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x180029994 (-IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionSurfaceBitmap::SetSwapChainOrientation(
        CCompositionSurfaceBitmap *this,
        enum DXGI_MODE_ROTATION a2)
{
  int v3; // r8d
  __int64 v4; // rbx
  __int64 v5; // rcx
  CComposition *v6; // rax

  if ( CCompositionSurfaceBitmap::IsSwapChain((CCompositionSurfaceBitmap *)((char *)this - 56)) )
  {
    v4 = *((_QWORD *)this + 4);
    if ( v3 != *(_DWORD *)(v4 + 140) )
    {
      v5 = *(_QWORD *)(v4 + 24);
      *(_DWORD *)(v4 + 140) = v3;
      v6 = (CComposition *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      CComposition::AddCompSurfInfoUpdate(v6, (struct CCompositionSurfaceInfo *)v4);
    }
  }
}
