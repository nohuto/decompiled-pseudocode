/*
 * XREFs of ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180066CF0
 * Callers:
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180008334 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@AEBVCShape@@U-$TMIL.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180008CF0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x1800093C4 (-RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRe.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x1800657F0 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x180066318 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?ApplyRenderState@CDrawingContext@@UEAAJXZ @ 0x180066CE0 (-ApplyRenderState@CDrawingContext@@UEAAJXZ.c)
 *     ?DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1HW4Enum@MilCompositingMode@@_N@Z @ 0x18006D6FC (-DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@.c)
 *     ?TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUMilPoint2F@@M@Z @ 0x18006DC60 (-TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z @ 0x18006DF14 (-FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180090490 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18009BA00 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x180150DB8 (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 *     ?DrawCoRenderContent@CDrawingContext@@QEAAJPEAVCCoRenderContent@@@Z @ 0x18015F1C0 (-DrawCoRenderContent@CDrawingContext@@QEAAJPEAVCCoRenderContent@@@Z.c)
 *     ?DrawDwm3DRE@CDrawingContext@@QEAAJPEAUIDwm3DRESceneViewer@@AEBVCMILMatrix@@_N@Z @ 0x18015F8D0 (-DrawDwm3DRE@CDrawingContext@@QEAAJPEAUIDwm3DRESceneViewer@@AEBVCMILMatrix@@_N@Z.c)
 *     ?DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z @ 0x18015FFB0 (-DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z.c)
 *     ?DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z @ 0x1801600C0 (-DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z.c)
 *     ?DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x180160340 (-DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z.c)
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x1801608EC (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 *     ?DrawRectangleOverlay@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180160B9C (-DrawRectangleOverlay@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?DrawYCbCrBitmap@CDrawingContext@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z @ 0x180160D80 (-DrawYCbCrBitmap@CDrawingContext@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z.c)
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x180161240 (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?FillOrStrokeShape@CDrawingContext@@AEAAJ_NAEBVCShape@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2PEAVCResource@@@Z @ 0x180161344 (-FillOrStrokeShape@CDrawingContext@@AEAAJ_NAEBVCShape@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBVCMILMatrix@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@_N@Z @ 0x1801614AC (-FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBVCMILMatrix@@AEBVCShape@@.c)
 *     ?FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z @ 0x1801616C8 (-FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z.c)
 *     ?RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180162DEC (-RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV-$TMilRect_@HUtagRECT@@UMilPoi.c)
 *     ?StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@@Z @ 0x180163178 (-StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@.c)
 *     ?RenderBlackShape@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBVCShape@@@Z @ 0x1801A9FF4 (-RenderBlackShape@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBVCShape@@@Z.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801ADC70 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV-$TMilRect_.c)
 *     ?DrawIntoBaseTile@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAVCDrawingContext@@@Z @ 0x1801B2960 (-DrawIntoBaseTile@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180024DA0 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetDeviceBounds@CHwDisplayRenderTarget@@UEAAXPEAUMilRectF@@@Z @ 0x180046940 (-GetDeviceBounds@CHwDisplayRenderTarget@@UEAAXPEAUMilRectF@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180064E8C (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?SetClip@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x180096530 (-SetClip@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800DD3B9 (ceilf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::ApplyRenderStateInternal(CDrawingContext *this, char a2)
{
  char v2; // di
  unsigned int v3; // esi
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 result; // rax
  int v9; // r8d
  int v10; // eax
  float right; // xmm8_4
  float top; // xmm7_4
  float left; // xmm6_4
  float v14; // xmm9_4
  CHwDisplayRenderTarget *v15; // rcx
  void (__fastcall *v16)(CHwDisplayRenderTarget *, struct MilRectF *); // rax
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  __int64 v20; // r9
  CD2DContext *v21; // rcx
  const struct ID2DContextOwner *v22; // rdx
  void (__fastcall *v23)(CD2DContext *__hidden, const struct ID2DContextOwner *, const struct D2D_RECT_F *, enum D2D1_ANTIALIAS_MODE); // rax
  int v24; // r14d
  float v25; // xmm6_4
  int v26; // eax
  float v27; // xmm7_4
  int v28; // eax
  float v29; // xmm8_4
  int v30; // eax
  float v31; // xmm9_4
  int v32; // eax
  bool v33; // zf
  __int64 v34; // r12
  __int64 v35; // r15
  char *v36; // r14
  __int64 v37; // rcx
  __int64 v38; // rax
  float v39; // xmm3_4
  float v40; // xmm2_4
  float v41; // xmm0_4
  int v42; // eax
  unsigned int v43; // r12d
  unsigned int v44; // r12d
  struct D2D_RECT_F v45; // [rsp+30h] [rbp-69h] BYREF
  __int128 v46; // [rsp+40h] [rbp-59h] BYREF
  float v47; // [rsp+50h] [rbp-49h]

  v2 = 0;
  v3 = 0;
  if ( *(_BYTE *)(*((_QWORD *)this + 126) + 80LL * (unsigned int)(*((_DWORD *)this + 258) - 1)) )
    v2 = a2;
  if ( !v2 )
  {
    v34 = 0LL;
    v35 = 0LL;
    if ( *((_DWORD *)this + 158) )
    {
      v36 = (char *)this + 608;
      while ( 1 )
      {
        v42 = CD2DLayer::ApplyState(*(CD2DLayer **)(*(_QWORD *)v36 + 8 * v34), this);
        v3 = v42;
        if ( v42 < 0 )
          break;
        v35 = (unsigned int)(v35 + 1);
        v34 = (unsigned int)(v34 + 1);
        if ( (unsigned int)v34 >= *((_DWORD *)this + 158) )
          goto LABEL_54;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v42, 0x1846u);
    }
    else
    {
LABEL_54:
      v36 = (char *)this + 608;
      *((_DWORD *)this + 158) = 0;
      DynArrayImpl<0>::ShrinkToSize((char *)this + 608, 8LL);
    }
    if ( (unsigned int)v35 < *((_DWORD *)this + 158) && (_DWORD)v35 )
    {
      v43 = *((_DWORD *)v36 + 6);
      if ( (unsigned int)v35 > v43 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x23Du);
      }
      else
      {
        v44 = v43 - v35;
        if ( v44 )
          memmove(*(void **)v36, (const void *)(*(_QWORD *)v36 + 8 * v35), 8LL * v44);
        *((_DWORD *)v36 + 6) = v44;
      }
    }
    if ( (v3 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x1828u);
    }
    else if ( *((_BYTE *)this + 6826) )
    {
      *(_WORD *)((char *)this + 6825) = 1;
    }
    if ( (v3 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x2BAu);
      return v3;
    }
  }
  if ( *((_BYTE *)this + 6824) )
  {
    v5 = *((_DWORD *)this + 120);
    if ( v5 )
    {
      v6 = (unsigned int)(v5 - 1);
      v7 = *((_QWORD *)this + 62);
      *(_OWORD *)((char *)this + 284) = *(_OWORD *)(68 * v6 + v7);
      *(_OWORD *)((char *)this + 300) = *(_OWORD *)(68 * v6 + v7 + 16);
      *(_OWORD *)((char *)this + 316) = *(_OWORD *)(68 * v6 + v7 + 32);
      *(_OWORD *)((char *)this + 332) = *(_OWORD *)(68 * v6 + v7 + 48);
      *((_DWORD *)this + 87) = *(_DWORD *)(68 * v6 + v7 + 64);
    }
    else
    {
      *((_WORD *)this + 174) = 32085;
      *(_OWORD *)((char *)this + 284) = _xmm;
      *(_OWORD *)((char *)this + 300) = _xmm;
      *(_OWORD *)((char *)this + 316) = _xmm;
      *(_OWORD *)((char *)this + 332) = _xmm;
    }
    *((_BYTE *)this + 6824) = 0;
  }
  if ( !*((_BYTE *)this + 6825) )
    return v3;
  v9 = *((_DWORD *)this + 258);
  if ( v9
    && *(_DWORD *)(*((_QWORD *)this + 126) + 80LL * (unsigned int)(v9 - 1) + 4)
    && (v10 = *((_DWORD *)this + 768)) != 0 )
  {
    v45 = *(struct D2D_RECT_F *)(*((_QWORD *)this + 386) + 16LL * (unsigned int)(v10 - 1));
    right = v45.right;
    top = v45.top;
    left = v45.left;
    LODWORD(v14) = _mm_shuffle_ps((__m128)v45, (__m128)v45, 255).m128_u32[0];
  }
  else
  {
    v14 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
    right = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
    top = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
    left = *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
  if ( !v2 && v9 && *(_DWORD *)(*((_QWORD *)this + 126) + 80LL * (unsigned int)(v9 - 1) + 8) )
  {
    v37 = 120LL * (unsigned int)(*((_DWORD *)this + 466) - 1);
    v38 = *((_QWORD *)this + 230);
    if ( *(float *)(v37 + v38 + 96) > left )
      left = *(float *)(v37 + v38 + 96);
    v39 = top;
    if ( *(float *)(v37 + v38 + 100) > top )
    {
      top = *(float *)(v37 + v38 + 100);
      v39 = top;
    }
    v40 = right;
    if ( right > *(float *)(v37 + v38 + 104) )
    {
      right = *(float *)(v37 + v38 + 104);
      v40 = right;
    }
    v41 = v14;
    if ( v14 > *(float *)(v37 + v38 + 108) )
    {
      v14 = *(float *)(v37 + v38 + 108);
      v41 = v14;
    }
    if ( v40 <= left || v41 <= v39 )
    {
      v14 = 0.0;
      right = 0.0;
      top = 0.0;
      left = 0.0;
    }
  }
  if ( !*((_BYTE *)this + 3136) && !*((_QWORD *)this + 846) )
  {
    v15 = (CHwDisplayRenderTarget *)*((_QWORD *)this + 46);
    *(_QWORD *)&v45.left = 0LL;
    *(_QWORD *)&v45.right = 0LL;
    if ( v15 )
    {
      v16 = *(void (__fastcall **)(CHwDisplayRenderTarget *, struct MilRectF *))(*(_QWORD *)v15 + 328LL);
      if ( v16 == CHwDisplayRenderTarget::GetDeviceBounds )
      {
        CHwDisplayRenderTarget::GetDeviceBounds(v15, (struct MilRectF *)&v46);
        goto LABEL_21;
      }
    }
    else
    {
      v15 = (CHwDisplayRenderTarget *)*((_QWORD *)this + 45);
      v16 = *(void (__fastcall **)(CHwDisplayRenderTarget *, struct MilRectF *))(*(_QWORD *)v15 + 48LL);
    }
    v16(v15, (struct MilRectF *)&v46);
LABEL_21:
    if ( *(float *)&v46 > left )
      left = *(float *)&v46;
    v17 = top;
    if ( *((float *)&v46 + 1) > top )
    {
      top = *((float *)&v46 + 1);
      v17 = *((float *)&v46 + 1);
    }
    v18 = right;
    if ( right > *((float *)&v46 + 2) )
    {
      right = *((float *)&v46 + 2);
      v18 = *((float *)&v46 + 2);
    }
    v19 = v14;
    if ( v14 > *((float *)&v46 + 3) )
    {
      v14 = *((float *)&v46 + 3);
      v19 = *((float *)&v46 + 3);
    }
    if ( v18 <= left || v19 <= v17 )
    {
      v14 = 0.0;
      right = 0.0;
      top = 0.0;
      left = 0.0;
    }
    else if ( v18 > left && v19 > top )
    {
      v45.left = left;
      v20 = 0LL;
      v45.top = top;
      v45.right = right;
      v45.bottom = v14;
      goto LABEL_34;
    }
    v20 = 1LL;
LABEL_34:
    v21 = (CD2DContext *)*((_QWORD *)this + 48);
    v22 = (CDrawingContext *)((char *)this + 8);
    v23 = *(void (__fastcall **)(CD2DContext *__hidden, const struct ID2DContextOwner *, const struct D2D_RECT_F *, enum D2D1_ANTIALIAS_MODE))(*(_QWORD *)v21 + 72LL);
    if ( v23 == CD2DContext::SetClip )
      CD2DContext::SetClip(v21, v22, &v45, (enum D2D1_ANTIALIAS_MODE)v20);
    else
      v23(v21, v22, &v45, (enum D2D1_ANTIALIAS_MODE)v20);
  }
  v24 = 0x7FFFFFFF;
  v25 = left - 0.5;
  LODWORD(v46) = 0;
  if ( v25 < -2147483600.0 )
  {
    v26 = 0x80000000;
  }
  else if ( v25 >= 2147483600.0 )
  {
    v26 = 0x7FFFFFFF;
  }
  else
  {
    v26 = (int)ceilf_0(v25);
  }
  v27 = top - 0.5;
  *((float *)&v46 + 1) = (float)v26;
  if ( v27 < -2147483600.0 )
  {
    v28 = 0x80000000;
  }
  else if ( v27 >= 2147483600.0 )
  {
    v28 = 0x7FFFFFFF;
  }
  else
  {
    v28 = (int)ceilf_0(v27);
  }
  v29 = right - 0.5;
  *((float *)&v46 + 2) = (float)v28;
  if ( v29 < -2147483600.0 )
  {
    v30 = 0x80000000;
  }
  else if ( v29 >= 2147483600.0 )
  {
    v30 = 0x7FFFFFFF;
  }
  else
  {
    v30 = (int)ceilf_0(v29);
  }
  v31 = v14 - 0.5;
  *((float *)&v46 + 3) = (float)v30;
  if ( v31 < -2147483600.0 )
  {
    v24 = 0x80000000;
  }
  else if ( v31 < 2147483600.0 )
  {
    v24 = (int)ceilf_0(v31);
  }
  *((_BYTE *)this + 6825) = 0;
  v47 = (float)v24;
  *((_OWORD *)this + 9) = v46;
  *((float *)this + 40) = (float)v24;
  if ( !v2 )
    return v3;
  v32 = *((_DWORD *)this + 258);
  if ( !v32 || !*(_DWORD *)(*((_QWORD *)this + 126) + 80LL * (unsigned int)(v32 - 1) + 8) )
    return v3;
  v33 = !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite((float *)(*((_QWORD *)this + 230)
                                                                                + 96LL
                                                                                + 120LL
                                                                                * (unsigned int)(*((_DWORD *)this + 466)
                                                                                               - 1)));
  result = v3;
  if ( v33 )
    *((_BYTE *)this + 6826) = 1;
  return result;
}
