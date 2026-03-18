/*
 * XREFs of ?RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180174B64
 * Callers:
 *     ?RestoreState@CColorTransformLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180174F30 (-RestoreState@CColorTransformLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180007C2C (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180066650 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180143900 (McTemplateU0.c)
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x180161240 (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 */

__int64 __fastcall CColorTransformLayer::RenderLayer(CColorTransformLayer *this, struct CDrawingContext *a2)
{
  __m128i v4; // xmm0
  __m128i v5; // xmm1
  __int64 v6; // rcx
  __m128i v7; // xmm0
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rcx
  __m128 v14; // xmm2
  __m128 v15; // xmm3
  __m128 v16; // xmm7
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  __m128 v19; // xmm6
  int v20; // eax
  int v21; // eax
  int v22; // eax
  __int64 v24; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v25; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v26; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v27[2]; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD v28[40]; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v29[4]; // [rsp+F8h] [rbp-10h] BYREF
  _DWORD v30[15]; // [rsp+108h] [rbp+0h] BYREF
  unsigned __int32 v31; // [rsp+144h] [rbp+3Ch]
  __int32 v32; // [rsp+148h] [rbp+40h]
  unsigned __int32 v33; // [rsp+14Ch] [rbp+44h]
  unsigned __int32 v34; // [rsp+150h] [rbp+48h]
  unsigned __int32 v35; // [rsp+154h] [rbp+4Ch]
  _BYTE v36[16]; // [rsp+158h] [rbp+50h] BYREF

  v26 = 0LL;
  memset_0(v28, 0, 0x28uLL);
  v4 = _mm_cvtsi32_si128(*((_DWORD *)this + 4));
  v5 = _mm_cvtsi32_si128(*((_DWORD *)this + 5));
  v6 = *((_QWORD *)this + 1);
  v24 = 0LL;
  v29[0] = 0;
  v29[1] = 0;
  v27[0] = _mm_cvtepi32_ps(v4).m128_u32[0];
  v7 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
  v27[1] = _mm_cvtepi32_ps(v5).m128_u32[0];
  *(float *)&v29[2] = (float)*((int *)this + 6);
  v29[3] = _mm_cvtepi32_ps(v7).m128_u32[0];
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 88LL))(v6, &v26);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x64u);
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**((_QWORD **)a2 + 48) + 224LL))(
            *((_QWORD *)a2 + 48),
            0LL,
            &v24);
    v9 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x69u);
    }
    else
    {
      v28[0] = 10;
      v28[1] = -16777216;
      v28[2] = 1;
      v11 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)v28, 1);
      v9 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x7Au);
      }
      else
      {
        v12 = *((_QWORD *)this + 14);
        v13 = *((_QWORD *)this + 1);
        v14 = *(__m128 *)(v12 + 56);
        v15 = *(__m128 *)(v12 + 72);
        v16 = *(__m128 *)(v12 + 136);
        v17 = *(__m128 *)(v12 + 88);
        v18 = *(__m128 *)(v12 + 104);
        v19 = *(__m128 *)(v12 + 120);
        v30[0] = v14.m128_i32[0];
        v30[1] = _mm_shuffle_ps(v14, v14, 85).m128_u32[0];
        v30[4] = _mm_shuffle_ps(v15, v15, 85).m128_u32[0];
        v30[8] = _mm_shuffle_ps(v17, v17, 170).m128_u32[0];
        v30[11] = _mm_shuffle_ps(v18, v18, 85).m128_u32[0];
        v30[2] = _mm_shuffle_ps(v14, v14, 170).m128_u32[0];
        v30[14] = _mm_shuffle_ps(v19, v19, 85).m128_u32[0];
        v30[5] = _mm_shuffle_ps(v15, v15, 170).m128_u32[0];
        v30[7] = v17.m128_i32[0];
        v30[10] = v18.m128_i32[0];
        v30[13] = v19.m128_i32[0];
        v32 = v16.m128_i32[0];
        v30[3] = _mm_shuffle_ps(v14, v14, 255).m128_u32[0];
        v30[6] = _mm_shuffle_ps(v15, v15, 255).m128_u32[0];
        v30[9] = _mm_shuffle_ps(v17, v17, 255).m128_u32[0];
        v30[12] = _mm_shuffle_ps(v18, v18, 255).m128_u32[0];
        v33 = _mm_shuffle_ps(v16, v16, 85).m128_u32[0];
        v34 = _mm_shuffle_ps(v16, v16, 170).m128_u32[0];
        v35 = _mm_shuffle_ps(v16, v16, 255).m128_u32[0];
        v31 = _mm_shuffle_ps(v19, v19, 170).m128_u32[0];
        if ( *(_DWORD *)((*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v13 + 24LL))(v13, v36) + 4) == 3 )
        {
          v31 = 0;
          v35 = LODWORD(FLOAT_1_0);
        }
        v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _DWORD *, int))(*(_QWORD *)v24 + 72LL))(
                v24,
                0LL,
                0LL,
                v30,
                80);
        v9 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0xA7u);
        }
        else
        {
          LODWORD(v25) = 2;
          v21 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *, int))(*(_QWORD *)v24 + 72LL))(
                  v24,
                  1LL,
                  0LL,
                  &v25,
                  4);
          v9 = v21;
          if ( v21 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0xACu);
          }
          else
          {
            (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v24 + 112LL))(v24, 0LL, v26, 1LL);
            if ( g_LockAndReadLayer )
              (*(void (__fastcall **)(_QWORD, _QWORD, unsigned __int64))(**((_QWORD **)this + 1) + 224LL))(
                *((_QWORD *)this + 1),
                *((_QWORD *)a2 + 48),
                ((unsigned __int64)a2 + 8) & -(__int64)(a2 != 0LL));
            v22 = CDrawingContext::FillEffect(a2, v24, (__int64)v29, (__int64)v27);
            v9 = v22;
            if ( v22 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0xC4u);
            }
            else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            {
              McTemplateU0(
                Microsoft_Windows_Dwm_Core_Provider_Context,
                &EVTDESC_ETWGUID_LAYEREVENT_EndExternalLayer_Stop);
            }
          }
        }
        CDrawingContext::PopRenderOptionsInternal(a2, 1);
      }
    }
  }
  ReleaseInterfaceNoNULL<IWICBitmap>(v26);
  if ( v24 )
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v24 + 112LL))(v24, 0LL, 0LL, 1LL);
  return v9;
}
