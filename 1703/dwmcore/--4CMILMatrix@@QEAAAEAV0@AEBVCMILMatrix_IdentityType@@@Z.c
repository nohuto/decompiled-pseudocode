/*
 * XREFs of ??4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z @ 0x18009AE70
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180008CB0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18000C420 (-DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MU.c)
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180019824 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?SetDeviceTransform@COcclusionContext@@QEAAJPEBVCMILMatrix@@@Z @ 0x18001DB74 (-SetDeviceTransform@COcclusionContext@@QEAAJPEBVCMILMatrix@@@Z.c)
 *     ??0CComponentTransform3D@@IEAA@PEAVCComposition@@@Z @ 0x18002B440 (--0CComponentTransform3D@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18004EC48 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x180058A44 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?CalculateTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@PEBUtagRECT@@AEBVCMILMatrix@@@Z @ 0x18006C030 (-CalculateTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@PEBUtagRECT@@AEBVCMILMatrix@@@.c)
 *     ??0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18006EBF8 (--0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009BD50 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800A1660 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A2960 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??0CContextState@@QEAA@_N@Z @ 0x1800C23E4 (--0CContextState@@QEAA@_N@Z.c)
 *     ?ProcessCreate@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICINTEROPTEXTURE_CREATE@@@Z @ 0x18012FF84 (-ProcessCreate@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICINTERO.c)
 *     ?ProcessSetPosition@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETPOSITION@@@Z @ 0x18013005C (-ProcessSetPosition@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICI.c)
 *     ??0CWARPDrawListEntry@@AEAA@AEBUWARPDrawListEntryParams@@@Z @ 0x18015E798 (--0CWARPDrawListEntry@@AEAA@AEBUWARPDrawListEntryParams@@@Z.c)
 *     _anonymous_namespace_::DecomposeMatrix @ 0x18018E454 (_anonymous_namespace_--DecomposeMatrix.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILMatrix::operator=(__int64 a1)
{
  if ( a1 )
  {
    *(_WORD *)(a1 + 64) = 32085;
    *(_OWORD *)a1 = _xmm;
    *(_OWORD *)(a1 + 16) = _xmm;
    *(_OWORD *)(a1 + 32) = _xmm;
    *(_OWORD *)(a1 + 48) = _xmm;
  }
  return a1;
}
