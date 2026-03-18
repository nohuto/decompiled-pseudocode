/*
 * XREFs of ?UpdateContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_INFO@@PEAU2@3@Z @ 0x1C01C9284
 * Callers:
 *     DoPrediction @ 0x1C01CA310 (DoPrediction.c)
 * Callees:
 *     ??KPrediction@@YA?AVCFixPred@0@AEBV10@0@Z @ 0x1C01C7DCC (--KPrediction@@YA-AVCFixPred@0@AEBV10@0@Z.c)
 *     ?DeltaOvershootCompensation@Prediction@@YA_J_J0@Z @ 0x1C01C80D8 (-DeltaOvershootCompensation@Prediction@@YA_J_J0@Z.c)
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01C81D4 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 *     ?Smooth@tagExpoSmoother@Prediction@@QEAA?AVCFixPred@2@V32@@Z @ 0x1C01C9118 (-Smooth@tagExpoSmoother@Prediction@@QEAA-AVCFixPred@2@V32@@Z.c)
 */

void __fastcall UpdateContactPrediction(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        struct tagPOINT a2,
        struct tagPOINT a3,
        struct tagHPD_PREDICTION_INFO *a4,
        struct tagPOINT *a5,
        struct tagPOINT *a6)
{
  struct tagHPD_PREDICTION_INFO *v6; // r10
  int v7; // r9d
  __int64 v8; // rbx
  __int64 v9; // r12
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // r15
  __int64 v14; // r13
  __int64 v15; // rdi
  bool v16; // zf
  __int64 *v17; // rax
  __int64 *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  struct tagHPD_PREDICTION_INFO *v22; // rax
  struct tagHPD_PREDICTION_INFO *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r15
  __int64 *v26; // rax
  unsigned __int64 v27; // rsi
  __int64 *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  struct tagHPD_PREDICTION_INFO *v32; // rax
  struct tagHPD_PREDICTION_INFO *v33; // rcx
  __int64 v34; // rax
  __int64 v35; // r13
  __int64 v36; // rbx
  __int64 *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r11
  __int64 v41; // r9
  unsigned __int64 v42; // r10
  unsigned __int64 v43; // rsi
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // r11
  unsigned __int64 v46; // rcx
  signed __int64 v47; // rdx
  __int64 v48; // rax
  int v49; // esi
  unsigned __int64 v50; // r8
  int v51; // r11d
  __int64 *v52; // rax
  __int64 *v53; // rax
  __int64 v54; // rax
  __int64 v55; // r9
  __int64 v56; // rdx
  __int64 v57; // rdx
  __int64 *v58; // rsi
  __int64 *v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rbx
  __int64 v63; // rbx
  __int64 *v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r11
  __int64 v68; // r9
  unsigned __int64 v69; // r10
  unsigned __int64 v70; // rsi
  unsigned __int64 v71; // rcx
  unsigned __int64 v72; // r11
  unsigned __int64 v73; // rcx
  signed __int64 v74; // rdx
  bool v75; // sf
  struct tagHPD_PREDICTION_INFO *v76; // r15
  __int64 v77; // rax
  int v78; // esi
  unsigned __int64 v79; // r8
  int v80; // r11d
  __int64 *v81; // rax
  __int64 *v82; // rax
  __int64 v83; // rax
  __int64 v84; // r9
  __int64 v85; // rdx
  __int64 v86; // rdx
  __int64 *v87; // rsi
  __int64 *v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rbx
  __int64 v92; // rbx
  __int64 *v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r11
  __int64 v97; // r9
  unsigned __int64 v98; // r10
  unsigned __int64 v99; // rsi
  unsigned __int64 v100; // rcx
  unsigned __int64 v101; // r11
  unsigned __int64 v102; // rcx
  signed __int64 v103; // rdx
  __int64 v104; // rax
  int v105; // esi
  unsigned __int64 v106; // r8
  int v107; // r11d
  __int64 *v108; // rax
  __int64 *v109; // rax
  __int64 v110; // rax
  __int64 v111; // r9
  __int64 v112; // rdx
  __int64 v113; // rdx
  __int64 *v114; // rsi
  __int64 *v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rbx
  __int64 v119; // rbx
  __int64 *v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r11
  __int64 v124; // r9
  unsigned __int64 v125; // rsi
  unsigned __int64 v126; // r10
  unsigned __int64 v127; // rcx
  unsigned __int64 v128; // r11
  unsigned __int64 v129; // rcx
  signed __int64 v130; // rax
  __int64 v131; // rcx
  __int64 v132; // rsi
  unsigned __int64 v133; // rdi
  unsigned __int64 v134; // r8
  int v135; // r11d
  unsigned __int64 v136; // rcx
  unsigned __int64 v137; // r8
  int v138; // r11d
  __int64 *v139; // rax
  __int64 *v140; // rax
  __int64 v141; // rax
  __int64 v142; // r9
  __int64 v143; // rdx
  __int64 v144; // rdx
  __int64 *v145; // rdi
  __int64 *v146; // rax
  __int64 v147; // rax
  __int64 v148; // rax
  LONG v149; // eax
  LONG v150; // eax
  LONG v151; // eax
  LONG v152; // eax
  LONG v153; // eax
  LONG v154; // eax
  LONG y; // ecx
  LONG v156; // eax
  __int64 v157; // [rsp+30h] [rbp-50h] BYREF
  __int64 v158; // [rsp+38h] [rbp-48h] BYREF
  __int64 v159; // [rsp+40h] [rbp-40h] BYREF
  int v160; // [rsp+48h] [rbp-38h] BYREF
  __int64 v161; // [rsp+50h] [rbp-30h] BYREF
  __int64 v162; // [rsp+58h] [rbp-28h]
  __int64 v163; // [rsp+60h] [rbp-20h]
  __int64 v164; // [rsp+68h] [rbp-18h]
  __int64 v165; // [rsp+70h] [rbp-10h]

  v6 = a4;
  if ( gbTOUCH_DRIVER_HW_STACK_TIMESTAMP != 1 || (v7 = *((_DWORD *)a1 + 187) - *((_DWORD *)a1 + 188)) == 0 )
    v7 = glTOUCH_DRIVER_HW_STACK_SAMPLETIME;
  if ( !v7 )
  {
    *a5 = a2;
    *a6 = a3;
    return;
  }
  v8 = 0LL;
  v160 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v11 = (__int64)a2.x << 32;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v161 = (__int64)v7 << 32;
  v163 = (__int64)a3.x << 32;
  v164 = (__int64)a3.y << 32;
  v162 = (__int64)a2.y << 32;
  v15 = (__int64)glTOUCH_DRIVER_HW_STACK_LATENCY << 32;
  v16 = v11 == *((_QWORD *)v6 + 270);
  v158 = v11 - *((_QWORD *)v6 + 270);
  v165 = v11;
  if ( !v16 )
  {
    v17 = Prediction::operator/(&v159, &v158, &v161);
    if ( &v157 != v17 )
      v12 = *v17;
    v12 = (v12 + 0x80000000LL) & 0xFFFFFFFF00000000uLL;
    v158 = v12 - *((_QWORD *)a4 + 262);
    v18 = Prediction::operator/(&v159, &v158, &v161);
    if ( &v157 == v18 || (v8 = *v18, *v18 >= 0) )
      v19 = v8;
    else
      v19 = -v8;
    v6 = a4;
    if ( v19 > *((_QWORD *)a4 + 266) )
    {
      v20 = v8;
      if ( v8 < 0 )
        v20 = -v8;
      *((_QWORD *)a4 + 266) = v20;
    }
    if ( *((_QWORD *)a4 + 266) )
    {
      v158 = *((_QWORD *)a4 + 266);
      v21 = v8;
      if ( v8 < 0 )
        v21 = -v8;
      v157 = v21;
      v22 = (struct tagHPD_PREDICTION_INFO *)Prediction::operator/(&v159, &v157, &v158);
      v6 = a4;
      v23 = (struct tagHPD_PREDICTION_INFO *)((char *)a4 + 1888);
      if ( (struct tagHPD_PREDICTION_INFO *)((char *)a4 + 1888) != v22 )
        *(_QWORD *)v23 = *(_QWORD *)v22;
      if ( (struct tagHPD_PREDICTION_INFO *)((char *)a4 + 1856) != v23 )
        *((_QWORD *)a4 + 232) = *(_QWORD *)v23;
    }
    v24 = *((_QWORD *)v6 + 264);
    v25 = v8;
    if ( v8 < 0 )
      v25 = -v8;
    if ( v24 < 0 )
      v24 = -v24;
    v13 = v25 - v24;
    *((_QWORD *)v6 + 262) = v12;
    *((_QWORD *)v6 + 264) = v8;
  }
  v158 = v162 - *((_QWORD *)v6 + 271);
  if ( v158 )
  {
    v26 = Prediction::operator/(&v159, &v158, &v161);
    if ( &v157 != v26 )
      v12 = *v26;
    v27 = (v12 + 0x80000000LL) & 0xFFFFFFFF00000000uLL;
    v157 = v27 - *((_QWORD *)a4 + 263);
    v28 = Prediction::operator/(&v159, &v157, &v161);
    if ( &v157 != v28 )
      v8 = *v28;
    v29 = v8;
    if ( v8 < 0 )
      v29 = -v8;
    v6 = a4;
    if ( v29 > *((_QWORD *)a4 + 267) )
    {
      v30 = v8;
      if ( v8 < 0 )
        v30 = -v8;
      *((_QWORD *)a4 + 267) = v30;
    }
    if ( *((_QWORD *)a4 + 267) )
    {
      v157 = *((_QWORD *)a4 + 267);
      v31 = v8;
      if ( v8 < 0 )
        v31 = -v8;
      v158 = v31;
      v32 = (struct tagHPD_PREDICTION_INFO *)Prediction::operator/(&v159, &v158, &v157);
      v6 = a4;
      v33 = (struct tagHPD_PREDICTION_INFO *)((char *)a4 + 1904);
      if ( (struct tagHPD_PREDICTION_INFO *)((char *)a4 + 1904) != v32 )
        *(_QWORD *)v33 = *(_QWORD *)v32;
      if ( (struct tagHPD_PREDICTION_INFO *)((char *)a4 + 1872) != v33 )
        *((_QWORD *)a4 + 234) = *(_QWORD *)v33;
    }
    v34 = *((_QWORD *)v6 + 265);
    v35 = v8;
    if ( v8 < 0 )
      v35 = -v8;
    if ( v34 < 0 )
      v34 = -v34;
    v14 = v35 - v34;
    *((_QWORD *)v6 + 263) = v27;
    *((_QWORD *)v6 + 265) = v8;
  }
  v36 = v163 - *((_QWORD *)v6 + 268);
  v158 = v36;
  if ( v36 )
  {
    v37 = Prediction::operator/(&v159, &v158, &v161);
    LODWORD(v38) = v15;
    v39 = *v37;
    v157 = (v15 ^ *v37) >> 63;
    if ( v39 < 0 )
      v39 = -v39;
    if ( v15 < 0 )
      v38 = -v15;
    v40 = (unsigned int)v39;
    v41 = (unsigned int)v39;
    v42 = -v15;
    v43 = HIDWORD(v39);
    v44 = HIDWORD(v39);
    if ( v15 >= 0 )
      v42 = v15;
    v45 = (unsigned int)v38 * v40;
    v46 = v157 ^ ((unsigned int)(HIDWORD(v45) + v38 * v44 + v41 * HIDWORD(v42)) | ((unsigned __int64)(unsigned int)(((HIDWORD(v45) + (unsigned int)v38 * v44) >> 32) + HIDWORD(v42) * v43 + ((unsigned __int64)((unsigned int)(HIDWORD(v45) + v38 * v44) + v41 * HIDWORD(v42)) >> 32)) << 32));
    v47 = v46 - v157;
    if ( (_DWORD)v45 )
      v47 = v46;
    if ( v13 < 0 )
    {
      v48 = 0x100000000LL - *((_QWORD *)a4 + 232);
      v157 = (v47 ^ v48) >> 63;
      if ( v47 < 0 )
        v47 = -v47;
      if ( v48 < 0 )
        v48 = -v48;
      v49 = v48 * v47;
      v50 = ((v47 * (unsigned __int64)(unsigned int)v48) >> 32) + (unsigned int)v47 * HIDWORD(v48);
      v51 = (((((unsigned int)v48 * (unsigned __int64)(unsigned int)v47) >> 32)
            + (unsigned int)v48 * (unsigned __int64)HIDWORD(v47)) >> 32)
          + HIDWORD(v47) * HIDWORD(v48);
      v47 = (v157 ^ ((unsigned int)v50 | ((unsigned __int64)(unsigned int)(v51 + HIDWORD(v50)) << 32))) - v157;
      if ( v49 )
        v47 = v157 ^ ((unsigned int)v50 | ((unsigned __int64)(unsigned int)(v51 + HIDWORD(v50)) << 32));
    }
    v157 = v47;
    v158 = v36;
    v52 = Prediction::tagRlsFilter::Filter(a4, &v159, (__int64)&v158, (__int64)&v157, &v160);
    if ( &v158 != v52 )
      v9 = *v52;
    v157 = v9;
    if ( v160 )
    {
      v58 = (__int64 *)((char *)a4 + 1856);
      v59 = Prediction::tagExpoSmoother::Smooth((_QWORD *)a4 + 232, &v159, (unsigned __int64 *)&v157);
      if ( &v158 != v59 )
        v10 = *v59;
      v6 = a4;
      v60 = gPredictorRLSExpoSmoothAlpha;
      *((_QWORD *)a4 + 276) += v10;
      v57 = v163 + *((_QWORD *)a4 + 276);
      *((_QWORD *)a4 + 272) = v57;
      if ( v58 != &v159 )
        *v58 = v60;
      if ( (__int64 *)((char *)a4 + 1864) != &v159 )
        *((_QWORD *)a4 + 233) = 0LL;
    }
    else
    {
      v53 = Prediction::tagExpoSmoother::Smooth((_QWORD *)a4 + 232, &v159, (unsigned __int64 *)&v157);
      if ( &v158 != v53 )
        v10 = *v53;
      v54 = Prediction::DeltaOvershootCompensation(*((_QWORD *)a4 + 276), v36);
      v56 = v54 + v55 + v163;
      *((_QWORD *)v6 + 276) = v54 + v55;
      v57 = v10 + v56;
    }
    v61 = *((_QWORD *)v6 + 272);
    if ( v36 < 0 )
    {
      if ( v57 < v61 )
        goto LABEL_85;
    }
    else if ( v57 > v61 )
    {
      goto LABEL_85;
    }
    v57 = *((_QWORD *)v6 + 272);
  }
  else
  {
    v57 = *((_QWORD *)v6 + 272);
  }
LABEL_85:
  v62 = v165;
  *((_QWORD *)v6 + 272) = v57;
  a6->x = (unsigned __int64)(v57 + 0x80000000LL) >> 32;
  v63 = v62 - *((_QWORD *)v6 + 270);
  v158 = v63;
  if ( v63 )
  {
    v64 = Prediction::operator/(&v159, &v158, &v161);
    LODWORD(v65) = v15;
    v66 = *v64;
    v157 = (v15 ^ *v64) >> 63;
    if ( v66 < 0 )
      v66 = -v66;
    if ( v15 < 0 )
      v65 = -v15;
    v67 = (unsigned int)v66;
    v68 = (unsigned int)v66;
    v69 = -v15;
    v70 = HIDWORD(v66);
    v71 = HIDWORD(v66);
    if ( v15 >= 0 )
      v69 = v15;
    v72 = (unsigned int)v65 * v67;
    v73 = v157 ^ ((unsigned int)(HIDWORD(v72) + v65 * v71 + v68 * HIDWORD(v69)) | ((unsigned __int64)(unsigned int)(((HIDWORD(v72) + (unsigned int)v65 * v71) >> 32) + HIDWORD(v69) * v70 + ((unsigned __int64)((unsigned int)(HIDWORD(v72) + v65 * v71) + v68 * HIDWORD(v69)) >> 32)) << 32));
    v74 = v73 - v157;
    if ( (_DWORD)v72 )
      v74 = v73;
    v75 = v13 < 0;
    v76 = a4;
    if ( v75 )
    {
      v77 = 0x100000000LL - *((_QWORD *)a4 + 236);
      v157 = (v74 ^ v77) >> 63;
      if ( v74 < 0 )
        v74 = -v74;
      if ( v77 < 0 )
        v77 = -v77;
      v78 = v77 * v74;
      v79 = ((v74 * (unsigned __int64)(unsigned int)v77) >> 32) + (unsigned int)v74 * HIDWORD(v77);
      v80 = (((((unsigned int)v77 * (unsigned __int64)(unsigned int)v74) >> 32)
            + (unsigned int)v77 * (unsigned __int64)HIDWORD(v74)) >> 32)
          + HIDWORD(v74) * HIDWORD(v77);
      v74 = (v157 ^ ((unsigned int)v79 | ((unsigned __int64)(unsigned int)(v80 + HIDWORD(v79)) << 32))) - v157;
      if ( v78 )
        v74 = v157 ^ ((unsigned int)v79 | ((unsigned __int64)(unsigned int)(v80 + HIDWORD(v79)) << 32));
    }
    v157 = v74;
    v158 = v63;
    v81 = Prediction::tagRlsFilter::Filter((_QWORD *)a4 + 108, &v159, (__int64)&v158, (__int64)&v157, &v160);
    if ( &v158 != v81 )
      v9 = *v81;
    v157 = v9;
    if ( v160 )
    {
      v87 = (__int64 *)((char *)a4 + 1888);
      v88 = Prediction::tagExpoSmoother::Smooth((_QWORD *)a4 + 236, &v159, (unsigned __int64 *)&v157);
      if ( &v158 != v88 )
        v10 = *v88;
      *((_QWORD *)a4 + 278) += v10;
      v86 = v165 + *((_QWORD *)a4 + 278);
      v89 = gPredictorRLSExpoSmoothAlpha;
      *((_QWORD *)a4 + 274) = v86;
      if ( v87 != &v159 )
        *v87 = v89;
      if ( (__int64 *)((char *)a4 + 1896) != &v159 )
        *((_QWORD *)a4 + 237) = 0LL;
    }
    else
    {
      v82 = Prediction::tagExpoSmoother::Smooth((_QWORD *)a4 + 236, &v159, (unsigned __int64 *)&v157);
      if ( &v158 != v82 )
        v10 = *v82;
      v83 = Prediction::DeltaOvershootCompensation(*((_QWORD *)a4 + 278), v63);
      v85 = v83 + v84 + v165;
      *((_QWORD *)a4 + 278) = v83 + v84;
      v86 = v10 + v85;
    }
    v90 = *((_QWORD *)a4 + 274);
    if ( v63 < 0 )
    {
      if ( v86 < v90 )
        goto LABEL_119;
    }
    else if ( v86 > v90 )
    {
      goto LABEL_119;
    }
    v86 = *((_QWORD *)a4 + 274);
  }
  else
  {
    v76 = a4;
    v86 = *((_QWORD *)a4 + 274);
  }
LABEL_119:
  v91 = v164;
  *((_QWORD *)v76 + 274) = v86;
  a5->x = (unsigned __int64)(v86 + 0x80000000LL) >> 32;
  v92 = v91 - *((_QWORD *)v76 + 269);
  v158 = v92;
  if ( v92 )
  {
    v93 = Prediction::operator/(&v159, &v158, &v161);
    LODWORD(v94) = v15;
    v95 = *v93;
    v157 = (v15 ^ *v93) >> 63;
    if ( v95 < 0 )
      v95 = -v95;
    if ( v15 < 0 )
      v94 = -v15;
    v96 = (unsigned int)v95;
    v97 = (unsigned int)v95;
    v98 = -v15;
    v99 = HIDWORD(v95);
    v100 = HIDWORD(v95);
    if ( v15 >= 0 )
      v98 = v15;
    v101 = (unsigned int)v94 * v96;
    v102 = v157 ^ ((unsigned int)(HIDWORD(v101) + v94 * v100 + v97 * HIDWORD(v98)) | ((unsigned __int64)(unsigned int)(((HIDWORD(v101) + (unsigned int)v94 * v100) >> 32) + HIDWORD(v98) * v99 + ((unsigned __int64)((unsigned int)(HIDWORD(v101) + v94 * v100) + v97 * HIDWORD(v98)) >> 32)) << 32));
    v103 = v102 - v157;
    if ( (_DWORD)v101 )
      v103 = v102;
    if ( v14 < 0 )
    {
      v104 = 0x100000000LL - *((_QWORD *)v76 + 234);
      v157 = (v103 ^ v104) >> 63;
      if ( v103 < 0 )
        v103 = -v103;
      if ( v104 < 0 )
        v104 = -v104;
      v105 = v104 * v103;
      v106 = ((v103 * (unsigned __int64)(unsigned int)v104) >> 32) + (unsigned int)v103 * HIDWORD(v104);
      v107 = (((((unsigned int)v104 * (unsigned __int64)(unsigned int)v103) >> 32)
             + (unsigned int)v104 * (unsigned __int64)HIDWORD(v103)) >> 32)
           + HIDWORD(v103) * HIDWORD(v104);
      v103 = (v157 ^ ((unsigned int)v106 | ((unsigned __int64)(unsigned int)(v107 + HIDWORD(v106)) << 32))) - v157;
      if ( v105 )
        v103 = v157 ^ ((unsigned int)v106 | ((unsigned __int64)(unsigned int)(v107 + HIDWORD(v106)) << 32));
    }
    v157 = v103;
    v158 = v92;
    v108 = Prediction::tagRlsFilter::Filter((_QWORD *)v76 + 54, &v159, (__int64)&v158, (__int64)&v157, &v160);
    if ( &v158 != v108 )
      v9 = *v108;
    v157 = v9;
    if ( v160 )
    {
      v114 = (__int64 *)((char *)v76 + 1872);
      v115 = Prediction::tagExpoSmoother::Smooth((_QWORD *)v76 + 234, &v159, (unsigned __int64 *)&v157);
      if ( &v158 != v115 )
        v10 = *v115;
      *((_QWORD *)v76 + 277) += v10;
      v113 = *((_QWORD *)v76 + 277) + v164;
      v116 = gPredictorRLSExpoSmoothAlpha;
      *((_QWORD *)v76 + 273) = v113;
      if ( v114 != &v159 )
        *v114 = v116;
      if ( (__int64 *)((char *)v76 + 1880) != &v159 )
        *((_QWORD *)v76 + 235) = 0LL;
    }
    else
    {
      v109 = Prediction::tagExpoSmoother::Smooth((_QWORD *)v76 + 234, &v159, (unsigned __int64 *)&v157);
      if ( &v158 != v109 )
        v10 = *v109;
      v110 = Prediction::DeltaOvershootCompensation(*((_QWORD *)v76 + 277), v92);
      v112 = v110 + v111 + v164;
      *((_QWORD *)v76 + 277) = v110 + v111;
      v113 = v10 + v112;
    }
    v117 = *((_QWORD *)v76 + 273);
    if ( v92 < 0 )
    {
      if ( v113 < v117 )
        goto LABEL_153;
    }
    else if ( v113 > v117 )
    {
      goto LABEL_153;
    }
    v113 = *((_QWORD *)v76 + 273);
  }
  else
  {
    v113 = *((_QWORD *)v76 + 273);
  }
LABEL_153:
  v118 = v162;
  *((_QWORD *)v76 + 273) = v113;
  a6->y = (unsigned __int64)(v113 + 0x80000000LL) >> 32;
  v119 = v118 - *((_QWORD *)v76 + 271);
  v158 = v119;
  if ( !v119 )
  {
    v144 = *((_QWORD *)v76 + 275);
    goto LABEL_187;
  }
  v120 = Prediction::operator/(&v159, &v158, &v161);
  LODWORD(v121) = v15;
  v122 = *v120;
  v157 = (v15 ^ *v120) >> 63;
  if ( v122 < 0 )
    v122 = -v122;
  if ( v15 < 0 )
    v121 = -v15;
  v123 = (unsigned int)v122;
  v124 = (unsigned int)v122;
  v125 = HIDWORD(v122);
  v126 = -v15;
  v127 = HIDWORD(v122);
  if ( v15 >= 0 )
    v126 = v15;
  v128 = (unsigned int)v121 * v123;
  v129 = v157 ^ ((unsigned int)(HIDWORD(v128) + v121 * v127 + v124 * HIDWORD(v126)) | ((unsigned __int64)(unsigned int)(((HIDWORD(v128) + (unsigned int)v121 * v127) >> 32) + HIDWORD(v126) * v125 + ((unsigned __int64)((unsigned int)(HIDWORD(v128) + v121 * v127) + v124 * HIDWORD(v126)) >> 32)) << 32));
  v130 = v129 - v157;
  if ( (_DWORD)v128 )
    v130 = v129;
  if ( v14 < 0 )
  {
    v131 = 0x100000000LL - *((_QWORD *)v76 + 238);
    v132 = (v130 ^ v131) >> 63;
    if ( v130 < 0 )
      v130 = -v130;
    if ( v131 < 0 )
      v131 = *((_QWORD *)v76 + 238) - 0x100000000LL;
    v133 = (unsigned int)v130 * (unsigned __int64)(unsigned int)v131;
    v134 = (unsigned int)v130 * HIDWORD(v131);
    v135 = HIDWORD(v130) * HIDWORD(v131);
    v136 = HIDWORD(v133) + (unsigned int)v131 * HIDWORD(v130);
    v137 = (unsigned int)v136 + v134;
    v138 = HIDWORD(v136) + v135;
    v130 = (v132 ^ ((unsigned int)v137 | ((unsigned __int64)(unsigned int)(v138 + HIDWORD(v137)) << 32))) - v132;
    if ( (_DWORD)v133 )
      v130 = v132 ^ ((unsigned int)v137 | ((unsigned __int64)(unsigned int)(v138 + HIDWORD(v137)) << 32));
  }
  v157 = v130;
  v161 = v119;
  v139 = Prediction::tagRlsFilter::Filter((_QWORD *)v76 + 162, &v159, (__int64)&v161, (__int64)&v157, &v160);
  if ( &v158 != v139 )
    v9 = *v139;
  v157 = v9;
  if ( v160 )
  {
    v145 = (__int64 *)((char *)v76 + 1904);
    v146 = Prediction::tagExpoSmoother::Smooth((_QWORD *)v76 + 238, &v159, (unsigned __int64 *)&v157);
    if ( &v158 != v146 )
      v10 = *v146;
    *((_QWORD *)v76 + 279) += v10;
    v144 = v162 + *((_QWORD *)v76 + 279);
    v147 = gPredictorRLSExpoSmoothAlpha;
    *((_QWORD *)v76 + 275) = v144;
    if ( v145 != &v159 )
      *v145 = v147;
    if ( (__int64 *)((char *)v76 + 1912) != &v159 )
      *((_QWORD *)v76 + 239) = 0LL;
  }
  else
  {
    v140 = Prediction::tagExpoSmoother::Smooth((_QWORD *)v76 + 238, &v159, (unsigned __int64 *)&v157);
    if ( &v158 != v140 )
      v10 = *v140;
    v141 = Prediction::DeltaOvershootCompensation(*((_QWORD *)v76 + 279), v119);
    v143 = v141 + v142 + v162;
    *((_QWORD *)v76 + 279) = v141 + v142;
    v144 = v10 + v143;
  }
  v148 = *((_QWORD *)v76 + 275);
  if ( v119 < 0 )
  {
    if ( v144 >= v148 )
LABEL_185:
      v144 = *((_QWORD *)v76 + 275);
  }
  else if ( v144 <= v148 )
  {
    goto LABEL_185;
  }
LABEL_187:
  *((_QWORD *)v76 + 275) = v144;
  a5->y = (unsigned __int64)(v144 + 0x80000000LL) >> 32;
  *((_QWORD *)v76 + 268) = v163;
  *((_QWORD *)v76 + 269) = v164;
  *((_QWORD *)v76 + 270) = v165;
  *((_QWORD *)v76 + 271) = v162;
  v149 = *((_DWORD *)a1 + 40);
  if ( a6->x < v149 )
    a6->x = v149;
  v150 = *((_DWORD *)a1 + 42) - 1;
  if ( a6->x > v150 )
    a6->x = v150;
  v151 = *((_DWORD *)a1 + 41);
  if ( a6->y < v151 )
    a6->y = v151;
  v152 = *((_DWORD *)a1 + 43) - 1;
  if ( a6->y > v152 )
    a6->y = v152;
  v153 = *((_DWORD *)a1 + 44);
  if ( a5->x < v153 )
    a5->x = v153;
  v154 = *((_DWORD *)a1 + 46);
  if ( a5->x > v154 )
    a5->x = v154;
  y = a5->y;
  if ( y < *((_DWORD *)a1 + 45) )
    y = *((_DWORD *)a1 + 45);
  a5->y = y;
  v156 = *((_DWORD *)a1 + 47);
  if ( y > v156 )
    a5->y = v156;
}
