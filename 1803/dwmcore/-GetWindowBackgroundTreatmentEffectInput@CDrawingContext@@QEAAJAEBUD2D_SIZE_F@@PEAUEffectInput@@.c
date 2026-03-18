/*
 * XREFs of ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180008624
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18008EB6C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801B7190 (-GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?Create@CCachedWindowBackgroundTreatment@@SAJPEAVCWindowBackgroundTreatment@@PEAVIImageSource@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@PEAPEAV1@@Z @ 0x180003030 (-Create@CCachedWindowBackgroundTreatment@@SAJPEAVCWindowBackgroundTreatment@@PEAVIImageSource@@A.c)
 *     ?Update@CCachedWindowBackgroundTreatment@@QEAAJPEAVCWindowBackgroundTreatment@@PEAVIImageSource@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180006860 (-Update@CCachedWindowBackgroundTreatment@@QEAAJPEAVCWindowBackgroundTreatment@@PEAVIImageSource@.c)
 *     ?SetEffectInputToTransparentBlack@CDrawingContext@@AEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@PEAPEAVIImageSource@@@Z @ 0x180008570 (-SetEffectInputToTransparentBlack@CDrawingContext@@AEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@PEAPEAV.c)
 *     ?GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z @ 0x18000B53C (-GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z.c)
 *     ?GetCachedWindowBackgroundTreatment@CVisual@@QEBAPEAVCCachedWindowBackgroundTreatment@@XZ @ 0x18000B5D0 (-GetCachedWindowBackgroundTreatment@CVisual@@QEBAPEAVCCachedWindowBackgroundTreatment@@XZ.c)
 *     ?SetCachedWindowBackgroundTreatment@CVisual@@QEAAXPEAVCCachedWindowBackgroundTreatment@@@Z @ 0x18000B620 (-SetCachedWindowBackgroundTreatment@CVisual@@QEAAXPEAVCCachedWindowBackgroundTreatment@@@Z.c)
 *     ?HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIRenderTarget@@@Z @ 0x18000BDF4 (-HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIRenderTarget@@@Z.c)
 *     ?GetImageSourceForEffectInputNoRef@CWindowBackgroundTreatment@@QEBAPEAVIImageSource@@PEBVIRenderTarget@@@Z @ 0x18000BE88 (-GetImageSourceForEffectInputNoRef@CWindowBackgroundTreatment@@QEBAPEAVIImageSource@@PEBVIRender.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x18000F1C4 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180049AAC (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18004EAA0 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x18004F67C (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180063000 (-GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18006E480 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x180077024 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18008C908 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A4FF0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800BE850 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x1800BE970 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?Reset@EffectInput@@SAXPEAU1@@Z @ 0x1800C48C4 (-Reset@EffectInput@@SAXPEAU1@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VIImageSource@@@@YAXPEAVIImageSource@@@Z @ 0x1800C5718 (--$ReleaseInterfaceNoNULL@VIImageSource@@@@YAXPEAVIImageSource@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18020EFB8 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall CDrawingContext::GetWindowBackgroundTreatmentEffectInput(
        CDrawingContext *this,
        const struct D2D_SIZE_F *a2,
        struct EffectInput *a3)
{
  struct IImageSource *v4; // rdi
  float v6; // xmm6_4
  const struct D2D_SIZE_F *v7; // rbx
  float v8; // xmm7_4
  FLOAT height; // xmm1_4
  CMILMatrix *TopByReference; // rax
  __int64 v11; // rdx
  float v12; // xmm3_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm2_4
  char v16; // r15
  CVisual *CurrentVisual; // r12
  CVisual *v18; // rbx
  const struct CVisualTree *v19; // rsi
  struct CTreeData *TreeData; // rax
  struct CWindowBackgroundTreatment *WindowBackgroundTreatmentInternal; // rsi
  struct IImageSource *ImageSourceForEffectInputNoRef; // rax
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  const struct CMILMatrix *v27; // rax
  __int128 v28; // xmm0
  __int64 v29; // xmm1_8
  float v30; // xmm1_4
  float v31; // xmm0_4
  float v32; // xmm1_4
  __int64 v33; // rax
  __int64 v34; // rax
  char v35; // al
  struct CWindowBackgroundTreatment *v36; // rax
  struct CCachedWindowBackgroundTreatment *v37; // r10
  int v38; // eax
  unsigned int v39; // ebx
  int v40; // eax
  int v42; // eax
  struct CCachedWindowBackgroundTreatment *CachedWindowBackgroundTreatment; // rax
  __int64 v44; // xmm1_8
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  int v49; // eax
  int v50; // eax
  bool v51[8]; // [rsp+38h] [rbp-D0h] BYREF
  struct IImageSource *v52; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v53[24]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v54; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v55; // [rsp+78h] [rbp-90h] BYREF
  __int128 v56; // [rsp+88h] [rbp-80h]
  __int128 v57; // [rsp+98h] [rbp-70h]
  __int128 v58; // [rsp+A8h] [rbp-60h]
  int v59; // [rsp+B8h] [rbp-50h]
  __int64 v60; // [rsp+C8h] [rbp-40h] BYREF
  int v61; // [rsp+D0h] [rbp-38h]
  __int64 v62; // [rsp+D4h] [rbp-34h]
  int v63; // [rsp+DCh] [rbp-2Ch]
  __int64 v64; // [rsp+E0h] [rbp-28h]
  int v65; // [rsp+E8h] [rbp-20h]
  const struct D2D_SIZE_F *v66; // [rsp+F0h] [rbp-18h]
  _OWORD v67[4]; // [rsp+F8h] [rbp-10h] BYREF
  int v68; // [rsp+138h] [rbp+30h]
  struct CCachedWindowBackgroundTreatment *v69; // [rsp+148h] [rbp+40h] BYREF
  float v70; // [rsp+150h] [rbp+48h]
  float v71; // [rsp+154h] [rbp+4Ch]
  float v72; // [rsp+158h] [rbp+50h] BYREF
  float v73; // [rsp+15Ch] [rbp+54h]
  float v74; // [rsp+160h] [rbp+58h]
  float v75; // [rsp+164h] [rbp+5Ch]
  float v76; // [rsp+168h] [rbp+60h]
  float v77; // [rsp+16Ch] [rbp+64h]
  __int128 v78; // [rsp+170h] [rbp+68h] BYREF
  int v79; // [rsp+180h] [rbp+78h]
  int v80; // [rsp+184h] [rbp+7Ch]

  v4 = 0LL;
  v6 = *(float *)&TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v7 = a2;
  v8 = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty
       + 1);
  v68 = 0;
  v55 = _xmm;
  v66 = a2;
  v51[2] = 0;
  *(_QWORD *)v53 = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *(_OWORD *)&v53[8] = *(__int128 *)((char *)&TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty
                                   + 8);
  LOWORD(v59) = 32085;
  v54 = 0LL;
  v52 = 0LL;
  v56 = _xmm;
  v57 = _xmm;
  v58 = _xmm;
  EffectInput::Reset(a3);
  *(_QWORD *)&v78 = 0LL;
  *((_BYTE *)a3 + 44) = 1;
  *((_WORD *)a3 + 51) = 257;
  height = v7->height;
  DWORD2(v78) = LODWORD(v7->width);
  *((FLOAT *)&v78 + 3) = height;
  TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
  CMILMatrix::Transform2DBoundsHelper<0>(TopByReference);
  LOBYTE(v11) = 1;
  CScopedClipStack::GetTopGpuClipInScope((char *)this + 1008, v11, &v72);
  v12 = v72;
  if ( *(float *)&v69 > v72 )
    v12 = *(float *)&v69;
  v13 = v73;
  if ( *((float *)&v69 + 1) > v73 )
    v13 = *((float *)&v69 + 1);
  v14 = v74;
  if ( v74 > v70 )
    v14 = v70;
  v15 = v75;
  if ( v75 > v71 )
    v15 = v71;
  if ( v14 <= v12 || v15 <= v13 )
    goto LABEL_47;
  v16 = 0;
  v51[1] = 0;
  CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)this + 8));
  v18 = CurrentVisual;
  if ( CurrentVisual )
  {
    do
    {
      if ( (*(_DWORD *)(*((_QWORD *)v18 + 27) + 4LL) & 0x10000) != 0 )
        break;
      CVisual::CalcEffectiveTransform(v18, 5LL, 0LL, &v51[2], v67, 0LL);
      CMILMatrix::Multiply((const struct CMILMatrix *)&v55, (const struct CMILMatrix *)v67, (struct CMILMatrix *)&v55);
      v19 = (const struct CVisualTree *)*((_QWORD *)this + 816);
      TreeData = CVisual::FindTreeData(v18, v19);
      if ( TreeData && CVisual::GetParentTreeData(v18, v19, TreeData, &v51[3]) && v51[3] )
        v16 = 1;
      v18 = (CVisual *)*((_QWORD *)v18 + 10);
    }
    while ( v18 );
    if ( v18 && *(_BYTE *)(*((_QWORD *)this + 816) + 32LL) )
      goto LABEL_20;
  }
  CachedWindowBackgroundTreatment = CVisual::GetCachedWindowBackgroundTreatment(CurrentVisual);
  if ( !CachedWindowBackgroundTreatment || *((_BYTE *)CachedWindowBackgroundTreatment + 140) )
  {
LABEL_20:
    if ( v18 )
    {
      WindowBackgroundTreatmentInternal = CVisual::GetWindowBackgroundTreatmentInternal(v18);
      if ( !CWindowBackgroundTreatment::HasValidSource(
              WindowBackgroundTreatmentInternal,
              *((const struct IRenderTarget **)this + 45)) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgs();
        v35 = 0;
        goto LABEL_30;
      }
      ImageSourceForEffectInputNoRef = CWindowBackgroundTreatment::GetImageSourceForEffectInputNoRef(
                                         WindowBackgroundTreatmentInternal,
                                         *((const struct IRenderTarget **)this + 45));
      v69 = ImageSourceForEffectInputNoRef;
      if ( ImageSourceForEffectInputNoRef )
      {
        if ( v16 )
        {
          v23 = *(_OWORD *)((char *)WindowBackgroundTreatmentInternal + 216);
          v24 = *(_OWORD *)((char *)WindowBackgroundTreatmentInternal + 232);
          v68 = *((_DWORD *)WindowBackgroundTreatmentInternal + 70);
          v67[0] = v23;
          v25 = *(_OWORD *)((char *)WindowBackgroundTreatmentInternal + 248);
          v67[1] = v24;
          v26 = *(_OWORD *)((char *)WindowBackgroundTreatmentInternal + 264);
          v67[2] = v25;
          v67[3] = v26;
          if ( !CMILMatrix::Invert((CMILMatrix *)v67) )
          {
            v35 = 1;
            goto LABEL_30;
          }
          v27 = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
          CMILMatrix::Multiply(v27, (const struct CMILMatrix *)v67, (struct CMILMatrix *)&v55);
          ImageSourceForEffectInputNoRef = v69;
        }
        v28 = *((_OWORD *)WindowBackgroundTreatmentInternal + 9);
        v4 = ImageSourceForEffectInputNoRef;
        v52 = ImageSourceForEffectInputNoRef;
        v29 = *((_QWORD *)WindowBackgroundTreatmentInternal + 20);
        *(_OWORD *)v53 = v28;
        v8 = *((float *)&v28 + 1);
        v6 = *(float *)&v28;
        *(_QWORD *)&v53[16] = v29;
      }
      else
      {
        v54 = *(_OWORD *)(*((_QWORD *)WindowBackgroundTreatmentInternal + 8) + 72LL);
      }
    }
    else
    {
      v54 = _xmm;
    }
  }
  else
  {
    v4 = (struct IImageSource *)*((_QWORD *)CachedWindowBackgroundTreatment + 3);
    v52 = v4;
    if ( v4 )
    {
      v44 = *(_QWORD *)((char *)CachedWindowBackgroundTreatment + 116);
      *(_OWORD *)v53 = *(_OWORD *)((char *)CachedWindowBackgroundTreatment + 100);
      v45 = *((_OWORD *)CachedWindowBackgroundTreatment + 2);
      v8 = *(float *)&v53[4];
      v6 = *(float *)v53;
      *(_QWORD *)&v53[16] = v44;
      v46 = *((_OWORD *)CachedWindowBackgroundTreatment + 3);
      v55 = v45;
      v47 = *((_OWORD *)CachedWindowBackgroundTreatment + 4);
      v56 = v46;
      v48 = *((_OWORD *)CachedWindowBackgroundTreatment + 5);
      v49 = *((_DWORD *)CachedWindowBackgroundTreatment + 24);
      v57 = v47;
      v58 = v48;
      v59 = v49;
    }
    else
    {
      v54 = *(_OWORD *)((char *)CachedWindowBackgroundTreatment + 124);
    }
    v51[1] = 1;
  }
  if ( v4 )
  {
    (*(void (__fastcall **)(struct IImageSource *))(*(_QWORD *)v4 + 8LL))(v4);
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)&v55);
    v30 = v73 - v8;
    v73 = 0.0;
    *((float *)&v78 + 1) = v30;
    *(float *)&v78 = v72 - v6;
    v31 = v74;
    v74 = 0.0;
    *((float *)&v78 + 3) = v75 - v8;
    *((float *)&v78 + 2) = v31 - v6;
    v32 = *(float *)&v53[8] - v6;
    *(_OWORD *)((char *)a3 + 84) = v78;
    v62 = v56;
    v72 = 1.0 / v32;
    v75 = 1.0 / (float)(*(float *)&v53[12] - v8);
    v63 = HIDWORD(v56);
    v76 = 0.0 - (float)((float)(1.0 / v32) * 0.0);
    v77 = 0.0 - (float)(v75 * 0.0);
    v79 = LODWORD(v6) ^ _xmm;
    v78 = _xmm;
    v60 = v55;
    v61 = HIDWORD(v55);
    v64 = v58;
    v65 = HIDWORD(v58);
    v80 = LODWORD(v8) ^ _xmm;
    v33 = Matrix3x3::operator*(&v60, v67, &v78);
    v34 = Matrix3x3::operator*(v33, &v60, &v72);
    *((_OWORD *)a3 + 3) = *(_OWORD *)v34;
    *((_OWORD *)a3 + 4) = *(_OWORD *)(v34 + 16);
    *((_DWORD *)a3 + 20) = *(_DWORD *)(v34 + 32);
  }
  v35 = 0;
LABEL_30:
  if ( v18 && !v35 && *(_BYTE *)(*((_QWORD *)this + 816) + 32LL) && !v51[1] )
  {
    v69 = CVisual::GetCachedWindowBackgroundTreatment(CurrentVisual);
    v36 = CVisual::GetWindowBackgroundTreatmentInternal(v18);
    if ( v37 )
    {
      v38 = CCachedWindowBackgroundTreatment::Update(v37, (__int64)v36, (__int64)v4, (__int64)&v55, (float *)v53, &v54);
      v39 = v38;
      if ( v38 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0xC73u);
        goto LABEL_39;
      }
    }
    else
    {
      v42 = CCachedWindowBackgroundTreatment::Create(
              (__int64)v36,
              (__int64)v4,
              (int)&v55,
              (float *)v53,
              (__int64)&v54,
              &v69);
      v39 = v42;
      if ( v42 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v42, 0xC7Du);
        goto LABEL_39;
      }
      CVisual::SetCachedWindowBackgroundTreatment(CurrentVisual, v69);
    }
  }
  if ( !v4 )
  {
    v7 = v66;
LABEL_47:
    v50 = CDrawingContext::SetEffectInputToTransparentBlack(this, v7, a3, &v52);
    v39 = v50;
    if ( v50 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v50, 0xC8Cu);
      v4 = v52;
      goto LABEL_39;
    }
    v4 = v52;
    *(_OWORD *)((char *)a3 + 24) = v54;
  }
  v40 = CDrawListBitmap::FromImageSource(a3, v4, this, 0);
  v39 = v40;
  if ( v40 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, 0xC91u);
LABEL_39:
  ReleaseInterfaceNoNULL<IImageSource>(v4);
  return v39;
}
