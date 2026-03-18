/*
 * XREFs of ?GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x1801F4AB0
 * Callers:
 *     ?DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x1801EC940 (-DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z @ 0x1800C1544 (-SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?CreateBitmapBrush@CD2DContext@@QEAAJPEAUID2D1Bitmap@@PEBUD2D1_BITMAP_BRUSH_PROPERTIES1@@PEBUD2D1_BRUSH_PROPERTIES@@PEAPEAUID2D1BitmapBrush1@@@Z @ 0x1801E1948 (-CreateBitmapBrush@CD2DContext@@QEAAJPEAUID2D1Bitmap@@PEBUD2D1_BITMAP_BRUSH_PROPERTIES1@@PEBUD2D.c)
 *     ?CreateImageBrush@CD2DContext@@QEAAJPEAUID2D1Image@@PEBUD2D1_IMAGE_BRUSH_PROPERTIES@@PEBUD2D1_BRUSH_PROPERTIES@@PEAPEAUID2D1ImageBrush@@@Z @ 0x1801E1BC4 (-CreateImageBrush@CD2DContext@@QEAAJPEAUID2D1Image@@PEBUD2D1_IMAGE_BRUSH_PROPERTIES@@PEBUD2D1_BR.c)
 *     ?GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z @ 0x1801E3750 (-GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z.c)
 *     ?GetColorContextNoRef@CD2DContext@@QEAAJW4D2D1_COLOR_SPACE@@PEAPEAUID2D1ColorContext@@@Z @ 0x1801E383C (-GetColorContextNoRef@CD2DContext@@QEAAJW4D2D1_COLOR_SPACE@@PEAPEAUID2D1ColorContext@@@Z.c)
 *     ?GetD2DBitmap@CHwTexturedColorSource@@QEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x1801E6C54 (-GetD2DBitmap@CHwTexturedColorSource@@QEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?D2DBitmapInterpolationModeFromMilFilterMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@FilterMode@@@Z @ 0x1801F4A78 (-D2DBitmapInterpolationModeFromMilFilterMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@FilterMode@@.c)
 *     ?D2DExtendModeFromD3DAddressMode@@YA?AW4D2D1_EXTEND_MODE@@W4D3D11_TEXTURE_ADDRESS_MODE@@@Z @ 0x1801F4A90 (-D2DExtendModeFromD3DAddressMode@@YA-AW4D2D1_EXTEND_MODE@@W4D3D11_TEXTURE_ADDRESS_MODE@@@Z.c)
 *     ?UsingSuperSampling@CHwTexturedColorSource@@QEBAHXZ @ 0x1801F504C (-UsingSuperSampling@CHwTexturedColorSource@@QEBAHXZ.c)
 */

__int64 __fastcall CHwBitmapBrush::GetD2DBrush(CD2DContext **a1, FLOAT a2, int a3, _QWORD *a4)
{
  CD2DContext *v6; // rcx
  struct ID2D1Bitmap *v8; // r14
  __int64 v9; // rsi
  D2D1_RECT_F v10; // xmm0
  unsigned __int64 v11; // xmm1_8
  __int64 v12; // rax
  int CachedEffectNoRef; // eax
  unsigned int v14; // ebx
  int D2DBitmap; // eax
  CD2DContext *v16; // r8
  __int64 v17; // r8
  __int64 v18; // r8
  CHwTexturedColorSource *v19; // r8
  int v20; // eax
  D2D1_INTERPOLATION_MODE v21; // edx
  _QWORD *v22; // rsi
  CD2DContext *v23; // rcx
  __int64 v24; // rax
  int v25; // ebx
  int *v26; // rax
  CD2DContext *v27; // r9
  FLOAT v28; // xmm0_4
  __int64 v29; // r9
  __int64 v30; // r9
  CHwTexturedColorSource *v31; // r9
  D2D1_INTERPOLATION_MODE v32; // r8d
  int v33; // eax
  CD2DContext *v34; // rcx
  CD2DContext *v35; // rcx
  struct ID2D1Effect *v36; // r8
  ID2D1Effect *v37; // rsi
  int v38; // eax
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
  *a4 = 0LL;
  v6 = a1[2];
  v8 = 0LL;
  v42 = 0LL;
  v44 = 0LL;
  v9 = 0LL;
  v43 = 0LL;
  v10 = *(D2D1_RECT_F *)((char *)v6 + 68);
  v45 = 0LL;
  v11 = _mm_unpacklo_ps((__m128)*((unsigned int *)v6 + 21), (__m128)*((unsigned int *)v6 + 22)).m128_u64[0];
  *(D2D1_RECT_F *)&v52.transform.m11 = v10;
  v46 = 0LL;
  *(_QWORD *)&v52.transform.m[2][0] = v11;
  v12 = *(_QWORD *)v6;
  v48 = v10;
  CachedEffectNoRef = (*(__int64 (__fastcall **)(CD2DContext *))(v12 + 40))(v6);
  v14 = CachedEffectNoRef;
  if ( CachedEffectNoRef < 0 )
  {
    v40 = 87;
    goto LABEL_43;
  }
  D2DBitmap = CHwTexturedColorSource::GetD2DBitmap(a1[2], &v42);
  v14 = D2DBitmap;
  if ( D2DBitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DBitmap, 0x59u);
    v8 = v42;
    goto LABEL_44;
  }
  v16 = a1[2];
  if ( *((_DWORD *)v16 + 25) == a3 )
  {
    v51.extendModeX = D2DExtendModeFromD3DAddressMode((enum D3D11_TEXTURE_ADDRESS_MODE)*((_DWORD *)v16 + 7));
    v51.extendModeY = D2DExtendModeFromD3DAddressMode((enum D3D11_TEXTURE_ADDRESS_MODE)*(_DWORD *)(v17 + 32));
    v51.interpolationMode = D2DBitmapInterpolationModeFromMilFilterMode(*(_DWORD *)(v18 + 24));
    v20 = CHwTexturedColorSource::UsingSuperSampling(v19);
    v22 = a1 + 3;
    v23 = a1[3];
    if ( v20 )
      v21 = D2D1_INTERPOLATION_MODE_MULTI_SAMPLE_LINEAR;
    v51.interpolationMode = v21;
    if ( v23 )
    {
      (*(void (__fastcall **)(CD2DContext *))(*(_QWORD *)v23 + 128LL))(v23);
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v22 + 64LL))(*v22, (unsigned int)v51.extendModeX);
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v22 + 72LL))(*v22, (unsigned int)v51.extendModeY);
      v8 = v42;
      (*(void (__fastcall **)(_QWORD, struct ID2D1Bitmap *))(*(_QWORD *)*v22 + 88LL))(*v22, v42);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v22 + 32LL))(*v22);
      (*(void (__fastcall **)(_QWORD, D2D1_MATRIX_3X2_F *))(*(_QWORD *)*v22 + 40LL))(*v22, &v52.transform);
    }
    else
    {
      v8 = v42;
      CachedEffectNoRef = CD2DContext::CreateBitmapBrush(a1[1], v42, &v51, &v52, a1 + 3);
      v14 = CachedEffectNoRef;
      if ( CachedEffectNoRef < 0 )
      {
        v40 = 111;
LABEL_43:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CachedEffectNoRef, v40);
        goto LABEL_44;
      }
    }
LABEL_34:
    *a4 = *v22;
    goto LABEL_44;
  }
  v8 = v42;
  (*(void (__fastcall **)(struct ID2D1Bitmap *, _BYTE *))(*(_QWORD *)v42 + 48LL))(v42, v49);
  v41 = v50 == 3;
  v24 = (*(__int64 (__fastcall **)(struct ID2D1Bitmap *, struct ID2D1Bitmap **))(*(_QWORD *)v8 + 40LL))(v8, &v42);
  *(_QWORD *)&v48.left = 0LL;
  v25 = *(_DWORD *)(v24 + 4);
  v26 = (int *)(*(__int64 (__fastcall **)(struct ID2D1Bitmap *, D2D1_BITMAP_BRUSH_PROPERTIES1 *))(*(_QWORD *)v8 + 40LL))(
                 v8,
                 &v51);
  v27 = a1[2];
  v28 = (float)*v26;
  v48.bottom = (float)v25;
  v48.right = v28;
  v53.sourceRectangle = v48;
  v53.extendModeX = D2DExtendModeFromD3DAddressMode((enum D3D11_TEXTURE_ADDRESS_MODE)*((_DWORD *)v27 + 7));
  v53.extendModeY = D2DExtendModeFromD3DAddressMode((enum D3D11_TEXTURE_ADDRESS_MODE)*(_DWORD *)(v29 + 32));
  v53.interpolationMode = D2DBitmapInterpolationModeFromMilFilterMode(*(_DWORD *)(v30 + 24));
  if ( (unsigned int)CHwTexturedColorSource::UsingSuperSampling(v31) )
    v32 = D2D1_INTERPOLATION_MODE_MULTI_SAMPLE_LINEAR;
  v53.interpolationMode = v32;
  if ( !v41 )
  {
LABEL_19:
    CachedEffectNoRef = CD2DContext::GetCachedEffectNoRef((__int64)a1[1], 3u, (__int64 *)&v44);
    v14 = CachedEffectNoRef;
    if ( CachedEffectNoRef < 0 )
    {
      v40 = 174;
      goto LABEL_43;
    }
    v34 = a1[1];
    if ( *((_DWORD *)a1[2] + 25) == 2 )
    {
      CachedEffectNoRef = CD2DContext::GetColorContextNoRef(v34, 2u, &v45);
      v14 = CachedEffectNoRef;
      if ( CachedEffectNoRef < 0 )
      {
        v40 = 181;
        goto LABEL_43;
      }
    }
    else
    {
      CachedEffectNoRef = CD2DContext::GetColorContextNoRef(v34, 1u, &v45);
      v14 = CachedEffectNoRef;
      if ( CachedEffectNoRef < 0 )
      {
        v40 = 188;
        goto LABEL_43;
      }
    }
    v35 = a1[1];
    if ( a3 == 2 )
    {
      CachedEffectNoRef = CD2DContext::GetColorContextNoRef(v35, 2u, &v46);
      v14 = CachedEffectNoRef;
      if ( CachedEffectNoRef < 0 )
      {
        v40 = 196;
        goto LABEL_43;
      }
    }
    else
    {
      CachedEffectNoRef = CD2DContext::GetColorContextNoRef(v35, 1u, &v46);
      v14 = CachedEffectNoRef;
      if ( CachedEffectNoRef < 0 )
      {
        v40 = 203;
        goto LABEL_43;
      }
    }
    if ( v41 )
    {
      v36 = (struct ID2D1Effect *)v9;
      v37 = v44;
      ID2D1Effect::SetInputEffect(v44, 0, v36);
    }
    else
    {
      v37 = v44;
      (*(void (__fastcall **)(ID2D1Effect *, _QWORD, struct ID2D1Bitmap *, __int64))(*(_QWORD *)v44 + 112LL))(
        v44,
        0LL,
        v8,
        1LL);
    }
    v43 = v45;
    v38 = (*(__int64 (__fastcall **)(ID2D1Effect *, _QWORD, _QWORD, struct ID2D1ColorContext **, int))(*(_QWORD *)v37 + 72LL))(
            v37,
            0LL,
            0LL,
            &v43,
            8);
    v14 = v38;
    if ( v38 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0xE0u);
      goto LABEL_44;
    }
    v43 = v46;
    CachedEffectNoRef = (*(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, struct ID2D1ColorContext **, int))(*(_QWORD *)v37 + 72LL))(
                          v37,
                          2LL,
                          0LL,
                          &v43,
                          8);
    v14 = CachedEffectNoRef;
    if ( CachedEffectNoRef < 0 )
    {
      v40 = 229;
      goto LABEL_43;
    }
    (*(void (__fastcall **)(ID2D1Effect *, struct ID2D1Image **))(*(_QWORD *)v37 + 144LL))(v37, &v47);
    v22 = a1 + 4;
    CachedEffectNoRef = CD2DContext::CreateImageBrush(a1[1], v47, &v53, &v52, a1 + 4);
    v14 = CachedEffectNoRef;
    if ( CachedEffectNoRef < 0 )
    {
      v40 = 246;
      goto LABEL_43;
    }
    goto LABEL_34;
  }
  CachedEffectNoRef = CD2DContext::GetCachedEffectNoRef((__int64)a1[1], 0, (__int64 *)&v43);
  v14 = CachedEffectNoRef;
  if ( CachedEffectNoRef < 0 )
  {
    v40 = 160;
    goto LABEL_43;
  }
  v9 = (__int64)v43;
  (*(void (__fastcall **)(struct ID2D1ColorContext *, _QWORD, struct ID2D1Bitmap *, __int64))(*(_QWORD *)v43 + 112LL))(
    v43,
    0LL,
    v8,
    1LL);
  LODWORD(v42) = 2;
  v33 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct ID2D1Bitmap **, int))(*(_QWORD *)v9 + 72LL))(
          v9,
          1LL,
          0LL,
          &v42,
          4);
  v14 = v33;
  if ( v33 >= 0 )
  {
    CachedEffectNoRef = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, void *, int))(*(_QWORD *)v9 + 72LL))(
                          v9,
                          0LL,
                          0LL,
                          &unk_1802AE0B0,
                          80);
    v14 = CachedEffectNoRef;
    if ( CachedEffectNoRef < 0 )
    {
      v40 = 168;
      goto LABEL_43;
    }
    goto LABEL_19;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, 0xA5u);
LABEL_44:
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v47);
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v8);
  ReleaseInterfaceNoNULL<IWICBitmap>(0LL);
  return v14;
}
