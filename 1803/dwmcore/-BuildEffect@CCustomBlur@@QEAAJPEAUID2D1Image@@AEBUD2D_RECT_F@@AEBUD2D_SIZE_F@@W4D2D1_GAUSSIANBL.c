/*
 * XREFs of ?BuildEffect@CCustomBlur@@QEAAJPEAUID2D1Image@@AEBUD2D_RECT_F@@AEBUD2D_SIZE_F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@AEBUD2D_VECTOR_2F@@PEAU6@@Z @ 0x1800C108C
 * Callers:
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18008E120 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z @ 0x1800C1544 (-SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
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
  __int64 v11; // xmm0_8
  float v12; // xmm1_4
  float v13; // xmm0_4
  int v14; // esi
  int v15; // r9d
  int v16; // eax
  unsigned int v17; // ebx
  float v18; // xmm0_4
  int v19; // eax
  int v20; // eax
  char *v21; // r14
  __int64 v22; // rcx
  int v23; // eax
  int v24; // eax
  __int64 v25; // rcx
  int v27; // r9d
  unsigned int v28; // [rsp+20h] [rbp-61h]
  __int64 v29; // [rsp+30h] [rbp-51h] BYREF
  __int64 v30; // [rsp+38h] [rbp-49h] BYREF
  BOOL v31; // [rsp+40h] [rbp-41h] BYREF
  __int128 v32; // [rsp+48h] [rbp-39h] BYREF

  v8 = (__int64)*a4;
  v32 = (__int128)*a3;
  v11 = (__int64)*a6;
  a7->x = 0.0;
  a7->y = 0.0;
  v29 = v11;
  *(FLOAT *)&v11 = a6->x;
  v30 = v8;
  if ( *(float *)&v11 == 1.0 || *(float *)&v30 <= *((float *)&CCustomBlur::k_optimizations + 5 * a5 + 2) )
  {
    v12 = *(float *)&v29;
  }
  else
  {
    v12 = *(float *)&v29;
    if ( *(float *)&v29 <= 0.5 )
    {
      v12 = *(float *)&v29 * 2.0;
      a7->x = 0.25;
      *(float *)&v29 = v12;
    }
  }
  if ( a6->y == 1.0 || *((float *)&v30 + 1) <= *((float *)&CCustomBlur::k_optimizations + 5 * a5 + 2) )
  {
    v13 = *((float *)&v29 + 1);
  }
  else
  {
    v13 = *((float *)&v29 + 1);
    if ( *((float *)&v29 + 1) <= 0.5 )
    {
      v13 = *((float *)&v29 + 1) * 2.0;
      a7->y = 0.25;
      *((float *)&v29 + 1) = v13;
    }
  }
  if ( v12 == 1.0 && v13 == 1.0 )
  {
    v14 = 1;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**((_QWORD **)this + 5) + 112LL))(
      *((_QWORD *)this + 5),
      0LL,
      0LL,
      1LL);
    ID2D1Effect::SetInputEffect(*((ID2D1Effect **)this + 3), 0, 0LL, v27);
    (*(void (__fastcall **)(_QWORD, _QWORD, struct ID2D1Image *, __int64))(**((_QWORD **)this + 3) + 112LL))(
      *((_QWORD *)this + 3),
      0LL,
      a2,
      1LL);
  }
  else
  {
    v14 = 1;
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
    ID2D1Effect::SetInputEffect(*((ID2D1Effect **)this + 3), 0, *((struct ID2D1Effect **)this + 5), v15);
    v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, char *, int))(**((_QWORD **)this + 5) + 72LL))(
            *((_QWORD *)this + 5),
            2LL,
            0LL,
            (char *)&CCustomBlur::k_optimizations + 20 * a5 + 16,
            4);
    v17 = v16;
    if ( v16 < 0 )
    {
      v28 = 136;
      goto LABEL_39;
    }
    v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *, int))(**((_QWORD **)this + 5) + 72LL))(
            *((_QWORD *)this + 5),
            0LL,
            0LL,
            &v29,
            8);
    v17 = v16;
    if ( v16 < 0 )
    {
      v28 = 137;
      goto LABEL_39;
    }
    *(float *)&v30 = *(float *)&v30 * *(float *)&v29;
    *((float *)&v30 + 1) = *((float *)&v30 + 1) * *((float *)&v29 + 1);
    *((float *)&v32 + 2) = (float)(*((float *)&v32 + 2) * *(float *)&v29) - 1.0;
    *((float *)&v32 + 3) = (float)(*((float *)&v32 + 3) * *((float *)&v29 + 1)) - 1.0;
    v18 = *((float *)&v32 + 2) - (float)((float)(*(float *)&v32 * *(float *)&v29) + 1.0);
    *(float *)&v32 = (float)(*(float *)&v32 * *(float *)&v29) + 1.0;
    *((float *)&v32 + 1) = (float)(*((float *)&v32 + 1) * *((float *)&v29 + 1)) + 1.0;
    if ( v18 < 1.0 )
    {
      *(float *)&v32 = (float)((float)((float)(a3->right + a3->left) * 0.5) * *(float *)&v29) - 0.5;
      *((float *)&v32 + 2) = *(float *)&v32 + 1.0;
    }
    if ( (float)(*((float *)&v32 + 3) - *((float *)&v32 + 1)) < 1.0 )
    {
      *((float *)&v32 + 1) = (float)((float)((float)(a3->bottom + a3->top) * 0.5) * *((float *)&v29 + 1)) - 0.5;
      *((float *)&v32 + 3) = *((float *)&v32 + 1) + 1.0;
    }
  }
  v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *, int))(**((_QWORD **)this + 3) + 72LL))(
          *((_QWORD *)this + 3),
          0LL,
          0LL,
          &v32,
          16);
  v17 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0xB5u);
    return v17;
  }
  v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *, int))(**((_QWORD **)this + 6) + 72LL))(
          *((_QWORD *)this + 6),
          0LL,
          0LL,
          &v30,
          4);
  v17 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0xB7u);
    return v17;
  }
  v21 = (char *)&CCustomBlur::k_optimizations + 20 * a5;
  v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, char *, int))(**((_QWORD **)this + 6) + 72LL))(
          *((_QWORD *)this + 6),
          2LL,
          0LL,
          v21 + 12,
          4);
  v17 = v16;
  if ( v16 < 0 )
  {
    v28 = 184;
    goto LABEL_39;
  }
  v22 = *((_QWORD *)this + 6);
  v31 = a6->x != *(float *)&v29;
  v23 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, BOOL *, int))(*(_QWORD *)v22 + 72LL))(
          v22,
          3LL,
          0LL,
          &v31,
          4);
  v17 = v23;
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0xBBu);
    return v17;
  }
  v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, char *, int))(**((_QWORD **)this + 7) + 72LL))(
          *((_QWORD *)this + 7),
          0LL,
          0LL,
          (char *)&v30 + 4,
          4);
  v17 = v24;
  if ( v24 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0xBDu);
    return v17;
  }
  v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, char *, int))(**((_QWORD **)this + 7) + 72LL))(
          *((_QWORD *)this + 7),
          2LL,
          0LL,
          v21 + 12,
          4);
  v17 = v16;
  if ( v16 < 0 )
  {
    v28 = 190;
    goto LABEL_39;
  }
  if ( a6->y == *((float *)&v29 + 1) )
    v14 = 0;
  v25 = *((_QWORD *)this + 7);
  v31 = v14;
  v16 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, BOOL *, int))(*(_QWORD *)v25 + 72LL))(
          v25,
          3LL,
          0LL,
          &v31,
          4);
  v17 = v16;
  if ( v16 < 0 )
  {
    v28 = 193;
LABEL_39:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, v28);
  }
  return v17;
}
