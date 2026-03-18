/*
 * XREFs of _anonymous_namespace_::DecomposeMatrix @ 0x1801D46A0
 * Callers:
 *     ?ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEAUIManipulationResource@@PEA_N@Z @ 0x1801D5660 (-ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEAUIManipulatio.c)
 * Callees:
 *     ?D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z @ 0x18000E26C (-D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z.c)
 *     ?Set2DRotation@CMILMatrix@@QEAAXMMM@Z @ 0x18000F584 (-Set2DRotation@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x1800274FC (-D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800A35A0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800A58B0 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     acosf_0 @ 0x1800DD3A1 (acosf_0.c)
 *     ?Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z @ 0x1801C6E38 (-Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z.c)
 *     ?Set2DAffineMatrix@CMILMatrix@@QEAAXAEBUfloat2@Numerics@Foundation@Windows@@M000@Z @ 0x1801C6FA0 (-Set2DAffineMatrix@CMILMatrix@@QEAAXAEBUfloat2@Numerics@Foundation@Windows@@M000@Z.c)
 *     ?GetMouseWheelDeviceRects@CInteractionContextWrapper@@SAJPEAUHMONITOR__@@PEAUtagRECT@@1@Z @ 0x1801D73A0 (-GetMouseWheelDeviceRects@CInteractionContextWrapper@@SAJPEAUHMONITOR__@@PEAUtagRECT@@1@Z.c)
 *     TransformPoint @ 0x18020E94C (TransformPoint.c)
 */

void __fastcall anonymous_namespace_::DecomposeMatrix(
        __int64 a1,
        HMONITOR a2,
        char a3,
        __int64 a4,
        CMILMatrix *a5,
        struct CMILMatrix *a6,
        CMILMatrix *a7)
{
  __int128 v10; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  int v15; // xmm1_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm6_4
  int v19; // r8d
  int v20; // r9d
  const struct _TlgProvider_t *v21; // rcx
  __int64 v22; // r9
  int v23; // xmm0_4
  int v24; // xmm0_4
  int v25; // xmm0_4
  int v26; // xmm0_4
  int v27; // xmm0_4
  int v28; // xmm0_4
  int v29; // xmm0_4
  int v30; // xmm0_4
  int v31; // xmm0_4
  int v32; // xmm0_4
  int v33; // xmm0_4
  int v34; // xmm0_4
  int v35; // xmm0_4
  int v36; // xmm0_4
  int v37; // xmm0_4
  int v38; // xmm0_4
  bool v39[4]; // [rsp+38h] [rbp-D0h] BYREF
  float v40; // [rsp+3Ch] [rbp-CCh] BYREF
  LONG right; // [rsp+40h] [rbp-C8h] BYREF
  int v42; // [rsp+44h] [rbp-C4h]
  LONG bottom; // [rsp+48h] [rbp-C0h] BYREF
  int v44; // [rsp+4Ch] [rbp-BCh]
  int v45; // [rsp+50h] [rbp-B8h] BYREF
  int v46; // [rsp+54h] [rbp-B4h] BYREF
  const struct Windows::Foundation::Numerics::float2 *v47; // [rsp+58h] [rbp-B0h] BYREF
  int v48; // [rsp+60h] [rbp-A8h] BYREF
  int v49; // [rsp+64h] [rbp-A4h] BYREF
  float v50; // [rsp+68h] [rbp-A0h] BYREF
  float v51; // [rsp+6Ch] [rbp-9Ch] BYREF
  const struct Windows::Foundation::Numerics::float2 *v52; // [rsp+70h] [rbp-98h] BYREF
  int v53; // [rsp+78h] [rbp-90h] BYREF
  int v54; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v55; // [rsp+80h] [rbp-88h] BYREF
  int v56; // [rsp+84h] [rbp-84h] BYREF
  int v57; // [rsp+88h] [rbp-80h] BYREF
  int v58; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v59; // [rsp+90h] [rbp-78h] BYREF
  int v60; // [rsp+94h] [rbp-74h] BYREF
  int v61; // [rsp+98h] [rbp-70h] BYREF
  int v62; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v63; // [rsp+A0h] [rbp-68h] BYREF
  int v64; // [rsp+A4h] [rbp-64h] BYREF
  struct tagRECT v65; // [rsp+A8h] [rbp-60h] BYREF
  LONG left; // [rsp+B8h] [rbp-50h] BYREF
  BOOL v67; // [rsp+BCh] [rbp-4Ch] BYREF
  int v68; // [rsp+C0h] [rbp-48h] BYREF
  int v69; // [rsp+C4h] [rbp-44h] BYREF
  int v70; // [rsp+C8h] [rbp-40h] BYREF
  int v71; // [rsp+CCh] [rbp-3Ch] BYREF
  int v72; // [rsp+D0h] [rbp-38h] BYREF
  _OWORD v73[4]; // [rsp+D8h] [rbp-30h] BYREF
  __int16 v74; // [rsp+118h] [rbp+10h]
  struct tagRECT v75; // [rsp+128h] [rbp+20h] BYREF
  struct tagRECT v76; // [rsp+138h] [rbp+30h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+148h] [rbp+40h] BYREF
  BOOL *v78; // [rsp+168h] [rbp+60h]
  __int64 v79; // [rsp+170h] [rbp+68h]
  int *v80; // [rsp+178h] [rbp+70h]
  __int64 v81; // [rsp+180h] [rbp+78h]
  int *v82; // [rsp+188h] [rbp+80h]
  __int64 v83; // [rsp+190h] [rbp+88h]
  int *v84; // [rsp+198h] [rbp+90h]
  __int64 v85; // [rsp+1A0h] [rbp+98h]
  int *v86; // [rsp+1A8h] [rbp+A0h]
  __int64 v87; // [rsp+1B0h] [rbp+A8h]
  int *v88; // [rsp+1B8h] [rbp+B0h]
  __int64 v89; // [rsp+1C0h] [rbp+B8h]
  int *v90; // [rsp+1C8h] [rbp+C0h]
  __int64 v91; // [rsp+1D0h] [rbp+C8h]
  int *v92; // [rsp+1D8h] [rbp+D0h]
  __int64 v93; // [rsp+1E0h] [rbp+D8h]
  int *v94; // [rsp+1E8h] [rbp+E0h]
  __int64 v95; // [rsp+1F0h] [rbp+E8h]
  int *v96; // [rsp+1F8h] [rbp+F0h]
  __int64 v97; // [rsp+200h] [rbp+F8h]
  int *v98; // [rsp+208h] [rbp+100h]
  __int64 v99; // [rsp+210h] [rbp+108h]
  int *v100; // [rsp+218h] [rbp+110h]
  __int64 v101; // [rsp+220h] [rbp+118h]
  int *v102; // [rsp+228h] [rbp+120h]
  __int64 v103; // [rsp+230h] [rbp+128h]
  int *v104; // [rsp+238h] [rbp+130h]
  __int64 v105; // [rsp+240h] [rbp+138h]
  int *v106; // [rsp+248h] [rbp+140h]
  __int64 v107; // [rsp+250h] [rbp+148h]
  int *v108; // [rsp+258h] [rbp+150h]
  __int64 v109; // [rsp+260h] [rbp+158h]
  int *v110; // [rsp+268h] [rbp+160h]
  __int64 v111; // [rsp+270h] [rbp+168h]
  const struct Windows::Foundation::Numerics::float2 **v112; // [rsp+278h] [rbp+170h]
  __int64 v113; // [rsp+280h] [rbp+178h]
  char *v114; // [rsp+288h] [rbp+180h]
  __int64 v115; // [rsp+290h] [rbp+188h]
  int *v116; // [rsp+298h] [rbp+190h]
  __int64 v117; // [rsp+2A0h] [rbp+198h]
  int *v118; // [rsp+2A8h] [rbp+1A0h]
  __int64 v119; // [rsp+2B0h] [rbp+1A8h]
  int *v120; // [rsp+2B8h] [rbp+1B0h]
  __int64 v121; // [rsp+2C0h] [rbp+1B8h]
  int *v122; // [rsp+2C8h] [rbp+1C0h]
  __int64 v123; // [rsp+2D0h] [rbp+1C8h]
  float *v124; // [rsp+2D8h] [rbp+1D0h]
  __int64 v125; // [rsp+2E0h] [rbp+1D8h]
  float *v126; // [rsp+2E8h] [rbp+1E0h]
  __int64 v127; // [rsp+2F0h] [rbp+1E8h]
  float *v128; // [rsp+2F8h] [rbp+1F0h]
  __int64 v129; // [rsp+300h] [rbp+1F8h]
  int *v130; // [rsp+308h] [rbp+200h]
  __int64 v131; // [rsp+310h] [rbp+208h]
  struct tagRECT *v132; // [rsp+318h] [rbp+210h]
  __int64 v133; // [rsp+320h] [rbp+218h]
  LONG *p_top; // [rsp+328h] [rbp+220h]
  __int64 v135; // [rsp+330h] [rbp+228h]
  LONG *p_right; // [rsp+338h] [rbp+230h]
  __int64 v137; // [rsp+340h] [rbp+238h]
  LONG *p_bottom; // [rsp+348h] [rbp+240h]
  __int64 v139; // [rsp+350h] [rbp+248h]
  LONG *p_left; // [rsp+358h] [rbp+250h]
  __int64 v141; // [rsp+360h] [rbp+258h]
  const struct Windows::Foundation::Numerics::float2 **v142; // [rsp+368h] [rbp+260h]
  __int64 v143; // [rsp+370h] [rbp+268h]
  LONG *v144; // [rsp+378h] [rbp+270h]
  __int64 v145; // [rsp+380h] [rbp+278h]
  LONG *v146; // [rsp+388h] [rbp+280h]
  __int64 v147; // [rsp+390h] [rbp+288h]

  *(_OWORD *)a4 = *(_OWORD *)a1;
  v10 = *(_OWORD *)(a1 + 16);
  v40 = 0.0;
  *(_OWORD *)(a4 + 16) = v10;
  v74 = 32085;
  v12 = *(_OWORD *)(a1 + 32);
  v39[0] = 0;
  *(_OWORD *)(a4 + 32) = v12;
  *(_OWORD *)(a4 + 48) = *(_OWORD *)(a1 + 48);
  *(_DWORD *)(a4 + 64) = *(_DWORD *)(a1 + 64);
  *(_OWORD *)a5 = _xmm;
  *((_WORD *)a5 + 32) = 32085;
  *((_OWORD *)a5 + 1) = _xmm;
  *((_OWORD *)a5 + 2) = _xmm;
  *((_OWORD *)a5 + 3) = _xmm;
  *((_WORD *)a6 + 32) = 32085;
  *(_OWORD *)a6 = _xmm;
  *((_OWORD *)a6 + 1) = _xmm;
  *((_OWORD *)a6 + 2) = _xmm;
  *((_OWORD *)a6 + 3) = _xmm;
  v13 = *(_OWORD *)a4;
  v73[2] = _xmm;
  *(_OWORD *)a7 = v13;
  v14 = *(_OWORD *)(a4 + 16);
  v73[3] = _xmm;
  *((_OWORD *)a7 + 1) = v14;
  *((_OWORD *)a7 + 2) = *(_OWORD *)(a4 + 32);
  *((_OWORD *)a7 + 3) = *(_OWORD *)(a4 + 48);
  *((_DWORD *)a7 + 16) = *(_DWORD *)(a4 + 64);
  LODWORD(v14) = *(_DWORD *)(a1 + 52);
  LODWORD(v47) = *(_DWORD *)(a1 + 48);
  LODWORD(v13) = *(_DWORD *)a1;
  HIDWORD(v47) = v14;
  LODWORD(v14) = *(_DWORD *)(a1 + 20);
  v45 = v13;
  v46 = v14;
  v73[0] = _xmm;
  v73[1] = _xmm;
  CMILMatrix::Decompose2DAffineMatrixIntoScaleAndRest((CMILMatrix *)a1, a6, (struct CMILMatrix *)v73, v39);
  if ( v39[0] )
  {
    v15 = *((_DWORD *)a6 + 5);
    v45 = *(_DWORD *)a6;
    v46 = v15;
    D3DXQuaternionRotationMatrix((struct D2DQuaternion *)&v48, (const struct D2DMatrix *)v73);
    v48 = 0;
    v49 = 0;
    D3DXQuaternionNormalize((struct D2DQuaternion *)&v48, (const struct D2DQuaternion *)&v48);
    if ( v50 >= 0.0 )
      v16 = FLOAT_1_0;
    else
      v16 = FLOAT_N1_0;
    v17 = acosf_0(v51 * v16);
    v18 = v17 + v17;
    v40 = v17 + v17;
    CMILMatrix::Set2DRotation(a5, v17 + v17, 0.0, 0.0);
  }
  else
  {
    v18 = v40;
  }
  if ( !CMILMatrix::Is2DAffine<1>(a1, 1) )
  {
    bottom = 0;
    v44 = 0;
    right = 0;
    v42 = 0;
    CMILMatrix::Set2DAffineMatrix(
      (CMILMatrix *)a4,
      (const struct Windows::Foundation::Numerics::float2 *)&v45,
      v18,
      &v47,
      (const struct Windows::Foundation::Numerics::float2 *)&right,
      (const struct Windows::Foundation::Numerics::float2 *)&bottom);
    *(_OWORD *)a7 = *(_OWORD *)a4;
    *((_OWORD *)a7 + 1) = *(_OWORD *)(a4 + 16);
    *((_OWORD *)a7 + 2) = *(_OWORD *)(a4 + 32);
    *((_OWORD *)a7 + 3) = *(_OWORD *)(a4 + 48);
    *((_DWORD *)a7 + 16) = *(_DWORD *)(a4 + 64);
  }
  *(_QWORD *)&v75.left = 0LL;
  *(_QWORD *)&v75.right = 0LL;
  *(_QWORD *)&v76.left = 0LL;
  *(_QWORD *)&v76.right = 0LL;
  if ( !CMILMatrix::IsIdentity<0>(a4) )
  {
    if ( a3 )
    {
      if ( (int)CInteractionContextWrapper::GetMouseWheelDeviceRects(a2, &v75, &v76) < 0 )
        goto LABEL_15;
    }
    else if ( !(unsigned int)GetPointerDeviceRects(a2, &v75, &v76) )
    {
      goto LABEL_15;
    }
    TransformPoint((unsigned int)&v76, (unsigned int)&v75, v19, v20, (__int64)&v52, (__int64)&v52 + 4);
    bottom = 0;
    v44 = 0;
    right = 0;
    v42 = 0;
    CMILMatrix::Set2DAffineMatrix(
      a7,
      (const struct Windows::Foundation::Numerics::float2 *)&v45,
      v40,
      &v52,
      (const struct Windows::Foundation::Numerics::float2 *)&right,
      (const struct Windows::Foundation::Numerics::float2 *)&bottom);
  }
LABEL_15:
  if ( dword_1802D3FE0 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 2uLL) )
    {
      v23 = *(_DWORD *)a1;
      v67 = v39[0];
      v78 = &v67;
      v68 = v23;
      v24 = *(_DWORD *)(a1 + 4);
      v80 = &v68;
      v69 = v24;
      v25 = *(_DWORD *)(a1 + 8);
      v82 = &v69;
      v70 = v25;
      v26 = *(_DWORD *)(a1 + 12);
      v84 = &v70;
      v71 = v26;
      v27 = *(_DWORD *)(a1 + 16);
      v86 = &v71;
      v72 = v27;
      v28 = *(_DWORD *)(a1 + 20);
      v88 = &v72;
      v53 = v28;
      v29 = *(_DWORD *)(a1 + 24);
      v90 = &v53;
      v54 = v29;
      v30 = *(_DWORD *)(a1 + 28);
      v92 = &v54;
      v55 = v30;
      v31 = *(_DWORD *)(a1 + 32);
      v94 = &v55;
      v56 = v31;
      v32 = *(_DWORD *)(a1 + 36);
      v96 = &v56;
      v57 = v32;
      v33 = *(_DWORD *)(a1 + 40);
      v98 = &v57;
      v58 = v33;
      v34 = *(_DWORD *)(a1 + 44);
      v100 = &v58;
      v59 = v34;
      v35 = *(_DWORD *)(a1 + 48);
      v102 = &v59;
      v60 = v35;
      v36 = *(_DWORD *)(a1 + 52);
      v104 = &v60;
      v61 = v36;
      v37 = *(_DWORD *)(a1 + 56);
      v106 = &v61;
      v62 = v37;
      v38 = *(_DWORD *)(a1 + 60);
      v108 = &v62;
      v79 = v22;
      v81 = v22;
      v83 = v22;
      v85 = v22;
      v87 = v22;
      v89 = v22;
      v91 = v22;
      v93 = v22;
      v95 = v22;
      v97 = v22;
      v99 = v22;
      v101 = v22;
      v103 = v22;
      v105 = v22;
      v107 = v22;
      v109 = v22;
      v63 = v38;
      v110 = &v63;
      v112 = &v47;
      v114 = (char *)&v47 + 4;
      v116 = &v45;
      v118 = &v46;
      v120 = &v48;
      v122 = &v49;
      v124 = &v50;
      v126 = &v51;
      v128 = &v40;
      v130 = &v64;
      v65 = v75;
      v132 = &v65;
      p_top = &v65.top;
      p_right = &v65.right;
      p_bottom = &v65.bottom;
      left = v76.left;
      p_left = &left;
      LODWORD(v52) = v76.top;
      v142 = &v52;
      right = v76.right;
      v144 = &right;
      bottom = v76.bottom;
      v146 = &bottom;
      v111 = v22;
      v113 = v22;
      v115 = v22;
      v117 = v22;
      v119 = v22;
      v121 = v22;
      v123 = v22;
      v125 = v22;
      v127 = v22;
      v129 = v22;
      v64 = (int)a2;
      v131 = v22;
      v133 = v22;
      v135 = v22;
      v137 = v22;
      v139 = v22;
      v141 = v22;
      v143 = v22;
      v145 = v22;
      v147 = v22;
      TlgWrite(v21, &unk_1802AA816, 0LL, 0LL, 0x25u, &pData);
    }
  }
}
