/*
 * XREFs of ?BuildEffect@CCustomBlur@@QEAAJPEAUID2D1Image@@AEBUD2D_RECT_F@@AEBUD2D_SIZE_F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@AEBUD2D_VECTOR_2F@@PEAU6@@Z @ 0x18001B6E4
 * Callers:
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180019824 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 * Callees:
 *     ?SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z @ 0x18001BAC0 (-SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCustomBlur::BuildEffect(
        CCustomBlur *this,
        struct ID2D1Image *a2,
        const struct D2D_RECT_F *a3,
        const struct D2D_SIZE_F *a4,
        enum D2D1_GAUSSIANBLUR_OPTIMIZATION a5,
        const struct D2D_VECTOR_2F *a6,
        struct D2D_VECTOR_2F *a7)
{
  __int64 v8; // xmm1_8
  float v11; // xmm1_4
  float v12; // xmm0_4
  int v13; // r9d
  int v14; // eax
  unsigned int v15; // ebx
  float v16; // xmm0_4
  int v17; // eax
  int v18; // eax
  float *v19; // r14
  int v20; // eax
  int v21; // eax
  int v23; // r9d
  unsigned int v24; // [rsp+20h] [rbp-60h]
  BOOL v25; // [rsp+30h] [rbp-50h] BYREF
  __int64 v26; // [rsp+38h] [rbp-48h] BYREF
  __int64 v27; // [rsp+40h] [rbp-40h] BYREF
  __int128 v28; // [rsp+48h] [rbp-38h] BYREF

  v8 = (__int64)*a4;
  v28 = (__int128)*a3;
  v26 = (__int64)*a6;
  v27 = v8;
  *a7 = (struct D2D_VECTOR_2F)_mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  if ( a6->x == 1.0 || *(float *)&v27 <= CCustomBlur::k_optimizations[5 * a5 + 2] )
  {
    v11 = *(float *)&v26;
  }
  else
  {
    v11 = *(float *)&v26;
    if ( *(float *)&v26 <= 0.5 )
    {
      v11 = *(float *)&v26 * 2.0;
      a7->x = 0.25;
      *(float *)&v26 = v11;
    }
  }
  if ( a6->y == 1.0 || *((float *)&v27 + 1) <= CCustomBlur::k_optimizations[5 * a5 + 2] )
  {
    v12 = *((float *)&v26 + 1);
  }
  else
  {
    v12 = *((float *)&v26 + 1);
    if ( *((float *)&v26 + 1) <= 0.5 )
    {
      v12 = *((float *)&v26 + 1) * 2.0;
      a7->y = 0.25;
      *((float *)&v26 + 1) = v12;
    }
  }
  if ( v11 == 1.0 && v12 == 1.0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**((_QWORD **)this + 5) + 112LL))(
      *((_QWORD *)this + 5),
      0LL,
      0LL,
      1LL);
    ID2D1Effect::SetInputEffect(*((ID2D1Effect **)this + 3), 0, 0LL, v23);
    (*(void (__fastcall **)(_QWORD, _QWORD, struct ID2D1Image *, __int64))(**((_QWORD **)this + 3) + 112LL))(
      *((_QWORD *)this + 3),
      0LL,
      a2,
      1LL);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, struct ID2D1Image *, __int64))(**((_QWORD **)this + 5) + 112LL))(
      *((_QWORD *)this + 5),
      0LL,
      a2,
      1LL);
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**((_QWORD **)this + 3) + 112LL))(
      *((_QWORD *)this + 3),
      0LL,
      0LL,
      1LL);
    ID2D1Effect::SetInputEffect(*((ID2D1Effect **)this + 3), 0, *((struct ID2D1Effect **)this + 5), v13);
    v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, float *, int))(**((_QWORD **)this + 5) + 72LL))(
            *((_QWORD *)this + 5),
            2LL,
            0LL,
            &CCustomBlur::k_optimizations[5 * a5 + 4],
            4);
    v15 = v14;
    if ( v14 < 0 )
    {
      v24 = 136;
      goto LABEL_37;
    }
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *, int))(**((_QWORD **)this + 5) + 72LL))(
            *((_QWORD *)this + 5),
            0LL,
            0LL,
            &v26,
            8);
    v15 = v14;
    if ( v14 < 0 )
    {
      v24 = 137;
      goto LABEL_37;
    }
    *(float *)&v27 = *(float *)&v27 * *(float *)&v26;
    *((float *)&v27 + 1) = *((float *)&v27 + 1) * *((float *)&v26 + 1);
    *((float *)&v28 + 2) = (float)(*((float *)&v28 + 2) * *(float *)&v26) - 1.0;
    *((float *)&v28 + 3) = (float)(*((float *)&v28 + 3) * *((float *)&v26 + 1)) - 1.0;
    v16 = *((float *)&v28 + 2) - (float)((float)(*(float *)&v28 * *(float *)&v26) + 1.0);
    *(float *)&v28 = (float)(*(float *)&v28 * *(float *)&v26) + 1.0;
    *((float *)&v28 + 1) = (float)(*((float *)&v28 + 1) * *((float *)&v26 + 1)) + 1.0;
    if ( v16 < 1.0 )
    {
      *(float *)&v28 = (float)((float)((float)(a3->right + a3->left) * 0.5) * *(float *)&v26) - 0.5;
      *((float *)&v28 + 2) = *(float *)&v28 + 1.0;
    }
    if ( (float)(*((float *)&v28 + 3) - *((float *)&v28 + 1)) < 1.0 )
    {
      *((float *)&v28 + 1) = (float)((float)((float)(a3->bottom + a3->top) * 0.5) * *((float *)&v26 + 1)) - 0.5;
      *((float *)&v28 + 3) = *((float *)&v28 + 1) + 1.0;
    }
  }
  v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *, int))(**((_QWORD **)this + 3) + 72LL))(
          *((_QWORD *)this + 3),
          0LL,
          0LL,
          &v28,
          16);
  v15 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xB5u);
    return v15;
  }
  v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *, int))(**((_QWORD **)this + 6) + 72LL))(
          *((_QWORD *)this + 6),
          0LL,
          0LL,
          &v27,
          4);
  v15 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xB7u);
    return v15;
  }
  v19 = &CCustomBlur::k_optimizations[5 * a5];
  v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, float *, int))(**((_QWORD **)this + 6) + 72LL))(
          *((_QWORD *)this + 6),
          2LL,
          0LL,
          v19 + 3,
          4);
  v15 = v14;
  if ( v14 < 0 )
  {
    v24 = 184;
    goto LABEL_37;
  }
  v25 = a6->x != *(float *)&v26;
  v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, BOOL *, int))(**((_QWORD **)this + 6) + 72LL))(
          *((_QWORD *)this + 6),
          3LL,
          0LL,
          &v25,
          4);
  v15 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xBBu);
    return v15;
  }
  v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, char *, int))(**((_QWORD **)this + 7) + 72LL))(
          *((_QWORD *)this + 7),
          0LL,
          0LL,
          (char *)&v27 + 4,
          4);
  v15 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0xBDu);
    return v15;
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, float *, int))(**((_QWORD **)this + 7) + 72LL))(
          *((_QWORD *)this + 7),
          2LL,
          0LL,
          v19 + 3,
          4);
  v15 = v14;
  if ( v14 < 0 )
  {
    v24 = 190;
    goto LABEL_37;
  }
  v25 = a6->y != *((float *)&v26 + 1);
  v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, BOOL *, int))(**((_QWORD **)this + 7) + 72LL))(
          *((_QWORD *)this + 7),
          3LL,
          0LL,
          &v25,
          4);
  v15 = v14;
  if ( v14 < 0 )
  {
    v24 = 193;
LABEL_37:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, v24);
  }
  return v15;
}
