/*
 * XREFs of ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x180070244
 * Callers:
 *     ?ProcessSetSource@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MASKBRUSH_SETSOURCE@@@Z @ 0x180024560 (-ProcessSetSource@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MASKBRUSH_SETSOURCE@@@Z.c)
 *     ?ProcessSetMask@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MASKBRUSH_SETMASK@@@Z @ 0x1800246D0 (-ProcessSetMask@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MASKBRUSH_SETMASK@@@Z.c)
 *     ?EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z @ 0x180024B30 (-EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z.c)
 *     ??1CMaskBrush@@MEAA@XZ @ 0x180024F18 (--1CMaskBrush@@MEAA@XZ.c)
 *     ??1CSurfaceBrush@@UEAA@XZ @ 0x180024FB8 (--1CSurfaceBrush@@UEAA@XZ.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180046EB0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800491D0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x180062EB0 (-End@CDrawListEntryBuilder@@QEAAJXZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x180063320 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006A670 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x18006F088 (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectS.c)
 *     ??4?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@QEAAAEAV012@PEAVCRenderingEffect@@@Z @ 0x180070294 (--4-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@QEAAAEAV012@PEAVCRenderingEffect@@@Z.c)
 *     ??4?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800702DC (--4-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??1CNineGridBrush@@MEAA@XZ @ 0x180070930 (--1CNineGridBrush@@MEAA@XZ.c)
 *     ??1CColorBrush@@UEAA@XZ @ 0x180070D10 (--1CColorBrush@@UEAA@XZ.c)
 *     ??1CGradientBrush@@MEAA@XZ @ 0x1800719F0 (--1CGradientBrush@@MEAA@XZ.c)
 *     ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCSpriteVisualContent@@PEAPEAVCBrushRenderingGraph@@@Z @ 0x180072528 (-Build@CBrushRenderingGraphBuilder@@SAJPEAVCSpriteVisualContent@@PEAPEAVCBrushRenderingGraph@@@Z.c)
 *     ?ReleaseResources@CEffectBrush@@AEAAXXZ @ 0x180082BC4 (-ReleaseResources@CEffectBrush@@AEAAXXZ.c)
 *     ?EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z @ 0x180082DD0 (-EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z.c)
 *     ??1CEffectBrush@@MEAA@XZ @ 0x180082E38 (--1CEffectBrush@@MEAA@XZ.c)
 *     ?ProcessSetInput@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETINPUT@@@Z @ 0x180082F64 (-ProcessSetInput@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETINPUT@@@Z.c)
 *     ??_GCWindowBackdropBrush@@UEAAPEAXI@Z @ 0x180084F70 (--_GCWindowBackdropBrush@@UEAAPEAXI@Z.c)
 *     ??1CCompositionSkyBoxBrush@@UEAA@XZ @ 0x18015C4A0 (--1CCompositionSkyBoxBrush@@UEAA@XZ.c)
 *     ??1CDropShadow@@UEAA@XZ @ 0x18015F4C0 (--1CDropShadow@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(CMILRefCountBase **a1)
{
  __int64 result; // rax
  CMILRefCountBase *v3; // rcx
  __int64 (*v4)(void); // rax

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    v4 = *(__int64 (**)(void))(*(_QWORD *)v3 + 8LL);
    if ( (char *)v4 == (char *)CMILRefCountBase::Release )
      return CMILRefCountBase::Release(v3);
    else
      return v4();
  }
  return result;
}
