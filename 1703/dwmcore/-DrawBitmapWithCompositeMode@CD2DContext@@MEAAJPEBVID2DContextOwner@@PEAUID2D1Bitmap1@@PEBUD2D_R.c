/*
 * XREFs of ?DrawBitmapWithCompositeMode@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@MW4D2D1_COMPOSITE_MODE@@W4D2D1_BORDER_MODE@@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x180198270
 * Callers:
 *     <none>
 * Callees:
 *     ?PrependTranslate@CMILMatrix@@QEAAXMM@Z @ 0x1800121E8 (-PrependTranslate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z @ 0x18001BAC0 (-SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x18009A95C (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x1800AC7C4 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800AC894 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?SetAntiAliasMode@CD2DContext@@IEAAXW4D2D1_ANTIALIAS_MODE@@@Z @ 0x180130794 (-SetAntiAliasMode@CD2DContext@@IEAAXW4D2D1_ANTIALIAS_MODE@@@Z.c)
 *     Template_qq @ 0x18013BC88 (Template_qq.c)
 *     Template_xn @ 0x180163010 (Template_xn.c)
 */

__int64 __fastcall CD2DContext::DrawBitmapWithCompositeMode(
        ID2D1Effect **this,
        const struct ID2DContextOwner *a2,
        struct ID2D1Bitmap1 *a3,
        const struct D2D_RECT_F *a4,
        const struct D2D_POINT_2F *a5,
        D3DVALUE a6,
        enum D2D1_COMPOSITE_MODE a7,
        enum D2D1_BORDER_MODE a8,
        enum D2D1_INTERPOLATION_MODE a9)
{
  __int64 v12; // rax
  struct ID2D1Effect *v13; // rbx
  char v14; // r12
  int v15; // eax
  __int64 v16; // rcx
  struct ID2D1Effect *v17; // r14
  ID2D1Effect *v18; // rsi
  ID2D1Effect *v19; // rdi
  __int64 (__fastcall *v20)(struct ID2D1Effect *, _QWORD, _QWORD, __int128 *, int); // rax
  int v21; // eax
  unsigned int v22; // ebx
  int v23; // eax
  struct ID2D1Bitmap1 *v24; // r13
  D3DVALUE v25; // xmm7_4
  __int64 (__fastcall *v26)(ID2D1Effect *, __int64, _QWORD, struct ID2D1Bitmap1 **, int); // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  int v29; // eax
  CD2DContext *v30; // r13
  int v31; // eax
  __int64 v32; // rcx
  unsigned int v34; // [rsp+28h] [rbp-E0h]
  struct ID2D1Bitmap1 *v35; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v36; // [rsp+50h] [rbp-B8h] BYREF
  CD2DContext *v37; // [rsp+58h] [rbp-B0h]
  struct _D3DMATRIX v38; // [rsp+68h] [rbp-A0h] BYREF
  int v39; // [rsp+A8h] [rbp-60h]
  __int128 v40; // [rsp+B8h] [rbp-50h] BYREF
  int v41; // [rsp+C8h] [rbp-40h]
  int v42; // [rsp+CCh] [rbp-3Ch]
  struct _D3DMATRIX v43; // [rsp+D8h] [rbp-30h] BYREF
  int v44; // [rsp+118h] [rbp+10h]
  int v45; // [rsp+11Ch] [rbp+14h]
  int v46; // [rsp+120h] [rbp+18h]
  D3DVALUE v47; // [rsp+124h] [rbp+1Ch]
  struct _D3DMATRIX v48; // [rsp+128h] [rbp+20h] BYREF

  v35 = a3;
  v37 = (CD2DContext *)this;
  CD2DContext::FlushDrawList((CD2DContext *)this);
  v12 = *(_QWORD *)a2;
  v36 = 0LL;
  v13 = 0LL;
  v14 = 0;
  (*(void (__fastcall **)(const struct ID2DContextOwner *, struct _D3DMATRIX *))(v12 + 24))(a2, &v48);
  v39 = 0;
  v38 = v48;
  CD2DContext::EnsureBeginDraw((CD2DContext *)this);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v15 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 32LL))(a2);
    Template_qq(v16, &EVTDESC_ETWGUID_DRAWEVENT_Start, 15, v15);
  }
  v41 = 0;
  v42 = 0;
  v17 = this[27];
  v18 = this[26];
  v19 = this[25];
  v40 = _xmm;
  (*(void (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)v37 + 22) + 240LL))(*((_QWORD *)v37 + 22), &v40);
  if ( a4 )
  {
    (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, struct ID2D1Bitmap1 *, __int64))(*(_QWORD *)v17 + 112LL))(
      v17,
      0LL,
      v35,
      1LL);
    v20 = *(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, __int128 *, int))(*(_QWORD *)v17 + 72LL);
    v40 = (__int128)*a4;
    v21 = v20(v17, 0LL, 0LL, &v40, 16);
    v22 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x622u);
      goto LABEL_46;
    }
    v23 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, __int128 *, int))(*(_QWORD *)v17 + 72LL))(
            v17,
            1LL,
            0LL,
            &v40,
            16);
    v22 = v23;
    if ( v23 < 0 )
    {
      v34 = 1578;
LABEL_45:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, v34);
      goto LABEL_46;
    }
    v13 = v17;
  }
  v24 = v35;
  if ( HIDWORD(*(_QWORD *)(*(__int64 (__fastcall **)(struct ID2D1Bitmap1 *, struct ID2D1Bitmap1 **))(*(_QWORD *)v35 + 48LL))(
                            v35,
                            &v35)) == 3 )
  {
    v14 = 1;
    v25 = a6;
  }
  else
  {
    v25 = FLOAT_1_0;
    if ( a6 >= 1.0 || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a6 - 1.0)) & _xmm) < 0.0000011920929 )
      goto LABEL_28;
  }
  if ( v13 )
    ID2D1Effect::SetInputEffect(v18, 0, v13);
  else
    (*(void (__fastcall **)(ID2D1Effect *, _QWORD, struct ID2D1Bitmap1 *, __int64))(*(_QWORD *)v18 + 112LL))(
      v18,
      0LL,
      v24,
      1LL);
  v43._11 = v25;
  v43._22 = v25;
  v43._33 = v25;
  *(_QWORD *)&v43._12 = 0LL;
  *(_QWORD *)&v43._14 = 0LL;
  *(_QWORD *)&v43._23 = 0LL;
  *(_QWORD *)&v43._31 = 0LL;
  *(_QWORD *)&v43._34 = 0LL;
  *(_QWORD *)&v43._42 = 0LL;
  if ( v14 )
    v43._44 = 0.0;
  else
    v43._44 = a6;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  if ( v14 )
    v47 = a6;
  else
    v47 = 0.0;
  v26 = *(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, struct ID2D1Bitmap1 **, int))(*(_QWORD *)v18 + 72LL);
  if ( v14 )
  {
    LODWORD(v35) = 2;
    v23 = v26(v18, 1LL, 0LL, &v35, 4);
    v22 = v23;
    if ( v23 < 0 )
    {
      v34 = 1621;
      goto LABEL_45;
    }
  }
  else
  {
    LODWORD(v35) = 1;
    v23 = v26(v18, 1LL, 0LL, &v35, 4);
    v22 = v23;
    if ( v23 < 0 )
    {
      v34 = 1626;
      goto LABEL_45;
    }
  }
  v23 = (*(__int64 (__fastcall **)(ID2D1Effect *, _QWORD, _QWORD, struct _D3DMATRIX *, int))(*(_QWORD *)v18 + 72LL))(
          v18,
          0LL,
          0LL,
          &v43,
          80);
  v22 = v23;
  if ( v23 < 0 )
  {
    v34 = 1630;
    goto LABEL_45;
  }
  v13 = v18;
LABEL_28:
  if ( v13 )
    ID2D1Effect::SetInputEffect(v19, 0, v13);
  else
    (*(void (__fastcall **)(ID2D1Effect *, _QWORD, struct ID2D1Bitmap1 *, __int64))(*(_QWORD *)v19 + 112LL))(
      v19,
      0LL,
      v24,
      1LL);
  if ( a5 )
    CMILMatrix::PrependTranslate((CMILMatrix *)&v38, a5->x, a5->y);
  v48 = *CMILMatrix::GetD3DMatrix(&v38, &v43);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    v27 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 40LL))(a2);
    Template_xn(v28, &EVTDESC_VISUAL_TRANSFORM3D_MATRIX, v27, 16, (__int64)&v38);
  }
  v23 = (*(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, struct _D3DMATRIX *, int))(*(_QWORD *)v19 + 72LL))(
          v19,
          2LL,
          0LL,
          &v48,
          64);
  v22 = v23;
  if ( v23 < 0 )
  {
    v34 = 1667;
    goto LABEL_45;
  }
  v29 = (*(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, enum D2D1_BORDER_MODE *, int))(*(_QWORD *)v19 + 72LL))(
          v19,
          1LL,
          0LL,
          &a8,
          4);
  v22 = v29;
  if ( v29 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0x689u);
    goto LABEL_46;
  }
  v23 = (*(__int64 (__fastcall **)(ID2D1Effect *, _QWORD, _QWORD, enum D2D1_INTERPOLATION_MODE *, int))(*(_QWORD *)v19 + 72LL))(
          v19,
          0LL,
          0LL,
          &a9,
          4);
  v22 = v23;
  if ( v23 < 0 )
  {
    v34 = 1676;
    goto LABEL_45;
  }
  (*(void (__fastcall **)(ID2D1Effect *, __int64 *))(*(_QWORD *)v19 + 144LL))(v19, &v36);
  v30 = v37;
  CD2DContext::SetAntiAliasMode(v37, D2D1_ANTIALIAS_MODE_ALIASED);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _DWORD, enum D2D1_COMPOSITE_MODE))(**((_QWORD **)v30 + 22)
                                                                                            + 664LL))(
    *((_QWORD *)v30 + 22),
    v36,
    0LL,
    0LL,
    0,
    a7);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v31 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 32LL))(a2);
    Template_qq(v32, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 15, v31);
  }
LABEL_46:
  if ( v36 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  if ( v19 )
    (*(void (__fastcall **)(ID2D1Effect *, _QWORD, _QWORD, __int64))(*(_QWORD *)v19 + 112LL))(v19, 0LL, 0LL, 1LL);
  if ( v18 )
    (*(void (__fastcall **)(ID2D1Effect *, _QWORD, _QWORD, __int64))(*(_QWORD *)v18 + 112LL))(v18, 0LL, 0LL, 1LL);
  if ( v17 )
    (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, __int64))(*(_QWORD *)v17 + 112LL))(v17, 0LL, 0LL, 1LL);
  return v22;
}
