/*
 * XREFs of ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18014C8F8
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800186FC (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCa.c)
 *     ?GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18017BC40 (-GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180012220 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?GetParentTreeData@CVisual@@AEAAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z @ 0x1800133B0 (-GetParentTreeData@CVisual@@AEAAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x18001344C (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800134A0 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18001BF48 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18004EC28 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180057184 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18008A2F0 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008B108 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009339C (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x1800A9920 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ??$ReleaseInterfaceNoNULL@VIImageSource@@@@YAXPEAVIImageSource@@@Z @ 0x1800C4A14 (--$ReleaseInterfaceNoNULL@VIImageSource@@@@YAXPEAVIImageSource@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetCachedWindowBackgroundTreatment@CVisual@@QEBAPEAVCCachedWindowBackgroundTreatment@@XZ @ 0x18014C7D4 (-GetCachedWindowBackgroundTreatment@CVisual@@QEBAPEAVCCachedWindowBackgroundTreatment@@XZ.c)
 *     ?SetCachedWindowBackgroundTreatment@CVisual@@QEAAXPEAVCCachedWindowBackgroundTreatment@@@Z @ 0x18014E188 (-SetCachedWindowBackgroundTreatment@CVisual@@QEAAXPEAVCCachedWindowBackgroundTreatment@@@Z.c)
 *     ?SetEffectInputToTransparentBlack@CDrawingContext@@AEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@PEAPEAVIImageSource@@@Z @ 0x18014E1C8 (-SetEffectInputToTransparentBlack@CDrawingContext@@AEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@PEAPEAV.c)
 *     ?Create@CCachedWindowBackgroundTreatment@@SAJPEAVIImageSource@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@PEAPEAV1@@Z @ 0x18017837C (-Create@CCachedWindowBackgroundTreatment@@SAJPEAVIImageSource@@AEBVCMILMatrix@@AEBV-$TMil3DRect@.c)
 *     ?Update@CCachedWindowBackgroundTreatment@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x1801787B0 (-Update@CCachedWindowBackgroundTreatment@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@AEBV-$TMil3DRec.c)
 */

__int64 __fastcall CDrawingContext::GetWindowBackgroundTreatmentEffectInput(
        CDrawingContext *this,
        const struct D2D_SIZE_F *a2,
        struct EffectInput *a3)
{
  unsigned int v3; // edi
  struct EffectInput *v4; // r14
  const struct D2D_SIZE_F *v5; // rsi
  float v7; // xmm8_4
  struct IImageSource *v8; // rbx
  float v9; // xmm9_4
  FLOAT height; // xmm1_4
  const struct CMILMatrix *TopByReference; // rax
  float v12; // xmm4_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  char v16; // r12
  struct CVisual *CurrentVisual; // r15
  CVisual *v18; // rsi
  struct _LIST_ENTRY *TreeData; // rax
  struct CCachedWindowBackgroundTreatment *CachedWindowBackgroundTreatment; // rax
  __int64 v21; // xmm1_8
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  int v26; // eax
  __int64 v27; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v28; // r8
  struct CWindowBackgroundTreatment *WindowBackgroundTreatmentInternal; // r14
  struct CCachedWindowBackgroundTreatment *v30; // rax
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int64 v35; // rdx
  int WorldTransform; // eax
  __int128 v37; // xmm0
  __int64 v38; // xmm1_8
  char v39; // al
  float v40; // xmm6_4
  float v41; // xmm7_4
  float v42; // xmm1_4
  float v43; // xmm0_4
  float *v44; // rax
  float *v45; // rax
  struct CCachedWindowBackgroundTreatment *v46; // rax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  bool v51[8]; // [rsp+38h] [rbp-D0h] BYREF
  struct IImageSource *v52; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v53[24]; // [rsp+48h] [rbp-C0h] BYREF
  struct EffectInput *v54; // [rsp+60h] [rbp-A8h]
  __int128 v55; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v56; // [rsp+78h] [rbp-90h] BYREF
  __int128 v57; // [rsp+88h] [rbp-80h]
  __int128 v58; // [rsp+98h] [rbp-70h]
  __int128 v59; // [rsp+A8h] [rbp-60h]
  int v60; // [rsp+B8h] [rbp-50h]
  const struct D2D_SIZE_F *v61; // [rsp+C8h] [rbp-40h]
  __int64 v62; // [rsp+D8h] [rbp-30h] BYREF
  int v63; // [rsp+E0h] [rbp-28h]
  __int64 v64; // [rsp+E4h] [rbp-24h]
  int v65; // [rsp+ECh] [rbp-1Ch]
  __int64 v66; // [rsp+F0h] [rbp-18h]
  int v67; // [rsp+F8h] [rbp-10h]
  int v68; // [rsp+118h] [rbp+10h]
  _OWORD v69[4]; // [rsp+128h] [rbp+20h] BYREF
  int v70; // [rsp+168h] [rbp+60h]
  struct CCachedWindowBackgroundTreatment *v71; // [rsp+178h] [rbp+70h] BYREF
  float v72; // [rsp+180h] [rbp+78h]
  float v73; // [rsp+184h] [rbp+7Ch]
  float v74; // [rsp+188h] [rbp+80h] BYREF
  float v75; // [rsp+18Ch] [rbp+84h]
  float v76; // [rsp+190h] [rbp+88h]
  float v77; // [rsp+194h] [rbp+8Ch]
  float v78; // [rsp+198h] [rbp+90h]
  float v79; // [rsp+19Ch] [rbp+94h]
  __int128 v80; // [rsp+1A0h] [rbp+98h] BYREF
  int v81; // [rsp+1B0h] [rbp+A8h]
  int v82; // [rsp+1B4h] [rbp+ACh]

  v3 = 0;
  v4 = a3;
  v5 = a2;
  v7 = *(float *)&TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v8 = 0LL;
  v9 = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty
       + 1);
  v70 = 0;
  v56 = _xmm;
  v54 = a3;
  v61 = a2;
  *(_QWORD *)v53 = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *(_OWORD *)&v53[8] = *(__int128 *)((char *)&TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty
                                   + 8);
  v51[2] = 0;
  v55 = 0LL;
  LOWORD(v60) = 32085;
  v57 = _xmm;
  v52 = 0LL;
  v58 = _xmm;
  v59 = _xmm;
  memset_0(a3, 0, 0x58uLL);
  *(_QWORD *)&v80 = 0LL;
  *((_BYTE *)v4 + 28) = 1;
  *((_WORD *)v4 + 43) = 257;
  height = v5->height;
  DWORD2(v80) = LODWORD(v5->width);
  *((FLOAT *)&v80 + 3) = height;
  TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 472));
  CMILMatrix::Transform2DBoundsHelper<0>((__int64)TopByReference, (__int64)&v80, (float *)&v71);
  CScopedClipStack::GetTopGpuClipInScope((__int64 *)this + 114, 1, (__int64)&v74);
  v12 = v74;
  v13 = v75;
  v14 = v76;
  v15 = v77;
  if ( *(float *)&v71 > v74 )
    v12 = *(float *)&v71;
  if ( *((float *)&v71 + 1) > v75 )
    v13 = *((float *)&v71 + 1);
  if ( v76 > v72 )
    v14 = v72;
  if ( v77 > v73 )
    v15 = v73;
  if ( v14 <= v12 || v15 <= v13 )
    goto LABEL_52;
  v16 = 0;
  v51[1] = 0;
  CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)this + 8));
  v18 = CurrentVisual;
  if ( !CurrentVisual )
    goto LABEL_21;
  while ( (*(_DWORD *)(*((_QWORD *)v18 + 26) + 4LL) & 0x8000) == 0 )
  {
    CVisual::CalcEffectiveTransform((__int64)v18, 5, 0LL, &v51[2], (CMILMatrix *)v69, 0LL);
    CMILMatrix::Multiply((const struct CMILMatrix *)&v56, (const struct CMILMatrix *)v69, (struct CMILMatrix *)&v56);
    TreeData = CVisual::FindTreeData(v18, *((const struct CVisualTree **)this + 808));
    if ( TreeData
      && CVisual::GetParentTreeData(
           v18,
           *((const struct CVisualTree **)this + 808),
           (struct CTreeData *)TreeData,
           &v51[3])
      && v51[3] )
    {
      v16 = 1;
    }
    v18 = (CVisual *)*((_QWORD *)v18 + 10);
    if ( !v18 )
      goto LABEL_21;
  }
  if ( !v18 || !*(_BYTE *)(*((_QWORD *)this + 808) + 32LL) )
  {
LABEL_21:
    if ( (*(_DWORD *)(*((_QWORD *)CurrentVisual + 26) + 4LL) & 0x4000) != 0 )
    {
      CachedWindowBackgroundTreatment = CVisual::GetCachedWindowBackgroundTreatment(CurrentVisual);
      v8 = (struct IImageSource *)*((_QWORD *)CachedWindowBackgroundTreatment + 2);
      v52 = v8;
      if ( v8 )
      {
        v21 = *(_QWORD *)((char *)CachedWindowBackgroundTreatment + 108);
        *(_OWORD *)v53 = *(_OWORD *)((char *)CachedWindowBackgroundTreatment + 92);
        v22 = *(_OWORD *)((char *)CachedWindowBackgroundTreatment + 24);
        v9 = *(float *)&v53[4];
        v7 = *(float *)v53;
        *(_QWORD *)&v53[16] = v21;
        v23 = *(_OWORD *)((char *)CachedWindowBackgroundTreatment + 40);
        v56 = v22;
        v24 = *(_OWORD *)((char *)CachedWindowBackgroundTreatment + 56);
        v57 = v23;
        v25 = *(_OWORD *)((char *)CachedWindowBackgroundTreatment + 72);
        v26 = *((_DWORD *)CachedWindowBackgroundTreatment + 22);
        v58 = v24;
        v59 = v25;
        v60 = v26;
      }
      else
      {
        v55 = *(_OWORD *)((char *)CachedWindowBackgroundTreatment + 116);
      }
      v51[1] = 1;
LABEL_38:
      if ( v8 )
      {
        v40 = *(float *)&v53[8] - v7;
        v41 = *(float *)&v53[12] - v9;
        (*(void (__fastcall **)(struct IImageSource *))(*(_QWORD *)v8 + 8LL))(v8);
        CMILMatrix::Transform2DBoundsHelper<0>((__int64)&v56, (__int64)&v80, &v74);
        v42 = v75 - v9;
        v75 = 0.0;
        *((float *)&v80 + 1) = v42;
        *(float *)&v80 = v74 - v7;
        v43 = v76 - v7;
        v76 = 0.0;
        *((float *)&v80 + 3) = v77 - v9;
        *((float *)&v80 + 2) = v43;
        v74 = 1.0 / v40;
        *(_OWORD *)((char *)v4 + 68) = v80;
        v81 = LODWORD(v7) ^ _xmm;
        v64 = v57;
        v78 = 0.0 - (float)((float)(1.0 / v40) * 0.0);
        v80 = _xmm;
        v62 = v56;
        v63 = HIDWORD(v56);
        v77 = 1.0 / v41;
        v66 = v59;
        v65 = HIDWORD(v57);
        v67 = HIDWORD(v59);
        v82 = LODWORD(v9) ^ _xmm;
        v79 = 0.0 - (float)((float)(1.0 / v41) * 0.0);
        v44 = Matrix3x3::operator*((float *)&v62, (float *)v69, (float *)&v80);
        v45 = Matrix3x3::operator*(v44, (float *)&v62, &v74);
        *((_OWORD *)v4 + 2) = *(_OWORD *)v45;
        *((_OWORD *)v4 + 3) = *((_OWORD *)v45 + 1);
        *((float *)v4 + 16) = v45[8];
      }
      v39 = 0;
      goto LABEL_41;
    }
  }
  if ( !v18 )
  {
    v55 = _xmm;
    goto LABEL_38;
  }
  WindowBackgroundTreatmentInternal = CVisual::GetWindowBackgroundTreatmentInternal(v18);
  v30 = (struct CCachedWindowBackgroundTreatment *)*((_QWORD *)WindowBackgroundTreatmentInternal + 8);
  v71 = v30;
  if ( !v30 )
  {
    v55 = *(_OWORD *)(*((_QWORD *)WindowBackgroundTreatmentInternal + 7) + 80LL);
    goto LABEL_36;
  }
  if ( !v16 )
  {
LABEL_32:
    v37 = *(_OWORD *)((char *)WindowBackgroundTreatmentInternal + 72);
    v8 = v30;
    v52 = v30;
    v38 = *((_QWORD *)WindowBackgroundTreatmentInternal + 11);
    *(_OWORD *)v53 = v37;
    v9 = *((float *)&v37 + 1);
    v7 = *(float *)&v37;
    *(_QWORD *)&v53[16] = v38;
LABEL_36:
    v4 = v54;
    goto LABEL_38;
  }
  v31 = *(_OWORD *)((char *)WindowBackgroundTreatmentInternal + 120);
  v32 = *(_OWORD *)((char *)WindowBackgroundTreatmentInternal + 136);
  v70 = *((_DWORD *)WindowBackgroundTreatmentInternal + 46);
  v69[0] = v31;
  v33 = *(_OWORD *)((char *)WindowBackgroundTreatmentInternal + 152);
  v69[1] = v32;
  v34 = *(_OWORD *)((char *)WindowBackgroundTreatmentInternal + 168);
  v69[2] = v33;
  v69[3] = v34;
  if ( !CMILMatrix::Invert((CMILMatrix *)v69, v27, v28) )
  {
    v39 = 1;
LABEL_41:
    if ( v18 && !v39 && *(_BYTE *)(*((_QWORD *)this + 808) + 32LL) && !v51[1] )
    {
      v46 = CVisual::GetCachedWindowBackgroundTreatment(CurrentVisual);
      v71 = v46;
      if ( v46 )
      {
        v47 = CCachedWindowBackgroundTreatment::Update(
                (_DWORD)v46,
                (_DWORD)v8,
                (unsigned int)&v56,
                (unsigned int)v53,
                (__int64)&v55);
        v3 = v47;
        if ( v47 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v47, 0xD96u);
          goto LABEL_57;
        }
      }
      else
      {
        v48 = CCachedWindowBackgroundTreatment::Create(
                (_DWORD)v8,
                (unsigned int)&v56,
                (unsigned int)v53,
                (unsigned int)&v55,
                (__int64)&v71);
        v3 = v48;
        if ( v48 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v48, 0xD9Fu);
          goto LABEL_57;
        }
        CVisual::SetCachedWindowBackgroundTreatment(CurrentVisual, v71);
      }
    }
    v4 = v54;
    if ( v8 )
    {
LABEL_54:
      *(_QWORD *)v4 = v8;
      v8 = 0LL;
      goto LABEL_57;
    }
    v5 = v61;
LABEL_52:
    v49 = CDrawingContext::SetEffectInputToTransparentBlack(this, v5, v4, &v52);
    v3 = v49;
    if ( v49 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v49, 0xDAEu);
      v8 = v52;
      goto LABEL_57;
    }
    v8 = v52;
    *(_OWORD *)((char *)v4 + 8) = v55;
    goto LABEL_54;
  }
  v35 = *((_QWORD *)this + 808);
  v68 = 0;
  WorldTransform = CVisual::GetWorldTransform(CurrentVisual, v35, 3, (__int64)&v62, 0LL, 0LL);
  v3 = WorldTransform;
  if ( WorldTransform >= 0 )
  {
    CMILMatrix::Multiply((const struct CMILMatrix *)&v62, (const struct CMILMatrix *)v69, (struct CMILMatrix *)&v56);
    v30 = v71;
    goto LABEL_32;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, WorldTransform, 0xD46u);
LABEL_57:
  ReleaseInterfaceNoNULL<IImageSource>(v8);
  return v3;
}
