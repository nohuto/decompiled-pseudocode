/*
 * XREFs of ?GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVID2DContext@@PEAVID2DContextOwner@@AEBUtagRECT@@PEAVCCompositionSurfaceBitmap@@PEAPEAUID2D1Effect@@@Z @ 0x18018E570
 * Callers:
 *     ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@PEAPEAUID2D1Effect@@@Z @ 0x18018E298 (-GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z @ 0x1800C1544 (-SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180186E54 (-GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@QEAAJPEAVID2DContextOwner@@PE.c)
 */

__int64 __fastcall CFilterEffect::GetInputEffectForAtlasedSurface(
        CFilterEffect *this,
        struct ID2DContext *a2,
        struct ID2DContextOwner *a3,
        const __m128i *a4,
        struct CCompositionSurfaceBitmap *a5,
        struct ID2D1Effect **a6)
{
  struct ID2D1Effect *v7; // rsi
  ID2D1Effect *v9; // rdi
  int D2DBitmapRealizationForContextOwner; // eax
  unsigned int v11; // ebx
  __int64 v12; // rbx
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(struct ID2D1Effect *, _QWORD, _QWORD, __m128 *, int); // rax
  int v15; // eax
  __int64 (__fastcall *v16)(ID2D1Effect *, __int64, _QWORD, __m128 *, int); // rax
  unsigned int v18; // [rsp+20h] [rbp-50h]
  struct ID2D1Bitmap1 *v19; // [rsp+30h] [rbp-40h] BYREF
  __int64 v20; // [rsp+38h] [rbp-38h] BYREF
  __int64 v21; // [rsp+40h] [rbp-30h] BYREF
  __m128 v22; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v23; // [rsp+58h] [rbp-18h]

  v20 = 0LL;
  v21 = 0LL;
  v7 = 0LL;
  v19 = 0LL;
  v9 = 0LL;
  D2DBitmapRealizationForContextOwner = CCompositionSurfaceBitmap::GetD2DBitmapRealizationForContextOwner(a5, a3, &v19);
  v11 = D2DBitmapRealizationForContextOwner;
  if ( D2DBitmapRealizationForContextOwner < 0 )
  {
    v18 = 821;
    goto LABEL_12;
  }
  D2DBitmapRealizationForContextOwner = (*(__int64 (__fastcall **)(struct ID2DContext *, GUID *, __int64 *))(*(_QWORD *)a2 + 256LL))(
                                          a2,
                                          &CLSID_D2D1Crop,
                                          &v20);
  v11 = D2DBitmapRealizationForContextOwner;
  if ( D2DBitmapRealizationForContextOwner < 0 )
  {
    v18 = 823;
    goto LABEL_12;
  }
  D2DBitmapRealizationForContextOwner = (*(__int64 (__fastcall **)(struct ID2DContext *, GUID *, __int64 *))(*(_QWORD *)a2 + 256LL))(
                                          a2,
                                          &CLSID_D2D12DAffineTransform,
                                          &v21);
  v11 = D2DBitmapRealizationForContextOwner;
  if ( D2DBitmapRealizationForContextOwner < 0 )
  {
    v18 = 824;
    goto LABEL_12;
  }
  v12 = v20;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v20 + 104) + 8LL))(*(_QWORD *)(v20 + 104));
  v7 = *(struct ID2D1Effect **)(v12 + 104);
  v13 = v21;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v21 + 104) + 8LL))(*(_QWORD *)(v21 + 104));
  v9 = *(ID2D1Effect **)(v13 + 104);
  v14 = *(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, __m128 *, int))(*(_QWORD *)v7 + 72LL);
  v22 = _mm_cvtepi32_ps(_mm_loadu_si128(a4));
  v15 = v14(v7, 0LL, 0LL, &v22, 16);
  v11 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x340u);
    goto LABEL_13;
  }
  v16 = *(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, __m128 *, int))(*(_QWORD *)v9 + 72LL);
  v23 = _mm_unpacklo_ps(
          _mm_xor_ps((__m128)COERCE_UNSIGNED_INT((float)a4->m128i_i32[0]), (__m128)(unsigned int)_xmm),
          _mm_xor_ps((__m128)COERCE_UNSIGNED_INT((float)a4->m128i_i32[1]), (__m128)(unsigned int)_xmm)).m128_u64[0];
  v22 = (__m128)_xmm;
  D2DBitmapRealizationForContextOwner = v16(v9, 2LL, 0LL, &v22, 24);
  v11 = D2DBitmapRealizationForContextOwner;
  if ( D2DBitmapRealizationForContextOwner < 0 )
  {
    v18 = 840;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DBitmapRealizationForContextOwner, v18);
    goto LABEL_13;
  }
  (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, struct ID2D1Bitmap1 *, __int64))(*(_QWORD *)v7 + 112LL))(
    v7,
    0LL,
    v19,
    1LL);
  ID2D1Effect::SetInputEffect(v9, 0, v7);
  *a6 = v9;
  v9 = 0LL;
LABEL_13:
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v19);
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v7);
  ReleaseInterfaceNoNULL<IWICBitmap>(v20);
  ReleaseInterfaceNoNULL<IWICBitmap>(v21);
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v9);
  return v11;
}
