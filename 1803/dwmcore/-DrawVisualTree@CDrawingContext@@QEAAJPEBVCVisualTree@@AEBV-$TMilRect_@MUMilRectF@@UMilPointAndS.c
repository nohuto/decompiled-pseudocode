/*
 * XREFs of ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N333333@Z @ 0x180065990
 * Callers:
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x18000D7E0 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180060D14 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x180060EAC (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x180066318 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x1800B622C (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18015CF20 (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18015D484 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180170D04 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTree@@PEBVCDirtyRegion@@IIPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x1801FE024 (-RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTr.c)
 * Callees:
 *     ?PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z @ 0x18001D790 (-PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z.c)
 *     ?GetDeviceBounds@CHwDisplayRenderTarget@@UEAAXPEAUMilRectF@@@Z @ 0x180046940 (-GetDeviceBounds@CHwDisplayRenderTarget@@UEAAXPEAUMilRectF@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180063000 (-GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?IsFullyCovered@CArrayBasedCoverageSet@@UEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x180064B20 (-IsFullyCovered@CArrayBasedCoverageSet@@UEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180064E8C (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800651F0 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?GetTargetDeviceBounds@CDrawingContext@@AEAAXPEAUMilRectF@@@Z @ 0x180065380 (-GetTargetDeviceBounds@CDrawingContext@@AEAAXPEAUMilRectF@@@Z.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x1800657F0 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x1800660AC (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180066930 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x18006BB20 (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18006BC10 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800A35A0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A4FF0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x1800A6FE0 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCD.c)
 *     ?SetDeviceTransform@COcclusionContext@@QEAAJPEBVCMILMatrix@@@Z @ 0x1800A87CC (-SetDeviceTransform@COcclusionContext@@QEAAJPEBVCMILMatrix@@@Z.c)
 *     ?IsOccluded@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NH@Z @ 0x1800A8DCC (-IsOccluded@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?PushWindowMetaDataToRenderTarget@CDrawingContext@@AEAAJXZ @ 0x1800DA104 (-PushWindowMetaDataToRenderTarget@CDrawingContext@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?BeginRender@CoRenderHost@@QEAAJPEAUHMONITOR__@@PEAVCD3DSurface@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801482F0 (-BeginRender@CoRenderHost@@QEAAJPEAUHMONITOR__@@PEAVCD3DSurface@@AEBVCMILMatrix@@AEBV-$TMilRect_.c)
 *     ?DrawRectangleOverlay@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180160B9C (-DrawRectangleOverlay@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BG@@@@Z @ 0x1801620D8 (-PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV-$TValueResource@UMilColorTransf.c)
 *     ?PushHDRToneMapVPBltLayer@CDrawingContext@@QEAAJXZ @ 0x180162224 (-PushHDRToneMapVPBltLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@MM@Z @ 0x1801622D8 (-PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@MM@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawVisualTree(
        CDrawingContext *this,
        __int64 a2,
        __m128 *a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12)
{
  double v12; // xmm2_8
  __int128 v13; // xmm8
  unsigned int v14; // edi
  __int128 v15; // xmm9
  char v16; // r13
  __int128 v17; // xmm10
  __int128 v19; // xmm11
  __m128 *v21; // r14
  __int128 v22; // xmm12
  __int128 v23; // xmm13
  float *v24; // rdx
  int v25; // ecx
  unsigned int v26; // eax
  COcclusionContext *v27; // rcx
  bool v28; // al
  CHwDisplayRenderTarget *v29; // rcx
  void (__fastcall *v30)(CHwDisplayRenderTarget *, struct MilRectF *); // rax
  int v31; // edx
  float v32; // xmm6_4
  float v33; // xmm7_4
  int v34; // edx
  float v35; // xmm0_4
  float v36; // xmm5_4
  int v37; // eax
  int v38; // eax
  char v39; // r9
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  char (__fastcall *v43)(__int64, __int64, int, char); // rax
  char v44; // al
  __int64 v45; // r14
  _OWORD *v46; // r8
  int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // rax
  bool v50; // al
  __int64 v51; // rdx
  int v52; // eax
  __int64 v53; // rdx
  int v54; // eax
  __int64 v55; // rcx
  int v56; // eax
  int v57; // eax
  int v58; // eax
  bool v59; // zf
  __int64 result; // rax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  float *v64; // rcx
  float v65; // xmm5_4
  float v66; // xmm4_4
  float v67; // xmm0_4
  int v68; // ecx
  int v69; // eax
  int v70; // eax
  __int64 v71; // rax
  int v72; // eax
  int v73; // eax
  int v74; // eax
  int v75; // eax
  __int64 v76; // [rsp+28h] [rbp-E0h]
  __int64 v77; // [rsp+30h] [rbp-D8h]
  float v78; // [rsp+38h] [rbp-D0h]
  __int64 v80; // [rsp+48h] [rbp-C0h]
  __m128 v81; // [rsp+50h] [rbp-B8h] BYREF
  __m128 v82; // [rsp+60h] [rbp-A8h] BYREF
  float v83; // [rsp+70h] [rbp-98h] BYREF
  float v84; // [rsp+74h] [rbp-94h]
  float v85; // [rsp+78h] [rbp-90h]
  float v86; // [rsp+7Ch] [rbp-8Ch]
  struct _D3DCOLORVALUE v87; // [rsp+80h] [rbp-88h] BYREF

  v13 = *(_OWORD *)((char *)this + 6520);
  v14 = 0;
  v15 = *(_OWORD *)((char *)this + 6536);
  v16 = 0;
  v80 = a2;
  v17 = *(_OWORD *)((char *)this + 6552);
  v19 = *(_OWORD *)((char *)this + 6568);
  v21 = a3;
  v22 = *(_OWORD *)((char *)this + 6584);
  v23 = *(_OWORD *)((char *)this + 6600);
  *((_BYTE *)this + 6605) = a7;
  *((_QWORD *)this + 816) = a2;
  *((_WORD *)this + 3260) = 1;
  v24 = (float *)(*(_QWORD *)(a2 + 24) + 140LL);
  v25 = (v24[5] <= v24[4]) + 1;
  if ( v24[2] > *v24 )
    v25 = v24[5] <= v24[4];
  v26 = v25 + 1;
  if ( v24[3] > v24[1] )
    v26 = v25;
  if ( v26 > 1 )
    goto LABEL_64;
  if ( a8 && (v27 = (COcclusionContext *)*((_QWORD *)this + 843)) != 0LL )
  {
    v28 = g_bUseOcclusion;
    *((_BYTE *)this + 6827) = g_bUseOcclusion;
    if ( v28 )
      COcclusionContext::SetDeviceTransform(v27, (CDrawingContext *)((char *)this + 3472));
  }
  else
  {
    *((_BYTE *)this + 6827) = 0;
  }
  v29 = (CHwDisplayRenderTarget *)*((_QWORD *)this + 46);
  if ( !v29 )
  {
    v29 = (CHwDisplayRenderTarget *)*((_QWORD *)this + 45);
    v30 = *(void (__fastcall **)(CHwDisplayRenderTarget *, struct MilRectF *))(*(_QWORD *)v29 + 48LL);
    goto LABEL_68;
  }
  v30 = *(void (__fastcall **)(CHwDisplayRenderTarget *, struct MilRectF *))(*(_QWORD *)v29 + 328LL);
  if ( v30 != CHwDisplayRenderTarget::GetDeviceBounds )
  {
LABEL_68:
    v30(v29, (struct MilRectF *)&v83);
    goto LABEL_13;
  }
  CHwDisplayRenderTarget::GetDeviceBounds(v29, (struct MilRectF *)&v83);
LABEL_13:
  if ( a11 )
  {
    v81 = *v21;
    v33 = v81.m128_f32[2];
    v32 = v81.m128_f32[1];
    v36 = v81.m128_f32[0];
    LODWORD(v35) = _mm_shuffle_ps(v81, v81, 255).m128_u32[0];
  }
  else
  {
    CMILMatrix::Transform2DBoundsHelper<0>((CDrawingContext *)((char *)this + 3472));
    v81.m128_f32[0] = (float)(int)PixelAlign(COERCE_DOUBLE((unsigned __int64)v81.m128_u32[0]), 0, v12);
    v32 = (float)(int)PixelAlign(COERCE_DOUBLE((unsigned __int64)v81.m128_u32[1]), v31, v12);
    v81.m128_f32[1] = v32;
    v33 = (float)(int)PixelAlign(COERCE_DOUBLE((unsigned __int64)v81.m128_u32[2]), 1, v12);
    v81.m128_f32[2] = v33;
    v35 = (float)(int)PixelAlign(COERCE_DOUBLE((unsigned __int64)v81.m128_u32[3]), v34, v12);
    v81.m128_f32[3] = v35;
  }
  if ( v83 > v36 )
  {
    v81.m128_f32[0] = v83;
    v36 = v83;
  }
  if ( v84 > v32 )
  {
    v81.m128_f32[1] = v84;
    v32 = v84;
  }
  if ( v33 > v85 )
  {
    v81.m128_f32[2] = v85;
    v33 = v85;
  }
  if ( v35 > v86 )
  {
    v81.m128_f32[3] = v86;
    v35 = v86;
  }
  if ( v33 <= v36 || v35 <= v32 )
    v81 = 0uLL;
  v37 = CDrawingContext::PushTransformInternal(this, 0LL, (CDrawingContext *)((char *)this + 3472), 1, 1);
  v14 = v37;
  if ( v37 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0x1B3Cu);
    goto LABEL_64;
  }
  v38 = CDrawingContext::PushGpuClipRectInternal((_DWORD)this, 0, (unsigned int)&v81, 1, 0, 0);
  v14 = v38;
  if ( v38 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0x1B45u);
    goto LABEL_64;
  }
  if ( !*((_BYTE *)this + 3136) && !*((_QWORD *)this + 846) )
  {
    if ( a6 )
    {
      if ( !*((_BYTE *)this + 6827)
        || (CScopedClipStack::GetTopGpuClipInScope((__int64 *)this + 126, 1, (__int64)&v82),
            !(unsigned __int8)COcclusionContext::IsOccluded(
                                *((_QWORD *)this + 843),
                                &v82,
                                1LL,
                                *(unsigned int *)(*((_QWORD *)this + 843) + 1032LL),
                                v76,
                                v77)) )
      {
        v61 = CDrawingContext::Clear(this, (const struct _D3DCOLORVALUE *)((char *)this + 424));
        v14 = v61;
        if ( v61 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v61, 0x1B5Fu);
          goto LABEL_64;
        }
      }
      goto LABEL_39;
    }
    if ( a10 && v81.m128_f32[2] > v81.m128_f32[0] && v81.m128_f32[3] > v81.m128_f32[1] )
    {
      v40 = *((_QWORD *)this + 850);
      if ( v40 )
      {
        if ( (*(int (__fastcall **)(_QWORD, struct _D3DCOLORVALUE *))(**(_QWORD **)(v40 + 24) + 144LL))(
               *(_QWORD *)(v40 + 24),
               &v87) >= 0 )
        {
          CDrawingContext::GetTargetDeviceBounds(this, (struct MilRectF *)&v82);
          if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain(
                 (__int64)&v81,
                 (const struct D2D_RECT_F *)&v82) )
          {
            CDrawingContext::Clear(this, &v87);
            goto LABEL_39;
          }
        }
        goto LABEL_38;
      }
      if ( *((_BYTE *)this + 6827) )
      {
        v41 = *((_QWORD *)this + 843);
        v82 = v81;
        v42 = *(_QWORD *)(v41 + 392);
        v43 = *(char (__fastcall **)(__int64, __int64, int, char))(*(_QWORD *)v42 + 56LL);
        v44 = v43 == CArrayBasedCoverageSet::IsFullyCovered
            ? CArrayBasedCoverageSet::IsFullyCovered(v42, (__int64)&v82, 0x7FFFFFFF, v39)
            : ((__int64 (__fastcall *)(__int64, __m128 *, __int64))v43)(v42, &v82, 0x7FFFFFFFLL);
        if ( v44 )
LABEL_38:
          (*(void (__fastcall **)(_QWORD, __m128 *))(**((_QWORD **)this + 45) + 104LL))(*((_QWORD *)this + 45), &v81);
      }
    }
  }
LABEL_39:
  if ( *((_QWORD *)this + 443) && (v62 = CDrawingContext::PushColorTransformLayer(this, 0LL), v14 = v62, v62 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v62, 0x1B6Du);
  }
  else
  {
    *((_DWORD *)this + 1690) = 0;
    if ( a12 && (v63 = CDrawingContext::PushHDRToneMapVPBltLayer(this), v14 = v63, v63 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v63, 0x1B74u);
    }
    else
    {
      if ( a9
        && !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite((float *)(*(_QWORD *)(*((_QWORD *)this + 816)
                                                                                               + 24LL)
                                                                                   + 140LL)) )
      {
        v65 = v64[2] - *v64;
        v66 = v64[3] - v64[1];
        v82.m128_u64[0] = 0LL;
        v67 = (float)(v65 * 0.5) + 6291456.25;
        v68 = (int)(LODWORD(v67) << 10) >> 11;
        v78 = (float)(v66 * 0.5) + 6291456.25;
        v69 = (int)(LODWORD(v78) << 10) >> 11;
        if ( v68 > 2048 )
          v68 = 2048;
        v82.m128_i32[2] = v68;
        if ( v69 > 2048 )
          v69 = 2048;
        v82.m128_i32[3] = v69;
        v70 = CDrawingContext::PushLinearInterpolationLayer(
                this,
                (const struct MilPointAndSizeL *)&v82,
                (float)v68 / v65,
                (float)v69 / v66);
        v14 = v70;
        if ( v70 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v70, 0x1B98u);
          goto LABEL_64;
        }
        v16 = 1;
      }
      if ( !*((_BYTE *)this + 3136) && !*((_QWORD *)this + 846) )
      {
        v45 = *(_QWORD *)(*((_QWORD *)this + 4) + 560LL);
        if ( v45 && *(_BYTE *)(v80 + 32) )
        {
          v71 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 45) + 112LL))(*((_QWORD *)this + 45));
          v72 = CoRenderHost::BeginRender(v45, *((_QWORD *)this + 52), v71, (char *)this + 3472, &v81);
          v14 = v72;
          if ( v72 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v72, 0x1BABu);
            goto LABEL_64;
          }
          *((_QWORD *)this + 850) = v45;
        }
        v21 = a3;
      }
      v46 = (_OWORD *)((char *)this + 6536);
      *((_DWORD *)this + 1652) = a5;
      *((_QWORD *)this + 849) = a4;
      v47 = *((_DWORD *)this + 120);
      if ( v47 )
      {
        v48 = (unsigned int)(v47 - 1);
        v49 = *((_QWORD *)this + 62);
        *v46 = *(_OWORD *)(68 * v48 + v49);
        *(_OWORD *)((char *)this + 6552) = *(_OWORD *)(68 * v48 + v49 + 16);
        *(_OWORD *)((char *)this + 6568) = *(_OWORD *)(68 * v48 + v49 + 32);
        *(_OWORD *)((char *)this + 6584) = *(_OWORD *)(68 * v48 + v49 + 48);
        *((_DWORD *)this + 1650) = *(_DWORD *)(68 * v48 + v49 + 64);
      }
      else
      {
        *((_WORD *)this + 3300) = 32085;
        *v46 = _xmm;
        *(_OWORD *)((char *)this + 6552) = _xmm;
        *(_OWORD *)((char *)this + 6568) = _xmm;
        *(_OWORD *)((char *)this + 6584) = _xmm;
      }
      v50 = (unsigned __int8)CMILMatrix::IsIdentity<0>((char *)this + 6536) != 0;
      v51 = *((_QWORD *)this + 816);
      *((_BYTE *)this + 6604) = v50;
      *((_BYTE *)this + 6521) = 1;
      v52 = CVisualTreeIterator::WalkSubtree<CDrawingContext>((char *)this + 3152, v51, *(_QWORD *)(v51 + 24), this, 3);
      v14 = v52;
      if ( v52 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v52, 0x1BC3u);
      }
      else
      {
        *((_BYTE *)this + 6521) = 0;
        if ( v16 && (v73 = CDrawingContext::PopLayerInternal(this, v53), v14 = v73, v73 < 0) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v73, 0x1BC9u);
        }
        else if ( a12 && (v74 = CDrawingContext::PopLayer(this), v14 = v74, v74 < 0) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v74, 0x1BCEu);
        }
        else if ( g_fDirtyRegion_ShowDirtyRegions
               && (v75 = CDrawingContext::DrawRectangleOverlay(this, v21), v14 = v75, v75 < 0) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v75, 0x1BD7u);
        }
        else
        {
          if ( *((_QWORD *)this + 443) )
            CDrawingContext::PopLayer(this);
          v54 = *((_DWORD *)this + 768);
          if ( v54 )
            *((_DWORD *)this + 768) = v54 - 1;
          v55 = 10LL * (unsigned int)(*((_DWORD *)this + 258) - 1);
          --*(_DWORD *)(*((_QWORD *)this + 126) + 8 * v55 + 4);
          *((_BYTE *)this + 6825) = 1;
          v56 = *((_DWORD *)this + 112);
          if ( v56 )
            *((_DWORD *)this + 112) = v56 - 1;
          v57 = *((_DWORD *)this + 120);
          if ( v57 )
            *((_DWORD *)this + 120) = v57 - 1;
          v58 = *((_DWORD *)this + 128);
          if ( v58 )
            *((_DWORD *)this + 128) = v58 - 1;
          v59 = *((_BYTE *)this + 6828) == 0;
          *((_BYTE *)this + 6824) = 1;
          if ( !v59 )
            CDrawingContext::PushWindowMetaDataToRenderTarget(this);
        }
      }
    }
  }
LABEL_64:
  *(_OWORD *)((char *)this + 6520) = v13;
  *((_QWORD *)this + 849) = 0LL;
  result = v14;
  *(_OWORD *)((char *)this + 6536) = v15;
  *(_OWORD *)((char *)this + 6552) = v17;
  *(_OWORD *)((char *)this + 6568) = v19;
  *(_OWORD *)((char *)this + 6584) = v22;
  *(_OWORD *)((char *)this + 6600) = v23;
  return result;
}
