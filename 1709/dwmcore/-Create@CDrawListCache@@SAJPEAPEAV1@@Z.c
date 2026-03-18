/*
 * XREFs of ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x1800B2B14
 * Callers:
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800231D0 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ?DrawPrivateCompositorBufferAsDrawList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorBuffer@@0AEBV?$span@PEAVIImageSource@@@gsl@@1AEBV?$span@PEAVCPrimitiveColor@@@4@MW4Enum@MilCompositingMode@@_N@Z @ 0x18003EDB8 (-DrawPrivateCompositorBufferAsDrawList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorBuffer@@0.c)
 *     ?GetCache@CDrawListCacheSet@@QEAAJIPEAVIRenderTarget@@PEAPEAVCDrawListCache@@@Z @ 0x1800B2960 (-GetCache@CDrawListCacheSet@@QEAAJIPEAVIRenderTarget@@PEAPEAVCDrawListCache@@@Z.c)
 *     ?Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x180152418 (-Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z @ 0x18015275C (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180188018 (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawListCache::Create(struct CDrawListCache **a1)
{
  unsigned int v2; // edi
  struct CDrawListCache *v3; // rax
  struct CDrawListCache *v4; // rbx

  v2 = 0;
  v3 = (struct CDrawListCache *)HeapAlloc(WPF::g_processHeap, 0, 0x68uLL);
  v4 = v3;
  if ( v3 )
  {
    *((_DWORD *)v3 + 4) = 0;
    *(_QWORD *)v3 = &CMILRefCountBase::`vftable';
    *(_QWORD *)v3 = &CDrawListCache::`vftable';
    *((_DWORD *)v3 + 2) = 0;
    *((_QWORD *)v3 + 3) = 0LL;
    *((_QWORD *)v3 + 4) = 0LL;
    *((_DWORD *)v3 + 10) = 0;
    *((_QWORD *)v3 + 11) = 0LL;
    *((_BYTE *)v3 + 100) = 0;
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
  {
    (**(void (__fastcall ***)(struct CDrawListCache *))v4)(v4);
    *a1 = v4;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x25u);
  }
  return v2;
}
