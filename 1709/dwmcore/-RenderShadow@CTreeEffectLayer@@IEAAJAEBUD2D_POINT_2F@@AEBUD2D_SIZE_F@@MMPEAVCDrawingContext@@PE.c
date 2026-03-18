/*
 * XREFs of ?RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x18014C26C
 * Callers:
 *     ?Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800809DC (-Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z @ 0x1800BD3D0 (-SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x18013D8B8 (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 */

__int64 __fastcall CTreeEffectLayer::RenderShadow(
        CTreeEffectLayer *this,
        const struct D2D_POINT_2F *a2,
        const struct D2D_SIZE_F *a3,
        float a4,
        float a5,
        struct CDrawingContext *a6,
        struct CDropShadow *a7,
        struct IRenderTargetBitmap *a8)
{
  __m128i v10; // xmm0
  __m128i v11; // xmm1
  float v12; // xmm3_4
  float v13; // xmm2_4
  ID2D1Effect *v14; // rbx
  __int64 (__fastcall *v15)(struct IRenderTargetBitmap *, __int64 *, const struct D2D_SIZE_F *); // rax
  float v16; // xmm3_4
  float v17; // xmm2_4
  signed int v18; // eax
  unsigned int v19; // edi
  __int64 *v20; // r15
  __int64 v21; // rbx
  float v22; // xmm6_4
  signed int v23; // eax
  signed int v24; // eax
  int v25; // eax
  unsigned int v26; // xmm0_4
  unsigned int v27; // xmm1_4
  float v28; // xmm2_4
  float v29; // xmm1_4
  __int64 v30; // rax
  __int64 (__fastcall *v31)(__int64 *, __int64, struct ID2D1Effect **); // rax
  signed int v32; // eax
  signed int v33; // eax
  signed int v34; // eax
  signed int v35; // eax
  __int64 v36; // rcx
  unsigned int v37; // [rsp+28h] [rbp-79h]
  float v38; // [rsp+38h] [rbp-69h] BYREF
  struct ID2D1Effect *v39; // [rsp+40h] [rbp-61h] BYREF
  int v40; // [rsp+48h] [rbp-59h]
  __int64 v41; // [rsp+50h] [rbp-51h] BYREF
  __int64 v42; // [rsp+58h] [rbp-49h] BYREF
  unsigned __int64 v43; // [rsp+60h] [rbp-41h] BYREF
  float v44; // [rsp+68h] [rbp-39h] BYREF
  float v45; // [rsp+6Ch] [rbp-35h]
  float v46; // [rsp+70h] [rbp-31h]
  float v47; // [rsp+74h] [rbp-2Dh]
  __int64 v48; // [rsp+78h] [rbp-29h] BYREF
  int v49; // [rsp+80h] [rbp-21h]
  float v50; // [rsp+84h] [rbp-1Dh]
  unsigned __int64 v51; // [rsp+88h] [rbp-19h]
  __int128 v52; // [rsp+90h] [rbp-11h] BYREF

  if ( !a8 )
    return 0LL;
  if ( g_LockAndReadLayer )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *, _QWORD, unsigned __int64))(*(_QWORD *)a8 + 184LL))(
      a8,
      *((_QWORD *)a6 + 48),
      ((unsigned __int64)a6 + 8) & -(__int64)(a6 != 0LL));
  v10 = _mm_cvtsi32_si128(*((_DWORD *)this + 5));
  v11 = _mm_cvtsi32_si128(*((_DWORD *)this + 4));
  v12 = *((float *)this + 56);
  v13 = *((float *)this + 55);
  v14 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v52 = 0uLL;
  v43 = 0LL;
  v15 = *(__int64 (__fastcall **)(struct IRenderTargetBitmap *, __int64 *, const struct D2D_SIZE_F *))(*(_QWORD *)a8 + 96LL);
  v16 = v12 - _mm_cvtepi32_ps(v10).m128_f32[0];
  v17 = v13 - _mm_cvtepi32_ps(v11).m128_f32[0];
  *(float *)v11.m128i_i32 = (float)*((int *)this + 7) / *((float *)this + 69);
  *(float *)v10.m128i_i32 = (float)((float)*((int *)this + 6) / *((float *)this + 68)) + v17;
  v44 = v17;
  v45 = v16;
  v46 = *(float *)v10.m128i_i32;
  v47 = *(float *)v11.m128i_i32 + v16;
  v18 = v15(a8, &v41, a3);
  v19 = v18;
  if ( v18 < 0 )
  {
    v37 = 891;
    goto LABEL_31;
  }
  v20 = (__int64 *)*((_QWORD *)a6 + 48);
  v18 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64 *))(*v20 + 248))(v20, &CLSID_D2D1Shadow, &v42);
  v19 = v18;
  if ( v18 < 0 )
  {
    v37 = 894;
    goto LABEL_31;
  }
  v21 = v42;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v42 + 104) + 8LL))(*(_QWORD *)(v42 + 104));
  v14 = *(ID2D1Effect **)(v21 + 104);
  v22 = *((float *)a7 + 40);
  v52 = *((_OWORD *)a7 + 9);
  v38 = v22 / 3.0;
  v23 = (*(__int64 (__fastcall **)(ID2D1Effect *, _QWORD, _QWORD, float *, int))(*(_QWORD *)v14 + 72LL))(
          v14,
          0LL,
          0LL,
          &v38,
          4);
  v19 = v23;
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v23, 0x384u);
    goto LABEL_32;
  }
  v24 = (*(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, __int128 *, int))(*(_QWORD *)v14 + 72LL))(
          v14,
          1LL,
          0LL,
          &v52,
          16);
  v19 = v24;
  if ( v24 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v24, 0x385u);
    goto LABEL_32;
  }
  v38 = 0.0;
  v18 = (*(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, float *, int))(*(_QWORD *)v14 + 72LL))(
          v14,
          2LL,
          0LL,
          &v38,
          4);
  v19 = v18;
  if ( v18 < 0 )
  {
    v37 = 902;
    goto LABEL_31;
  }
  v25 = *((_DWORD *)a7 + 44);
  v39 = (struct ID2D1Effect *)*((_QWORD *)a7 + 21);
  v40 = v25;
  *(float *)&v26 = (float)(*(float *)&v39 + v44) - v22;
  *(float *)&v27 = (float)(*((float *)&v39 + 1) + v45) - v22;
  v45 = v45 - v22;
  v28 = *((float *)this + 68);
  v44 = v44 - v22;
  v43 = __PAIR64__(v27, v26);
  v46 = v46 + v22;
  v47 = v47 + v22;
  if ( v28 < 0.99999881 || *((float *)this + 69) < 0.99999881 )
  {
    v29 = 1.0 / *((float *)this + 69);
    v49 = 0;
    v30 = *v20;
    v39 = 0LL;
    v31 = *(__int64 (__fastcall **)(__int64 *, __int64, struct ID2D1Effect **))(v30 + 216);
    v50 = v29;
    v48 = COERCE_UNSIGNED_INT(1.0 / v28);
    v51 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    v32 = v31(v20, 7LL, &v39);
    v19 = v32;
    if ( v32 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v32, 0x398u);
      goto LABEL_32;
    }
    LODWORD(v38) = 1;
    v33 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, float *, int))(*(_QWORD *)v39 + 72LL))(
            v39,
            0LL,
            0LL,
            &v38,
            4);
    v19 = v33;
    if ( v33 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v33, 0x39Au);
      goto LABEL_32;
    }
    v38 = 0.0;
    v34 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, float *, int))(*(_QWORD *)v39 + 72LL))(
            v39,
            1LL,
            0LL,
            &v38,
            4);
    v19 = v34;
    if ( v34 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v34, 0x39Cu);
      goto LABEL_32;
    }
    v35 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, __int64 *, int))(*(_QWORD *)v39 + 72LL))(
            v39,
            2LL,
            0LL,
            &v48,
            24);
    v19 = v35;
    if ( v35 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v35, 0x39Eu);
      goto LABEL_32;
    }
    v38 = FLOAT_0_5;
    v18 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, float *, int))(*(_QWORD *)v39 + 72LL))(
            v39,
            3LL,
            0LL,
            &v38,
            4);
    v19 = v18;
    if ( v18 < 0 )
    {
      v37 = 927;
      goto LABEL_31;
    }
    (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, __int64, __int64))(*(_QWORD *)v39 + 112LL))(
      v39,
      0LL,
      v41,
      1LL);
    ID2D1Effect::SetInputEffect(v14, 0, v39);
  }
  else
  {
    (*(void (__fastcall **)(ID2D1Effect *, _QWORD, __int64, __int64))(*(_QWORD *)v14 + 112LL))(v14, 0LL, v41, 1LL);
  }
  v18 = CDrawingContext::FillEffect(a6, (__int64)v14, (__int64)&v44, (__int64)&v43, 0);
  v19 = v18;
  if ( v18 < 0 )
  {
    v37 = 941;
LABEL_31:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v18, v37);
  }
LABEL_32:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v41);
  if ( v14 )
    (*(void (__fastcall **)(ID2D1Effect *))(*(_QWORD *)v14 + 16LL))(v14);
  v36 = v42;
  if ( v42 )
  {
    v42 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  }
  return v19;
}
