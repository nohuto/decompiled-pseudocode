/*
 * XREFs of ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x1800660AC
 * Callers:
 *     ?RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x1800093C4 (-RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRe.c)
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180024B90 (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N333333@Z @ 0x180065990 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?PushClipRectForNode@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18006661C (-PushClipRectForNode@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     ?RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x180158A6C (-RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1801604F8 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x180175210 (-RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PE.c)
 *     ?RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180175D5C (-RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CreateSurfaceAndContext@CBrushIntermediateRealizer@@IEAAJIIW4Enum@MilTileMode@@PEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@@Z @ 0x1801C589C (-CreateSurfaceAndContext@CBrushIntermediateRealizer@@IEAAJIIW4Enum@MilTileMode@@PEAPEAVIRenderTa.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@QEAA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A6D8 (-Pop@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?Push@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z @ 0x1800173D0 (-Push@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z.c)
 *     ?RoundWithHalvesDown@@YAXAEBUMilRectF@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800174D4 (-RoundWithHalvesDown@@YAXAEBUMilRectF@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Push@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackBackfaceVisibilityEntry@CDrawingContext@@@Z @ 0x1800BDD0C (-Push@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUSta.c)
 *     ?Push@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BE4B0 (-Push@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800DD3B9 (ceilf_0.c)
 */

__int64 __fastcall CDrawingContext::PushGpuClipRectInternal(
        __int64 a1,
        __int64 a2,
        float *a3,
        int a4,
        char a5,
        char a6)
{
  char v6; // r12
  int v10; // eax
  float v11; // xmm6_4
  float v12; // xmm6_4
  int v13; // ebx
  int v14; // eax
  float v15; // xmm0_4
  int v16; // eax
  float v17; // xmm0_4
  float v18; // xmm11_4
  int v19; // eax
  float v20; // xmm0_4
  float v21; // xmm8_4
  float v22; // xmm0_4
  int v23; // eax
  int v24; // ebx
  __int64 v25; // rcx
  int v27; // eax
  int v28; // eax
  __int128 v29; // [rsp+38h] [rbp-39h] BYREF

  v6 = 0;
  if ( a6 )
  {
    *((_QWORD *)&v29 + 1) = a2;
    LODWORD(v29) = 1;
    v27 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push(a1 + 448, &v29);
    v24 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x1238u);
      goto LABEL_23;
    }
    v6 = 1;
  }
  if ( !a5
    && (v10 = *(_DWORD *)(a1 + 1032)) != 0
    && *(_DWORD *)(*(_QWORD *)(a1 + 1008) + 80LL * (unsigned int)(v10 - 1) + 4) )
  {
    if ( a4 == 1 )
      RoundWithHalvesDown(a3, (float *)&v29);
    else
      v29 = *(_OWORD *)a3;
    v28 = CBaseClipStack::Push((CBaseClipStack *)(a1 + 3072), (const struct MilRectF *)&v29);
    v24 = v28;
    if ( v28 >= 0 )
    {
LABEL_20:
      v25 = 10LL * (unsigned int)(*(_DWORD *)(a1 + 1032) - 1);
      ++*(_DWORD *)(*(_QWORD *)(a1 + 1008) + 8 * v25 + 4);
      goto LABEL_21;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0xEBu);
  }
  else
  {
    v11 = *a3;
    if ( a4 == 1 )
    {
      v12 = v11 - 0.5;
      v13 = 0x7FFFFFFF;
      if ( v12 < -2147483600.0 )
      {
        v14 = 0x80000000;
      }
      else if ( v12 >= 2147483600.0 )
      {
        v14 = 0x7FFFFFFF;
      }
      else
      {
        v14 = (int)ceilf_0(v12);
      }
      v15 = a3[1] - 0.5;
      v11 = (float)v14;
      if ( v15 < -2147483600.0 )
      {
        v16 = 0x80000000;
      }
      else if ( v15 >= 2147483600.0 )
      {
        v16 = 0x7FFFFFFF;
      }
      else
      {
        v16 = (int)ceilf_0(v15);
      }
      v17 = a3[2] - 0.5;
      v18 = (float)v16;
      if ( v17 < -2147483600.0 )
      {
        v19 = 0x80000000;
      }
      else if ( v17 >= 2147483600.0 )
      {
        v19 = 0x7FFFFFFF;
      }
      else
      {
        v19 = (int)ceilf_0(v17);
      }
      v20 = a3[3] - 0.5;
      v21 = (float)v19;
      if ( v20 < -2147483600.0 )
      {
        v13 = 0x80000000;
      }
      else if ( v20 < 2147483600.0 )
      {
        v13 = (int)ceilf_0(v20);
      }
      v22 = (float)v13;
    }
    else
    {
      v18 = a3[1];
      v21 = a3[2];
      v22 = a3[3];
    }
    *(_QWORD *)&v29 = __PAIR64__(LODWORD(v18), LODWORD(v11));
    *((_QWORD *)&v29 + 1) = __PAIR64__(LODWORD(v22), LODWORD(v21));
    v23 = CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::Push(
            a1 + 3072,
            &v29);
    v24 = v23;
    if ( v23 >= 0 )
      goto LABEL_20;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0xE7u);
  }
LABEL_21:
  if ( v24 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x123Fu);
  else
    *(_BYTE *)(a1 + 6825) = 1;
LABEL_23:
  if ( v24 < 0 && v6 )
    CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Pop(
      (int *)(a1 + 448),
      0LL);
  return (unsigned int)v24;
}
