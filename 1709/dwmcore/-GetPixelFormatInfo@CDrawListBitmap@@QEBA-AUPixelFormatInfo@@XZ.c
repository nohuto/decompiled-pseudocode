/*
 * XREFs of ?GetPixelFormatInfo@CDrawListBitmap@@QEBA?AUPixelFormatInfo@@XZ @ 0x1800488DC
 * Callers:
 *     ?CompareTo@CCommonRenderingEffect@@UEBA?AW4RenderingEffectComparisonResult@@W4Enum@BlendMode@@AEBVCRenderingEffect@@0@Z @ 0x18001F320 (-CompareTo@CCommonRenderingEffect@@UEBA-AW4RenderingEffectComparisonResult@@W4Enum@BlendMode@@AE.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180046EB0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?IsColorConversionRequired@CSurfaceDrawListBrush@@UEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180155C50 (-IsColorConversionRequired@CSurfaceDrawListBrush@@UEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@W4Enum@BlendMode@@AEAVCVertexConstantBuffer@@PEAW45VertexShaderKey@@@Z @ 0x1801D4B40 (-SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@A.c)
 *     ?IsColorConversionRequired@CPrimitiveGroupDrawListBrush@@UEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801D4D70 (-IsColorConversionRequired@CPrimitiveGroupDrawListBrush@@UEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 * Callees:
 *     ?GetPixelFormatInfo@CD2DBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x18004C380 (-GetPixelFormatInfo@CD2DBitmap@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawListBitmap::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  void (*v4)(void); // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v4 = *(void (**)(void))(*(_QWORD *)v2 + 24LL);
    if ( (char *)v4 == (char *)CD2DBitmap::GetPixelFormatInfo )
      CD2DBitmap::GetPixelFormatInfo(v2, a2);
    else
      v4();
  }
  else
  {
    *(_QWORD *)a2 = 0LL;
    *(_DWORD *)(a2 + 8) = 0;
  }
  return a2;
}
