/*
 * XREFs of ?UpdateContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_INFO@@PEAU2@3@Z @ 0x1C01A5CBC
 * Callers:
 *     DoPrediction @ 0x1C01A6AD0 (DoPrediction.c)
 * Callees:
 *     ??KPrediction@@YA?AVCFixPred@0@AEBV10@0@Z @ 0x1C01A44E0 (--KPrediction@@YA-AVCFixPred@0@AEBV10@0@Z.c)
 *     ?DeltaOvershootCompensation@Prediction@@YA_J_J0@Z @ 0x1C01A47EC (-DeltaOvershootCompensation@Prediction@@YA_J_J0@Z.c)
 *     ?FastMul64by64@@YA_J_J0@Z @ 0x1C01A48E8 (-FastMul64by64@@YA_J_J0@Z.c)
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01A4980 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 *     ?Smooth@tagExpoSmoother@Prediction@@QEAA?AVCFixPred@2@V32@@Z @ 0x1C01A5C44 (-Smooth@tagExpoSmoother@Prediction@@QEAA-AVCFixPred@2@V32@@Z.c)
 */

void __fastcall UpdateContactPrediction(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        struct tagPOINT a2,
        struct tagPOINT a3,
        struct tagHPD_PREDICTION_INFO *a4,
        struct tagPOINT *a5,
        struct tagPOINT *a6)
{
  int v6; // r10d
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // r15
  __int64 v14; // r13
  bool v15; // zf
  __int64 *v16; // rax
  __int64 *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 *v25; // rax
  unsigned __int64 v26; // rdi
  __int64 *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // r15
  __int64 *v35; // rdi
  __int64 v36; // rbx
  __int64 *v37; // rax
  unsigned __int64 v38; // rax
  __int64 *v39; // rax
  __int64 *v40; // rax
  __int64 v41; // rax
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rbx
  __int64 v50; // rbx
  __int64 *v51; // rax
  unsigned __int64 v52; // rax
  __int64 *v53; // rax
  __int64 *v54; // rax
  __int64 v55; // rax
  __int64 v56; // r9
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 *v60; // rsi
  __int64 *v61; // rax
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rbx
  __int64 v66; // rbx
  __int64 *v67; // rax
  unsigned __int64 v68; // rax
  __int64 *v69; // rax
  __int64 *v70; // rax
  __int64 v71; // rax
  __int64 v72; // r9
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rbx
  __int64 v80; // rbx
  __int64 *v81; // rax
  unsigned __int64 v82; // rax
  __int64 *v83; // rax
  __int64 *v84; // rax
  __int64 v85; // rax
  __int64 v86; // r9
  __int64 v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rcx
  __int64 *v90; // r15
  __int64 *v91; // rax
  __int64 v92; // rax
  __int64 v93; // rcx
  __int64 v94; // rax
  LONG v95; // eax
  LONG v96; // eax
  LONG v97; // eax
  LONG v98; // eax
  LONG v99; // eax
  LONG v100; // eax
  LONG y; // ecx
  LONG v102; // eax
  unsigned __int64 v103; // [rsp+30h] [rbp-50h] BYREF
  __int64 v104; // [rsp+38h] [rbp-48h] BYREF
  __int64 v105; // [rsp+40h] [rbp-40h] BYREF
  int v106; // [rsp+48h] [rbp-38h] BYREF
  __int64 v107; // [rsp+50h] [rbp-30h] BYREF
  __int64 v108; // [rsp+58h] [rbp-28h]
  __int64 v109; // [rsp+60h] [rbp-20h]
  __int64 v110; // [rsp+68h] [rbp-18h]
  __int64 v111; // [rsp+70h] [rbp-10h]
  struct tagHPD_PREDICTION_INFO *v113; // [rsp+D8h] [rbp+58h]

  v113 = a4;
  v6 = *((_DWORD *)a1 + 353) - *((_DWORD *)a1 + 354);
  if ( gbTOUCH_DRIVER_HW_STACK_TIMESTAMP != 1 || !v6 )
  {
    v6 = glTOUCH_DRIVER_HW_STACK_SAMPLETIME;
    if ( !glTOUCH_DRIVER_HW_STACK_SAMPLETIME )
    {
      *a5 = a2;
      *a6 = a3;
      return;
    }
  }
  v7 = 0LL;
  v106 = 0;
  v8 = 0LL;
  v9 = 0LL;
  v10 = (__int64)a2.x << 32;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v107 = (__int64)v6 << 32;
  v109 = (__int64)a3.x << 32;
  v110 = (__int64)a3.y << 32;
  v108 = (__int64)a2.y << 32;
  v14 = (__int64)glTOUCH_DRIVER_HW_STACK_LATENCY << 32;
  v15 = v10 == *((_QWORD *)a4 + 270);
  v104 = v10 - *((_QWORD *)a4 + 270);
  v111 = v10;
  if ( !v15 )
  {
    v16 = Prediction::operator/(&v105, &v104, &v107);
    if ( &v103 != (unsigned __int64 *)v16 )
      v11 = *v16;
    v11 = (v11 + 0x80000000LL) & 0xFFFFFFFF00000000uLL;
    v104 = v11 - *((_QWORD *)v113 + 262);
    v17 = Prediction::operator/(&v105, &v104, &v107);
    if ( &v103 == (unsigned __int64 *)v17 || (v7 = *v17, *v17 >= 0) )
      v18 = v7;
    else
      v18 = -v7;
    a4 = v113;
    if ( v18 > *((_QWORD *)v113 + 266) )
    {
      v19 = v7;
      if ( v7 < 0 )
        v19 = -v7;
      *((_QWORD *)v113 + 266) = v19;
    }
    if ( *((_QWORD *)v113 + 266) )
    {
      v104 = *((_QWORD *)v113 + 266);
      v20 = v7;
      if ( v7 < 0 )
        v20 = -v7;
      v103 = v20;
      v21 = Prediction::operator/(&v105, (__int64 *)&v103, &v104);
      a4 = v113;
      v22 = (_QWORD *)((char *)v113 + 1888);
      if ( (_QWORD *)((char *)v113 + 1888) != v21 )
        *v22 = *v21;
      if ( (_QWORD *)((char *)v113 + 1856) != v22 )
        *((_QWORD *)v113 + 232) = *v22;
    }
    v23 = *((_QWORD *)a4 + 264);
    v24 = v7;
    if ( v7 < 0 )
      v24 = -v7;
    if ( v23 < 0 )
      v23 = -v23;
    v12 = v24 - v23;
    *((_QWORD *)a4 + 262) = v11;
    *((_QWORD *)a4 + 264) = v7;
  }
  v104 = v108 - *((_QWORD *)a4 + 271);
  if ( v104 )
  {
    v25 = Prediction::operator/(&v105, &v104, &v107);
    if ( &v103 != (unsigned __int64 *)v25 )
      v11 = *v25;
    v26 = (v11 + 0x80000000LL) & 0xFFFFFFFF00000000uLL;
    v103 = v26 - *((_QWORD *)v113 + 263);
    v27 = Prediction::operator/(&v105, (__int64 *)&v103, &v107);
    if ( &v103 != (unsigned __int64 *)v27 )
      v7 = *v27;
    v28 = v7;
    if ( v7 < 0 )
      v28 = -v7;
    if ( v28 > *((_QWORD *)v113 + 267) )
    {
      v29 = v7;
      if ( v7 < 0 )
        v29 = -v7;
      *((_QWORD *)v113 + 267) = v29;
    }
    if ( *((_QWORD *)v113 + 267) )
    {
      v103 = *((_QWORD *)v113 + 267);
      v30 = v7;
      if ( v7 < 0 )
        v30 = -v7;
      v104 = v30;
      v31 = Prediction::operator/(&v105, &v104, (__int64 *)&v103);
      v32 = (_QWORD *)((char *)v113 + 1904);
      if ( (_QWORD *)((char *)v113 + 1904) != v31 )
        *v32 = *v31;
      if ( (_QWORD *)((char *)v113 + 1872) != v32 )
        *((_QWORD *)v113 + 234) = *v32;
    }
    v33 = *((_QWORD *)v113 + 265);
    v34 = v7;
    if ( v7 < 0 )
      v34 = -v7;
    if ( v33 < 0 )
      v33 = -v33;
    v13 = v34 - v33;
    *((_QWORD *)v113 + 263) = v26;
    v35 = (__int64 *)v113;
    *((_QWORD *)v113 + 265) = v7;
  }
  else
  {
    v35 = (__int64 *)v113;
  }
  v36 = v109 - v35[268];
  v104 = v36;
  if ( v36 )
  {
    v37 = Prediction::operator/(&v105, &v104, &v107);
    v38 = FastMul64by64(*v37, v14);
    if ( v12 < 0 )
      v38 = FastMul64by64(v38, 0x100000000LL - v35[232]);
    v104 = v36;
    v103 = v38;
    v39 = Prediction::tagRlsFilter::Filter(v35, &v105, (__int64)&v104, (__int64)&v103, &v106);
    if ( &v104 != v39 )
      v8 = *v39;
    v103 = v8;
    v40 = Prediction::tagExpoSmoother::Smooth(v35 + 232, &v105, (__int64 *)&v103);
    if ( v106 )
    {
      if ( &v104 != v40 )
        v9 = *v40;
      v46 = gPredictorRLSExpoSmoothAlpha;
      v47 = v9 + v35[276];
      v35[276] = v47;
      v45 = v109 + v47;
      v35[272] = v45;
      if ( v35 + 232 != &v105 )
        v35[232] = v46;
      if ( v35 + 233 != &v105 )
        v35[233] = 0LL;
    }
    else
    {
      if ( &v104 != v40 )
        v9 = *v40;
      v41 = Prediction::DeltaOvershootCompensation(v35[276], v36);
      v43 = v42 + v41;
      v44 = v43 + v109;
      v35[276] = v43;
      v45 = v9 + v44;
    }
    v48 = v35[272];
    if ( v36 < 0 )
    {
      if ( v45 < v48 )
        goto LABEL_72;
    }
    else if ( v45 > v48 )
    {
      goto LABEL_72;
    }
    v45 = v35[272];
  }
  else
  {
    v45 = v35[272];
  }
LABEL_72:
  v49 = v111;
  v35[272] = v45;
  a6->x = (unsigned __int64)(v45 + 0x80000000LL) >> 32;
  v50 = v49 - v35[270];
  v104 = v50;
  if ( v50 )
  {
    v51 = Prediction::operator/(&v105, &v104, &v107);
    v52 = FastMul64by64(*v51, v14);
    if ( v12 < 0 )
      v52 = FastMul64by64(v52, 0x100000000LL - v35[236]);
    v104 = v50;
    v103 = v52;
    v53 = Prediction::tagRlsFilter::Filter(v35 + 108, &v105, (__int64)&v104, (__int64)&v103, &v106);
    if ( &v104 != v53 )
      v8 = *v53;
    v103 = v8;
    if ( v106 )
    {
      v60 = v35 + 236;
      v61 = Prediction::tagExpoSmoother::Smooth(v35 + 236, &v105, (__int64 *)&v103);
      if ( &v104 != v61 )
        v9 = *v61;
      v62 = gPredictorRLSExpoSmoothAlpha;
      v63 = v9 + v35[278];
      v35[278] = v63;
      v59 = v111 + v63;
      v35[274] = v59;
      if ( v60 != &v105 )
        *v60 = v62;
      if ( v35 + 237 != &v105 )
        v35[237] = 0LL;
    }
    else
    {
      v54 = Prediction::tagExpoSmoother::Smooth(v35 + 236, &v105, (__int64 *)&v103);
      if ( &v104 != v54 )
        v9 = *v54;
      v55 = Prediction::DeltaOvershootCompensation(v35[278], v50);
      v57 = v56 + v55;
      v58 = v57 + v111;
      v35[278] = v57;
      v59 = v9 + v58;
    }
    v64 = v35[274];
    if ( v50 < 0 )
    {
      if ( v59 < v64 )
        goto LABEL_93;
    }
    else if ( v59 > v64 )
    {
      goto LABEL_93;
    }
    v59 = v35[274];
  }
  else
  {
    v59 = v35[274];
  }
LABEL_93:
  v65 = v110;
  v35[274] = v59;
  a5->x = (unsigned __int64)(v59 + 0x80000000LL) >> 32;
  v66 = v65 - v35[269];
  v104 = v66;
  if ( v66 )
  {
    v67 = Prediction::operator/(&v105, &v104, &v107);
    v68 = FastMul64by64(*v67, v14);
    if ( v13 < 0 )
      v68 = FastMul64by64(v68, 0x100000000LL - v35[234]);
    v104 = v66;
    v103 = v68;
    v69 = Prediction::tagRlsFilter::Filter(v35 + 54, &v105, (__int64)&v104, (__int64)&v103, &v106);
    if ( &v104 != v69 )
      v8 = *v69;
    v103 = v8;
    v70 = Prediction::tagExpoSmoother::Smooth(v35 + 234, &v105, (__int64 *)&v103);
    if ( v106 )
    {
      if ( &v104 != v70 )
        v9 = *v70;
      v76 = gPredictorRLSExpoSmoothAlpha;
      v77 = v9 + v35[277];
      v35[277] = v77;
      v75 = v110 + v77;
      v35[273] = v75;
      if ( v35 + 234 != &v105 )
        v35[234] = v76;
      if ( v35 + 235 != &v105 )
        v35[235] = 0LL;
    }
    else
    {
      if ( &v104 != v70 )
        v9 = *v70;
      v71 = Prediction::DeltaOvershootCompensation(v35[277], v66);
      v73 = v72 + v71;
      v74 = v73 + v110;
      v35[277] = v73;
      v75 = v9 + v74;
    }
    v78 = v35[273];
    if ( v66 < 0 )
    {
      if ( v75 < v78 )
        goto LABEL_114;
    }
    else if ( v75 > v78 )
    {
      goto LABEL_114;
    }
    v75 = v35[273];
  }
  else
  {
    v75 = v35[273];
  }
LABEL_114:
  v79 = v108;
  v35[273] = v75;
  a6->y = (unsigned __int64)(v75 + 0x80000000LL) >> 32;
  v80 = v79 - v35[271];
  v104 = v80;
  if ( !v80 )
  {
    v89 = v35[275];
    goto LABEL_135;
  }
  v81 = Prediction::operator/(&v105, &v104, &v107);
  v82 = FastMul64by64(*v81, v14);
  if ( v13 < 0 )
    v82 = FastMul64by64(v82, 0x100000000LL - v35[238]);
  v107 = v80;
  v103 = v82;
  v83 = Prediction::tagRlsFilter::Filter(v35 + 162, &v105, (__int64)&v107, (__int64)&v103, &v106);
  if ( &v104 != v83 )
    v8 = *v83;
  v103 = v8;
  if ( v106 )
  {
    v90 = v35 + 238;
    v91 = Prediction::tagExpoSmoother::Smooth(v35 + 238, &v105, (__int64 *)&v103);
    if ( &v104 != v91 )
      v9 = *v91;
    v92 = gPredictorRLSExpoSmoothAlpha;
    v93 = v9 + v35[279];
    v35[279] = v93;
    v89 = v108 + v93;
    v35[275] = v89;
    if ( v90 != &v105 )
      *v90 = v92;
    if ( v35 + 239 != &v105 )
      v35[239] = 0LL;
  }
  else
  {
    v84 = Prediction::tagExpoSmoother::Smooth(v35 + 238, &v105, (__int64 *)&v103);
    if ( &v104 != v84 )
      v9 = *v84;
    v85 = Prediction::DeltaOvershootCompensation(v35[279], v80);
    v87 = v86 + v85;
    v88 = v87 + v108;
    v35[279] = v87;
    v89 = v9 + v88;
  }
  v94 = v35[275];
  if ( v80 < 0 )
  {
    if ( v89 >= v94 )
LABEL_133:
      v89 = v35[275];
  }
  else if ( v89 <= v94 )
  {
    goto LABEL_133;
  }
LABEL_135:
  v35[275] = v89;
  a5->y = (unsigned __int64)(v89 + 0x80000000LL) >> 32;
  v35[268] = v109;
  v35[269] = v110;
  v35[270] = v111;
  v35[271] = v108;
  *(_OWORD *)((char *)a1 + 124) = *(_OWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 36) + 40LL) + 28LL);
  v95 = *((_DWORD *)a1 + 31);
  if ( a6->x < v95 )
    a6->x = v95;
  v96 = *((_DWORD *)a1 + 33) - 1;
  if ( a6->x > v96 )
    a6->x = v96;
  v97 = *((_DWORD *)a1 + 32);
  if ( a6->y < v97 )
    a6->y = v97;
  v98 = *((_DWORD *)a1 + 34) - 1;
  if ( a6->y > v98 )
    a6->y = v98;
  v99 = *((_DWORD *)a1 + 35);
  if ( a5->x < v99 )
    a5->x = v99;
  v100 = *((_DWORD *)a1 + 37);
  if ( a5->x > v100 )
    a5->x = v100;
  y = a5->y;
  if ( y < *((_DWORD *)a1 + 36) )
    y = *((_DWORD *)a1 + 36);
  a5->y = y;
  v102 = *((_DWORD *)a1 + 38);
  if ( y > v102 )
    a5->y = v102;
}
