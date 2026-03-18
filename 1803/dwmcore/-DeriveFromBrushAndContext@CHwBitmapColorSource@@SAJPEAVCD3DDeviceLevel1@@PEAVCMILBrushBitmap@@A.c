/*
 * XREFs of ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1801EF6AC
 * Callers:
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x1801E6D84 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ?GetHwBrush@CHwBrushPool@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@@Z @ 0x1801F48A4 (-GetHwBrush@CHwBrushPool@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VIBitmapSource@@@@YAXPEAVIBitmapSource@@@Z @ 0x18001DE20 (--$ReleaseInterfaceNoNULL@VIBitmapSource@@@@YAXPEAVIBitmapSource@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180021CF0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?SetFilterMode@CHwTexturedColorSource@@IEAAXW4Enum@MilBitmapInterpolationMode@@PEBUD2DVector2@@@Z @ 0x1801E7104 (-SetFilterMode@CHwTexturedColorSource@@IEAAXW4Enum@MilBitmapInterpolationMode@@PEBUD2DVector2@@@.c)
 *     ?RetrieveFromBitmapSource@CHwBitmapCache@@SAJPEAVIBitmapSource@@PEBVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1801E8548 (-RetrieveFromBitmapSource@CHwBitmapCache@@SAJPEAVIBitmapSource@@PEBVCD3DDeviceLevel1@@PEAPEAV1@@.c)
 *     ?TryForDeviceBitmapOrLastUsedBitmapColorSource@CHwBitmapCache@@QEAAXAEBUCacheContextParameters@CHwBitmapColorSource@@AEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEAVCMILBrushBitmap@@AEAPEAV3@3@Z @ 0x1801E88D4 (-TryForDeviceBitmapOrLastUsedBitmapColorSource@CHwBitmapCache@@QEAAXAEBUCacheContextParameters@C.c)
 *     ??0CacheContextParameters@CHwBitmapColorSource@@QEAA@PEBUCContextState@@PEAVCMILBrushBitmap@@W4DXGI_FORMAT@@_NW4ColorSpace@@VDisplayId@@@Z @ 0x1801EE190 (--0CacheContextParameters@CHwBitmapColorSource@@QEAA@PEBUCContextState@@PEAVCMILBrushBitmap@@W4D.c)
 *     ?CalcTextureTransform@CHwBitmapColorSource@@AEAAJPEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@@Z @ 0x1801EE334 (-CalcTextureTransform@CHwBitmapColorSource@@AEAAJPEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@.c)
 *     ?CheckAndSetReusableSources@CHwBitmapColorSource@@AEAAXPEAV1@@Z @ 0x1801EE6A8 (-CheckAndSetReusableSources@CHwBitmapColorSource@@AEAAXPEAV1@@Z.c)
 *     ?DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEAVCHwBitmapCache@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVMILMatrix3x2@@PEBVCMILMatrix@@PEBUBitmapToXSpaceTransform@@MHPEBUD2DVector2@@AEAUCacheContextParameters@1@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1801EF39C (-DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PE.c)
 *     ?GetRealizationBoundsAndTransforms@CHwBrushContext@@QEBAXPEAVCMILBrushBitmap@@AEAVCMILMatrix@@AEAUBitmapToXSpaceTransform@@AEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@@Z @ 0x1801F506C (-GetRealizationBoundsAndTransforms@CHwBrushContext@@QEBAXPEAVCMILBrushBitmap@@AEAVCMILMatrix@@AE.c)
 *     ?GetBitmap@CMILBrushBitmap@@QEBAJPEAPEAVIBitmapSource@@@Z @ 0x18020F488 (-GetBitmap@CMILBrushBitmap@@QEBAJPEAPEAVIBitmapSource@@@Z.c)
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
  CHwBitmapColorSource *v9; // rbx
  struct CHwBitmapColorSource *v11; // r15
  CMILPoolResource *v12; // rsi
  int v13; // edx
  bool v14; // zf
  int v15; // edx
  int Bitmap; // eax
  unsigned int v17; // edi
  int v18; // eax
  int v19; // edi
  int v20; // eax
  CMILRefCountBase **v21; // rcx
  int v22; // eax
  struct IBitmapSource *v24; // [rsp+60h] [rbp-A0h] BYREF
  CMILPoolResource *v25; // [rsp+68h] [rbp-98h] BYREF
  CHwBitmapColorSource *v26; // [rsp+70h] [rbp-90h] BYREF
  struct CHwBitmapColorSource *v27; // [rsp+78h] [rbp-88h] BYREF
  struct CD3DDeviceLevel1 *v28; // [rsp+80h] [rbp-80h]
  __int64 v29; // [rsp+88h] [rbp-78h]
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
  v29 = (__int64)a4;
  v8 = *(_OWORD *)((char *)a2 + 152);
  v28 = a1;
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
  v26 = 0LL;
  v27 = 0LL;
  v25 = 0LL;
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
  if ( !v13 || (v14 = v13 == 1, v15 = 2, !v14) )
    v15 = 1;
  CHwBitmapColorSource::CacheContextParameters::CacheContextParameters(
    (__int64)&v31,
    *(_QWORD *)a3,
    a2,
    *((_DWORD *)a3 + 4),
    *((_DWORD *)a3 + 5) == 1,
    v15,
    *((_DWORD *)a3 + 7));
  Bitmap = CMILBrushBitmap::GetBitmap(a2, &v24);
  v17 = Bitmap;
  if ( Bitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Bitmap, 0xE0u);
    goto LABEL_18;
  }
  v18 = CHwBitmapCache::RetrieveFromBitmapSource(v24, v28, &v25);
  v12 = v25;
  if ( v18 >= 0 )
  {
    v19 = v32;
    if ( v32 > 1 )
      v19 = 1;
    v32 = v19;
    if ( v25 )
    {
      CHwBitmapCache::TryForDeviceBitmapOrLastUsedBitmapColorSource(
        v25,
        &v31,
        (struct MilRectF *)v38,
        (__int64)a2,
        &v26,
        &v27);
      v9 = v26;
      v11 = v27;
    }
    if ( v9 )
    {
      *((_DWORD *)v9 + 23) = v33;
      CHwTexturedColorSource::SetFilterMode((__int64)v9, v19, *((_QWORD **)a3 + 7));
      CHwBitmapColorSource::CheckAndSetReusableSources(v21, v11);
      v22 = CHwBitmapColorSource::CalcTextureTransform(
              v9,
              (const struct MILMatrix3x2 *)v30,
              (const struct BitmapToXSpaceTransform *)v34);
      v17 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x12Du);
      }
      else
      {
        *(_QWORD *)v29 = v9;
        v9 = 0LL;
      }
      goto LABEL_18;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0xE9u);
  }
  v20 = CHwBitmapColorSource::DeriveFromBitmapAndContext(
          v28,
          v24,
          (volatile signed __int32 *)v12,
          (__int64)v38,
          (struct MILMatrix3x2 *)v30,
          (__int64)v36,
          (struct BitmapToXSpaceTransform *)v34,
          *(_DWORD *)(*(_QWORD *)a3 + 204LL),
          *((_DWORD *)a3 + 8),
          *((_QWORD *)a3 + 7),
          (struct CHwBitmapColorSource::CacheContextParameters *)&v31,
          (struct CHwSolidColorTextureSource **)v29);
  v17 = v20;
  if ( v20 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x116u);
LABEL_18:
  if ( v12 )
    CMILPoolResource::Release(v12);
  if ( v11 )
    CMILRefCountBase::Release(v11);
  if ( v9 )
    CMILRefCountBase::Release(v9);
  ReleaseInterfaceNoNULL<IBitmapSource>((__int64)v24);
  return v17;
}
