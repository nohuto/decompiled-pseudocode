/*
 * XREFs of ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N2@Z @ 0x180004500
 * Callers:
 *     ?Initialize@CNineGridDrawListBrush@@AEAAJXZ @ 0x180004F0C (-Initialize@CNineGridDrawListBrush@@AEAAJXZ.c)
 * Callees:
 *     ?IsEmpty@Insets@@SA_NAEBV1@@Z @ 0x180002D68 (-IsEmpty@Insets@@SA_NAEBV1@@Z.c)
 *     ?AddEntry@CoordMap@@AEAAJAEAV?$DynArray@URampEntry@CoordMap@@$0A@@@HAEBURampPair@1@W4RampMergeMode@1@@Z @ 0x180004414 (-AddEntry@CoordMap@@AEAAJAEAV-$DynArray@URampEntry@CoordMap@@$0A@@@HAEBURampPair@1@W4RampMergeMo.c)
 *     ?Clamp@Insets@@SA?AV1@AEBV1@MM@Z @ 0x180005884 (-Clamp@Insets@@SA-AV1@AEBV1@MM@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UD2D_RECT_F@@$0A@@@QEAAJPEFBUD2D_RECT_F@@I@Z @ 0x18000638C (-AddMultipleAndSet@-$DynArray@UD2D_RECT_F@@$0A@@@QEAAJPEFBUD2D_RECT_F@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CoordMap::AddNineGrid(
        CoordMap *this,
        __int64 a2,
        const struct D2D_RECT_F *a3,
        const struct Insets *a4,
        const struct D2D_RECT_F *a5,
        const struct Insets *a6,
        bool a7,
        bool a8)
{
  float v10; // xmm8_4
  float top; // xmm2_4
  float v12; // xmm7_4
  float v13; // xmm15_4
  float v14; // xmm13_4
  float v15; // xmm14_4
  float v16; // xmm12_4
  __int64 v17; // rcx
  float *v18; // r8
  float v19; // xmm9_4
  float v20; // xmm11_4
  float v21; // xmm7_4
  float v22; // xmm10_4
  bool v23; // al
  __int64 v24; // xmm4_8
  float v25; // xmm5_4
  float v26; // xmm2_4
  float v27; // xmm2_4
  float v28; // xmm1_4
  bool v29; // di
  bool v30; // r12
  float v31; // xmm1_4
  bool v32; // cf
  float v33; // xmm1_4
  bool v34; // r15
  float v35; // xmm6_4
  float v36; // xmm15_4
  float v37; // xmm13_4
  float v38; // xmm0_4
  float v39; // xmm9_4
  int v40; // eax
  unsigned int v41; // ebx
  float v42; // xmm2_4
  float v43; // xmm9_4
  int v44; // eax
  __int64 *v45; // rdi
  float v46; // xmm0_4
  float v47; // xmm7_4
  int v48; // eax
  bool v49; // r12
  float v50; // xmm2_4
  __int64 *v51; // rdi
  int v52; // eax
  int v53; // eax
  int v55; // eax
  float v56; // xmm1_4
  int v57; // eax
  float v58; // xmm1_4
  int v59; // eax
  float v60; // xmm1_4
  int v61; // eax
  float v62; // xmm1_4
  float v63; // xmm1_4
  float v64; // xmm2_4
  float v65; // xmm2_4
  float v66; // xmm2_4
  float v67; // xmm2_4
  bool IsEmpty; // al
  float v69; // [rsp+38h] [rbp-D0h] BYREF
  float left; // [rsp+3Ch] [rbp-CCh]
  float v71; // [rsp+40h] [rbp-C8h]
  float v72; // [rsp+44h] [rbp-C4h]
  bool v73; // [rsp+48h] [rbp-C0h]
  bool v74; // [rsp+49h] [rbp-BFh]
  float right; // [rsp+4Ch] [rbp-BCh]
  float v76; // [rsp+50h] [rbp-B8h]
  float v77; // [rsp+54h] [rbp-B4h]
  float v78; // [rsp+58h] [rbp-B0h]
  float v79; // [rsp+5Ch] [rbp-ACh]
  FLOAT bottom; // [rsp+60h] [rbp-A8h]
  float v81; // [rsp+68h] [rbp-A0h] BYREF
  float v82; // [rsp+6Ch] [rbp-9Ch]
  float v83; // [rsp+70h] [rbp-98h]
  float v84; // [rsp+74h] [rbp-94h]

  if ( a8 )
    v10 = FLOAT_0_5;
  else
    v10 = 0.0;
  top = a3->top;
  right = a3->right;
  v12 = a5->bottom - a5->top;
  v13 = a5->right - a5->left;
  bottom = a3->bottom;
  v79 = top;
  v78 = v12;
  v76 = right;
  v77 = bottom - top;
  Insets::Clamp(&v69, a4);
  if ( v69 < 0.00000011920929 )
    v69 = 0.0;
  v14 = v71;
  if ( v71 < 0.00000011920929 )
  {
    v14 = 0.0;
    v71 = 0.0;
  }
  v15 = left;
  if ( left < 0.00000011920929 )
  {
    v15 = 0.0;
    left = 0.0;
  }
  v16 = v72;
  if ( v72 < 0.00000011920929 )
  {
    v16 = 0.0;
    v72 = 0.0;
  }
  Insets::Clamp(&v81, a6);
  v19 = v81;
  if ( v10 > v81 )
  {
    v19 = 0.0;
    v81 = 0.0;
  }
  v20 = v83;
  if ( v10 > v83 )
  {
    v20 = 0.0;
    v83 = 0.0;
  }
  v21 = v82;
  if ( v10 > v82 )
  {
    v21 = 0.0;
    v82 = 0.0;
  }
  v22 = v84;
  if ( v10 > v84 )
  {
    v22 = 0.0;
    v84 = 0.0;
  }
  v23 = a7;
  v24 = _xmm;
  v25 = FLOAT_0_0000011920929;
  if ( a7 )
  {
    v26 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v76 - (float)(v14 + v69))) & _xmm);
    if ( v26 <= 0.0000011920929
      || (v27 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v77 - (float)(v16 + v15))) & _xmm), v27 <= 0.0000011920929) )
    {
      v23 = 0;
      a7 = 0;
    }
    if ( v23 )
      goto LABEL_23;
  }
  v62 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v13 - v19) - v20) - (float)((float)(v76 - v69) - v14))) & _xmm);
  if ( v62 <= 0.0000011920929 )
  {
    v64 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v19 - v69)) & _xmm);
    if ( v64 <= 0.0000011920929 )
    {
      v19 = 0.0;
      v69 = 0.0;
      v81 = 0.0;
    }
    v65 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v20 - v14)) & _xmm);
    if ( v65 <= 0.0000011920929 )
    {
      v14 = 0.0;
      v20 = 0.0;
      v71 = 0.0;
      v83 = 0.0;
    }
  }
  v63 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v78 - v21) - v22) - (float)((float)(v77 - v15) - v16))) & _xmm);
  if ( v63 <= 0.0000011920929 )
  {
    v66 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v21 - v15)) & _xmm);
    if ( v66 <= 0.0000011920929 )
    {
      v15 = 0.0;
      v21 = 0.0;
      left = 0.0;
      v82 = 0.0;
    }
    v67 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v22 - v16)) & _xmm);
    if ( v67 <= 0.0000011920929 )
    {
      v16 = 0.0;
      v22 = 0.0;
      v72 = 0.0;
      v84 = 0.0;
    }
  }
  if ( v23 || !Insets::IsEmpty((const struct Insets *)&v69) || !(IsEmpty = Insets::IsEmpty((const struct Insets *)&v81)) )
  {
LABEL_23:
    v28 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v76 - (float)(v14 + v69))) & v24);
    v29 = v25 < v28;
    v30 = v14 > 0.0;
    v73 = v15 > 0.0;
    v31 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v77 - (float)(v16 + v15))) & v24);
    v32 = v25 < v31;
    v33 = *v18;
    v34 = v32;
    v35 = *v18 + v69;
    v74 = v16 > 0.0;
    if ( v29 )
      right = right - v14;
    else
      right = v35;
    v36 = v79 + v15;
    if ( v32 )
      v37 = bottom - v16;
    else
      v37 = v79 + v15;
    if ( v69 > 0.0 )
    {
      left = a5->left;
      v71 = left;
      v69 = v33;
      v55 = CoordMap::AddEntry(v17, (__int64 *)this, (__int64)v18, (__int64)&v69, 0);
      v41 = v55;
      if ( v55 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v55, 0x21Au);
        return v41;
      }
    }
    else if ( !v29 )
    {
      goto LABEL_30;
    }
    v69 = v35;
    v38 = (float)(v19 - v10) + a5->left;
    v39 = (float)(v19 + v10) + a5->left;
    left = v38;
    v71 = v39;
    v40 = CoordMap::AddEntry(v17, (__int64 *)this, (__int64)v18, (__int64)&v69, 2);
    v41 = v40;
    if ( v40 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, 0x221u);
      return v41;
    }
LABEL_30:
    if ( v30 || v29 )
    {
      v42 = a5->right;
      v43 = right;
      v69 = right;
      left = v42 - (float)(v20 + v10);
      v71 = v42 - (float)(v20 - v10);
      v44 = CoordMap::AddEntry(v17, (__int64 *)this, (__int64)v18, (__int64)&v69, 2);
      v41 = v44;
      if ( v44 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v44, 0x228u);
        return v41;
      }
      if ( v30 )
      {
        v56 = a5->right;
        v69 = a3->right;
        left = v56;
        v71 = v56;
        v57 = CoordMap::AddEntry(v17, (__int64 *)this, (__int64)v18, (__int64)&v69, 0);
        v41 = v57;
        if ( v57 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v57, 0x22Du);
          return v41;
        }
      }
    }
    else
    {
      v43 = right;
    }
    if ( v73 )
    {
      v58 = a5->top;
      v45 = (__int64 *)((char *)this + 192);
      v69 = a3->top;
      left = v58;
      v71 = v58;
      v59 = CoordMap::AddEntry(v17, (__int64 *)this + 24, (__int64)v18, (__int64)&v69, 0);
      v41 = v59;
      if ( v59 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v59, 0x232u);
        return v41;
      }
    }
    else
    {
      if ( !v34 )
      {
LABEL_38:
        v49 = v74;
        if ( v74 || v34 )
        {
          v50 = a5->bottom;
          v51 = (__int64 *)((char *)this + 192);
          v69 = v37;
          left = v50 - (float)(v22 + v10);
          v71 = v50 - (float)(v22 - v10);
          v52 = CoordMap::AddEntry(v17, (__int64 *)this + 24, (__int64)v18, (__int64)&v69, 2);
          v41 = v52;
          if ( v52 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v52, 0x240u);
            return v41;
          }
        }
        else
        {
          v51 = (__int64 *)((char *)this + 192);
        }
        if ( v49 )
        {
          v60 = a5->bottom;
          v69 = a3->bottom;
          left = v60;
          v71 = v60;
          v61 = CoordMap::AddEntry(v17, v51, (__int64)v18, (__int64)&v69, 0);
          v41 = v61;
          if ( v61 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v61, 0x245u);
            return v41;
          }
        }
        if ( a7 )
        {
          v81 = v35;
          v82 = v36;
          v83 = v43;
          v84 = v37;
          v53 = DynArray<D2D_RECT_F,0>::AddMultipleAndSet((char *)this + 384, &v81, 1LL);
          v41 = v53;
          if ( v53 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v53, 0x24Cu);
            return v41;
          }
        }
        return 0;
      }
      v45 = (__int64 *)((char *)this + 192);
    }
    v69 = v36;
    v46 = (float)(v21 - v10) + a5->top;
    v47 = (float)(v21 + v10) + a5->top;
    left = v46;
    v71 = v47;
    v48 = CoordMap::AddEntry(v17, v45, (__int64)v18, (__int64)&v69, 2);
    v41 = v48;
    if ( v48 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v48, 0x239u);
      return v41;
    }
    goto LABEL_38;
  }
  return 0;
}
