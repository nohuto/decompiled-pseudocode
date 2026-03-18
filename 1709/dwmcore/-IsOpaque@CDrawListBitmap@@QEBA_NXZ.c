/*
 * XREFs of ?IsOpaque@CDrawListBitmap@@QEBA_NXZ @ 0x18004889C
 * Callers:
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x18006F088 (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectS.c)
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18006F640 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@W4Enum@BlendMode@@AEAVCVertexConstantBuffer@@PEAW45VertexShaderKey@@@Z @ 0x1801D4B40 (-SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@A.c)
 *     ?Render@CWARPCallbackRenderer@@UEAAJXZ @ 0x1801D8220 (-Render@CWARPCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180028BB0 (-IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CDrawListBitmap::IsOpaque(CDrawListBitmap *this)
{
  char v1; // bl
  CCompositionSurfaceBitmap *v2; // rcx
  char (__fastcall *v3)(CCompositionSurfaceBitmap *); // rax
  char v4; // al

  v1 = 0;
  if ( *((_BYTE *)this + 16) )
    return 1;
  v2 = *(CCompositionSurfaceBitmap **)this;
  v3 = *(char (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)v2 + 104LL);
  v4 = v3 == CCompositionSurfaceBitmap::IsOpaque ? CCompositionSurfaceBitmap::IsOpaque(v2) : ((__int64 (*)(void))v3)();
  if ( v4 )
    return 1;
  return v1;
}
