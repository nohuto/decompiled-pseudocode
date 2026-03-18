/*
 * XREFs of ?IssueSurfaceNotifications@CCommonRenderingEffect@@UEBAXPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180009810
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800AB7E0 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 * Callees:
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800A5F54 (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCommonRenderingEffect::IssueSurfaceNotifications(__int64 a1, CDrawingContext *a2)
{
  int (__fastcall ****v2)(_QWORD, GUID *, CCompositionSurfaceBitmap **); // rbx
  __int64 v4; // rdi
  int (__fastcall ***v5)(_QWORD, GUID *, CCompositionSurfaceBitmap **); // rcx
  int (__fastcall **v6)(_QWORD, GUID *, CCompositionSurfaceBitmap **); // rax
  CCompositionSurfaceBitmap *v7; // [rsp+58h] [rbp+20h] BYREF

  v2 = (int (__fastcall ****)(_QWORD, GUID *, CCompositionSurfaceBitmap **))(a1 + 16);
  v4 = 2LL;
  do
  {
    v5 = *v2;
    if ( *v2 )
    {
      v6 = *v5;
      v7 = 0LL;
      if ( (*v6)(v5, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &v7) >= 0 )
        CDrawingContext::RecordBitmapContentInfo(a2, v7, v7, 0LL);
      Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v7);
    }
    ++v2;
    --v4;
  }
  while ( v4 );
}
