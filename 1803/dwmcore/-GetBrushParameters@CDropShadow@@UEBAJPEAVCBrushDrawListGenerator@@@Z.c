/*
 * XREFs of ?GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180189B60
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@Insets@@SA_NAEBV1@@Z @ 0x180002D68 (-IsEmpty@Insets@@SA_NAEBV1@@Z.c)
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x18000405C (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 *     ??_GCNineGridDrawListBrush@@UEAAPEAXI@Z @ 0x180004E70 (--_GCNineGridDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180064E70 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18006E480 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x180077024 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ?InternalRelease@?$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E20 (-InternalRelease@-$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x18008A9D4 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x18008B9E0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x18008CBBC (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18008CF94 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18008DA30 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x1800B303C (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x1800C1BB0 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x1800C38EC (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800C469C (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?CanUseVisualBrushAsMaskBrush@CDropShadow@@AEBA_NXZ @ 0x180188F08 (-CanUseVisualBrushAsMaskBrush@CDropShadow@@AEBA_NXZ.c)
 *     ?IsRectangular@CDropShadow@@AEBA_NPEAVCVisual@@@Z @ 0x18018A71C (-IsRectangular@CDropShadow@@AEBA_NPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CDropShadow::GetBrushParameters(CDropShadow *this, struct CBrushDrawListGenerator *a2)
{
  float v2; // xmm6_4
  float v4; // xmm7_4
  struct CVisual *v6; // r14
  char *v7; // r15
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rax
  _QWORD *i; // rcx
  _QWORD *v13; // rdx
  float *v14; // rcx
  float v15; // xmm0_4
  float v16; // xmm3_4
  float v17; // xmm2_4
  float v18; // xmm3_4
  float v19; // xmm0_4
  float v20; // xmm3_4
  float v21; // xmm1_4
  float v22; // xmm7_4
  int v23; // ebx
  CGeometryOnlyDrawListBrush *v24; // rcx
  CSurfaceDrawListBrush *v25; // rax
  struct D2D_RECT_F v26; // xmm0
  CNineGridDrawListBrush *v27; // rcx
  __int64 v28; // rcx
  float v29; // xmm2_4
  float v30; // xmm2_4
  int v31; // xmm1_4
  __int128 v32; // xmm0
  __int64 v33; // rcx
  int v34; // eax
  int v35; // eax
  struct D2D_MATRIX_3X2_F *v36; // r9
  CSurfaceDrawListBrush *v37; // rcx
  CSurfaceDrawListBrush *v38; // r11
  __int64 v39; // xmm1_8
  float v40; // xmm4_4
  float v41; // xmm4_4
  __int64 v42; // rax
  float v43; // xmm1_4
  CNineGridDrawListBrush *v44; // rcx
  __int64 v45; // rcx
  CSurfaceDrawListBrush *v46; // rax
  __int64 v47; // rcx
  CSurfaceDrawListBrush *v49; // [rsp+38h] [rbp-89h] BYREF
  unsigned __int8 v50[8]; // [rsp+40h] [rbp-81h] BYREF
  __int128 v51; // [rsp+48h] [rbp-79h] BYREF
  CNineGridDrawListBrush *v52; // [rsp+58h] [rbp-69h] BYREF
  struct CGeometryOnlyDrawListBrush *v53[2]; // [rsp+60h] [rbp-61h] BYREF
  char v54; // [rsp+70h] [rbp-51h]
  __int16 v55; // [rsp+78h] [rbp-49h] BYREF
  char v56; // [rsp+7Ah] [rbp-47h]
  struct D2D_RECT_F v57; // [rsp+88h] [rbp-39h] BYREF
  __int64 v58; // [rsp+98h] [rbp-29h]
  struct D2D_RECT_F v59; // [rsp+A0h] [rbp-21h] BYREF
  float v60; // [rsp+B0h] [rbp-11h] BYREF
  float v61; // [rsp+B4h] [rbp-Dh]
  float v62; // [rsp+B8h] [rbp-9h]
  float v63; // [rsp+BCh] [rbp-5h]

  v2 = *((float *)a2 + 2);
  v4 = *((float *)a2 + 3);
  v59.left = 0.0;
  v59.top = 0.0;
  v59.right = v2;
  v59.bottom = v4;
  CBrushDrawListGenerator::Reset(a2);
  *(_QWORD *)v50 = CDrawingContext::GetCurrentVisual((CDrawingContext *)(*(_QWORD *)a2 + 8LL));
  v6 = *(struct CVisual **)v50;
  v7 = (char *)this + 192;
  if ( CDropShadow::CanUseVisualBrushAsMaskBrush(this) )
  {
    v8 = std::_Hash_bytes(v50, 8uLL);
    v9 = *((_QWORD *)this + 12);
    v10 = 2 * (*((_QWORD *)this + 15) & v8);
    v11 = (_QWORD *)*((_QWORD *)this + 10);
    for ( i = *(_QWORD **)(v9 + 8 * v10); ; i = (_QWORD *)*i )
    {
      v13 = *(_QWORD **)(v9 + 8 * v10) == v11 ? (_QWORD *)*((_QWORD *)this + 10) : **(_QWORD ***)(v9 + 8 * v10 + 8);
      if ( i == v13 )
        break;
      if ( (struct CVisual *)i[2] == v6 )
      {
        v11 = i;
        break;
      }
    }
    if ( v11 != *((_QWORD **)this + 10) )
      v7 = (char *)(v11 + 3);
  }
  if ( IsEmpty((const struct D2D_RECT_F *)((char *)this + 172))
    || (v15 = *((float *)this + 38),
        v16 = *((float *)this + 40) - v15,
        (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 42)) & _xmm) >= 0.0000011920929) )
  {
LABEL_30:
    v29 = *((float *)this + 39);
    if ( v29 >= 1.0 )
    {
      v32 = *(_OWORD *)((char *)this + 136);
    }
    else
    {
      v30 = v29 * *((float *)this + 37);
      v31 = *((_DWORD *)this + 35);
      LODWORD(v51) = *((_DWORD *)this + 34);
      DWORD2(v51) = *((_DWORD *)this + 36);
      *((float *)&v51 + 3) = v30;
      DWORD1(v51) = v31;
      v32 = v51;
    }
    *(_OWORD *)((char *)a2 + 20) = v32;
    *((_BYTE *)a2 + 76) = 0;
    v33 = *((_QWORD *)v7 + 2);
    v54 = 0;
    *(_OWORD *)v53 = 0LL;
    v34 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, float *))(*(_QWORD *)v33 + 120LL))(v33, 0LL, 0LL, &v60);
    v23 = v34;
    if ( v34 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0x174u);
    }
    else
    {
      v35 = CDrawListBitmap::FromImageSource(
              v53,
              *((struct IImageSource **)v7 + 2),
              *(const struct CDrawingContext **)a2,
              0);
      v23 = v35;
      if ( v35 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0x175u);
      }
      else
      {
        *(_QWORD *)&v51 = 0LL;
        v55 = SamplerMode::k_ClampClampLinear;
        *((float *)&v51 + 2) = v62 - v60;
        v56 = 1;
        *((float *)&v51 + 3) = v63 - v61;
        v49 = 0LL;
        *(_QWORD *)&v57.left = &v49;
        *(_QWORD *)&v57.right = 0LL;
        LOBYTE(v58) = 1;
        v23 = CSurfaceDrawListBrush::CreateWithContentRect((__int64 *)v53, &v55, &v51, &v57.right);
        if ( (_BYTE)v58 )
        {
          v37 = **(CSurfaceDrawListBrush ***)&v57.left;
          **(_QWORD **)&v57.left = *(_QWORD *)&v57.right;
          if ( v37 )
            CSurfaceDrawListBrush::`vector deleting destructor'(v37, 1);
        }
        if ( v23 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x17Cu);
LABEL_70:
          if ( v49 )
            CSurfaceDrawListBrush::`vector deleting destructor'(v49, 1);
          goto LABEL_75;
        }
        D2DMatrixHelper::ComputeRectangleTransform((const struct D2D_RECT_F *)v49 + 5, &v59, &v57, v36);
        v38 = v49;
        v39 = v58;
        *(struct D2D_RECT_F *)((char *)v49 + 8) = v57;
        *((_QWORD *)v38 + 3) = v39;
        if ( CDropShadow::IsRectangular(this, v6) )
        {
          v51 = 0LL;
          if ( this == CDropShadow::s_pFastShadow )
            v40 = FLOAT_32_0;
          else
            v40 = *((float *)this + 38) + *((float *)this + 38);
          if ( (float)(v62 - v60) > (float)(v40 + v40) )
          {
            *(float *)&v51 = v40;
            *((float *)&v51 + 2) = v40;
          }
          if ( (float)(v63 - v61) > (float)(v40 + v40) )
          {
            *((float *)&v51 + 1) = v40;
            *((float *)&v51 + 3) = v40;
          }
          if ( !Insets::IsEmpty((const struct Insets *)&v51) )
          {
            v42 = 0LL;
            v43 = (float)(*((float *)this + 38) + *((float *)this + 38)) / v41;
            do
            {
              *(float *)((char *)&v59.left + v42) = v43 * *(float *)((char *)&v51 + v42);
              v42 += 4LL;
            }
            while ( v42 < 16 );
            *(_QWORD *)v50 = v49;
            v52 = 0LL;
            *(_QWORD *)&v57.left = &v52;
            v49 = 0LL;
            *(_QWORD *)&v57.right = 0LL;
            LOBYTE(v58) = 1;
            v23 = CNineGridDrawListBrush::Create(
                    (struct CNineGridDrawListBrush *)v50,
                    (int)&v51,
                    (int)&v59,
                    0,
                    (CNineGridDrawListBrush **)&v57.right);
            if ( (_BYTE)v58 )
            {
              v44 = **(CNineGridDrawListBrush ***)&v57.left;
              **(_QWORD **)&v57.left = *(_QWORD *)&v57.right;
              if ( v44 )
                CNineGridDrawListBrush::`scalar deleting destructor'(v44, 1);
            }
            if ( *(_QWORD *)v50 )
              std::default_delete<CDrawListBrush>::operator()((__int64)v44, *(CSurfaceDrawListBrush **)v50);
            if ( v23 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x1AEu);
              if ( v52 )
                CNineGridDrawListBrush::`scalar deleting destructor'(v52, 1);
              goto LABEL_70;
            }
            *(_QWORD *)v50 = v52;
            v52 = 0LL;
            CBrushDrawListGenerator::AttachInput((__int64)a2, 1u, (CSurfaceDrawListBrush **)v50);
            if ( *(_QWORD *)v50 )
              std::default_delete<CDrawListBrush>::operator()(v45, *(CSurfaceDrawListBrush **)v50);
            if ( v52 )
              CNineGridDrawListBrush::`scalar deleting destructor'(v52, 1);
          }
        }
        v46 = v49;
        if ( v49 )
        {
          v49 = 0LL;
          *(_QWORD *)v50 = v46;
          CBrushDrawListGenerator::AttachInput((__int64)a2, 1u, (CSurfaceDrawListBrush **)v50);
          if ( *(_QWORD *)v50 )
            std::default_delete<CDrawListBrush>::operator()(v47, *(CSurfaceDrawListBrush **)v50);
          goto LABEL_70;
        }
      }
    }
LABEL_75:
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v53[1]);
    Microsoft::WRL::ComPtr<IImageSource>::InternalRelease(v53);
    goto LABEL_76;
  }
  LODWORD(v17) = COERCE_UNSIGNED_INT(*((float *)this + 41) - v15) ^ _xmm;
  v49 = 0LL;
  LODWORD(v18) = LODWORD(v16) ^ _xmm;
  v53[0] = (struct CGeometryOnlyDrawListBrush *)&v49;
  v53[1] = 0LL;
  v19 = v18 + *v14;
  v20 = v18 + v14[2];
  v54 = 1;
  v21 = (float)(v17 + v14[1]) - 0.0;
  v22 = v4 - (float)(v17 + v14[3]);
  *(float *)&v51 = v19 - 0.0;
  *((float *)&v51 + 2) = v2 - v20;
  *((float *)&v51 + 1) = v21;
  *((float *)&v51 + 3) = v22;
  v23 = CGeometryOnlyDrawListBrush::Create(&v53[1]);
  if ( v54 )
  {
    v24 = *(CGeometryOnlyDrawListBrush **)v53[0];
    *(_QWORD *)v53[0] = v53[1];
    if ( v24 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v24, 1);
  }
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x155u);
  }
  else
  {
    v25 = v49;
    v26 = v59;
    v53[1] = 0LL;
    v54 = 1;
    *((_BYTE *)v49 + 52) = 1;
    *((struct D2D_RECT_F *)v25 + 2) = v26;
    *((_DWORD *)v25 + 12) = 50529027;
    *(_QWORD *)v50 = v49;
    v53[0] = (struct CGeometryOnlyDrawListBrush *)&v52;
    v52 = 0LL;
    v49 = 0LL;
    v23 = CNineGridDrawListBrush::Create((struct CNineGridDrawListBrush *)v50, (int)&v51, (int)&v51, 1, &v53[1]);
    if ( v54 )
    {
      v27 = *(CNineGridDrawListBrush **)v53[0];
      *(_QWORD *)v53[0] = v53[1];
      if ( v27 )
        CNineGridDrawListBrush::`scalar deleting destructor'(v27, 1);
    }
    if ( *(_QWORD *)v50 )
      std::default_delete<CDrawListBrush>::operator()((__int64)v27, *(CSurfaceDrawListBrush **)v50);
    if ( v23 >= 0 )
    {
      *(_QWORD *)v50 = v52;
      v52 = 0LL;
      CBrushDrawListGenerator::AttachInput((__int64)a2, 0, (CSurfaceDrawListBrush **)v50);
      if ( *(_QWORD *)v50 )
        std::default_delete<CDrawListBrush>::operator()(v28, *(CSurfaceDrawListBrush **)v50);
      if ( v52 )
        CNineGridDrawListBrush::`scalar deleting destructor'(v52, 1);
      if ( v49 )
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v49, 1);
      goto LABEL_30;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x15Eu);
    if ( v52 )
      CNineGridDrawListBrush::`scalar deleting destructor'(v52, 1);
  }
  if ( v49 )
    CGeometryOnlyDrawListBrush::`vector deleting destructor'(v49, 1);
LABEL_76:
  if ( v23 < 0 )
    CBrushDrawListGenerator::Reset(a2);
  return (unsigned int)v23;
}
