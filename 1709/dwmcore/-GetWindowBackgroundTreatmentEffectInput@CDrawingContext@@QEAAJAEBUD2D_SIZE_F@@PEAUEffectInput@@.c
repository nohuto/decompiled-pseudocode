/*
 * XREFs of ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18003DDEC
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006E670 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCa.c)
 *     ?GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180183300 (-GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180031D18 (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x1800407C0 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800483C8 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N2@Z @ 0x180048684 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N2@Z.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18004DD70 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z @ 0x18004E548 (-GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z.c)
 *     ?GetCachedWindowBackgroundTreatment@CVisual@@QEBAPEAVCCachedWindowBackgroundTreatment@@XZ @ 0x18004E5A8 (-GetCachedWindowBackgroundTreatment@CVisual@@QEBAPEAVCCachedWindowBackgroundTreatment@@XZ.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x18004E5FC (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18004E640 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?SetCachedWindowBackgroundTreatment@CVisual@@QEAAXPEAVCCachedWindowBackgroundTreatment@@@Z @ 0x18004E780 (-SetCachedWindowBackgroundTreatment@CVisual@@QEAAXPEAVCCachedWindowBackgroundTreatment@@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180054E04 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180059138 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059FB0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Reset@EffectInput@@SAXPEAU1@@Z @ 0x1800700F4 (-Reset@EffectInput@@SAXPEAU1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18007B3D4 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x18007B590 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?Create@CCachedWindowBackgroundTreatment@@SAJPEAVIImageSource@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@PEAPEAV1@@Z @ 0x1800B1894 (-Create@CCachedWindowBackgroundTreatment@@SAJPEAVIImageSource@@AEBVCMILMatrix@@AEBV-$TMil3DRect@.c)
 *     ?Update@CCachedWindowBackgroundTreatment@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800B1A38 (-Update@CCachedWindowBackgroundTreatment@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@AEBV-$TMil3DRec.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?SetEffectInputToTransparentBlack@CDrawingContext@@AEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@PEAPEAVIImageSource@@@Z @ 0x18013F1EC (-SetEffectInputToTransparentBlack@CDrawingContext@@AEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@PEAPEAV.c)
 */

__int64 __fastcall CDrawingContext::GetWindowBackgroundTreatmentEffectInput(
        CDrawingContext *this,
        const struct D2D_SIZE_F *a2,
        struct EffectInput *a3)
{
  struct IImageSource *v4; // rdi
  float v6; // xmm8_4
  const struct D2D_SIZE_F *v7; // rbx
  float v8; // xmm9_4
  FLOAT height; // xmm1_4
  const struct CMILMatrix *TopByReference; // rax
  float v11; // xmm4_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  char v15; // bl
  __int64 v16; // rdx
  __int64 v17; // r8
  struct CVisual *CurrentVisual; // r15
  CVisual *v19; // rsi
  const struct CVisualTree *v20; // r14
  struct CTreeData *TreeData; // rax
  struct CWindowBackgroundTreatment *WindowBackgroundTreatmentInternal; // r14
  struct CCachedWindowBackgroundTreatment *v23; // rax
  __int128 v24; // xmm0
  __int64 v25; // xmm1_8
  float v26; // xmm6_4
  float v27; // xmm7_4
  float v28; // xmm1_4
  float v29; // xmm0_4
  __int64 v30; // rax
  __int64 v31; // rax
  char v32; // al
  struct CCachedWindowBackgroundTreatment *v33; // rax
  int v34; // eax
  unsigned int v35; // ebx
  int v36; // eax
  struct CCachedWindowBackgroundTreatment *CachedWindowBackgroundTreatment; // rax
  __int64 v39; // xmm1_8
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  int v44; // eax
  int v45; // eax
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int64 v50; // r8
  __int64 v51; // rdx
  int WorldTransform; // eax
  int v53; // eax
  bool v54[8]; // [rsp+38h] [rbp-D0h] BYREF
  struct IImageSource *v55; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v56[24]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v57; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v58; // [rsp+78h] [rbp-90h] BYREF
  __int128 v59; // [rsp+88h] [rbp-80h]
  __int128 v60; // [rsp+98h] [rbp-70h]
  __int128 v61; // [rsp+A8h] [rbp-60h]
  int v62; // [rsp+B8h] [rbp-50h]
  const struct D2D_SIZE_F *v63; // [rsp+C8h] [rbp-40h]
  __int64 v64; // [rsp+D8h] [rbp-30h] BYREF
  int v65; // [rsp+E0h] [rbp-28h]
  __int64 v66; // [rsp+E4h] [rbp-24h]
  int v67; // [rsp+ECh] [rbp-1Ch]
  __int64 v68; // [rsp+F0h] [rbp-18h]
  int v69; // [rsp+F8h] [rbp-10h]
  int v70; // [rsp+118h] [rbp+10h]
  _OWORD v71[4]; // [rsp+128h] [rbp+20h] BYREF
  int v72; // [rsp+168h] [rbp+60h]
  struct CCachedWindowBackgroundTreatment *v73; // [rsp+178h] [rbp+70h] BYREF
  float v74; // [rsp+180h] [rbp+78h]
  float v75; // [rsp+184h] [rbp+7Ch]
  float v76; // [rsp+188h] [rbp+80h] BYREF
  float v77; // [rsp+18Ch] [rbp+84h]
  float v78; // [rsp+190h] [rbp+88h]
  float v79; // [rsp+194h] [rbp+8Ch]
  float v80; // [rsp+198h] [rbp+90h]
  float v81; // [rsp+19Ch] [rbp+94h]
  __int128 v82; // [rsp+1A0h] [rbp+98h] BYREF
  int v83; // [rsp+1B0h] [rbp+A8h]
  int v84; // [rsp+1B4h] [rbp+ACh]

  v4 = 0LL;
  v6 = *(float *)&TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v7 = a2;
  v8 = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty
       + 1);
  v72 = 0;
  v58 = _xmm;
  v63 = a2;
  v54[2] = 0;
  *(_QWORD *)v56 = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *(_OWORD *)&v56[8] = *(__int128 *)((char *)&TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty
                                   + 8);
  LOWORD(v62) = 32085;
  v57 = 0LL;
  v55 = 0LL;
  v59 = _xmm;
  v60 = _xmm;
  v61 = _xmm;
  EffectInput::Reset(a3);
  *(_QWORD *)&v82 = 0LL;
  *((_BYTE *)a3 + 44) = 1;
  *((_WORD *)a3 + 51) = 257;
  height = v7->height;
  DWORD2(v82) = LODWORD(v7->width);
  *((FLOAT *)&v82 + 3) = height;
  TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
  CMILMatrix::Transform2DBoundsHelper<0>(TopByReference, &v82, &v73);
  CScopedClipStack::GetTopGpuClipInScope((CDrawingContext *)((char *)this + 1008), 1);
  v11 = v76;
  v12 = v77;
  v13 = v78;
  v14 = v79;
  if ( *(float *)&v73 > v76 )
    v11 = *(float *)&v73;
  if ( *((float *)&v73 + 1) > v77 )
    v12 = *((float *)&v73 + 1);
  if ( v78 > v74 )
    v13 = v74;
  if ( v79 > v75 )
    v14 = v75;
  if ( v13 <= v11 || v14 <= v12 )
    goto LABEL_55;
  v15 = 0;
  v54[1] = 0;
  CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)this + 8));
  v19 = CurrentVisual;
  if ( !CurrentVisual )
    goto LABEL_37;
  do
  {
    if ( (*(_DWORD *)(*((_QWORD *)v19 + 26) + 4LL) & 0x10000) != 0 )
      break;
    CVisual::CalcEffectiveTransform(v19, 5LL, 0LL, &v54[2], v71, 0LL);
    CMILMatrix::Multiply((const struct CMILMatrix *)&v58, (const struct CMILMatrix *)v71, (struct CMILMatrix *)&v58);
    v20 = (const struct CVisualTree *)*((_QWORD *)this + 816);
    TreeData = CVisual::FindTreeData(v19, v20);
    if ( TreeData && CVisual::GetParentTreeData(v19, v20, TreeData, &v54[3]) && v54[3] )
      v15 = 1;
    v19 = (CVisual *)*((_QWORD *)v19 + 10);
  }
  while ( v19 );
  if ( !v19 || !*(_BYTE *)(*((_QWORD *)this + 816) + 32LL) )
  {
LABEL_37:
    if ( (*(_DWORD *)(*((_QWORD *)CurrentVisual + 26) + 4LL) & 0x8000) != 0 )
    {
      CachedWindowBackgroundTreatment = CVisual::GetCachedWindowBackgroundTreatment(CurrentVisual);
      v4 = (struct IImageSource *)*((_QWORD *)CachedWindowBackgroundTreatment + 2);
      v55 = v4;
      if ( v4 )
      {
        v39 = *(_QWORD *)((char *)CachedWindowBackgroundTreatment + 108);
        *(_OWORD *)v56 = *(_OWORD *)((char *)CachedWindowBackgroundTreatment + 92);
        v40 = *(_OWORD *)((char *)CachedWindowBackgroundTreatment + 24);
        v8 = *(float *)&v56[4];
        v6 = *(float *)v56;
        *(_QWORD *)&v56[16] = v39;
        v41 = *(_OWORD *)((char *)CachedWindowBackgroundTreatment + 40);
        v58 = v40;
        v42 = *(_OWORD *)((char *)CachedWindowBackgroundTreatment + 56);
        v59 = v41;
        v43 = *(_OWORD *)((char *)CachedWindowBackgroundTreatment + 72);
        v44 = *((_DWORD *)CachedWindowBackgroundTreatment + 22);
        v60 = v42;
        v61 = v43;
        v62 = v44;
      }
      else
      {
        v57 = *(_OWORD *)((char *)CachedWindowBackgroundTreatment + 116);
      }
      v54[1] = 1;
      goto LABEL_24;
    }
  }
  if ( !v19 )
  {
    v57 = _xmm;
    goto LABEL_24;
  }
  WindowBackgroundTreatmentInternal = CVisual::GetWindowBackgroundTreatmentInternal(v19);
  v17 = 0LL;
  v23 = (struct CCachedWindowBackgroundTreatment *)*((_QWORD *)WindowBackgroundTreatmentInternal + 8);
  v73 = v23;
  if ( !v23 )
  {
    v57 = *(_OWORD *)(*((_QWORD *)WindowBackgroundTreatmentInternal + 7) + 80LL);
    goto LABEL_24;
  }
  if ( !v15 )
  {
LABEL_23:
    v24 = *(_OWORD *)((char *)WindowBackgroundTreatmentInternal + 72);
    v4 = v23;
    v55 = v23;
    v25 = *((_QWORD *)WindowBackgroundTreatmentInternal + 11);
    *(_OWORD *)v56 = v24;
    v8 = *((float *)&v24 + 1);
    v6 = *(float *)&v24;
    *(_QWORD *)&v56[16] = v25;
LABEL_24:
    if ( v4 )
    {
      v26 = *(float *)&v56[8] - v6;
      v27 = *(float *)&v56[12] - v8;
      (*(void (__fastcall **)(struct IImageSource *, __int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, v16, v17);
      CMILMatrix::Transform2DBoundsHelper<0>(&v58, &v82, &v76);
      v28 = v77 - v8;
      v77 = 0.0;
      *((float *)&v82 + 1) = v28;
      *(float *)&v82 = v76 - v6;
      v29 = v78 - v6;
      v78 = 0.0;
      *((float *)&v82 + 3) = v79 - v8;
      *((float *)&v82 + 2) = v29;
      v76 = 1.0 / v26;
      *(_OWORD *)((char *)a3 + 84) = v82;
      v83 = LODWORD(v6) ^ _xmm;
      v66 = v59;
      v80 = 0.0 - (float)((float)(1.0 / v26) * 0.0);
      v82 = _xmm;
      v64 = v58;
      v65 = HIDWORD(v58);
      v79 = 1.0 / v27;
      v68 = v61;
      v67 = HIDWORD(v59);
      v69 = HIDWORD(v61);
      v84 = LODWORD(v8) ^ _xmm;
      v81 = 0.0 - (float)((float)(1.0 / v27) * 0.0);
      v30 = Matrix3x3::operator*(&v64, v71, &v82);
      v31 = Matrix3x3::operator*(v30, &v64, &v76);
      *((_OWORD *)a3 + 3) = *(_OWORD *)v31;
      *((_OWORD *)a3 + 4) = *(_OWORD *)(v31 + 16);
      *((_DWORD *)a3 + 20) = *(_DWORD *)(v31 + 32);
    }
    v32 = 0;
    goto LABEL_27;
  }
  v46 = *((_OWORD *)WindowBackgroundTreatmentInternal + 9);
  v47 = *((_OWORD *)WindowBackgroundTreatmentInternal + 10);
  v72 = *((_DWORD *)WindowBackgroundTreatmentInternal + 52);
  v71[0] = v46;
  v48 = *((_OWORD *)WindowBackgroundTreatmentInternal + 11);
  v71[1] = v47;
  v49 = *((_OWORD *)WindowBackgroundTreatmentInternal + 12);
  v71[2] = v48;
  v71[3] = v49;
  if ( CMILMatrix::Invert((CMILMatrix *)v71) )
  {
    v51 = *((_QWORD *)this + 816);
    v70 = v50;
    WorldTransform = CVisual::GetWorldTransform(CurrentVisual, v51, 3LL, &v64, v50, v50);
    v35 = WorldTransform;
    if ( WorldTransform < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, WorldTransform, 0xBEEu);
      goto LABEL_36;
    }
    CMILMatrix::Multiply((const struct CMILMatrix *)&v64, (const struct CMILMatrix *)v71, (struct CMILMatrix *)&v58);
    v23 = v73;
    goto LABEL_23;
  }
  v32 = 1;
LABEL_27:
  if ( v19 && !v32 && *(_BYTE *)(*((_QWORD *)this + 816) + 32LL) && !v54[1] )
  {
    v33 = CVisual::GetCachedWindowBackgroundTreatment(CurrentVisual);
    v73 = v33;
    if ( v33 )
    {
      v34 = CCachedWindowBackgroundTreatment::Update(
              (_DWORD)v33,
              (_DWORD)v4,
              (unsigned int)&v58,
              (unsigned int)v56,
              (__int64)&v57);
      v35 = v34;
      if ( v34 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0xC3Du);
        goto LABEL_36;
      }
    }
    else
    {
      v45 = CCachedWindowBackgroundTreatment::Create(
              (_DWORD)v4,
              (unsigned int)&v58,
              (unsigned int)v56,
              (unsigned int)&v57,
              (__int64)&v73);
      v35 = v45;
      if ( v45 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v45, 0xC46u);
        goto LABEL_36;
      }
      CVisual::SetCachedWindowBackgroundTreatment(CurrentVisual, v73);
    }
  }
  if ( v4 )
    goto LABEL_34;
  v7 = v63;
LABEL_55:
  v53 = CDrawingContext::SetEffectInputToTransparentBlack(this, v7, a3, &v55);
  v35 = v53;
  if ( v53 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v53, 0xC55u);
    v4 = v55;
    goto LABEL_36;
  }
  v4 = v55;
  *(_OWORD *)((char *)a3 + 24) = v57;
LABEL_34:
  v36 = CDrawListBitmap::FromImageSource(a3, v4, this, 0, 0);
  v35 = v36;
  if ( v36 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0xC5Au);
LABEL_36:
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v4);
  return v35;
}
