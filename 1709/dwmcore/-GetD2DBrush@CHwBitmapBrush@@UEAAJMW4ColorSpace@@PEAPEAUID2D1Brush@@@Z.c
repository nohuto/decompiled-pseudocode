/*
 * XREFs of ?GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x1800862E0
 * Callers:
 *     ?DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x1801B725C (-DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 * Callees:
 *     ?CreateBitmapBrush@CD2DContext@@QEAAJPEAUID2D1Bitmap@@PEBUD2D1_BITMAP_BRUSH_PROPERTIES1@@PEBUD2D1_BRUSH_PROPERTIES@@PEAPEAUID2D1BitmapBrush1@@@Z @ 0x180043F88 (-CreateBitmapBrush@CD2DContext@@QEAAJPEAUID2D1Bitmap@@PEBUD2D1_BITMAP_BRUSH_PROPERTIES1@@PEBUD2D.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z @ 0x1800823A0 (--$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z.c)
 *     ?GetD2DBitmap@CHwTexturedColorSource@@QEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x180085634 (-GetD2DBitmap@CHwTexturedColorSource@@QEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?D2DExtendModeFromD3DAddressMode@@YA?AW4D2D1_EXTEND_MODE@@W4D3D11_TEXTURE_ADDRESS_MODE@@@Z @ 0x1800864D0 (-D2DExtendModeFromD3DAddressMode@@YA-AW4D2D1_EXTEND_MODE@@W4D3D11_TEXTURE_ADDRESS_MODE@@@Z.c)
 *     ?SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z @ 0x1800BD3D0 (-SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z.c)
 *     ?D2DBitmapInterpolationModeFromMilFilterMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@FilterMode@@@Z @ 0x1800C0C8C (-D2DBitmapInterpolationModeFromMilFilterMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@FilterMode@@.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?CreateImageBrush@CD2DContext@@QEAAJPEAUID2D1Image@@PEBUD2D1_IMAGE_BRUSH_PROPERTIES@@PEBUD2D1_BRUSH_PROPERTIES@@PEAPEAUID2D1ImageBrush@@@Z @ 0x1801A9824 (-CreateImageBrush@CD2DContext@@QEAAJPEAUID2D1Image@@PEBUD2D1_IMAGE_BRUSH_PROPERTIES@@PEBUD2D1_BR.c)
 *     ?GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z @ 0x1801AA640 (-GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z.c)
 *     ?GetColorContextNoRef@CD2DContext@@QEAAJW4D2D1_COLOR_SPACE@@PEAPEAUID2D1ColorContext@@@Z @ 0x1801AA72C (-GetColorContextNoRef@CD2DContext@@QEAAJW4D2D1_COLOR_SPACE@@PEAPEAUID2D1ColorContext@@@Z.c)
 */

__int64 __fastcall CHwBitmapBrush::GetD2DBrush(CD2DContext **a1, FLOAT a2, int a3, _QWORD *a4)
{
  struct ID2D1Bitmap *v4; // r14
  struct ID2D1ColorContext *v5; // rsi
  CD2DContext *v7; // rcx
  D2D1_RECT_F v10; // xmm0
  unsigned __int64 v11; // xmm1_8
  __int64 v12; // rax
  signed int CachedEffectNoRef; // eax
  unsigned int v14; // ebx
  signed int D2DBitmap; // eax
  CD2DContext *v16; // r8
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 interpolationMode; // rdx
  _QWORD *v21; // rsi
  CD2DContext *v22; // rcx
  __int64 v24; // rax
  int v25; // ebx
  int *v26; // rax
  CD2DContext *v27; // r8
  FLOAT v28; // xmm0_4
  __int64 v29; // r8
  __int64 v30; // r8
  D2D1_INTERPOLATION_MODE v31; // eax
  __int64 v32; // r8
  signed int v33; // eax
  CD2DContext *v34; // rcx
  CD2DContext *v35; // rcx
  int v36; // r9d
  struct ID2D1Effect *v37; // r8
  ID2D1Effect *v38; // rsi
  signed int v39; // eax
  unsigned int v40; // [rsp+20h] [rbp-99h]
  bool v41; // [rsp+30h] [rbp-89h]
  struct ID2D1Bitmap *v42; // [rsp+38h] [rbp-81h] BYREF
  struct ID2D1ColorContext *v43; // [rsp+40h] [rbp-79h] BYREF
  ID2D1Effect *v44; // [rsp+48h] [rbp-71h] BYREF
  struct ID2D1ColorContext *v45; // [rsp+50h] [rbp-69h] BYREF
  struct ID2D1ColorContext *v46; // [rsp+58h] [rbp-61h] BYREF
  struct ID2D1Image *v47; // [rsp+60h] [rbp-59h] BYREF
  D2D1_RECT_F v48; // [rsp+68h] [rbp-51h]
  _BYTE v49[4]; // [rsp+80h] [rbp-39h] BYREF
  int v50; // [rsp+84h] [rbp-35h]
  D2D1_BITMAP_BRUSH_PROPERTIES1 v51; // [rsp+88h] [rbp-31h] BYREF
  D2D1_BRUSH_PROPERTIES v52; // [rsp+98h] [rbp-21h] BYREF
  D2D1_IMAGE_BRUSH_PROPERTIES v53; // [rsp+B8h] [rbp-1h] BYREF

  v52.opacity = a2;
  v47 = 0LL;
  v4 = 0LL;
  *a4 = 0LL;
  v5 = 0LL;
  v42 = 0LL;
  v7 = a1[2];
  v44 = 0LL;
  v43 = 0LL;
  v45 = 0LL;
  v10 = *(D2D1_RECT_F *)((char *)v7 + 68);
  v46 = 0LL;
  v11 = _mm_unpacklo_ps((__m128)*((unsigned int *)v7 + 21), (__m128)*((unsigned int *)v7 + 22)).m128_u64[0];
  *(D2D1_RECT_F *)&v52.transform.m11 = v10;
  *(_QWORD *)&v52.transform.m[2][0] = v11;
  v12 = *(_QWORD *)v7;
  v48 = v10;
  CachedEffectNoRef = (*(__int64 (__fastcall **)(CD2DContext *))(v12 + 40))(v7);
  v14 = CachedEffectNoRef;
  if ( CachedEffectNoRef < 0 )
  {
    v40 = 87;
    goto LABEL_50;
  }
  D2DBitmap = CHwTexturedColorSource::GetD2DBitmap(a1[2], &v42);
  v14 = D2DBitmap;
  if ( D2DBitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, D2DBitmap, 0x59u);
    v4 = v42;
    goto LABEL_8;
  }
  v16 = a1[2];
  if ( *((_DWORD *)v16 + 25) == a3 )
  {
    v51.extendModeX = D2DExtendModeFromD3DAddressMode(*((enum D3D11_TEXTURE_ADDRESS_MODE *)v16 + 7));
    v51.extendModeY = D2DExtendModeFromD3DAddressMode(*(enum D3D11_TEXTURE_ADDRESS_MODE *)(v17 + 32));
    v51.interpolationMode = D2DBitmapInterpolationModeFromMilFilterMode(*(unsigned int *)(v18 + 24));
    interpolationMode = (unsigned int)v51.interpolationMode;
    if ( *(float *)(v19 + 36) > 0.0 )
    {
      if ( *(float *)(v19 + 40) > 0.0 )
        interpolationMode = 3LL;
      v51.interpolationMode = interpolationMode;
    }
    v21 = a1 + 3;
    v22 = a1[3];
    if ( v22 )
    {
      (*(void (__fastcall **)(CD2DContext *, __int64))(*(_QWORD *)v22 + 128LL))(v22, interpolationMode);
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v21 + 64LL))(*v21, (unsigned int)v51.extendModeX);
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v21 + 72LL))(*v21, (unsigned int)v51.extendModeY);
      v4 = v42;
      (*(void (__fastcall **)(_QWORD, struct ID2D1Bitmap *))(*(_QWORD *)*v21 + 88LL))(*v21, v42);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v21 + 32LL))(*v21);
      (*(void (__fastcall **)(_QWORD, D2D1_MATRIX_3X2_F *))(*(_QWORD *)*v21 + 40LL))(*v21, &v52.transform);
LABEL_7:
      *a4 = *v21;
      goto LABEL_8;
    }
    v4 = v42;
    CachedEffectNoRef = CD2DContext::CreateBitmapBrush(a1[1], v42, &v51, &v52, a1 + 3);
    v14 = CachedEffectNoRef;
    if ( CachedEffectNoRef >= 0 )
      goto LABEL_7;
    v40 = 111;
    goto LABEL_50;
  }
  v4 = v42;
  (*(void (__fastcall **)(struct ID2D1Bitmap *, _BYTE *))(*(_QWORD *)v42 + 48LL))(v42, v49);
  v41 = v50 == 3;
  v24 = (*(__int64 (__fastcall **)(struct ID2D1Bitmap *, struct ID2D1Bitmap **))(*(_QWORD *)v4 + 40LL))(v4, &v42);
  *(_QWORD *)&v48.left = 0LL;
  v25 = *(_DWORD *)(v24 + 4);
  v26 = (int *)(*(__int64 (__fastcall **)(struct ID2D1Bitmap *, D2D1_BITMAP_BRUSH_PROPERTIES1 *))(*(_QWORD *)v4 + 40LL))(
                 v4,
                 &v51);
  v27 = a1[2];
  v28 = (float)*v26;
  v48.bottom = (float)v25;
  v48.right = v28;
  v53.sourceRectangle = v48;
  v53.extendModeX = D2DExtendModeFromD3DAddressMode(*((enum D3D11_TEXTURE_ADDRESS_MODE *)v27 + 7));
  v53.extendModeY = D2DExtendModeFromD3DAddressMode(*(enum D3D11_TEXTURE_ADDRESS_MODE *)(v29 + 32));
  v31 = (unsigned int)D2DBitmapInterpolationModeFromMilFilterMode(*(unsigned int *)(v30 + 24));
  v53.interpolationMode = v31;
  if ( *(float *)(v32 + 36) > 0.0 )
  {
    if ( *(float *)(v32 + 40) > 0.0 )
      v31 = D2D1_INTERPOLATION_MODE_MULTI_SAMPLE_LINEAR;
    v53.interpolationMode = v31;
  }
  if ( !v41 )
    goto LABEL_27;
  CachedEffectNoRef = CD2DContext::GetCachedEffectNoRef(a1[1], 0LL, &v43);
  v14 = CachedEffectNoRef;
  if ( CachedEffectNoRef < 0 )
  {
    v40 = 160;
    goto LABEL_50;
  }
  v5 = v43;
  (*(void (__fastcall **)(struct ID2D1ColorContext *, _QWORD, struct ID2D1Bitmap *, __int64))(*(_QWORD *)v43 + 112LL))(
    v43,
    0LL,
    v4,
    1LL);
  LODWORD(v42) = 2;
  v33 = (*(__int64 (__fastcall **)(struct ID2D1ColorContext *, __int64, _QWORD, struct ID2D1Bitmap **, int))(*(_QWORD *)v5 + 72LL))(
          v5,
          1LL,
          0LL,
          &v42,
          4);
  v14 = v33;
  if ( v33 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v33, 0xA5u);
    goto LABEL_8;
  }
  CachedEffectNoRef = (*(__int64 (__fastcall **)(struct ID2D1ColorContext *, _QWORD, _QWORD, void *, int))(*(_QWORD *)v5 + 72LL))(
                        v5,
                        0LL,
                        0LL,
                        &unk_18021C270,
                        80);
  v14 = CachedEffectNoRef;
  if ( CachedEffectNoRef >= 0 )
  {
LABEL_27:
    CachedEffectNoRef = CD2DContext::GetCachedEffectNoRef(a1[1], 3LL, &v44);
    v14 = CachedEffectNoRef;
    if ( CachedEffectNoRef < 0 )
    {
      v40 = 174;
      goto LABEL_50;
    }
    v34 = a1[1];
    if ( *((_DWORD *)a1[2] + 25) == 2 )
    {
      CachedEffectNoRef = CD2DContext::GetColorContextNoRef(v34, D2D1_COLOR_SPACE_SCRGB, &v45);
      v14 = CachedEffectNoRef;
      if ( CachedEffectNoRef < 0 )
      {
        v40 = 181;
        goto LABEL_50;
      }
    }
    else
    {
      CachedEffectNoRef = CD2DContext::GetColorContextNoRef(v34, D2D1_COLOR_SPACE_SRGB, &v45);
      v14 = CachedEffectNoRef;
      if ( CachedEffectNoRef < 0 )
      {
        v40 = 188;
        goto LABEL_50;
      }
    }
    v35 = a1[1];
    if ( a3 == 2 )
    {
      CachedEffectNoRef = CD2DContext::GetColorContextNoRef(v35, D2D1_COLOR_SPACE_SCRGB, &v46);
      v14 = CachedEffectNoRef;
      if ( CachedEffectNoRef < 0 )
      {
        v40 = 196;
        goto LABEL_50;
      }
    }
    else
    {
      CachedEffectNoRef = CD2DContext::GetColorContextNoRef(v35, D2D1_COLOR_SPACE_SRGB, &v46);
      v14 = CachedEffectNoRef;
      if ( CachedEffectNoRef < 0 )
      {
        v40 = 203;
        goto LABEL_50;
      }
    }
    if ( v41 )
    {
      v37 = v5;
      v38 = v44;
      ID2D1Effect::SetInputEffect(v44, 0, v37, v36);
    }
    else
    {
      v38 = v44;
      (*(void (__fastcall **)(ID2D1Effect *, _QWORD, struct ID2D1Bitmap *, __int64))(*(_QWORD *)v44 + 112LL))(
        v44,
        0LL,
        v4,
        1LL);
    }
    v43 = v45;
    v39 = (*(__int64 (__fastcall **)(ID2D1Effect *, _QWORD, _QWORD, struct ID2D1ColorContext **, int))(*(_QWORD *)v38 + 72LL))(
            v38,
            0LL,
            0LL,
            &v43,
            8);
    v14 = v39;
    if ( v39 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v39, 0xE0u);
      goto LABEL_8;
    }
    v43 = v46;
    CachedEffectNoRef = (*(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, struct ID2D1ColorContext **, int))(*(_QWORD *)v38 + 72LL))(
                          v38,
                          2LL,
                          0LL,
                          &v43,
                          8);
    v14 = CachedEffectNoRef;
    if ( CachedEffectNoRef < 0 )
    {
      v40 = 229;
    }
    else
    {
      (*(void (__fastcall **)(ID2D1Effect *, struct ID2D1Image **))(*(_QWORD *)v38 + 144LL))(v38, &v47);
      v21 = a1 + 4;
      CachedEffectNoRef = CD2DContext::CreateImageBrush(a1[1], v47, &v53, &v52, a1 + 4);
      v14 = CachedEffectNoRef;
      if ( CachedEffectNoRef >= 0 )
        goto LABEL_7;
      v40 = 246;
    }
    goto LABEL_50;
  }
  v40 = 168;
LABEL_50:
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, CachedEffectNoRef, v40);
LABEL_8:
  if ( v47 )
    (*(void (__fastcall **)(struct ID2D1Image *))(*(_QWORD *)v47 + 16LL))(v47);
  ReleaseInterfaceNoNULL<ID2D1Bitmap1>((__int64)v4);
  ReleaseInterfaceNoNULL<ID2D1Bitmap1>(0LL);
  return v14;
}
