/*
 * XREFs of ?FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBVCMILMatrix@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCMILBrush@@MAEBV6@W4Enum@MilCompositingMode@@@Z @ 0x18008F1CC
 * Callers:
 *     ?FillPath@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBVCMILMatrix@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCLegacyMilBrushRealizer@@AEBV6@W4Enum@MilCompositingMode@@@Z @ 0x18008F0DC (-FillPath@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036770 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetBitmap@CMILBrushBitmap@@QEBAJPEAPEAVIBitmapSource@@@Z @ 0x180046194 (-GetBitmap@CMILBrushBitmap@@QEBAJPEAPEAVIBitmapSource@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059FB0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x180074928 (--$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IntersectAliasedBoundsRectFWithSurfaceRect@@YA_NAEBUMilRectF@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@PEAV2@@Z @ 0x180077720 (-IntersectAliasedBoundsRectFWithSurfaceRect@@YA_NAEBUMilRectF@@AEBV-$TMilRect_@HUtagRECT@@UMilPo.c)
 *     ?DeriveHWBrush@CHwSurfaceRenderTargetSharedData@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@PEAPEAVCHwBrush@@@Z @ 0x18007BD14 (-DeriveHWBrush@CHwSurfaceRenderTargetSharedData@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@PEAPEA.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z @ 0x1800823A0 (--$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z.c)
 *     ?SetDeviceRenderingAndSamplingBounds@CHwBrushContext@@QEAAXAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x1800BFE54 (-SetDeviceRenderingAndSamplingBounds@CHwBrushContext@@QEAAXAEBV-$TMilRect_@HUtagRECT@@UMilPointA.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     floor_0 @ 0x1800C5D56 (floor_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::FillPathWithBrush(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        float *a4,
        __int64 a5,
        __int64 a6,
        float *a7,
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
  signed int Bitmap; // eax
  __int64 v26; // xmm0_8
  signed int v27; // eax
  signed int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // r8
  signed int v31; // eax
  __int64 v32; // r14
  int v33; // edx
  signed int v34; // eax
  signed int v36; // eax
  signed int v37; // eax
  int v38; // edx
  signed int v39; // eax
  struct IBitmapSource *v40; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v41; // [rsp+60h] [rbp-A8h] BYREF
  float *v42; // [rsp+68h] [rbp-A0h]
  struct CHwBrush *v43; // [rsp+70h] [rbp-98h] BYREF
  __int64 v44; // [rsp+78h] [rbp-90h] BYREF
  __int64 v45; // [rsp+80h] [rbp-88h] BYREF
  __int64 v46; // [rsp+88h] [rbp-80h] BYREF
  __int64 v47; // [rsp+90h] [rbp-78h]
  __int128 v48; // [rsp+98h] [rbp-70h] BYREF
  __int64 *v49; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v50; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v51[16]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v52[3]; // [rsp+D8h] [rbp-30h] BYREF
  int v53; // [rsp+F0h] [rbp-18h]
  int v54; // [rsp+F4h] [rbp-14h]
  int v55; // [rsp+F8h] [rbp-10h]
  __int64 *v56; // [rsp+110h] [rbp+8h]

  v11 = a4[19];
  v41 = a6;
  v49 = (__int64 *)a7;
  v42 = a4;
  v15 = 0;
  v47 = a3;
  v16 = 0LL;
  v45 = 0LL;
  v43 = 0LL;
  v40 = 0LL;
  v46 = 0LL;
  v17 = (int)floor_0((float)(v11 * 16.0) + 0.5);
  v18 = a4[20];
  LODWORD(v50) = (v17 + 7) >> 4;
  v19 = (int)floor_0((float)(v18 * 16.0) + 0.5);
  v20 = a4[21];
  DWORD1(v50) = (v19 + 7) >> 4;
  v21 = (int)floor_0((float)(v20 * 16.0) + 0.5);
  v22 = a4[22];
  DWORD2(v50) = (v21 + 7) >> 4;
  HIDWORD(v50) = ((int)floor_0((float)(v22 * 16.0) + 0.5) + 7) >> 4;
  if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(a7) )
  {
    v48 = 0uLL;
  }
  else if ( v41 )
  {
    CMILMatrix::Transform2DBoundsHelper<0>(v41, (__int64)v23, (float *)&v48);
  }
  else
  {
    v48 = *v23;
  }
  if ( IntersectAliasedBoundsRectFWithSurfaceRect((float *)&v48, &v50, (__int64)v51) )
  {
    v24 = *(_QWORD *)a8;
    v49 = 0LL;
    v41 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    if ( (*(unsigned int (__fastcall **)(struct CMILBrush *))(v24 + 24))(a8) == 3 )
    {
      Bitmap = CMILBrushBitmap::GetBitmap(
                 (CMILBrushBitmap *)(-(__int64)(a8 != 0LL) & ((unsigned __int64)a8 - 24)),
                 &v40);
      v15 = Bitmap;
      if ( Bitmap < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, Bitmap, 0xF5u);
        v16 = v40;
        goto LABEL_22;
      }
      v16 = v40;
      if ( *((_DWORD *)v42 + 45) == 6 )
      {
        v49 = &v41;
        v36 = (*(__int64 (__fastcall **)(struct IBitmapSource *, __int64 *, struct IBitmapSource **))(*(_QWORD *)v40 + 32LL))(
                v40,
                &v44,
                &v40);
        v15 = v36;
        if ( v36 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v36, 0x104u);
          goto LABEL_22;
        }
        *(float *)&v41 = 1.0 / (float)((float)(int)v44 * *a10);
        *((float *)&v41 + 1) = 1.0 / (float)((float)(int)v40 * a10[5]);
      }
    }
    v26 = *((_QWORD *)a8 + 1);
    v52[0] = v42;
    v53 = *((_DWORD *)a8 + 4);
    v54 = a1[29];
    v52[1] = a10;
    v56 = v49;
    v52[2] = v26;
    v55 = 1;
    CHwBrushContext::SetDeviceRenderingAndSamplingBounds(v52, v51);
    v27 = (*(__int64 (__fastcall **)(_DWORD *, __int128 *))(*(_QWORD *)a1 + 216LL))(a1, &v48);
    v15 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v27, 0x126u);
    }
    else
    {
      v28 = CHwSurfaceRenderTargetSharedData::DeriveHWBrush(
              (CHwSurfaceRenderTargetSharedData *)(v48 + 496),
              a8,
              (const struct CHwBrushContext *)v52,
              &v43);
      v15 = v28;
      if ( v28 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v28, 0x127u);
      }
      else
      {
        v29 = *(unsigned int *)((*(__int64 (__fastcall **)(_DWORD *, __int64 **))(*(_QWORD *)a1 + 24LL))(a1, &v49) + 8);
        if ( !(_DWORD)v29 || (v30 = 2LL, (_DWORD)v29 != 1) )
          v30 = 1LL;
        v31 = (*(__int64 (__fastcall **)(struct CHwBrush *, __int64, __int64, __int64 *))(*(_QWORD *)v43 + 16LL))(
                v43,
                v29,
                v30,
                &v45);
        v15 = v31;
        if ( v31 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v31, 0x12Bu);
        }
        else
        {
          if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a5 + 16LL))(a5) )
            goto LABEL_22;
          v32 = v47;
          if ( g_LockAndReadFillPathSurface )
            (*(void (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 184LL))(a1, a2, v47);
          if ( (*(unsigned __int8 (__fastcall **)(__int64, struct IBitmapSource **))(*(_QWORD *)a5 + 40LL))(a5, &v40)
            && (_DWORD)v40 == 1 )
          {
            (*(void (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)a5 + 48LL))(a5, &v50, 1LL);
            v33 = 0;
            if ( a11 )
            {
              if ( a11 == 1 )
              {
                v33 = 1;
              }
              else if ( a11 == 4 )
              {
                v33 = 2;
              }
            }
            v34 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *, __int64, __int64, _BYTE *, bool, int))(*(_QWORD *)a2 + 112LL))(
                    a2,
                    v32,
                    &v50,
                    1LL,
                    v45,
                    v51,
                    *((_DWORD *)v42 + 46) != 0,
                    v33);
            v15 = v34;
            if ( v34 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v34, 0x14Bu);
              goto LABEL_22;
            }
          }
          else
          {
            v37 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a5 + 24LL))(a5, 0LL, &v46);
            v15 = v37;
            if ( v37 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v37, 0x14Fu);
              goto LABEL_22;
            }
            v38 = 0;
            if ( a11 )
            {
              if ( a11 == 1 )
              {
                v38 = 1;
              }
              else if ( a11 == 4 )
              {
                v38 = 2;
              }
            }
            v39 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, bool, int))(*(_QWORD *)a2 + 104LL))(
                    a2,
                    v32,
                    v46,
                    v45,
                    *((_DWORD *)v42 + 46) != 0,
                    v38);
            v15 = v39;
            if ( v39 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v39, 0x155u);
              goto LABEL_22;
            }
          }
          if ( g_LockAndReadFillPathSurface )
            (*(void (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 184LL))(a1, a2, v32);
        }
      }
    }
  }
LABEL_22:
  if ( v43 )
    (*(void (__fastcall **)(struct CHwBrush *))(*(_QWORD *)v43 + 24LL))(v43);
  ReleaseInterfaceNoNULL<CManipulationManager>(v46);
  ReleaseInterfaceNoNULL<CPolygon>((__int64)v43);
  ReleaseInterfaceNoNULL<ID2D1Bitmap1>((__int64)v16);
  return v15;
}
