/*
 * XREFs of ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x1800D45E0
 * Callers:
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18000D9B4 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x1800466C0 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006D2A4 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x18006D45C (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800B4740 (-Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x180149428 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x18014A2C0 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTree@@PEBVCDirtyRegion@@IPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x1801A6C4C (-RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTr.c)
 * Callees:
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x18000CD28 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x18000D164 (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18000D284 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18000F7A0 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?IsOccluded@COcclusionContext@@QEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NH@Z @ 0x18001D074 (-IsOccluded@COcclusionContext@@QEAA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18004EC48 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FBC0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FFCC (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009339C (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180098570 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x1800A0130 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCD.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x1800A0D6C (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A12C0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800A1C68 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x1800A1D6C (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?GetTargetDeviceBounds@CDrawingContext@@AEAAXPEAUMilRectF@@@Z @ 0x1800A1EC4 (-GetTargetDeviceBounds@CDrawingContext@@AEAAXPEAUMilRectF@@@Z.c)
 *     ?PushWindowMetaDataToRenderTarget@CDrawingContext@@AEAAJXZ @ 0x1800A60A4 (-PushWindowMetaDataToRenderTarget@CDrawingContext@@AEAAJXZ.c)
 *     ?PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@MM@Z @ 0x1800A6430 (-PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@MM@Z.c)
 *     ?DiscardIfOccluded@CDrawingContext@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A9290 (-DiscardIfOccluded@CDrawingContext@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?IsEmpty@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B4250 (-IsEmpty@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800D5354 (ceilf_0.c)
 *     floorf_0 @ 0x1800D536C (floorf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?BeginRender@CoRenderHost@@QEAAJPEAUHMONITOR__@@PEAVCD3DSurface@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18013AFE0 (-BeginRender@CoRenderHost@@QEAAJPEAUHMONITOR__@@PEAVCD3DSurface@@AEBVCMILMatrix@@AEBV-$TMilRect_.c)
 *     ?DrawRectangleOverlay@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014C1A8 (-DrawRectangleOverlay@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DJ@@@@Z @ 0x18014D448 (-PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV-$TValueResource@UMilColorTransf.c)
 *     ?PushHDRConversionLayer@CDrawingContext@@AEAAJXZ @ 0x18014D534 (-PushHDRConversionLayer@CDrawingContext@@AEAAJXZ.c)
 */

__int64 __fastcall CDrawingContext::DrawVisualTree(
        CDrawingContext *this,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11)
{
  __int128 v11; // xmm9
  __int128 v12; // xmm11
  __int128 v14; // xmm12
  __int128 v17; // xmm13
  unsigned int v18; // edi
  __int128 v19; // xmm14
  char v20; // r12
  __int128 v21; // xmm15
  float *v22; // rcx
  float v23; // xmm8_4
  float v24; // xmm1_4
  float v25; // xmm7_4
  float v26; // xmm1_4
  float v27; // xmm6_4
  float v28; // xmm1_4
  float v29; // xmm2_4
  int v30; // eax
  int v31; // eax
  CDrawingContext *v32; // rcx
  char v33; // di
  __int64 v34; // r8
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rcx
  int v38; // eax
  int v39; // eax
  float *v40; // rcx
  float v41; // xmm5_4
  float v42; // xmm4_4
  float v43; // xmm0_4
  int v44; // ecx
  int v45; // eax
  int v46; // eax
  __int64 v47; // rsi
  __int64 v48; // rax
  int v49; // eax
  __int64 v50; // r11
  char v51; // al
  unsigned __int64 *v52; // rdx
  int v53; // eax
  int v54; // eax
  int v55; // eax
  __int64 result; // rax
  char v57; // [rsp+38h] [rbp-D0h]
  float v58; // [rsp+3Ch] [rbp-CCh]
  __int64 X; // [rsp+40h] [rbp-C8h]
  __int128 X_8; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v61; // [rsp+58h] [rbp-B0h] BYREF
  float v62; // [rsp+68h] [rbp-A0h] BYREF
  float v63; // [rsp+6Ch] [rbp-9Ch]
  float v64; // [rsp+70h] [rbp-98h]
  float v65; // [rsp+74h] [rbp-94h]

  v11 = *(_OWORD *)((char *)this + 6536);
  v12 = *(_OWORD *)((char *)this + 6456);
  X = a4;
  v14 = *(_OWORD *)((char *)this + 6472);
  v17 = *(_OWORD *)((char *)this + 6488);
  v18 = 0;
  v57 = 0;
  v19 = *(_OWORD *)((char *)this + 6504);
  v20 = 0;
  v21 = *(_OWORD *)((char *)this + 6520);
  *((_BYTE *)this + 6541) = a7;
  *((_WORD *)this + 3228) = 1;
  *((_QWORD *)this + 808) = a2;
  v22 = (float *)(*(_QWORD *)(a2 + 24) + 136LL);
  v61 = v11;
  if ( !TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(v22) )
  {
    *((_BYTE *)this + 6771) = a8 && *((_QWORD *)this + 835);
    CDrawingContext::GetTargetDeviceBounds(this, (struct MilRectF *)&v62);
    if ( a11 )
    {
      X_8 = *a3;
      v29 = *((float *)&X_8 + 3);
      v27 = *((float *)&X_8 + 2);
      v25 = *((float *)&X_8 + 1);
      v23 = *(float *)&X_8;
    }
    else
    {
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)this + 3376, (__int64)a3, (float *)&X_8);
      v23 = *(float *)&X_8;
      v24 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&X_8) & _xmm);
      if ( v24 < 8388608.0 )
        v23 = (float)(int)floorf_0(*(float *)&X_8);
      v25 = *((float *)&X_8 + 1);
      *(float *)&X_8 = v23;
      v26 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&X_8 + 1)) & _xmm);
      if ( v26 < 8388608.0 )
        v25 = (float)(int)floorf_0(*((float *)&X_8 + 1));
      v27 = *((float *)&X_8 + 2);
      *((float *)&X_8 + 1) = v25;
      v28 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&X_8 + 2)) & _xmm);
      if ( v28 < 8388608.0 )
        v27 = (float)(int)ceilf_0(*((float *)&X_8 + 2));
      v29 = *((float *)&X_8 + 3);
      *((float *)&X_8 + 2) = v27;
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&X_8 + 3)) & _xmm) < 8388608.0 )
        v29 = (float)(int)ceilf_0(*((float *)&X_8 + 3));
      v11 = v61;
      *((float *)&X_8 + 3) = v29;
    }
    if ( !*((_QWORD *)this + 47) )
    {
      if ( v62 > v23 )
        *(float *)&X_8 = v62;
      if ( v63 > v25 )
        *((float *)&X_8 + 1) = v63;
      if ( v27 > v64 )
        *((float *)&X_8 + 2) = v64;
      if ( v29 > v65 )
        *((float *)&X_8 + 3) = v65;
      if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&X_8) )
        X_8 = 0uLL;
    }
    v30 = CDrawingContext::PushTransformInternal(this, 0LL, (CDrawingContext *)((char *)this + 3376), 1, 1);
    v18 = v30;
    if ( v30 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x1C49u);
      goto LABEL_80;
    }
    v31 = CDrawingContext::PushGpuClipRectInternal((__int64)this, 0LL, (float *)&X_8, 1, 0, 0);
    v18 = v31;
    if ( v31 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0x1C52u);
      goto LABEL_80;
    }
    if ( !(unsigned __int8)CDrawingContext::IsBounding(this) )
    {
      v33 = a6;
      if ( a6 )
      {
        CScopedClipStack::GetTopGpuClipInScope((__int64 *)this + 114, 1, (__int64)&v61);
        if ( *((_BYTE *)this + 6771) )
        {
          v35 = *((_QWORD *)this + 835);
          if ( v35 )
          {
            LOBYTE(v34) = 1;
            v33 = a6;
            if ( COcclusionContext::IsOccluded(v35, (__int64)&v61, v34, *(_DWORD *)(v35 + 944)) )
              v33 = 0;
          }
        }
        if ( v33 )
        {
          v36 = CDrawingContext::Clear((CD2DContext **)this, (const struct _D3DCOLORVALUE *)((char *)this + 424));
          v18 = v36;
          if ( v36 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0x1C75u);
            goto LABEL_80;
          }
        }
      }
      else if ( a10 )
      {
        CDrawingContext::DiscardIfOccluded(v32, (float *)&X_8);
      }
    }
    v37 = *((_QWORD *)this + 47);
    if ( v37 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v37 + 472LL))(v37) )
    {
      v38 = CDrawingContext::PushHDRConversionLayer(this);
      v18 = v38;
      if ( v38 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, 0x1C82u);
        goto LABEL_80;
      }
      v57 = 1;
    }
    if ( *((_QWORD *)this + 431) && (v39 = CDrawingContext::PushColorTransformLayer(this, 0LL), v18 = v39, v39 < 0) )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v39, 0x1C8Bu);
    }
    else
    {
      *((_DWORD *)this + 1674) = 0;
      if ( a9
        && !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite((float *)(*(_QWORD *)(*((_QWORD *)this + 808)
                                                                                               + 24LL)
                                                                                   + 136LL)) )
      {
        v41 = v40[2] - *v40;
        v42 = v40[3] - v40[1];
        *(_QWORD *)&v61 = 0LL;
        v43 = (float)(v41 * 0.5) + 6291456.25;
        v44 = (int)(LODWORD(v43) << 10) >> 11;
        v58 = (float)(v42 * 0.5) + 6291456.25;
        v45 = (int)(LODWORD(v58) << 10) >> 11;
        if ( v44 > 2048 )
          v44 = 2048;
        DWORD2(v61) = v44;
        if ( v45 > 2048 )
          v45 = 2048;
        HIDWORD(v61) = v45;
        v46 = CDrawingContext::PushLinearInterpolationLayer(
                (struct IRenderTarget **)this,
                (const struct MilPointAndSizeL *)&v61,
                (float)v44 / v41,
                (float)v45 / v42);
        v18 = v46;
        if ( v46 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v46, 0x1CB1u);
          goto LABEL_80;
        }
        v20 = 1;
      }
      if ( !(unsigned __int8)CDrawingContext::IsBounding(this) )
      {
        v47 = *(_QWORD *)(*((_QWORD *)this + 4) + 568LL);
        if ( v47 )
        {
          if ( *(_BYTE *)(a2 + 32) )
          {
            v48 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 46) + 120LL))(*((_QWORD *)this + 46));
            v49 = CoRenderHost::BeginRender(v47, *((_QWORD *)this + 52), v48, (char *)this + 3376, &X_8);
            v18 = v49;
            if ( v49 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v49, 0x1CC4u);
              goto LABEL_80;
            }
            *((_QWORD *)this + 843) = v47;
          }
        }
      }
      *((_QWORD *)this + 842) = X;
      *((_DWORD *)this + 1636) = a5;
      CMatrixStack::Top((CDrawingContext *)((char *)this + 472), (CDrawingContext *)((char *)this + 6472));
      v51 = CMILMatrix::IsIdentity<0>(v50);
      v52 = (unsigned __int64 *)*((_QWORD *)this + 808);
      *((_BYTE *)this + 6457) = 1;
      *((_BYTE *)this + 6540) = v51 != 0;
      v53 = CVisualTreeIterator::WalkSubtree<CDrawingContext>(
              (__int64)this + 3056,
              (const struct CVisualTree *)v52,
              v52[3],
              (unsigned __int64)this,
              3);
      v18 = v53;
      if ( v53 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v53, 0x1CDCu);
      }
      else
      {
        *((_BYTE *)this + 6457) = 0;
        if ( v20 && (v54 = CDrawingContext::PopLayerInternal((__int64)this), v18 = v54, v54 < 0) )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v54, 0x1CE2u);
        }
        else if ( g_fDirtyRegion_ShowDirtyRegions
               && (v55 = CDrawingContext::DrawRectangleOverlay(this, a3), v18 = v55, v55 < 0) )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v55, 0x1CEBu);
        }
        else
        {
          if ( *((_QWORD *)this + 431) )
            CDrawingContext::PopLayer(this);
          if ( v57 )
            CDrawingContext::PopLayer(this);
          CDrawingContext::PopGpuClipRectInternal(this, 0);
          CDrawingContext::PopTransformInternal(this, 1);
          if ( *((_BYTE *)this + 6772) )
            CDrawingContext::PushWindowMetaDataToRenderTarget(this);
        }
      }
    }
  }
LABEL_80:
  *(_OWORD *)((char *)this + 6456) = v12;
  *((_QWORD *)this + 842) = 0LL;
  result = v18;
  *(_OWORD *)((char *)this + 6472) = v14;
  *(_OWORD *)((char *)this + 6488) = v17;
  *(_OWORD *)((char *)this + 6504) = v19;
  *(_OWORD *)((char *)this + 6520) = v21;
  *(_OWORD *)((char *)this + 6536) = v11;
  return result;
}
