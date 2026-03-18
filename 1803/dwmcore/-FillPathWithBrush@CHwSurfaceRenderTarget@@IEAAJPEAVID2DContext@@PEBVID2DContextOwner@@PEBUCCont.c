/*
 * XREFs of ?FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBVCMILMatrix@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCMILBrush@@MAEBV6@W4Enum@MilCompositingMode@@@Z @ 0x1801ED380
 * Callers:
 *     ?FillPath@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBVCMILMatrix@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCLegacyMilBrushRealizer@@AEBV6@W4Enum@MilCompositingMode@@@Z @ 0x1801ED278 (-FillPath@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VIBitmapSource@@@@YAXPEAVIBitmapSource@@@Z @ 0x18001DE20 (--$ReleaseInterfaceNoNULL@VIBitmapSource@@@@YAXPEAVIBitmapSource@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180064E70 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A4FF0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x1800B8C88 (--$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     floor @ 0x1800DB784 (floor.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?D2DPrimitiveBlendFromMilCompositingMode@@YA?AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@@@Z @ 0x18015ECC0 (-D2DPrimitiveBlendFromMilCompositingMode@@YA-AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@.c)
 *     ?IntersectAliasedBoundsRectFWithSurfaceRect@@YA_NAEBUMilRectF@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@PEAV2@@Z @ 0x1801C7DEC (-IntersectAliasedBoundsRectFWithSurfaceRect@@YA_NAEBUMilRectF@@AEBV-$TMilRect_@HUtagRECT@@UMilPo.c)
 *     ?SetDeviceRenderingAndSamplingBounds@CHwBrushContext@@QEAAXAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x1801E705C (-SetDeviceRenderingAndSamplingBounds@CHwBrushContext@@QEAAXAEBV-$TMilRect_@HUtagRECT@@UMilPointA.c)
 *     ?DeriveHWBrush@CHwSurfaceRenderTargetSharedData@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@PEAPEAVCHwBrush@@@Z @ 0x1801E9CB0 (-DeriveHWBrush@CHwSurfaceRenderTargetSharedData@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@PEAPEA.c)
 *     ?GetBitmap@CMILBrushBitmap@@QEBAJPEAPEAVIBitmapSource@@@Z @ 0x18020F488 (-GetBitmap@CMILBrushBitmap@@QEBAJPEAPEAVIBitmapSource@@@Z.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::FillPathWithBrush(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        float *a4,
        __int64 a5,
        CMILMatrix *a6,
        struct D2D_RECT_F *a7,
        struct CMILBrush *a8,
        int a9,
        float *a10,
        int a11)
{
  float v11; // xmm0_4
  unsigned int v15; // ebx
  struct IBitmapSource *v16; // r15
  int v17; // eax
  float v18; // xmm0_4
  int v19; // eax
  float v20; // xmm0_4
  int v21; // eax
  float v22; // xmm0_4
  __int128 *v23; // rcx
  __int64 v24; // rax
  int Bitmap; // eax
  int v26; // eax
  __int64 v27; // xmm0_8
  int v28; // eax
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // r8
  int v32; // eax
  __int64 v33; // r14
  int v34; // eax
  __int64 v35; // r8
  int v36; // eax
  int v37; // eax
  int v38; // eax
  __int64 v39; // r8
  int v40; // eax
  struct IBitmapSource *v42; // [rsp+58h] [rbp-B0h] BYREF
  CMILMatrix *v43; // [rsp+60h] [rbp-A8h] BYREF
  float *v44; // [rsp+68h] [rbp-A0h]
  struct CHwBrush *v45; // [rsp+70h] [rbp-98h] BYREF
  __int64 v46; // [rsp+78h] [rbp-90h] BYREF
  __int64 v47; // [rsp+80h] [rbp-88h] BYREF
  __int64 v48; // [rsp+88h] [rbp-80h] BYREF
  __int64 v49; // [rsp+90h] [rbp-78h]
  __int128 v50; // [rsp+98h] [rbp-70h] BYREF
  struct D2D_RECT_F *v51; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v52; // [rsp+B8h] [rbp-50h] BYREF
  int v53[4]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v54[3]; // [rsp+D8h] [rbp-30h] BYREF
  int v55; // [rsp+F0h] [rbp-18h]
  int v56; // [rsp+F4h] [rbp-14h]
  int v57; // [rsp+F8h] [rbp-10h]
  struct D2D_RECT_F *v58; // [rsp+110h] [rbp+8h]

  v11 = a4[19];
  v43 = a6;
  v51 = a7;
  v44 = a4;
  v15 = 0;
  v49 = a3;
  v16 = 0LL;
  v47 = 0LL;
  v45 = 0LL;
  v42 = 0LL;
  v48 = 0LL;
  v17 = (int)floor((float)(v11 * 16.0) + 0.5);
  v18 = a4[20];
  LODWORD(v52) = (v17 + 7) >> 4;
  v19 = (int)floor((float)(v18 * 16.0) + 0.5);
  v20 = a4[21];
  DWORD1(v52) = (v19 + 7) >> 4;
  v21 = (int)floor((float)(v20 * 16.0) + 0.5);
  v22 = a4[22];
  DWORD2(v52) = (v21 + 7) >> 4;
  HIDWORD(v52) = ((int)floor((float)(v22 * 16.0) + 0.5) + 7) >> 4;
  if ( IsEmpty(a7) )
  {
    v50 = 0uLL;
  }
  else if ( v43 )
  {
    CMILMatrix::Transform2DBoundsHelper<0>(v43, (__int64)v23, (float *)&v50);
  }
  else
  {
    v50 = *v23;
  }
  if ( IntersectAliasedBoundsRectFWithSurfaceRect((float *)&v50, &v52, v53) )
  {
    v24 = *(_QWORD *)a8;
    v51 = 0LL;
    v43 = (CMILMatrix *)_mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    if ( (*(unsigned int (__fastcall **)(struct CMILBrush *))(v24 + 24))(a8) == 3 )
    {
      Bitmap = CMILBrushBitmap::GetBitmap(
                 (CMILBrushBitmap *)(-(__int64)(a8 != 0LL) & ((unsigned __int64)a8 - 24)),
                 &v42);
      v15 = Bitmap;
      if ( Bitmap < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Bitmap, 0xF5u);
        v16 = v42;
        goto LABEL_36;
      }
      v16 = v42;
      if ( *((_DWORD *)v44 + 45) == 6 )
      {
        v51 = (struct D2D_RECT_F *)&v43;
        v26 = (*(__int64 (__fastcall **)(struct IBitmapSource *, __int64 *, struct IBitmapSource **))(*(_QWORD *)v42 + 32LL))(
                v42,
                &v46,
                &v42);
        v15 = v26;
        if ( v26 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x104u);
          goto LABEL_36;
        }
        *(float *)&v43 = 1.0 / (float)((float)(int)v46 * *a10);
        *((float *)&v43 + 1) = 1.0 / (float)((float)(int)v42 * a10[5]);
      }
    }
    v27 = *((_QWORD *)a8 + 1);
    v54[0] = v44;
    v55 = *((_DWORD *)a8 + 4);
    v56 = a1[29];
    v54[1] = a10;
    v58 = v51;
    v54[2] = v27;
    v57 = 1;
    CHwBrushContext::SetDeviceRenderingAndSamplingBounds((__int64)v54, (__int64)v53);
    v28 = (*(__int64 (__fastcall **)(_DWORD *, __int128 *))(*(_QWORD *)a1 + 256LL))(a1, &v50);
    v15 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x126u);
    }
    else
    {
      v29 = CHwSurfaceRenderTargetSharedData::DeriveHWBrush(
              (CHwSurfaceRenderTargetSharedData *)(v50 + 496),
              a8,
              (const struct CHwBrushContext *)v54,
              &v45);
      v15 = v29;
      if ( v29 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x127u);
      }
      else
      {
        v30 = *(unsigned int *)((*(__int64 (__fastcall **)(_DWORD *, struct D2D_RECT_F **))(*(_QWORD *)a1 + 24LL))(
                                  a1,
                                  &v51)
                              + 8);
        if ( !(_DWORD)v30 || (v31 = 2LL, (_DWORD)v30 != 1) )
          v31 = 1LL;
        v32 = (*(__int64 (__fastcall **)(struct CHwBrush *, __int64, __int64, __int64 *))(*(_QWORD *)v45 + 16LL))(
                v45,
                v30,
                v31,
                &v47);
        v15 = v32;
        if ( v32 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, 0x12Bu);
        }
        else
        {
          if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a5 + 16LL))(a5) )
            goto LABEL_36;
          v33 = v49;
          if ( g_LockAndReadFillPathSurface )
            (*(void (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 224LL))(a1, a2, v49);
          if ( (*(unsigned __int8 (__fastcall **)(__int64, struct IBitmapSource **))(*(_QWORD *)a5 + 40LL))(a5, &v42)
            && (_DWORD)v42 == 1 )
          {
            (*(void (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)a5 + 48LL))(a5, &v52, 1LL);
            v34 = D2DPrimitiveBlendFromMilCompositingMode(a11);
            v36 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *, __int64, __int64, int *, bool, int))(v35 + 120))(
                    a2,
                    v33,
                    &v52,
                    1LL,
                    v47,
                    v53,
                    *((_DWORD *)v44 + 46) != 0,
                    v34);
            v15 = v36;
            if ( v36 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0x14Bu);
              goto LABEL_36;
            }
          }
          else
          {
            v37 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a5 + 24LL))(a5, 0LL, &v48);
            v15 = v37;
            if ( v37 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0x14Fu);
              goto LABEL_36;
            }
            v38 = D2DPrimitiveBlendFromMilCompositingMode(a11);
            v40 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, bool, int))(v39 + 104))(
                    a2,
                    v33,
                    v48,
                    v47,
                    *((_DWORD *)v44 + 46) != 0,
                    v38);
            v15 = v40;
            if ( v40 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, 0x155u);
              goto LABEL_36;
            }
          }
          if ( g_LockAndReadFillPathSurface )
            (*(void (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 224LL))(a1, a2, v33);
        }
      }
    }
  }
LABEL_36:
  if ( v45 )
    (*(void (__fastcall **)(struct CHwBrush *))(*(_QWORD *)v45 + 24LL))(v45);
  ReleaseInterfaceNoNULL<IWICBitmap>(v48);
  ReleaseInterfaceNoNULL<CPolygon>((__int64)v45);
  ReleaseInterfaceNoNULL<IBitmapSource>((__int64)v16);
  return v15;
}
