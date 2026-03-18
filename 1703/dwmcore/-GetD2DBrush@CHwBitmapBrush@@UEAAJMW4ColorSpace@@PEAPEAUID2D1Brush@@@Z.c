/*
 * XREFs of ?GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x18004D470
 * Callers:
 *     ?FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBVCMILMatrix@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCMILBrush@@MAEBV6@W4Enum@MilCompositingMode@@@Z @ 0x180049D78 (-FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCCont.c)
 *     ?DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x1800D09EC (-DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z @ 0x18001BAC0 (-SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z.c)
 *     ?Realize@CHwBitmapColorSource@@UEAAJXZ @ 0x180044150 (-Realize@CHwBitmapColorSource@@UEAAJXZ.c)
 *     ?D2DExtendModeFromD3DAddressMode@@YA?AW4D2D1_EXTEND_MODE@@W4D3D11_TEXTURE_ADDRESS_MODE@@@Z @ 0x18004D67C (-D2DExtendModeFromD3DAddressMode@@YA-AW4D2D1_EXTEND_MODE@@W4D3D11_TEXTURE_ADDRESS_MODE@@@Z.c)
 *     ?GetD2DBitmap@CHwTexturedColorSource@@QEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x18004D718 (-GetD2DBitmap@CHwTexturedColorSource@@QEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?D2DBitmapInterpolationModeFromMilFilterMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@FilterMode@@@Z @ 0x18004D78C (-D2DBitmapInterpolationModeFromMilFilterMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@FilterMode@@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateBitmapBrush@CD2DContext@@QEAAJPEAUID2D1Bitmap@@PEBUD2D1_BITMAP_BRUSH_PROPERTIES1@@PEBUD2D1_BRUSH_PROPERTIES@@PEAPEAUID2D1BitmapBrush1@@@Z @ 0x1800CFA40 (-CreateBitmapBrush@CD2DContext@@QEAAJPEAUID2D1Bitmap@@PEBUD2D1_BITMAP_BRUSH_PROPERTIES1@@PEBUD2D.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?CreateImageBrush@CD2DContext@@QEAAJPEAUID2D1Image@@PEBUD2D1_IMAGE_BRUSH_PROPERTIES@@PEBUD2D1_BRUSH_PROPERTIES@@PEAPEAUID2D1ImageBrush@@@Z @ 0x180197ED0 (-CreateImageBrush@CD2DContext@@QEAAJPEAUID2D1Image@@PEBUD2D1_IMAGE_BRUSH_PROPERTIES@@PEBUD2D1_BR.c)
 *     ?GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z @ 0x180199010 (-GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z.c)
 *     ?GetColorContextNoRef@CD2DContext@@QEAAJW4D2D1_COLOR_SPACE@@PEAPEAUID2D1ColorContext@@@Z @ 0x1801990FC (-GetColorContextNoRef@CD2DContext@@QEAAJW4D2D1_COLOR_SPACE@@PEAPEAUID2D1ColorContext@@@Z.c)
 */

__int64 __fastcall CHwBitmapBrush::GetD2DBrush(CD2DContext **a1, FLOAT a2, int a3, _QWORD *a4)
{
  struct ID2D1ColorContext *v4; // rsi
  struct ID2D1Bitmap *v5; // r14
  CD2DContext *v7; // rcx
  D2D1_RECT_F v10; // xmm0
  unsigned __int64 v11; // xmm1_8
  __int64 v12; // rax
  __int64 (*v13)(void); // rax
  int v14; // eax
  unsigned int v15; // ebx
  int D2DBitmap; // eax
  CD2DContext *v17; // r8
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // r8
  __int64 interpolationMode; // rdx
  _QWORD *v22; // rsi
  CD2DContext *v23; // rcx
  int CachedEffectNoRef; // eax
  int v26; // r9d
  bool v27; // bl
  __int64 v28; // rax
  FLOAT v29; // xmm6_4
  int *v30; // rax
  CD2DContext *v31; // r8
  __int64 v32; // r8
  __int64 v33; // r8
  D2D1_INTERPOLATION_MODE v34; // eax
  __int64 v35; // r8
  int v36; // eax
  CD2DContext *v37; // rcx
  CD2DContext *v38; // rcx
  struct ID2D1Effect *v39; // r8
  ID2D1Effect *v40; // rsi
  unsigned int v41; // [rsp+28h] [rbp-A9h]
  bool v42; // [rsp+38h] [rbp-99h]
  struct ID2D1Bitmap *v43; // [rsp+40h] [rbp-91h] BYREF
  struct ID2D1ColorContext *v44; // [rsp+48h] [rbp-89h] BYREF
  ID2D1Effect *v45; // [rsp+50h] [rbp-81h] BYREF
  struct ID2D1ColorContext *v46; // [rsp+58h] [rbp-79h] BYREF
  struct ID2D1ColorContext *v47; // [rsp+60h] [rbp-71h] BYREF
  struct ID2D1Image *v48; // [rsp+68h] [rbp-69h] BYREF
  D2D1_RECT_F v49; // [rsp+70h] [rbp-61h]
  _BYTE v50[4]; // [rsp+88h] [rbp-49h] BYREF
  int v51; // [rsp+8Ch] [rbp-45h]
  struct D2D1_BITMAP_BRUSH_PROPERTIES1 v52; // [rsp+90h] [rbp-41h] BYREF
  D2D1_BRUSH_PROPERTIES v53; // [rsp+A0h] [rbp-31h] BYREF
  D2D1_IMAGE_BRUSH_PROPERTIES v54; // [rsp+C0h] [rbp-11h] BYREF

  v4 = 0LL;
  v53.opacity = a2;
  *a4 = 0LL;
  v46 = 0LL;
  v5 = 0LL;
  v48 = 0LL;
  v7 = a1[2];
  v45 = 0LL;
  v47 = 0LL;
  v43 = 0LL;
  v10 = *(D2D1_RECT_F *)((char *)v7 + 68);
  v44 = 0LL;
  v11 = _mm_unpacklo_ps((__m128)*((unsigned int *)v7 + 21), (__m128)*((unsigned int *)v7 + 22)).m128_u64[0];
  *(D2D1_RECT_F *)&v53.transform.m11 = v10;
  *(_QWORD *)&v53.transform.m[2][0] = v11;
  v12 = *(_QWORD *)v7;
  v49 = v10;
  v13 = *(__int64 (**)(void))(v12 + 40);
  if ( (char *)v13 == (char *)CHwBitmapColorSource::Realize )
    v14 = CHwBitmapColorSource::Realize(v7);
  else
    v14 = v13();
  v15 = v14;
  if ( v14 < 0 )
  {
    v41 = 87;
    v26 = v14;
    goto LABEL_55;
  }
  D2DBitmap = CHwTexturedColorSource::GetD2DBitmap(a1[2], &v43);
  v15 = D2DBitmap;
  if ( D2DBitmap < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBitmap, 0x59u);
    v5 = v43;
    goto LABEL_10;
  }
  v17 = a1[2];
  if ( *((_DWORD *)v17 + 25) == a3 )
  {
    v52.extendModeX = D2DExtendModeFromD3DAddressMode(*((enum D3D11_TEXTURE_ADDRESS_MODE *)v17 + 7));
    v52.extendModeY = D2DExtendModeFromD3DAddressMode(*(enum D3D11_TEXTURE_ADDRESS_MODE *)(v18 + 32));
    v52.interpolationMode = D2DBitmapInterpolationModeFromMilFilterMode(*(unsigned int *)(v19 + 24));
    interpolationMode = (unsigned int)v52.interpolationMode;
    if ( *(float *)(v20 + 36) > 0.0 )
    {
      if ( *(float *)(v20 + 40) > 0.0 )
        interpolationMode = 3LL;
      v52.interpolationMode = interpolationMode;
    }
    v22 = a1 + 3;
    v23 = a1[3];
    if ( v23 )
    {
      (*(void (__fastcall **)(CD2DContext *, __int64))(*(_QWORD *)v23 + 128LL))(v23, interpolationMode);
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v22 + 64LL))(*v22, (unsigned int)v52.extendModeX);
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v22 + 72LL))(*v22, (unsigned int)v52.extendModeY);
      v5 = v43;
      (*(void (__fastcall **)(_QWORD, struct ID2D1Bitmap *))(*(_QWORD *)*v22 + 88LL))(*v22, v43);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v22 + 32LL))(*v22);
      (*(void (__fastcall **)(_QWORD, D2D1_MATRIX_3X2_F *))(*(_QWORD *)*v22 + 40LL))(*v22, &v53.transform);
LABEL_9:
      *a4 = *v22;
      goto LABEL_10;
    }
    v5 = v43;
    CachedEffectNoRef = CD2DContext::CreateBitmapBrush(a1[1], v43, &v52, &v53, a1 + 3);
    v15 = CachedEffectNoRef;
    if ( CachedEffectNoRef >= 0 )
      goto LABEL_9;
    v41 = 111;
    goto LABEL_20;
  }
  v5 = v43;
  (*(void (__fastcall **)(struct ID2D1Bitmap *, _BYTE *))(*(_QWORD *)v43 + 48LL))(v43, v50);
  v27 = v51 == 3;
  v42 = v51 == 3;
  v28 = (*(__int64 (__fastcall **)(struct ID2D1Bitmap *, struct ID2D1Bitmap **))(*(_QWORD *)v5 + 40LL))(v5, &v43);
  *(_QWORD *)&v49.left = 0LL;
  v29 = (float)*(int *)(v28 + 4);
  v30 = (int *)(*(__int64 (__fastcall **)(struct ID2D1Bitmap *, struct D2D1_BITMAP_BRUSH_PROPERTIES1 *))(*(_QWORD *)v5 + 40LL))(
                 v5,
                 &v52);
  v31 = a1[2];
  v49.bottom = v29;
  v49.right = (float)*v30;
  v54.sourceRectangle = v49;
  v54.extendModeX = D2DExtendModeFromD3DAddressMode(*((enum D3D11_TEXTURE_ADDRESS_MODE *)v31 + 7));
  v54.extendModeY = D2DExtendModeFromD3DAddressMode(*(enum D3D11_TEXTURE_ADDRESS_MODE *)(v32 + 32));
  v34 = (unsigned int)D2DBitmapInterpolationModeFromMilFilterMode(*(unsigned int *)(v33 + 24));
  v54.interpolationMode = v34;
  if ( *(float *)(v35 + 36) > 0.0 )
  {
    if ( *(float *)(v35 + 40) > 0.0 )
      v34 = D2D1_INTERPOLATION_MODE_MULTI_SAMPLE_LINEAR;
    v54.interpolationMode = v34;
  }
  if ( v27 )
  {
    CachedEffectNoRef = CD2DContext::GetCachedEffectNoRef(a1[1], 1LL, &v44);
    v15 = CachedEffectNoRef;
    if ( CachedEffectNoRef < 0 )
    {
      v41 = 160;
      goto LABEL_20;
    }
    v4 = v44;
    (*(void (__fastcall **)(struct ID2D1ColorContext *, _QWORD, struct ID2D1Bitmap *, __int64))(*(_QWORD *)v44 + 112LL))(
      v44,
      0LL,
      v5,
      1LL);
    LODWORD(v43) = 2;
    v36 = (*(__int64 (__fastcall **)(struct ID2D1ColorContext *, __int64, _QWORD, struct ID2D1Bitmap **, int))(*(_QWORD *)v4 + 72LL))(
            v4,
            1LL,
            0LL,
            &v43,
            4);
    v15 = v36;
    if ( v36 < 0 )
    {
      v41 = 165;
      goto LABEL_32;
    }
    CachedEffectNoRef = (*(__int64 (__fastcall **)(struct ID2D1ColorContext *, _QWORD, _QWORD, void *, int))(*(_QWORD *)v4 + 72LL))(
                          v4,
                          0LL,
                          0LL,
                          &unk_1801FDDB0,
                          80);
    v15 = CachedEffectNoRef;
    if ( CachedEffectNoRef < 0 )
    {
      v41 = 168;
      goto LABEL_20;
    }
  }
  CachedEffectNoRef = CD2DContext::GetCachedEffectNoRef(a1[1], 5LL, &v45);
  v15 = CachedEffectNoRef;
  if ( CachedEffectNoRef >= 0 )
  {
    v37 = a1[1];
    if ( *((_DWORD *)a1[2] + 25) == 2 )
    {
      CachedEffectNoRef = CD2DContext::GetColorContextNoRef(v37, D2D1_COLOR_SPACE_SCRGB, &v46);
      v15 = CachedEffectNoRef;
      if ( CachedEffectNoRef < 0 )
      {
        v41 = 181;
        goto LABEL_20;
      }
    }
    else
    {
      CachedEffectNoRef = CD2DContext::GetColorContextNoRef(v37, D2D1_COLOR_SPACE_SRGB, &v46);
      v15 = CachedEffectNoRef;
      if ( CachedEffectNoRef < 0 )
      {
        v41 = 188;
        goto LABEL_20;
      }
    }
    v38 = a1[1];
    if ( a3 == 2 )
    {
      CachedEffectNoRef = CD2DContext::GetColorContextNoRef(v38, D2D1_COLOR_SPACE_SCRGB, &v47);
      v15 = CachedEffectNoRef;
      if ( CachedEffectNoRef < 0 )
      {
        v41 = 196;
        goto LABEL_20;
      }
    }
    else
    {
      CachedEffectNoRef = CD2DContext::GetColorContextNoRef(v38, D2D1_COLOR_SPACE_SRGB, &v47);
      v15 = CachedEffectNoRef;
      if ( CachedEffectNoRef < 0 )
      {
        v41 = 203;
        goto LABEL_20;
      }
    }
    if ( v42 )
    {
      v39 = v4;
      v40 = v45;
      ID2D1Effect::SetInputEffect(v45, 0, v39);
    }
    else
    {
      v40 = v45;
      (*(void (__fastcall **)(ID2D1Effect *, _QWORD, struct ID2D1Bitmap *, __int64))(*(_QWORD *)v45 + 112LL))(
        v45,
        0LL,
        v5,
        1LL);
    }
    v44 = v46;
    v36 = (*(__int64 (__fastcall **)(ID2D1Effect *, _QWORD, _QWORD, struct ID2D1ColorContext **, int))(*(_QWORD *)v40 + 72LL))(
            v40,
            0LL,
            0LL,
            &v44,
            8);
    v15 = v36;
    if ( v36 >= 0 )
    {
      v44 = v47;
      CachedEffectNoRef = (*(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, struct ID2D1ColorContext **, int))(*(_QWORD *)v40 + 72LL))(
                            v40,
                            2LL,
                            0LL,
                            &v44,
                            8);
      v15 = CachedEffectNoRef;
      if ( CachedEffectNoRef < 0 )
      {
        v41 = 229;
      }
      else
      {
        (*(void (__fastcall **)(ID2D1Effect *, struct ID2D1Image **))(*(_QWORD *)v40 + 144LL))(v40, &v48);
        v22 = a1 + 4;
        CachedEffectNoRef = CD2DContext::CreateImageBrush(a1[1], v48, &v54, &v53, a1 + 4);
        v15 = CachedEffectNoRef;
        if ( CachedEffectNoRef >= 0 )
          goto LABEL_9;
        v41 = 246;
      }
      goto LABEL_20;
    }
    v41 = 224;
LABEL_32:
    v26 = v36;
    goto LABEL_55;
  }
  v41 = 174;
LABEL_20:
  v26 = CachedEffectNoRef;
LABEL_55:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, v41);
LABEL_10:
  if ( v48 )
    (*(void (__fastcall **)(struct ID2D1Image *))(*(_QWORD *)v48 + 16LL))(v48);
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v5);
  return v15;
}
