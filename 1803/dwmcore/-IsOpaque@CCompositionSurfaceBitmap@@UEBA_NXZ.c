/*
 * XREFs of ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1800478F0
 * Callers:
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180007A70 (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@.c)
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@_NAEAVCVertexConstantBuffer@@PEAW4Enum@VertexShaderKey@@@Z @ 0x180073220 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEB.c)
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@_NAEAVCVertexConstantBuffer@@PEAW4Enum@VertexShaderKey@@@Z @ 0x180074520 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AE.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x18008CFF0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180090490 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180092DA0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180099E90 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?CheckInputsForOpacity@CFilterEffect@@IEBA_NPEBVCVisual@@@Z @ 0x18018DA24 (-CheckInputsForOpacity@CFilterEffect@@IEBA_NPEBVCVisual@@@Z.c)
 * Callees:
 *     ?GetPixelFormatInfo@CDxHandleBitmapRealization@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800456C0 (-GetPixelFormatInfo@CDxHandleBitmapRealization@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurfaceBitmap::IsOpaque(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rax
  char v2; // bl
  __int64 v3; // rcx
  _DWORD *(__fastcall *v4)(__int64, _DWORD *); // rax
  _DWORD *v5; // rax
  _DWORD v7[4]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_QWORD *)this + 4);
  v2 = 0;
  if ( v1 )
  {
    if ( *((_BYTE *)this + 82) )
      return 1;
    v3 = v1 + 144;
    v4 = *(_DWORD *(__fastcall **)(__int64, _DWORD *))(*(_QWORD *)(v1 + 144) + 24LL);
    v5 = v4 == CDxHandleBitmapRealization::GetPixelFormatInfo
       ? CDxHandleBitmapRealization::GetPixelFormatInfo(v3, v7)
       : v4(v3, v7);
    if ( v5[1] == 3 )
      return 1;
  }
  return v2;
}
