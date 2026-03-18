/*
 * XREFs of ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01C81D4
 * Callers:
 *     ?InitializeContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_INFO@@PEAU2@3@Z @ 0x1C01C887C (-InitializeContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTI.c)
 *     ?UpdateContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_INFO@@PEAU2@3@Z @ 0x1C01C9284 (-UpdateContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_I.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@0@Z @ 0x1C01C74BC (--$-DVCFixPred@Prediction@@$02@Prediction@@YA-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV1.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@AEBVCFixPred@0@@Z @ 0x1C01C7620 (--$-DVCFixPred@Prediction@@$02@Prediction@@YA-AV-$SquareMatrix@VCFixPred@Prediction_ea_1C01C7620.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$Vector@VCFixPred@Prediction@@$02@0@AEBV10@AEBVCFixPred@0@@Z @ 0x1C01C7730 (--$-DVCFixPred@Prediction@@$02@Prediction@@YA-AV-$Vector@VCFixPred@Prediction@@$02@0@AEBV10@AEBV.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$Vector@VCFixPred@Prediction@@$02@0@AEBV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@@Z @ 0x1C01C7824 (--$-DVCFixPred@Prediction@@$02@Prediction@@YA-AV-$Vector@VCFixPred@Prediction@@$02@0@AEBV-$Squar.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AVCFixPred@0@AEBV?$Vector@VCFixPred@Prediction@@$02@0@0@Z @ 0x1C01C793C (--$-DVCFixPred@Prediction@@$02@Prediction@@YA-AVCFixPred@0@AEBV-$Vector@VCFixPred@Prediction@@$0.c)
 *     ??$?GVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@0@Z @ 0x1C01C7A2C (--$-GVCFixPred@Prediction@@$02@Prediction@@YA-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV1.c)
 *     ??$?HVCFixPred@Prediction@@$02@Prediction@@YA?AV?$Vector@VCFixPred@Prediction@@$02@0@AEBV10@0@Z @ 0x1C01C7AA4 (--$-HVCFixPred@Prediction@@$02@Prediction@@YA-AV-$Vector@VCFixPred@Prediction@@$02@0@AEBV10@0@Z.c)
 *     ??$?TVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV?$Vector@VCFixPred@Prediction@@$02@0@0@Z @ 0x1C01C7B0C (--$-TVCFixPred@Prediction@@$02@Prediction@@YA-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV-.c)
 *     ??$Tri@VCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@@Z @ 0x1C01C7C20 (--$Tri@VCFixPred@Prediction@@$02@Prediction@@YA-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@AEB.c)
 *     ??0?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x1C01C7CB0 (--0-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ.c)
 *     ??4?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAAAEAV01@AEBV01@@Z @ 0x1C01C7D60 (--4-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??4?$Vector@VCFixPred@Prediction@@$02@Prediction@@QEAAAEAV01@AEBV01@@Z @ 0x1C01C7D9C (--4-$Vector@VCFixPred@Prediction@@$02@Prediction@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??KPrediction@@YA?AVCFixPred@0@AEBV10@0@Z @ 0x1C01C7DCC (--KPrediction@@YA-AVCFixPred@0@AEBV10@0@Z.c)
 *     ?diag@?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAAXAEBVCFixPred@2@@Z @ 0x1C01CA060 (-diag@-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAAXAEBVCFixPred@2@@Z.c)
 */

_QWORD *__fastcall Prediction::tagRlsFilter::Filter(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  _QWORD *v6; // r11
  __int64 *v7; // rcx
  __int64 *v8; // rbx
  __int64 *v9; // r8
  __int64 v10; // rax
  int v11; // r9d
  __int64 *v12; // rdx
  BOOL v13; // eax
  _QWORD *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rbx
  __int64 *v19; // r12
  __int64 v20; // rdi
  __int64 v21; // r14
  __int64 *v22; // r8
  _QWORD *v23; // rax
  char *v24; // rax
  char *v25; // rax
  __int64 *v26; // rbx
  __int64 *v27; // rsi
  __int64 *v28; // rax
  char *v29; // rax
  char *v30; // rax
  _QWORD *v31; // r12
  __int64 *v32; // r14
  char *v33; // rax
  char *v34; // rax
  char *v35; // rax
  char *v36; // rax
  char *v37; // rax
  _QWORD *v38; // rax
  char *v39; // rax
  __int64 v40; // rcx
  unsigned __int64 v41; // rdx
  __int64 v42; // rdi
  unsigned __int64 v43; // rbx
  unsigned __int64 v44; // r10
  unsigned __int64 v45; // r8
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // r8
  int v48; // r11d
  __int64 v49; // rdx
  signed __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rdi
  __int64 v54; // rbx
  __int64 v55; // r9
  unsigned __int64 v56; // r11
  unsigned __int64 v57; // r10
  unsigned __int64 v58; // rcx
  unsigned __int64 v59; // rbx
  unsigned __int64 v60; // rcx
  unsigned __int64 v61; // r8
  int v62; // r11d
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rax
  _QWORD *v65; // rax
  char *v66; // rdi
  char *v67; // rax
  __int64 *v68; // rbx
  char *v69; // rax
  unsigned __int64 *v70; // rax
  unsigned __int64 *v71; // rax
  __int64 v72; // rbx
  __int64 v73; // rbx
  char *v74; // rdx
  signed __int64 v75; // rdi
  __int64 v76; // r10
  __int64 v77; // r9
  char *v78; // rax
  char *v79; // rax
  __int64 v80; // rcx
  char *v81; // rax
  char *v82; // rbx
  char *v83; // rax
  char *v84; // rax
  char *v85; // rax
  char *v86; // rax
  _QWORD *result; // rax
  __int64 v88; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v89; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v90; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v91; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD *i; // [rsp+40h] [rbp-C0h]
  _QWORD *v93; // [rsp+48h] [rbp-B8h]
  char v94[24]; // [rsp+50h] [rbp-B0h] BYREF
  char v95[24]; // [rsp+68h] [rbp-98h] BYREF
  char v96[80]; // [rsp+80h] [rbp-80h] BYREF
  char v97[24]; // [rsp+D0h] [rbp-30h] BYREF
  char v98[24]; // [rsp+E8h] [rbp-18h] BYREF
  char v99[80]; // [rsp+100h] [rbp+0h] BYREF
  char v100[80]; // [rsp+150h] [rbp+50h] BYREF
  _QWORD v101[10]; // [rsp+1A0h] [rbp+A0h] BYREF
  char v102[80]; // [rsp+1F0h] [rbp+F0h] BYREF
  char v103[80]; // [rsp+240h] [rbp+140h] BYREF
  char v104[80]; // [rsp+290h] [rbp+190h] BYREF
  char v105[80]; // [rsp+2E0h] [rbp+1E0h] BYREF
  char v106[80]; // [rsp+330h] [rbp+230h] BYREF
  char v107[80]; // [rsp+380h] [rbp+280h] BYREF

  v91 = a4;
  v6 = (_QWORD *)a3;
  v90 = a3;
  v93 = a2;
  *a5 = 0;
  v7 = a1 + 2;
  for ( i = a5; ; *i = 1 )
  {
    v8 = a1 + 3;
    v9 = a1 + 1;
    v10 = *v7;
    v11 = 2;
    v12 = v7;
    do
    {
      if ( v12 != v9 )
        *v12 = *v9;
      if ( v12 + 3 != v9 + 3 )
        v12[3] = v9[3];
      --v9;
      --v12;
      --v11;
    }
    while ( v11 );
    if ( a1 != v6 )
      *a1 = *v6;
    if ( v8 != &v89 )
      *v8 = v10;
    v13 = 1;
    v14 = a1;
    v15 = 3LL;
    do
    {
      v13 = v13 && *v14 && (v16 = v14[3]) != 0 && (*v14 ^ v16) < 0;
      ++v14;
      --v15;
    }
    while ( v15 );
    if ( !v13 )
      break;
    v17 = a1[51];
    v18 = a1[53];
    v19 = a1 + 50;
    v20 = a1[50];
    v21 = a1[52];
    memset(a1, 0, 0x1B0uLL);
    if ( a1 + 53 != &v89 )
      a1[53] = v18;
    if ( v19 != &v89 )
      *v19 = v20;
    if ( a1 + 51 != &v89 )
      a1[51] = v17;
    if ( a1 + 52 != &v89 )
      a1[52] = v21;
    v22 = a1 + 48;
    if ( a1 + 48 != v19 )
      *v22 = *v19;
    v89 = 0x100000000LL;
    v23 = Prediction::operator/(&v88, &v89, v22);
    if ( a1 + 49 != v23 )
      a1[49] = *v23;
    Prediction::SquareMatrix<Prediction::CFixPred,3>::diag(a1 + 18, a1 + 53);
    v89 = 0x100000000LL;
    Prediction::SquareMatrix<Prediction::CFixPred,3>::diag(a1 + 36, &v89);
    v7 = a1 + 2;
    v6 = (_QWORD *)v90;
  }
  v24 = Prediction::operator*<Prediction::CFixPred,3>(v94, (__int64)(a1 + 18), a1);
  Prediction::Vector<Prediction::CFixPred,3>::operator=(a1 + 12, (__int64)v24);
  v25 = Prediction::operator*<Prediction::CFixPred,3>((char *)&v88, a1, (__int64)(a1 + 12));
  v26 = a1 + 45;
  if ( a1 + 45 != (_QWORD *)v25 )
    *v26 = *(_QWORD *)v25;
  v27 = a1 + 48;
  if ( v26 != &v88 )
    *v26 += a1[48];
  v90 = 0x100000000LL;
  v28 = Prediction::operator/(&v88, &v90, a1 + 45);
  if ( v26 != v28 )
    *v26 = *v28;
  v29 = Prediction::operator*<Prediction::CFixPred,3>(v94, (__int64)(a1 + 12), a1 + 45);
  Prediction::Vector<Prediction::CFixPred,3>::operator=(a1 + 9, (__int64)v29);
  v30 = Prediction::operator*<Prediction::CFixPred,3>((char *)&v88, a1 + 6, (__int64)a1);
  v31 = a1 + 46;
  if ( a1 + 46 != (_QWORD *)v30 )
    *v31 = *(_QWORD *)v30;
  v32 = a1 + 47;
  if ( a1 + 47 != &v88 )
    *v32 = *(_QWORD *)v91 - *v31;
  v33 = Prediction::operator*<Prediction::CFixPred,3>(v94, (__int64)(a1 + 9), a1 + 47);
  v34 = Prediction::operator+<Prediction::CFixPred,3>(v95, (__int64)(a1 + 6), (__int64)v33);
  Prediction::Vector<Prediction::CFixPred,3>::operator=(a1 + 6, (__int64)v34);
  v35 = Prediction::operator^<Prediction::CFixPred,3>(v96, (__int64)(a1 + 9), (__int64)(a1 + 12));
  v36 = Prediction::operator-<Prediction::CFixPred,3>(v99, (__int64)(a1 + 18), (__int64)v35);
  v37 = Prediction::operator*<Prediction::CFixPred,3>(v100, (__int64)v36, a1 + 49);
  v38 = Prediction::Tri<Prediction::CFixPred,3>(v101, (__int64)v37);
  Prediction::SquareMatrix<Prediction::CFixPred,3>::operator=(a1 + 18, (__int64)v38);
  v39 = Prediction::operator*<Prediction::CFixPred,3>((char *)&v88, a1 + 15, (__int64)a1);
  v40 = *v32;
  v41 = *(_QWORD *)v39;
  v42 = (*v32 ^ *(_QWORD *)v39) >> 63;
  if ( *(__int64 *)v39 < 0 )
    v41 = -(__int64)v41;
  if ( v40 < 0 )
    v40 = -v40;
  v43 = (unsigned int)v40 * (unsigned __int64)(unsigned int)v41;
  v44 = HIDWORD(v40);
  v45 = (unsigned int)v41 * HIDWORD(v40);
  v46 = HIDWORD(v43) + (unsigned int)v40 * HIDWORD(v41);
  v47 = (unsigned int)v46 + v45;
  v48 = HIDWORD(v46) + v44 * HIDWORD(v41);
  v49 = a1[50];
  v50 = (v42 ^ ((unsigned int)v47 | ((unsigned __int64)(unsigned int)(v48 + HIDWORD(v47)) << 32))) - v42;
  if ( (_DWORD)v43 )
    v50 = v42 ^ ((unsigned int)v47 | ((unsigned __int64)(unsigned int)(v48 + HIDWORD(v47)) << 32));
  if ( v50 >= v49 )
  {
    v49 = v50;
    if ( v50 > a1[51] )
      v49 = a1[51];
  }
  v51 = a1[52];
  LODWORD(v52) = v49;
  v53 = (v49 ^ v51) >> 63;
  if ( v51 < 0 )
    v51 = -v51;
  if ( v49 < 0 )
    v52 = -v49;
  v54 = (unsigned int)v51;
  v55 = (unsigned int)v51;
  v56 = -v49;
  v57 = HIDWORD(v51);
  v58 = HIDWORD(v51);
  if ( v49 >= 0 )
    v56 = v49;
  v59 = (unsigned int)v52 * v54;
  v60 = HIDWORD(v59) + (unsigned int)v52 * v58;
  v61 = (unsigned int)v60 + v55 * HIDWORD(v56);
  v62 = HIDWORD(v60) + v57 * HIDWORD(v56);
  v63 = (v53 ^ ((unsigned int)v61 | ((unsigned __int64)(unsigned int)(v62 + HIDWORD(v61)) << 32))) - v53;
  if ( (_DWORD)v59 )
    v63 = v53 ^ ((unsigned int)v61 | ((unsigned __int64)(unsigned int)(v62 + HIDWORD(v61)) << 32));
  v64 = *v27 + v63;
  if ( v27 != &v88 )
    *v27 = v64;
  v91 = 0x100000000LL;
  v65 = Prediction::operator/(&v88, &v91, a1 + 48);
  if ( a1 + 49 != v65 )
    a1[49] = *v65;
  v66 = Prediction::operator^<Prediction::CFixPred,3>((char *)v101, (__int64)(a1 + 9), (__int64)(a1 + 9));
  v67 = Prediction::operator^<Prediction::CFixPred,3>(v100, (__int64)a1, (__int64)(a1 + 9));
  v68 = (__int64 *)Prediction::operator-<Prediction::CFixPred,3>(v99, (__int64)(a1 + 36), (__int64)v67);
  v69 = Prediction::operator^<Prediction::CFixPred,3>(v104, (__int64)(a1 + 9), (__int64)a1);
  v70 = (unsigned __int64 *)Prediction::operator-<Prediction::CFixPred,3>(v105, (__int64)(a1 + 36), (__int64)v69);
  v71 = (unsigned __int64 *)Prediction::operator*<Prediction::CFixPred,3>((__int64)v106, v70, a1 + 27);
  v72 = Prediction::operator*<Prediction::CFixPred,3>((__int64)v107, v71, v68);
  Prediction::SquareMatrix<Prediction::CFixPred,3>::SquareMatrix<Prediction::CFixPred,3>(v96);
  v73 = v72 - (_QWORD)v66;
  v74 = v96;
  v75 = v66 - v96;
  v76 = 3LL;
  do
  {
    v77 = 3LL;
    do
    {
      if ( v74 != (char *)&v88 )
        *(_QWORD *)v74 = *(_QWORD *)&v74[v75] + *(_QWORD *)&v74[v75 + v73];
      v74 += 8;
      --v77;
    }
    while ( v77 );
    --v76;
  }
  while ( v76 );
  v78 = Prediction::operator-<Prediction::CFixPred,3>(v102, (__int64)v96, (__int64)(a1 + 18));
  v79 = Prediction::operator*<Prediction::CFixPred,3>(v103, (__int64)v78, a1 + 49);
  Prediction::SquareMatrix<Prediction::CFixPred,3>::operator=(a1 + 27, (__int64)v79);
  v81 = Prediction::operator*<Prediction::CFixPred,3>(v95, v80, a1);
  v82 = Prediction::operator*<Prediction::CFixPred,3>(v94, (__int64)v81, a1 + 47);
  v83 = Prediction::operator^<Prediction::CFixPred,3>(v103, (__int64)(a1 + 9), (__int64)a1);
  v84 = Prediction::operator-<Prediction::CFixPred,3>(v102, (__int64)(a1 + 36), (__int64)v83);
  v85 = Prediction::operator*<Prediction::CFixPred,3>(v97, (__int64)v84, a1 + 15);
  v86 = Prediction::operator+<Prediction::CFixPred,3>(v98, (__int64)v85, (__int64)v82);
  Prediction::Vector<Prediction::CFixPred,3>::operator=(a1 + 15, (__int64)v86);
  result = v93;
  *v93 = *v31;
  return result;
}
