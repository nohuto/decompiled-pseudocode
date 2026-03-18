/*
 * XREFs of ?BuildEffect@CCustomBlur@@QEAAJPEAUID2D1Image@@AEBUD2D_RECT_F@@AEBUD2D_SIZE_F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@AEBUD2D_VECTOR_2F@@PEAU6@@Z @ 0x1800BCF40
 * Callers:
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18006F640 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z @ 0x1800BD3D0 (-SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
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
  int v14; // r9d
  signed int v15; // eax
  unsigned int v16; // ebx
  float v17; // xmm0_4
  signed int v18; // eax
  signed int v19; // eax
  char *v20; // r14
  signed int v21; // eax
  signed int v22; // eax
  int v24; // r9d
  unsigned int v25; // [rsp+20h] [rbp-51h]
  BOOL v26; // [rsp+30h] [rbp-41h] BYREF
  __int64 v27; // [rsp+38h] [rbp-39h] BYREF
  __int64 v28; // [rsp+40h] [rbp-31h] BYREF
  __int128 v29; // [rsp+48h] [rbp-29h] BYREF

  v8 = (__int64)*a4;
  v29 = (__int128)*a3;
  v11 = (__int64)*a6;
  a7->x = 0.0;
  a7->y = 0.0;
  v27 = v11;
  *(FLOAT *)&v11 = a6->x;
  v28 = v8;
  if ( *(float *)&v11 == 1.0 || *(float *)&v28 <= *((float *)&CCustomBlur::k_optimizations + 5 * a5 + 2) )
  {
    v12 = *(float *)&v27;
  }
  else
  {
    v12 = *(float *)&v27;
    if ( *(float *)&v27 <= 0.5 )
    {
      v12 = *(float *)&v27 * 2.0;
      a7->x = 0.25;
      *(float *)&v27 = v12;
    }
  }
  if ( a6->y == 1.0 || *((float *)&v28 + 1) <= *((float *)&CCustomBlur::k_optimizations + 5 * a5 + 2) )
  {
    v13 = *((float *)&v27 + 1);
  }
  else
  {
    v13 = *((float *)&v27 + 1);
    if ( *((float *)&v27 + 1) <= 0.5 )
    {
      v13 = *((float *)&v27 + 1) * 2.0;
      a7->y = 0.25;
      *((float *)&v27 + 1) = v13;
    }
  }
  if ( v12 == 1.0 && v13 == 1.0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**((_QWORD **)this + 5) + 112LL))(
      *((_QWORD *)this + 5),
      0LL,
      0LL,
      1LL);
    ID2D1Effect::SetInputEffect(*((ID2D1Effect **)this + 3), 0, 0LL, v24);
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
    ID2D1Effect::SetInputEffect(*((ID2D1Effect **)this + 3), 0, *((struct ID2D1Effect **)this + 5), v14);
    v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, char *, int))(**((_QWORD **)this + 5) + 72LL))(
            *((_QWORD *)this + 5),
            2LL,
            0LL,
            (char *)&CCustomBlur::k_optimizations + 20 * a5 + 16,
            4);
    v16 = v15;
    if ( v15 < 0 )
    {
      v25 = 136;
      goto LABEL_37;
    }
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *, int))(**((_QWORD **)this + 5) + 72LL))(
            *((_QWORD *)this + 5),
            0LL,
            0LL,
            &v27,
            8);
    v16 = v15;
    if ( v15 < 0 )
    {
      v25 = 137;
      goto LABEL_37;
    }
    *(float *)&v28 = *(float *)&v28 * *(float *)&v27;
    *((float *)&v28 + 1) = *((float *)&v28 + 1) * *((float *)&v27 + 1);
    *((float *)&v29 + 2) = (float)(*((float *)&v29 + 2) * *(float *)&v27) - 1.0;
    *((float *)&v29 + 3) = (float)(*((float *)&v29 + 3) * *((float *)&v27 + 1)) - 1.0;
    v17 = *((float *)&v29 + 2) - (float)((float)(*(float *)&v29 * *(float *)&v27) + 1.0);
    *(float *)&v29 = (float)(*(float *)&v29 * *(float *)&v27) + 1.0;
    *((float *)&v29 + 1) = (float)(*((float *)&v29 + 1) * *((float *)&v27 + 1)) + 1.0;
    if ( v17 < 1.0 )
    {
      *(float *)&v29 = (float)((float)((float)(a3->right + a3->left) * 0.5) * *(float *)&v27) - 0.5;
      *((float *)&v29 + 2) = *(float *)&v29 + 1.0;
    }
    if ( (float)(*((float *)&v29 + 3) - *((float *)&v29 + 1)) < 1.0 )
    {
      *((float *)&v29 + 1) = (float)((float)((float)(a3->bottom + a3->top) * 0.5) * *((float *)&v27 + 1)) - 0.5;
      *((float *)&v29 + 3) = *((float *)&v29 + 1) + 1.0;
    }
  }
  v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *, int))(**((_QWORD **)this + 3) + 72LL))(
          *((_QWORD *)this + 3),
          0LL,
          0LL,
          &v29,
          16);
  v16 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v18, 0xB5u);
    return v16;
  }
  v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *, int))(**((_QWORD **)this + 6) + 72LL))(
          *((_QWORD *)this + 6),
          0LL,
          0LL,
          &v28,
          4);
  v16 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v19, 0xB7u);
    return v16;
  }
  v20 = (char *)&CCustomBlur::k_optimizations + 20 * a5;
  v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, char *, int))(**((_QWORD **)this + 6) + 72LL))(
          *((_QWORD *)this + 6),
          2LL,
          0LL,
          v20 + 12,
          4);
  v16 = v15;
  if ( v15 < 0 )
  {
    v25 = 184;
    goto LABEL_37;
  }
  v26 = a6->x != *(float *)&v27;
  v21 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, BOOL *, int))(**((_QWORD **)this + 6) + 72LL))(
          *((_QWORD *)this + 6),
          3LL,
          0LL,
          &v26,
          4);
  v16 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v21, 0xBBu);
    return v16;
  }
  v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, char *, int))(**((_QWORD **)this + 7) + 72LL))(
          *((_QWORD *)this + 7),
          0LL,
          0LL,
          (char *)&v28 + 4,
          4);
  v16 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v22, 0xBDu);
    return v16;
  }
  v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, char *, int))(**((_QWORD **)this + 7) + 72LL))(
          *((_QWORD *)this + 7),
          2LL,
          0LL,
          v20 + 12,
          4);
  v16 = v15;
  if ( v15 < 0 )
  {
    v25 = 190;
    goto LABEL_37;
  }
  v26 = a6->y != *((float *)&v27 + 1);
  v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, BOOL *, int))(**((_QWORD **)this + 7) + 72LL))(
          *((_QWORD *)this + 7),
          3LL,
          0LL,
          &v26,
          4);
  v16 = v15;
  if ( v15 < 0 )
  {
    v25 = 193;
LABEL_37:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, v25);
  }
  return v16;
}
