/*
 * XREFs of ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180041600
 * Callers:
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800237F0 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18003CCF8 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBVCMILMatrix@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@_N@Z @ 0x18003D474 (-FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBVCMILMatrix@@AEBVCShape@@.c)
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18003DB18 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@AEBVCShape@@U-$TMIL.c)
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x18003EAB0 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 *     ?DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1HW4Enum@MilCompositingMode@@_N@Z @ 0x18003F3AC (-DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@.c)
 *     ?TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUMilPoint2F@@M@Z @ 0x18003F820 (-TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z @ 0x18003FE70 (-FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z.c)
 *     ?FillOrStrokeShape@CDrawingContext@@AEAAJ_NAEBVCShape@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2PEAVCResource@@@Z @ 0x18003FFA8 (-FillOrStrokeShape@CDrawingContext@@AEAAJ_NAEBVCShape@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180040290 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?ApplyRenderState@CDrawingContext@@UEAAJXZ @ 0x180041BF0 (-ApplyRenderState@CDrawingContext@@UEAAJXZ.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x180042E90 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x180080600 (-RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRe.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180099748 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x18012F544 (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 *     ?DrawCoRenderContent@CDrawingContext@@QEAAJPEAVCCoRenderContent@@@Z @ 0x18013C8DC (-DrawCoRenderContent@CDrawingContext@@QEAAJPEAVCCoRenderContent@@@Z.c)
 *     ?DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z @ 0x18013CA50 (-DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z.c)
 *     ?DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z @ 0x18013CB80 (-DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z.c)
 *     ?DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x18013CCD0 (-DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z.c)
 *     ?DrawRectangleOverlay@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18013D248 (-DrawRectangleOverlay@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?DrawYCbCrBitmap@CDrawingContext@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z @ 0x18013D450 (-DrawYCbCrBitmap@CDrawingContext@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z.c)
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x18013D8B8 (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBUtagRECT@@@Z @ 0x18013F0D4 (-RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBUtagRECT@@@Z.c)
 *     ?RenderBlackShape@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBVCShape@@@Z @ 0x180179A80 (-RenderBlackShape@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBVCShape@@@Z.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18017D7D0 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV-$TMilRect_.c)
 *     ?DrawIntoBaseTile@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAVCDrawingContext@@@Z @ 0x1801817A0 (-DrawIntoBaseTile@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetDeviceBounds@CHwDisplayRenderTarget@@UEAAXPEAUMilRectF@@@Z @ 0x18002BF10 (-GetDeviceBounds@CHwDisplayRenderTarget@@UEAAXPEAUMilRectF@@@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036B0C (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?SetClip@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x180044840 (-SetClip@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 *     ??4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z @ 0x18005B04C (--4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800818D0 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800C5D44 (ceilf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::ApplyRenderStateInternal(CDrawingContext *this, unsigned __int8 a2)
{
  char v2; // di
  __int64 v3; // r9
  __int64 v4; // rdx
  unsigned int v5; // esi
  int v7; // eax
  _OWORD *v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 result; // rax
  int v12; // r8d
  int v13; // eax
  float v14; // xmm9_4
  float v15; // xmm8_4
  float v16; // xmm7_4
  float v17; // xmm6_4
  CHwDisplayRenderTarget *v18; // rcx
  void (__fastcall *v19)(CHwDisplayRenderTarget *, struct MilRectF *); // rax
  __int64 v20; // r9
  CD2DContext *v21; // rcx
  const struct ID2DContextOwner *v22; // rdx
  void (__fastcall *v23)(CD2DContext *__hidden, const struct ID2DContextOwner *, const struct D2D_RECT_F *, enum D2D1_ANTIALIAS_MODE); // rax
  int v24; // r14d
  float v25; // xmm7_4
  int v26; // eax
  float v27; // xmm8_4
  int v28; // eax
  float v29; // xmm9_4
  int v30; // eax
  float v31; // xmm6_4
  int v32; // eax
  bool v33; // zf
  __int64 v34; // r12
  __int64 v35; // r15
  char *v36; // r14
  __int64 v37; // rcx
  __int64 v38; // rax
  int v39; // eax
  unsigned int v40; // r12d
  unsigned int v41; // r12d
  __m128 v42; // [rsp+30h] [rbp-69h] BYREF
  struct D2D_RECT_F v43; // [rsp+40h] [rbp-59h] BYREF
  float v44; // [rsp+50h] [rbp-49h]

  v2 = 0;
  v3 = a2;
  v4 = *((_QWORD *)this + 126);
  v5 = 0;
  if ( *(_BYTE *)(v4 + 80LL * (unsigned int)(*((_DWORD *)this + 258) - 1)) )
    v2 = v3;
  if ( !v2 )
  {
    v34 = 0LL;
    v35 = 0LL;
    if ( *((_DWORD *)this + 158) )
    {
      v36 = (char *)this + 608;
      while ( 1 )
      {
        v39 = CD2DLayer::ApplyState(*(CD2DLayer **)(*(_QWORD *)v36 + 8 * v34), this);
        v5 = v39;
        if ( v39 < 0 )
          break;
        v35 = (unsigned int)(v35 + 1);
        v34 = (unsigned int)(v34 + 1);
        if ( (unsigned int)v34 >= *((_DWORD *)this + 158) )
          goto LABEL_52;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, 0x17C6u);
    }
    else
    {
LABEL_52:
      v36 = (char *)this + 608;
      *((_DWORD *)this + 158) = 0;
      DynArrayImpl<0>::ShrinkToSize((char *)this + 608, 8LL);
    }
    if ( (unsigned int)v35 < *((_DWORD *)this + 158) && (_DWORD)v35 )
    {
      v40 = *((_DWORD *)v36 + 6);
      if ( (unsigned int)v35 > v40 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x234u);
      }
      else
      {
        v41 = v40 - v35;
        if ( v41 )
          memmove(*(void **)v36, (const void *)(*(_QWORD *)v36 + 8 * v35), 8LL * v41);
        *((_DWORD *)v36 + 6) = v41;
      }
    }
    if ( (v5 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x17A8u);
    }
    else if ( *((_BYTE *)this + 6826) )
    {
      *(_WORD *)((char *)this + 6825) = 1;
    }
    if ( (v5 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x2C7u);
      return v5;
    }
  }
  if ( *((_BYTE *)this + 6824) )
  {
    v7 = *((_DWORD *)this + 120);
    v8 = (_OWORD *)((char *)this + 284);
    if ( v7 )
    {
      v9 = (unsigned int)(v7 - 1);
      v10 = *((_QWORD *)this + 62);
      *v8 = *(_OWORD *)(68 * v9 + v10);
      *(_OWORD *)((char *)this + 300) = *(_OWORD *)(68 * v9 + v10 + 16);
      *(_OWORD *)((char *)this + 316) = *(_OWORD *)(68 * v9 + v10 + 32);
      *(_OWORD *)((char *)this + 332) = *(_OWORD *)(68 * v9 + v10 + 48);
      *((_DWORD *)this + 87) = *(_DWORD *)(68 * v9 + v10 + 64);
    }
    else
    {
      CMILMatrix::operator=((char *)this + 284, v4, v8, v3);
    }
    *((_BYTE *)this + 6824) = 0;
  }
  if ( !*((_BYTE *)this + 6825) )
    return v5;
  v12 = *((_DWORD *)this + 258);
  if ( v12
    && *(_DWORD *)(*((_QWORD *)this + 126) + 80LL * (unsigned int)(v12 - 1) + 4)
    && (v13 = *((_DWORD *)this + 768)) != 0 )
  {
    v42 = *(__m128 *)(*((_QWORD *)this + 386) + 16LL * (unsigned int)(v13 - 1));
    v14 = v42.m128_f32[2];
    v15 = v42.m128_f32[1];
    v16 = v42.m128_f32[0];
    LODWORD(v17) = _mm_shuffle_ps(v42, v42, 255).m128_u32[0];
  }
  else
  {
    v17 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
    v14 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
    v15 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
    v16 = *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
  if ( !v2 && v12 && *(_DWORD *)(*((_QWORD *)this + 126) + 80LL * (unsigned int)(v12 - 1) + 8) )
  {
    v37 = 120LL * (unsigned int)(*((_DWORD *)this + 466) - 1);
    v38 = *((_QWORD *)this + 230);
    if ( *(float *)(v37 + v38 + 96) > v16 )
      v16 = *(float *)(v37 + v38 + 96);
    if ( *(float *)(v37 + v38 + 100) > v15 )
      v15 = *(float *)(v37 + v38 + 100);
    if ( v14 > *(float *)(v37 + v38 + 104) )
      v14 = *(float *)(v37 + v38 + 104);
    if ( v17 > *(float *)(v37 + v38 + 108) )
      v17 = *(float *)(v37 + v38 + 108);
    if ( v14 <= v16 || v17 <= v15 )
    {
      v17 = 0.0;
      v14 = 0.0;
      v15 = 0.0;
      v16 = 0.0;
    }
  }
  if ( !*((_BYTE *)this + 3136) && !*((_QWORD *)this + 846) )
  {
    v18 = (CHwDisplayRenderTarget *)*((_QWORD *)this + 46);
    v43 = 0LL;
    if ( v18 )
    {
      v19 = *(void (__fastcall **)(CHwDisplayRenderTarget *, struct MilRectF *))(*(_QWORD *)v18 + 280LL);
      if ( v19 == CHwDisplayRenderTarget::GetDeviceBounds )
      {
        CHwDisplayRenderTarget::GetDeviceBounds(v18, (struct MilRectF *)&v42);
LABEL_21:
        if ( v42.m128_f32[0] > v16 )
          v16 = v42.m128_f32[0];
        if ( v42.m128_f32[1] > v15 )
          v15 = v42.m128_f32[1];
        if ( v14 > v42.m128_f32[2] )
          v14 = v42.m128_f32[2];
        if ( v17 > v42.m128_f32[3] )
          v17 = v42.m128_f32[3];
        if ( v14 <= v16 || v17 <= v15 )
        {
          v17 = 0.0;
          v14 = 0.0;
          v15 = 0.0;
          v16 = 0.0;
          v20 = 1LL;
        }
        else
        {
          v43.left = v16;
          v20 = 0LL;
          v43.top = v15;
          v43.right = v14;
          v43.bottom = v17;
        }
        v21 = (CD2DContext *)*((_QWORD *)this + 48);
        v22 = (CDrawingContext *)((char *)this + 8);
        v23 = *(void (__fastcall **)(CD2DContext *__hidden, const struct ID2DContextOwner *, const struct D2D_RECT_F *, enum D2D1_ANTIALIAS_MODE))(*(_QWORD *)v21 + 72LL);
        if ( v23 == CD2DContext::SetClip )
          CD2DContext::SetClip(v21, v22, &v43, (enum D2D1_ANTIALIAS_MODE)v20);
        else
          v23(v21, v22, &v43, (enum D2D1_ANTIALIAS_MODE)v20);
        goto LABEL_34;
      }
    }
    else
    {
      v18 = (CHwDisplayRenderTarget *)*((_QWORD *)this + 45);
      v19 = *(void (__fastcall **)(CHwDisplayRenderTarget *, struct MilRectF *))(*(_QWORD *)v18 + 48LL);
    }
    v19(v18, (struct MilRectF *)&v42);
    goto LABEL_21;
  }
LABEL_34:
  v24 = 0x7FFFFFFF;
  v25 = v16 - 0.5;
  v43.left = 0.0;
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
  v27 = v15 - 0.5;
  v43.top = (float)v26;
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
  v29 = v14 - 0.5;
  v43.right = (float)v28;
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
  v31 = v17 - 0.5;
  v43.bottom = (float)v30;
  if ( v31 < -2147483600.0 )
  {
    v24 = 0x80000000;
  }
  else if ( v31 < 2147483600.0 )
  {
    v24 = (int)ceilf_0(v31);
  }
  *((_BYTE *)this + 6825) = 0;
  v44 = (float)v24;
  *((struct D2D_RECT_F *)this + 9) = v43;
  *((float *)this + 40) = (float)v24;
  if ( !v2 )
    return v5;
  v32 = *((_DWORD *)this + 258);
  if ( !v32 || !*(_DWORD *)(*((_QWORD *)this + 126) + 80LL * (unsigned int)(v32 - 1) + 8) )
    return v5;
  v33 = !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite((float *)(*((_QWORD *)this + 230)
                                                                                + 96LL
                                                                                + 120LL
                                                                                * (unsigned int)(*((_DWORD *)this + 466)
                                                                                               - 1)));
  result = v5;
  if ( v33 )
    *((_BYTE *)this + 6826) = 1;
  return result;
}
