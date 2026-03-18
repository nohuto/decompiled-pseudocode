/*
 * XREFs of ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01H@Z @ 0x180057750
 * Callers:
 *     ?ContributeToCoordMap@CDrawListBrush@@QEBAJIPEAVCoordMap@@@Z @ 0x1800BFF3C (-ContributeToCoordMap@CDrawListBrush@@QEBAJIPEAVCoordMap@@@Z.c)
 *     ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEAAJP6AJPEAVCDrawListBrush@@PEAX@Z1@Z @ 0x1801BA440 (-EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEAAJP6AJPEAVCDrawListBrush@@PEAX@Z1@Z.c)
 * Callees:
 *     ?AddEntry@CoordMap@@AEAAJAEAV?$DynArray@URampEntry@CoordMap@@$0A@@@HAEBURampPair@1@W4RampMergeMode@1@@Z @ 0x180057F88 (-AddEntry@CoordMap@@AEAAJAEAV-$DynArray@URampEntry@CoordMap@@$0A@@@HAEBURampPair@1@W4RampMergeMo.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Clamp@Insets@@SA?AV1@AEBV1@MM@Z @ 0x1800C5FE8 (-Clamp@Insets@@SA-AV1@AEBV1@MM@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UD2D_RECT_F@@$0A@@@QEAAJPEFBUD2D_RECT_F@@I@Z @ 0x1800C6AD8 (-AddMultipleAndSet@-$DynArray@UD2D_RECT_F@@$0A@@@QEAAJPEFBUD2D_RECT_F@@I@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?IsEmpty@Insets@@SA_NAEBV1@@Z @ 0x18015F9E8 (-IsEmpty@Insets@@SA_NAEBV1@@Z.c)
 */

__int64 __fastcall CoordMap::AddNineGrid(
        CoordMap *this,
        int a2,
        const struct D2D_RECT_F *a3,
        const struct Insets *a4,
        const struct D2D_RECT_F *a5,
        const struct Insets *a6,
        int a7)
{
  float top; // xmm2_4
  float v10; // xmm1_4
  float v12; // xmm7_4
  float v13; // xmm8_4
  float v14; // xmm15_4
  float v15; // xmm14_4
  float v16; // xmm13_4
  float v17; // xmm12_4
  int v18; // ecx
  float *v19; // r8
  float v20; // xmm8_4
  float v21; // xmm10_4
  float v22; // xmm7_4
  float v23; // xmm9_4
  int v24; // r15d
  __int64 v25; // xmm4_8
  float v26; // xmm5_4
  float v27; // xmm2_4
  float v28; // xmm2_4
  float v29; // xmm1_4
  float v30; // xmm3_4
  float v31; // xmm2_4
  bool v32; // r12
  bool v33; // cf
  bool v34; // zf
  float v35; // xmm14_4
  bool v36; // r13
  float v37; // xmm13_4
  float v38; // xmm12_4
  float v39; // xmm0_4
  float v40; // xmm8_4
  int v41; // eax
  unsigned int v42; // ebx
  float v43; // xmm2_4
  float v44; // xmm8_4
  int v45; // eax
  bool v46; // al
  float v47; // xmm6_4
  float v48; // xmm0_4
  float v49; // xmm7_4
  int v50; // eax
  bool v51; // r13
  float v52; // xmm2_4
  int v53; // eax
  int v54; // ecx
  int v55; // eax
  int v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // eax
  float v61; // xmm1_4
  float v62; // xmm2_4
  float v63; // xmm2_4
  float v64; // xmm1_4
  float v65; // xmm2_4
  float v66; // xmm2_4
  bool v67; // [rsp+38h] [rbp-D0h]
  float v68; // [rsp+40h] [rbp-C8h] BYREF
  float v69; // [rsp+44h] [rbp-C4h]
  float v70; // [rsp+48h] [rbp-C0h]
  float v71; // [rsp+4Ch] [rbp-BCh]
  bool v72; // [rsp+50h] [rbp-B8h]
  bool v73; // [rsp+51h] [rbp-B7h]
  float v74; // [rsp+54h] [rbp-B4h]
  float v75; // [rsp+58h] [rbp-B0h]
  float right; // [rsp+5Ch] [rbp-ACh]
  float v77; // [rsp+60h] [rbp-A8h]
  float bottom; // [rsp+64h] [rbp-A4h]
  float v79; // [rsp+68h] [rbp-A0h]
  float v80; // [rsp+6Ch] [rbp-9Ch]
  float v81; // [rsp+70h] [rbp-98h]
  float v82; // [rsp+78h] [rbp-90h] BYREF
  float v83; // [rsp+7Ch] [rbp-8Ch]
  float v84; // [rsp+80h] [rbp-88h]
  float v85; // [rsp+84h] [rbp-84h]

  top = a3->top;
  right = a3->right;
  v10 = right - a3->left;
  v12 = a5->right - a5->left;
  v13 = a5->bottom - a5->top;
  bottom = a3->bottom;
  v77 = top;
  v75 = v10;
  v79 = v12;
  v80 = v13;
  v74 = bottom - top;
  Insets::Clamp(&v68, a4);
  v14 = v68;
  if ( v68 < 0.00000011920929 )
  {
    v14 = 0.0;
    v68 = 0.0;
  }
  v15 = v70;
  if ( v70 < 0.00000011920929 )
  {
    v15 = 0.0;
    v70 = 0.0;
  }
  v16 = v69;
  if ( v69 < 0.00000011920929 )
  {
    v16 = 0.0;
    v69 = 0.0;
  }
  v17 = v71;
  if ( v71 < 0.00000011920929 )
  {
    v17 = 0.0;
    v71 = 0.0;
  }
  Insets::Clamp(&v82, a6);
  v20 = v82;
  if ( v82 < 0.5 )
  {
    v20 = 0.0;
    v82 = 0.0;
  }
  v21 = v84;
  if ( v84 < 0.5 )
  {
    v21 = 0.0;
    v84 = 0.0;
  }
  v22 = v83;
  if ( v83 < 0.5 )
  {
    v22 = 0.0;
    v83 = 0.0;
  }
  v23 = v85;
  if ( v85 < 0.5 )
  {
    v23 = 0.0;
    v85 = 0.0;
  }
  v24 = a7;
  v25 = _xmm;
  v26 = FLOAT_0_0000011920929;
  if ( a7 )
  {
    v27 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v75 - (float)(v15 + v14))) & _xmm);
    if ( v27 <= 0.0000011920929
      || (v28 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v74 - (float)(v17 + v16))) & _xmm), v28 <= 0.0000011920929) )
    {
      v24 = 0;
    }
    if ( v24 )
      goto LABEL_21;
  }
  v61 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v79 - v20) - v21) - (float)((float)(v75 - v14) - v15))) & _xmm);
  if ( v61 <= 0.0000011920929 )
  {
    v62 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v20 - v14)) & _xmm);
    if ( v62 <= 0.0000011920929 )
    {
      v14 = 0.0;
      v20 = 0.0;
      v68 = 0.0;
      v82 = 0.0;
    }
    v63 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v21 - v15)) & _xmm);
    if ( v63 <= 0.0000011920929 )
    {
      v15 = 0.0;
      v21 = 0.0;
      v70 = 0.0;
      v84 = 0.0;
    }
  }
  v64 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v80 - v22) - v23) - (float)((float)(v74 - v16) - v17))) & _xmm);
  if ( v64 <= 0.0000011920929 )
  {
    v65 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v22 - v16)) & _xmm);
    if ( v65 <= 0.0000011920929 )
    {
      v16 = 0.0;
      v22 = 0.0;
      v69 = 0.0;
      v83 = 0.0;
    }
    v66 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v23 - v17)) & _xmm);
    if ( v66 <= 0.0000011920929 )
    {
      v17 = 0.0;
      v23 = 0.0;
      v71 = 0.0;
      v85 = 0.0;
    }
  }
  if ( v24 || !Insets::IsEmpty((const struct Insets *)&v68) || !Insets::IsEmpty((const struct Insets *)&v82) )
  {
LABEL_21:
    v29 = *v19 + v14;
    v30 = v75 / v79;
    v77 = v77 + v16;
    v81 = v29;
    bottom = bottom - v17;
    right = right - v15;
    v74 = v74 / v80;
    v75 = v75 / v79;
    v31 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v29 - right)) & v25);
    v32 = v26 < v31;
    v33 = v15 < 0.0;
    v34 = v15 == 0.0;
    v35 = v77;
    v36 = !v33 && !v34;
    v33 = v16 < 0.0;
    v34 = v16 == 0.0;
    v37 = bottom;
    v72 = !v33 && !v34;
    v67 = v26 < (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v77 - bottom)) & v25);
    v73 = v17 > 0.0;
    if ( v14 > 0.0 )
    {
      v68 = *v19;
      v69 = v68;
      v70 = v68;
      v57 = CoordMap::AddEntry(v18, (_DWORD)this, a2, (unsigned int)&v68, 0);
      v42 = v57;
      if ( v57 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v57, 0x21Au);
        return v42;
      }
      v30 = v75;
    }
    else if ( v26 >= v31 )
    {
      v38 = v81;
      goto LABEL_25;
    }
    v38 = v81;
    v68 = v81;
    v39 = (float)((float)(v20 - 0.5) * v30) + a3->left;
    v40 = (float)((float)(v20 + 0.5) * v30) + a3->left;
    v69 = v39;
    v70 = v40;
    v41 = CoordMap::AddEntry(v18, (_DWORD)this, a2, (unsigned int)&v68, 2);
    v42 = v41;
    if ( v41 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v41, 0x221u);
      return v42;
    }
    v30 = v75;
LABEL_25:
    if ( v36 || v32 )
    {
      v43 = a3->right;
      v44 = right;
      v68 = right;
      v69 = v43 - (float)((float)(v21 + 0.5) * v30);
      v70 = v43 - (float)((float)(v21 - 0.5) * v30);
      v45 = CoordMap::AddEntry(v18, (_DWORD)this, a2, (unsigned int)&v68, 2);
      v42 = v45;
      if ( v45 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v45, 0x228u);
        return v42;
      }
      if ( v36 )
      {
        v68 = a3->right;
        v69 = v68;
        v70 = v68;
        v58 = CoordMap::AddEntry(v18, (_DWORD)this, a2, (unsigned int)&v68, 0);
        v42 = v58;
        if ( v58 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v58, 0x22Du);
          return v42;
        }
      }
    }
    else
    {
      v44 = right;
    }
    if ( v72 )
    {
      v68 = a3->top;
      v69 = v68;
      v70 = v68;
      v59 = CoordMap::AddEntry(v18, (int)this + 192, a2, (unsigned int)&v68, 0);
      v42 = v59;
      if ( v59 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v59, 0x232u);
        return v42;
      }
    }
    else
    {
      v46 = v67;
      if ( !v67 )
      {
        v47 = v74;
LABEL_33:
        v51 = v73;
        if ( v73 || v46 )
        {
          v52 = a3->bottom;
          v68 = v37;
          v69 = v52 - (float)((float)(v23 + 0.5) * v47);
          v70 = v52 - (float)((float)(v23 - 0.5) * v47);
          v53 = CoordMap::AddEntry(v18, (int)this + 192, a2, (unsigned int)&v68, 2);
          v42 = v53;
          if ( v53 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v53, 0x240u);
            return v42;
          }
          if ( v51 )
          {
            v68 = a3->bottom;
            v69 = v68;
            v70 = v68;
            v60 = CoordMap::AddEntry(v54, (int)this + 192, a2, (unsigned int)&v68, 0);
            v42 = v60;
            if ( v60 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v60, 0x245u);
              return v42;
            }
          }
        }
        if ( v24 )
        {
          v82 = v38;
          v83 = v35;
          v84 = v44;
          v85 = v37;
          v55 = DynArray<D2D_RECT_F,0>::AddMultipleAndSet((char *)this + 384, &v82, 1LL);
          v42 = v55;
          if ( v55 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v55, 0x24Cu);
            return v42;
          }
        }
        return 0;
      }
    }
    v47 = v74;
    v68 = v35;
    v48 = (float)((float)(v22 - 0.5) * v74) + a3->top;
    v49 = (float)((float)(v22 + 0.5) * v74) + a3->top;
    v69 = v48;
    v70 = v49;
    v50 = CoordMap::AddEntry(v18, (int)this + 192, a2, (unsigned int)&v68, 2);
    v42 = v50;
    if ( v50 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v50, 0x239u);
      return v42;
    }
    v46 = v67;
    goto LABEL_33;
  }
  return 0;
}
