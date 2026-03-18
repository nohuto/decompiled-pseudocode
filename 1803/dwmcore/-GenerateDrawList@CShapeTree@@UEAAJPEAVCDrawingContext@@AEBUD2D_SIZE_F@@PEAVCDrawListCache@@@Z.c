/*
 * XREFs of ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C1450
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180063000 (-GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180066930 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180067310 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18006BC10 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18006CEC8 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x180077024 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ?InternalRelease@?$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E20 (-InternalRelease@-$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x18008A9D4 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18008CC14 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@PEBVCDrawListBrush@@PEAVCRenderingEffectFactory@@@Z @ 0x18008CC4C (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@PEBVCDrawListBrush@@P.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18008CF94 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18008DA30 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Update@CDrawListCache@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18009BE84 (-Update@CDrawListCache@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800A36D8 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@_ea_1800A36D8.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x1800A3B38 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A4FF0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x1800AD808 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800AD960 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x1800B303C (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ?InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800B3C78 (-InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800BE870 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800C0A50 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C244C (-InternalRelease@-$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?ComputePartialIntermediate@CShapeTree@@CA_NAEBVCMILMatrix@@AEBUD2D_VECTOR_2F@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2PEAV4@@Z @ 0x1801C0FFC (-ComputePartialIntermediate@CShapeTree@@CA_NAEBVCMILMatrix@@AEBUD2D_VECTOR_2F@@AEBV-$TMilRect_@M.c)
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801C129C (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 */

__int64 __fastcall CShapeTree::GenerateDrawList(
        CShapeTree *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  unsigned int v8; // ebx
  float v9; // xmm9_4
  float v10; // xmm6_4
  float width; // xmm0_4
  float height; // xmm2_4
  float v13; // xmm10_4
  float v14; // xmm4_4
  float v15; // xmm1_4
  float v16; // xmm8_4
  float v17; // xmm3_4
  float v18; // xmm7_4
  unsigned __int8 v19; // r15
  __int64 v20; // rcx
  float v21; // xmm11_4
  float v22; // xmm12_4
  float v23; // xmm13_4
  float v24; // xmm8_4
  float v25; // xmm7_4
  void (__fastcall *v26)(__int64, int *); // rax
  float v27; // xmm10_4
  float v28; // xmm9_4
  int v29; // eax
  float v30; // xmm3_4
  float v31; // xmm1_4
  float v32; // xmm4_4
  float v33; // xmm0_4
  float v34; // xmm10_4
  float v35; // xmm9_4
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  CDrawingContext *v40; // rcx
  int v41; // eax
  int v42; // eax
  CSurfaceDrawListBrush *v43; // rcx
  CSurfaceDrawListBrush *v44; // rax
  __int64 v45; // xmm1_8
  __int64 v46; // rcx
  int DrawList; // eax
  int v48; // eax
  unsigned int v50; // [rsp+28h] [rbp-E0h]
  struct IRenderTarget *v51[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v52; // [rsp+48h] [rbp-C0h] BYREF
  char v53; // [rsp+4Ah] [rbp-BEh]
  CSurfaceDrawListBrush *v54; // [rsp+58h] [rbp-B0h] BYREF
  CSurfaceDrawListBrush *v55[2]; // [rsp+60h] [rbp-A8h] BYREF
  char v56; // [rsp+70h] [rbp-98h]
  _BYTE v57[64]; // [rsp+78h] [rbp-90h] BYREF
  int v58; // [rsp+B8h] [rbp-50h]
  struct CRenderTargetImageSource *v59; // [rsp+C8h] [rbp-40h] BYREF
  float v60; // [rsp+D0h] [rbp-38h]
  float v61; // [rsp+D4h] [rbp-34h]
  struct D2D_SIZE_F v62; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v63; // [rsp+E0h] [rbp-28h] BYREF
  char v64; // [rsp+E8h] [rbp-20h]
  __int128 v65; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v66; // [rsp+100h] [rbp-8h] BYREF
  __int64 v67; // [rsp+110h] [rbp+8h]
  float v68; // [rsp+118h] [rbp+10h] BYREF
  float v69; // [rsp+11Ch] [rbp+14h]
  float v70; // [rsp+120h] [rbp+18h]
  float v71; // [rsp+124h] [rbp+1Ch]
  int v72; // [rsp+128h] [rbp+20h] BYREF
  int v73; // [rsp+12Ch] [rbp+24h]
  int v74; // [rsp+130h] [rbp+28h]
  int v75; // [rsp+134h] [rbp+2Ch]
  struct CDrawingContext *v76; // [rsp+138h] [rbp+30h] BYREF
  int v77; // [rsp+140h] [rbp+38h]
  int v78; // [rsp+144h] [rbp+3Ch]
  int v79; // [rsp+148h] [rbp+40h]
  __int128 v80; // [rsp+14Ch] [rbp+44h]
  __int64 v81; // [rsp+160h] [rbp+58h]
  __int64 v82; // [rsp+168h] [rbp+60h]
  __int64 v83; // [rsp+170h] [rbp+68h]
  __int64 v84; // [rsp+178h] [rbp+70h]
  int v85; // [rsp+180h] [rbp+78h]
  __int16 v86; // [rsp+184h] [rbp+7Ch]
  char v87; // [rsp+186h] [rbp+7Eh]
  CMILRefCountBase *v88[310]; // [rsp+188h] [rbp+80h] BYREF

  v8 = 0;
  v65 = *((_OWORD *)this + 4);
  if ( *((_BYTE *)this + 81) )
  {
    v9 = *(float *)&v65;
    v10 = 0.0;
    width = a3->width;
    height = a3->height;
    if ( *(float *)&v65 < 0.0 )
    {
      v9 = 0.0;
      LODWORD(v65) = 0;
    }
    v13 = *((float *)&v65 + 1);
    v14 = *((float *)&v65 + 1);
    if ( *((float *)&v65 + 1) < 0.0 )
    {
      v13 = 0.0;
      v14 = 0.0;
      DWORD1(v65) = 0;
    }
    v15 = *((float *)&v65 + 2);
    v16 = *((float *)&v65 + 2);
    v17 = *((float *)&v65 + 2);
    if ( *((float *)&v65 + 2) > width )
    {
      *((float *)&v65 + 2) = width;
      v15 = width;
      v16 = width;
      v17 = width;
    }
    v18 = *((float *)&v65 + 3);
    if ( *((float *)&v65 + 3) > height )
    {
      *((float *)&v65 + 3) = height;
      v18 = height;
      v16 = v17;
    }
    if ( v15 > v9 && v18 > v14 )
    {
      v58 = 0;
      v19 = 0;
      CMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 480), (struct CMILMatrix *)v57);
      CMILMatrix::Get2DScaleDimensions((CMILMatrix *)v57, (float *)v51, (float *)v51 + 1);
      v20 = *((_QWORD *)a2 + 45);
      v69 = 0.0;
      v21 = 0.0;
      v22 = 0.0;
      v68 = 0.0;
      v23 = 0.0;
      v24 = (float)(v16 - v9) * *(float *)v51;
      v25 = (float)(v18 - v13) * *((float *)v51 + 1);
      v26 = *(void (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 56LL);
      v70 = v24;
      v27 = v24;
      v59 = 0LL;
      v71 = v25;
      v28 = v25;
      v60 = v24;
      v61 = v25;
      v26(v20, &v72);
      v29 = v74 - v72;
      if ( v74 - v72 <= v75 - v73 )
        v29 = v75 - v73;
      if ( fmaxf(v24 - 0.0, v25 - 0.0) <= (float)v29 )
      {
LABEL_28:
        v34 = v27 - v22;
        if ( v34 < 1.0 )
          return v8;
        v35 = v28 - v23;
        if ( v35 < 1.0 )
          return v8;
        v62.width = v34;
        v62.height = v35;
        v51[0] = 0LL;
        v59 = 0LL;
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v51);
        DWORD2(v66) = 28;
        *(_QWORD *)&v66 = "DWM ShapeVisual intermediate";
        v36 = CDrawingContext::PushOffScreenRenderingLayer(
                (struct IRenderTarget **)a2,
                (const struct CResourceTag *)&v66,
                &v62,
                v19,
                v51);
        v8 = v36;
        if ( v36 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0xCAu);
          goto LABEL_61;
        }
        Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(&v59);
        v37 = CRenderTargetImageSource::Create(v51[0], 1, &v59);
        if ( v37 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0xCFu);
        }
        else
        {
          CMILMatrix::InferAffineMatrix((__int64)v57, (float *)&v65, &v68);
          v38 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v57, 0, 1);
          if ( v38 >= 0 )
          {
            v39 = CShapeTree::DrawShapes(this, a2, a3);
            if ( v39 >= 0 )
            {
              CDrawingContext::PopTransformInternal(a2, 1);
              v41 = CDrawingContext::PopLayer(v40);
              v8 = v41;
              if ( v41 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, 0xDBu);
                goto LABEL_61;
              }
              v77 = 0;
              v78 = 0;
              v80 = _xmm;
              v76 = a2;
              v79 = 0;
              v81 = 0LL;
              v82 = 0LL;
              v83 = 0LL;
              v84 = 0LL;
              v85 = 0;
              v86 = 256;
              v87 = 0;
              CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v88);
              *(_QWORD *)&v66 = __PAIR64__(LODWORD(v10), LODWORD(v21));
              *(_OWORD *)v55 = 0LL;
              *((_QWORD *)&v66 + 1) = __PAIR64__(LODWORD(v25), LODWORD(v24));
              v56 = 0;
              v42 = CDrawListBitmap::FromImageSource(v55, v59, a2, 0);
              v8 = v42;
              if ( v42 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v42, 0xE3u);
LABEL_46:
                Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v55[1]);
                Microsoft::WRL::ComPtr<IImageSource>::InternalRelease(v55);
                CDrawListEntryBuilder::~CDrawListEntryBuilder(v88);
                CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v76);
LABEL_61:
                Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(&v59);
                Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v51);
                return v8;
              }
              v52 = 257;
              v54 = 0LL;
              v62 = (struct D2D_SIZE_F)&v54;
              v53 = 1;
              v63 = 0LL;
              v64 = 1;
              v8 = CSurfaceDrawListBrush::CreateWithContentRect((__int64 *)v55, &v52, &v66, &v63);
              if ( v64 )
              {
                v43 = **(CSurfaceDrawListBrush ***)&v62;
                **(_QWORD **)&v62 = v63;
                if ( v43 )
                  CSurfaceDrawListBrush::`vector deleting destructor'(v43, 1);
              }
              if ( (v8 & 0x80000000) != 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xEAu);
              }
              else
              {
                MILMatrix3x2::InferAffineMatrix((__int64)&v66, &v68, (float *)&v65);
                v44 = v54;
                v45 = v67;
                *(_OWORD *)((char *)v54 + 8) = v66;
                *((_QWORD *)v44 + 3) = v45;
                v62 = (struct D2D_SIZE_F)v54;
                v54 = 0LL;
                CBrushDrawListGenerator::AttachInput((__int64)&v76, 0, (CSurfaceDrawListBrush **)&v62);
                if ( v62 )
                  std::default_delete<CDrawListBrush>::operator()(v46, *(CSurfaceDrawListBrush **)&v62);
                v79 = (v19 + 1) << 7;
                DrawList = CBrushDrawListGenerator::GenerateDrawList((CBrushDrawListGenerator *)&v76, v88, 0LL, 0LL);
                v8 = DrawList;
                if ( DrawList < 0 )
                {
                  v50 = 252;
                }
                else
                {
                  DrawList = CDrawListCache::Update(a4, a2, (struct CDrawListEntryBuilder *)v88);
                  v8 = DrawList;
                  if ( DrawList >= 0 )
                    goto LABEL_44;
                  v50 = 253;
                }
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DrawList, v50);
              }
LABEL_44:
              if ( v54 )
                CSurfaceDrawListBrush::`vector deleting destructor'(v54, 1);
              goto LABEL_46;
            }
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, 0xD5u);
            Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(&v59);
            Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v51);
            CDrawingContext::PopTransformInternal(a2, 1);
            goto LABEL_58;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0xD2u);
        }
        Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(&v59);
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v51);
LABEL_58:
        v48 = CDrawingContext::PopLayer(a2);
        v8 = v48;
        if ( v48 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v48, 0x109u);
        return v8;
      }
      v19 = 1;
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v57, (__int64)&v65, (float *)&v62);
      CScopedClipStack::GetTopGpuClipInScope((__int64 *)a2 + 126, 1, (__int64)&v66);
      v30 = v62.width;
      if ( *(float *)&v66 > v62.width )
      {
        LODWORD(v62.width) = v66;
        v30 = *(float *)&v66;
      }
      v31 = v62.height;
      if ( *((float *)&v66 + 1) > v62.height )
      {
        v62.height = *((FLOAT *)&v66 + 1);
        v31 = *((float *)&v66 + 1);
      }
      v32 = *(float *)&v63;
      if ( *(float *)&v63 > *((float *)&v66 + 2) )
      {
        LODWORD(v63) = DWORD2(v66);
        v32 = *((float *)&v66 + 2);
      }
      v33 = *((float *)&v63 + 1);
      if ( *((float *)&v63 + 1) > *((float *)&v66 + 3) )
      {
        HIDWORD(v63) = HIDWORD(v66);
        v33 = *((float *)&v66 + 3);
      }
      if ( v32 <= v30 || v33 <= v31 )
      {
        v63 = 0LL;
        v62.height = 0.0;
        v62.width = 0.0;
      }
      if ( CShapeTree::ComputePartialIntermediate(
             (struct CMILMatrix *)v57,
             (__int64)v51,
             (__int64)&v65,
             (int *)&v62,
             (float *)&v59) )
      {
        v23 = *((float *)&v59 + 1);
        v22 = *(float *)&v59;
        v28 = v61;
        v27 = v60;
        v25 = v25 + COERCE_FLOAT(HIDWORD(v59) ^ _xmm);
        v21 = COERCE_FLOAT((unsigned int)v59 ^ _xmm) + 0.0;
        v24 = v24 + COERCE_FLOAT((unsigned int)v59 ^ _xmm);
        v71 = v25;
        v69 = COERCE_FLOAT(HIDWORD(v59) ^ _xmm) + 0.0;
        v10 = v69;
        v68 = v21;
        v70 = v24;
        goto LABEL_28;
      }
    }
  }
  return v8;
}
