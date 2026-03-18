/*
 * XREFs of ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x180040EA4
 * Callers:
 *     ?GetCache@CDrawListCacheSet@@QEAAJIIPEAVIRenderTarget@@PEAPEAVCDrawListCache@@@Z @ 0x180040CE0 (-GetCache@CDrawListCacheSet@@QEAAJIIPEAVIRenderTarget@@PEAPEAVCDrawListCache@@@Z.c)
 *     ?GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDrawListCache@@@Z @ 0x180056EE4 (-GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDr.c)
 *     ?DrawPrivateCompositorBufferAsDrawList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorBuffer@@0AEBV?$span@PEAVIImageSource@@$0?0@gsl@@1AEBV?$span@PEAVCPrimitiveColor@@$0?0@4@MW4Enum@MilCompositingMode@@_N@Z @ 0x18006D124 (-DrawPrivateCompositorBufferAsDrawList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorBuffer@@0.c)
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18009B2F0 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ?Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x18017B394 (-Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@PEBVCDrawListBrush@@PEAVCRenderingEffectFactory@@@Z @ 0x18017BC04 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@PE.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1801BD518 (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x1802109EC (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDrawListCache::Create(struct CDrawListCache **a1)
{
  unsigned int v2; // ebx
  LPVOID Value; // rdi
  int v4; // edx
  LPVOID v5; // rcx
  _QWORD *v7; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0;
  Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v7 = operator new(0xF8uLL);
    Value = v7;
    if ( v7 )
    {
      *v7 = 0LL;
      v7[1] = 0LL;
      v7[2] = 0LL;
      v7[3] = 0LL;
      v7[4] = 0LL;
      v7[5] = 0LL;
      v7[6] = 0LL;
      v7[7] = 0LL;
      v7[8] = 0LL;
      v7[9] = 0LL;
      v7[10] = 0LL;
      v7[11] = 0LL;
      v7[12] = 0LL;
      v7[13] = 0LL;
      v7[14] = 0LL;
      v7[15] = 0LL;
      v7[16] = 0LL;
      v7[17] = 0LL;
      v7[18] = 0LL;
      v7[19] = 0LL;
      v7[20] = 0LL;
      v7[21] = 0LL;
      v7[22] = 0LL;
      v7[23] = 0LL;
      v7[24] = 0LL;
      v7[25] = 0LL;
      v7[26] = 0LL;
      v7[27] = 0LL;
      v7[28] = 0LL;
      v7[29] = 0LL;
      v7[30] = 0LL;
    }
    else
    {
      Value = 0LL;
    }
    if ( !Value )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x42u);
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, Value);
  }
  v4 = *((_DWORD *)Value + 11);
  v5 = 0LL;
  if ( v4 )
  {
    v5 = (LPVOID)*((_QWORD *)Value + 6);
    *((_QWORD *)Value + 6) = *(_QWORD *)v5;
    *((_DWORD *)Value + 11) = v4 - 1;
  }
  if ( v5 || (v5 = HeapAlloc(WPF::g_processHeap, 0, 0x70uLL)) != 0LL )
  {
    *((_DWORD *)v5 + 4) = 0;
    *(_QWORD *)v5 = &CMILRefCountBase::`vftable';
    *(_QWORD *)v5 = &CDrawListCache::`vftable';
    *((_DWORD *)v5 + 2) = 0;
    *((_QWORD *)v5 + 3) = 0LL;
    *((_QWORD *)v5 + 4) = 0LL;
    *((_DWORD *)v5 + 10) = 0;
    *((_QWORD *)v5 + 12) = 0LL;
    *((_BYTE *)v5 + 108) = 0;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v5 + 2);
    *a1 = (struct CDrawListCache *)v5;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x27u);
  }
  return v2;
}
