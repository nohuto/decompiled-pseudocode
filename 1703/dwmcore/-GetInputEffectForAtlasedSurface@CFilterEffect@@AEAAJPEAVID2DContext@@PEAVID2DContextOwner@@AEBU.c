/*
 * XREFs of ?GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVID2DContext@@PEAVID2DContextOwner@@AEBUtagRECT@@PEAVCCompositionSurfaceBitmap@@PEAPEAUID2D1Effect@@@Z @ 0x18016F0A8
 * Callers:
 *     ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@PEAPEAUID2D1Effect@@@Z @ 0x180002E54 (-GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18000B360 (-GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@UEAAJPEAVID2DContextOwner@@PE.c)
 *     ?SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z @ 0x18001BAC0 (-SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFilterEffect::GetInputEffectForAtlasedSurface(
        CFilterEffect *this,
        struct ID2DContext *a2,
        struct ID2DContextOwner *a3,
        const __m128i *a4,
        struct CCompositionSurfaceBitmap *a5,
        struct ID2D1Effect **a6)
{
  struct ID2D1Effect *v7; // rdi
  ID2D1Effect *v9; // r14
  int D2DBitmapRealizationForContextOwner; // eax
  unsigned int v11; // ebx
  _QWORD **v12; // rbx
  _QWORD **v13; // rbx
  int v14; // eax
  __int64 (__fastcall *v15)(ID2D1Effect *, __int64, _QWORD, __m128 *, int); // rax
  unsigned int v17; // [rsp+20h] [rbp-50h]
  struct ID2D1Bitmap1 *v18; // [rsp+30h] [rbp-40h] BYREF
  _QWORD **v19; // [rsp+38h] [rbp-38h] BYREF
  _QWORD **v20; // [rsp+40h] [rbp-30h] BYREF
  __m128 v21; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v22; // [rsp+58h] [rbp-18h]

  v19 = 0LL;
  v20 = 0LL;
  v7 = 0LL;
  v18 = 0LL;
  v9 = 0LL;
  D2DBitmapRealizationForContextOwner = CCompositionSurfaceBitmap::GetD2DBitmapRealizationForContextOwner(
                                          (struct CCompositionSurfaceBitmap *)((char *)a5 + 88),
                                          a3,
                                          &v18);
  v11 = D2DBitmapRealizationForContextOwner;
  if ( D2DBitmapRealizationForContextOwner < 0 )
  {
    v17 = 842;
  }
  else
  {
    D2DBitmapRealizationForContextOwner = (*(__int64 (__fastcall **)(struct ID2DContext *, GUID *, _QWORD ***))(*(_QWORD *)a2 + 288LL))(
                                            a2,
                                            &CLSID_D2D1Crop,
                                            &v19);
    v11 = D2DBitmapRealizationForContextOwner;
    if ( D2DBitmapRealizationForContextOwner < 0 )
    {
      v17 = 844;
    }
    else
    {
      D2DBitmapRealizationForContextOwner = (*(__int64 (__fastcall **)(struct ID2DContext *, GUID *, _QWORD ***))(*(_QWORD *)a2 + 288LL))(
                                              a2,
                                              &CLSID_D2D12DAffineTransform,
                                              &v20);
      v11 = D2DBitmapRealizationForContextOwner;
      if ( D2DBitmapRealizationForContextOwner < 0 )
      {
        v17 = 845;
      }
      else
      {
        v12 = v19;
        (*(void (__fastcall **)(_QWORD *))(*v19[13] + 8LL))(v19[13]);
        v7 = (struct ID2D1Effect *)v12[13];
        v13 = v20;
        (*(void (__fastcall **)(_QWORD *))(*v20[13] + 8LL))(v20[13]);
        v9 = (ID2D1Effect *)v13[13];
        v21 = _mm_cvtepi32_ps(_mm_loadu_si128(a4));
        v14 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, __m128 *, int))(*(_QWORD *)v7 + 72LL))(
                v7,
                0LL,
                0LL,
                &v21,
                16);
        v11 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x355u);
          goto LABEL_13;
        }
        v15 = *(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, __m128 *, int))(*(_QWORD *)v9 + 72LL);
        v22 = _mm_unpacklo_ps(
                _mm_xor_ps((__m128)COERCE_UNSIGNED_INT((float)a4->m128i_i32[0]), (__m128)_xmm),
                _mm_xor_ps((__m128)COERCE_UNSIGNED_INT((float)a4->m128i_i32[1]), (__m128)_xmm)).m128_u64[0];
        v21 = (__m128)_xmm;
        D2DBitmapRealizationForContextOwner = v15(v9, 2LL, 0LL, &v21, 24);
        v11 = D2DBitmapRealizationForContextOwner;
        if ( D2DBitmapRealizationForContextOwner >= 0 )
        {
          (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, struct ID2D1Bitmap1 *, __int64))(*(_QWORD *)v7 + 112LL))(
            v7,
            0LL,
            v18,
            1LL);
          ID2D1Effect::SetInputEffect(v9, 0, v7);
          *a6 = v9;
          v9 = 0LL;
          goto LABEL_13;
        }
        v17 = 861;
      }
    }
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBitmapRealizationForContextOwner, v17);
LABEL_13:
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v18);
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v7);
  if ( v19 )
    ((void (__fastcall *)(_QWORD **))(*v19)[2])(v19);
  if ( v20 )
    ((void (__fastcall *)(_QWORD **))(*v20)[2])(v20);
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v9);
  return v11;
}
