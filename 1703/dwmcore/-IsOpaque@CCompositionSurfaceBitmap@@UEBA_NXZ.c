/*
 * XREFs of ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180037990
 * Callers:
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18000B200 (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180038E60 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180050730 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800537B0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x180058A44 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBURenderTargetInfo@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@W4Enum@BlendMode@@AEAVCVertexConstantBuffer@@PEAW46VertexShaderKey@@@Z @ 0x1800771F0 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBURenderTargetInfo@@W4DXG.c)
 *     ?CheckInputsForOpacity@CFilterEffect@@IEBA_NPEBVCVisual@@@Z @ 0x18016EF7C (-CheckInputsForOpacity@CFilterEffect@@IEBA_NPEBVCVisual@@@Z.c)
 * Callees:
 *     ?GetAlphaMode@CBitmapRealization@@UEBA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180036CD0 (-GetAlphaMode@CBitmapRealization@@UEBA-AW4DXGI_ALPHA_MODE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurfaceBitmap::IsOpaque(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rax
  char v2; // bl
  CBitmapRealization *v3; // rcx
  __int64 (__fastcall *v4)(CBitmapRealization *); // rax
  int v5; // eax

  v1 = *((_QWORD *)this + 51);
  v2 = 0;
  if ( v1 )
  {
    if ( *((_BYTE *)this + 458) )
      return 1;
    v3 = (CBitmapRealization *)(v1 + 104);
    v4 = *(__int64 (__fastcall **)(CBitmapRealization *))(*(_QWORD *)(v1 + 104) + 48LL);
    v5 = v4 == CBitmapRealization::GetAlphaMode ? CBitmapRealization::GetAlphaMode(v3) : ((__int64 (*)(void))v4)();
    if ( v5 == 3 )
      return 1;
  }
  return v2;
}
