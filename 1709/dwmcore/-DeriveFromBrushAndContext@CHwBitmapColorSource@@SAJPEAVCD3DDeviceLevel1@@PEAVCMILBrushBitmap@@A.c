/*
 * XREFs of ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x180086734
 * Callers:
 *     ?GetHwBrush@CHwBrushPool@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@@Z @ 0x180085B4C (-GetHwBrush@CHwBrushPool@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@@Z.c)
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x1801AD898 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?GetBitmap@CMILBrushBitmap@@QEBAJPEAPEAVIBitmapSource@@@Z @ 0x180046194 (-GetBitmap@CMILBrushBitmap@@QEBAJPEAPEAVIBitmapSource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RetrieveFromBitmapSource@CHwBitmapCache@@SAJPEAVIBitmapSource@@PEBVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x18007BBC8 (-RetrieveFromBitmapSource@CHwBitmapCache@@SAJPEAVIBitmapSource@@PEBVCD3DDeviceLevel1@@PEAPEAV1@@.c)
 *     ?TryForDeviceBitmapOrLastUsedBitmapColorSource@CHwBitmapCache@@QEAAXAEBUCacheContextParameters@CHwBitmapColorSource@@AEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEAVCMILBrushBitmap@@AEAPEAV3@3@Z @ 0x18007EBA8 (-TryForDeviceBitmapOrLastUsedBitmapColorSource@CHwBitmapCache@@QEAAXAEBUCacheContextParameters@C.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180081030 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z @ 0x1800823A0 (--$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z.c)
 *     ?CheckAndSetReusableSources@CHwBitmapColorSource@@AEAAXPEAV1@@Z @ 0x1800850BC (-CheckAndSetReusableSources@CHwBitmapColorSource@@AEAAXPEAV1@@Z.c)
 *     ?CalcTextureTransform@CHwBitmapColorSource@@AEAAJPEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@@Z @ 0x1800851A0 (-CalcTextureTransform@CHwBitmapColorSource@@AEAAJPEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@.c)
 *     ?SetFilterMode@CHwTexturedColorSource@@IEAAXW4Enum@MilBitmapInterpolationMode@@PEBUD2DVector2@@@Z @ 0x1800855F4 (-SetFilterMode@CHwTexturedColorSource@@IEAAXW4Enum@MilBitmapInterpolationMode@@PEBUD2DVector2@@@.c)
 *     ?GetRealizationBoundsAndTransforms@CHwBrushContext@@QEBAXPEAVCMILBrushBitmap@@AEAVCMILMatrix@@AEAUBitmapToXSpaceTransform@@AEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@@Z @ 0x1800BFDCC (-GetRealizationBoundsAndTransforms@CHwBrushContext@@QEBAXPEAVCMILBrushBitmap@@AEAVCMILMatrix@@AE.c)
 *     ??0CacheContextParameters@CHwBitmapColorSource@@QEAA@PEBUCContextState@@PEAVCMILBrushBitmap@@W4DXGI_FORMAT@@_NW4ColorSpace@@VDisplayId@@@Z @ 0x1800C0118 (--0CacheContextParameters@CHwBitmapColorSource@@QEAA@PEBUCContextState@@PEAVCMILBrushBitmap@@W4D.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEAVCHwBitmapCache@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVMILMatrix3x2@@PEBVCMILMatrix@@PEBUBitmapToXSpaceTransform@@MHPEBUD2DVector2@@AEAUCacheContextParameters@1@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1801B50E0 (-DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PE.c)
 */

__int64 __fastcall CHwBitmapColorSource::DeriveFromBrushAndContext(
        struct CD3DDeviceLevel1 *a1,
        struct CMILBrushBitmap *a2,
        const struct CHwBrushContext *a3,
        struct CHwTexturedColorSource **a4)
{
  __m128 v4; // xmm1
  __m128 v5; // xmm2
  __m128 v7; // xmm3
  __int128 v8; // xmm0
  CMILRefCountBase **v9; // rbx
  CMILRefCountBase *v11; // r15
  CMILPoolResource *v12; // rsi
  int v13; // edx
  int v14; // edx
  signed int Bitmap; // eax
  unsigned int v16; // edi
  signed int v17; // eax
  int v18; // edi
  signed int v19; // eax
  bool v21; // zf
  signed int v22; // eax
  int v23; // [rsp+20h] [rbp-E0h]
  struct IBitmapSource *v24; // [rsp+60h] [rbp-A0h] BYREF
  CMILRefCountBase *v25; // [rsp+68h] [rbp-98h] BYREF
  CMILPoolResource *v26; // [rsp+70h] [rbp-90h] BYREF
  CHwBitmapColorSource *v27; // [rsp+78h] [rbp-88h] BYREF
  __int64 v28; // [rsp+80h] [rbp-80h]
  struct CD3DDeviceLevel1 *v29; // [rsp+88h] [rbp-78h]
  _DWORD v30[8]; // [rsp+90h] [rbp-70h] BYREF
  int v31; // [rsp+B0h] [rbp-50h] BYREF
  int v32; // [rsp+B8h] [rbp-48h]
  int v33; // [rsp+D0h] [rbp-30h]
  __int64 v34[8]; // [rsp+110h] [rbp+10h] BYREF
  int v35; // [rsp+150h] [rbp+50h]
  __int64 v36[8]; // [rsp+160h] [rbp+60h] BYREF
  int v37; // [rsp+1A0h] [rbp+A0h]
  _BYTE v38[32]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int128 v39; // [rsp+1D0h] [rbp+D0h]
  int v40; // [rsp+1F0h] [rbp+F0h]

  v4 = *(__m128 *)((char *)a2 + 120);
  v5 = *(__m128 *)((char *)a2 + 136);
  v40 = *((_DWORD *)a2 + 46);
  v7 = *(__m128 *)((char *)a2 + 168);
  v28 = (__int64)a4;
  v8 = *(_OWORD *)((char *)a2 + 152);
  v29 = a1;
  v30[0] = v4.m128_i32[0];
  v30[2] = v5.m128_i32[0];
  v9 = 0LL;
  v30[4] = v7.m128_i32[0];
  v11 = 0LL;
  v12 = 0LL;
  v30[1] = _mm_shuffle_ps(v4, v4, 85).m128_u32[0];
  v30[3] = _mm_shuffle_ps(v5, v5, 85).m128_u32[0];
  v30[5] = _mm_shuffle_ps(v7, v7, 85).m128_u32[0];
  v24 = 0LL;
  v27 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v35 = 0;
  v37 = 0;
  v39 = v8;
  CHwBrushContext::GetRealizationBoundsAndTransforms(
    (_DWORD)a3,
    (_DWORD)a2,
    (unsigned int)v36,
    (unsigned int)v34,
    (__int64)v38);
  v13 = *((_DWORD *)a3 + 6);
  if ( !v13 || (v21 = v13 == 1, v14 = 2, !v21) )
    v14 = 1;
  LOBYTE(v23) = *((_DWORD *)a3 + 5) == 1;
  CHwBitmapColorSource::CacheContextParameters::CacheContextParameters(
    &v31,
    *(_QWORD *)a3,
    a2,
    *((unsigned int *)a3 + 4),
    v23,
    v14,
    *((_DWORD *)a3 + 7));
  Bitmap = CMILBrushBitmap::GetBitmap(a2, &v24);
  v16 = Bitmap;
  if ( Bitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, Bitmap, 0xE0u);
    goto LABEL_11;
  }
  v17 = CHwBitmapCache::RetrieveFromBitmapSource(v24, v29, &v26);
  v12 = v26;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v17, 0xE9u);
  }
  else
  {
    v18 = v32;
    if ( v32 > 1 )
      v18 = 1;
    v32 = v18;
    if ( v26 )
    {
      CHwBitmapCache::TryForDeviceBitmapOrLastUsedBitmapColorSource(
        v26,
        &v31,
        (struct MilRectF *)v38,
        (__int64)a2,
        &v27,
        &v25);
      v9 = (CMILRefCountBase **)v27;
      if ( v27 )
      {
        *((_DWORD *)v27 + 23) = v33;
        CHwTexturedColorSource::SetFilterMode((__int64)v9, v18, *((_QWORD **)a3 + 7));
        v11 = v25;
        CHwBitmapColorSource::CheckAndSetReusableSources(v9, v25);
        v19 = CHwBitmapColorSource::CalcTextureTransform(
                (CHwBitmapColorSource *)v9,
                (const struct MILMatrix3x2 *)v30,
                (const struct BitmapToXSpaceTransform *)v34);
        v16 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v19, 0x12Du);
        }
        else
        {
          *(_QWORD *)v28 = v9;
          v9 = 0LL;
        }
        goto LABEL_11;
      }
      v11 = v25;
    }
  }
  v22 = CHwBitmapColorSource::DeriveFromBitmapAndContext(
          v29,
          v24,
          (__int64)v30,
          (__int64)v36,
          (__int64)v34,
          *(_DWORD *)(*(_QWORD *)a3 + 204LL),
          *((_DWORD *)a3 + 8),
          *((_QWORD *)a3 + 7),
          (struct CHwBitmapColorSource::CacheContextParameters *)&v31,
          v28);
  v16 = v22;
  if ( v22 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v22, 0x116u);
LABEL_11:
  if ( v12 )
    CMILPoolResource::Release(v12);
  if ( v11 )
    CMILRefCountBase::Release(v11);
  if ( v9 )
    CMILRefCountBase::Release((CMILRefCountBase *)v9);
  ReleaseInterfaceNoNULL<ID2D1Bitmap1>((__int64)v24);
  return v16;
}
