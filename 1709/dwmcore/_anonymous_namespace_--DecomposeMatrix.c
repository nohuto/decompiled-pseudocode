/*
 * XREFs of _anonymous_namespace_::DecomposeMatrix @ 0x18019BBC4
 * Callers:
 *     ?ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEAUIManipulationResource@@PEA_N@Z @ 0x18019CA78 (-ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEAUIManipulatio.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180058F90 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?Set2DRotation@CMILMatrix@@QEAAXMMM@Z @ 0x1800590E4 (-Set2DRotation@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A460 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z @ 0x18005B04C (--4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z.c)
 *     ?D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z @ 0x18009E60C (-D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z.c)
 *     ?D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x18009EEC0 (-D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     acosf_0 @ 0x1800C5D26 (acosf_0.c)
 *     ?Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z @ 0x18018F90C (-Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z.c)
 *     ?Set2DAffineMatrix@CMILMatrix@@QEAAXAEBUfloat2@Numerics@Foundation@Windows@@M000@Z @ 0x18018FA74 (-Set2DAffineMatrix@CMILMatrix@@QEAAXAEBUfloat2@Numerics@Foundation@Windows@@M000@Z.c)
 *     TransformPoint @ 0x1801CE028 (TransformPoint.c)
 */

void __fastcall anonymous_namespace_::DecomposeMatrix(
        CMILMatrix *this,
        __int64 a2,
        __int64 a3,
        CMILMatrix *a4,
        struct CMILMatrix *a5,
        CMILMatrix *a6)
{
  __int128 *v10; // r8
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  int v15; // xmm1_4
  float v16; // xmm1_4
  float v17; // xmm6_4
  int v18; // r8d
  int v19; // r9d
  const struct _TlgProvider_t *v20; // rcx
  const GUID *v21; // r8
  const GUID *v22; // r9
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
  int v41; // [rsp+40h] [rbp-C8h] BYREF
  int v42; // [rsp+44h] [rbp-C4h]
  int v43; // [rsp+48h] [rbp-C0h] BYREF
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
  __int64 v65; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v66; // [rsp+B0h] [rbp-58h] BYREF
  int v67; // [rsp+B8h] [rbp-50h] BYREF
  BOOL v68; // [rsp+BCh] [rbp-4Ch] BYREF
  int v69; // [rsp+C0h] [rbp-48h] BYREF
  int v70; // [rsp+C4h] [rbp-44h] BYREF
  int v71; // [rsp+C8h] [rbp-40h] BYREF
  int v72; // [rsp+CCh] [rbp-3Ch] BYREF
  int v73; // [rsp+D0h] [rbp-38h] BYREF
  _OWORD v74[4]; // [rsp+D8h] [rbp-30h] BYREF
  __int16 v75; // [rsp+118h] [rbp+10h]
  __int64 v76; // [rsp+128h] [rbp+20h] BYREF
  __int64 v77; // [rsp+130h] [rbp+28h]
  __int64 v78; // [rsp+138h] [rbp+30h] BYREF
  __int64 v79; // [rsp+140h] [rbp+38h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+148h] [rbp+40h] BYREF
  BOOL *v81; // [rsp+168h] [rbp+60h]
  const GUID *v82; // [rsp+170h] [rbp+68h]
  int *v83; // [rsp+178h] [rbp+70h]
  const GUID *v84; // [rsp+180h] [rbp+78h]
  int *v85; // [rsp+188h] [rbp+80h]
  const GUID *v86; // [rsp+190h] [rbp+88h]
  int *v87; // [rsp+198h] [rbp+90h]
  const GUID *v88; // [rsp+1A0h] [rbp+98h]
  int *v89; // [rsp+1A8h] [rbp+A0h]
  const GUID *v90; // [rsp+1B0h] [rbp+A8h]
  int *v91; // [rsp+1B8h] [rbp+B0h]
  const GUID *v92; // [rsp+1C0h] [rbp+B8h]
  int *v93; // [rsp+1C8h] [rbp+C0h]
  const GUID *v94; // [rsp+1D0h] [rbp+C8h]
  int *v95; // [rsp+1D8h] [rbp+D0h]
  const GUID *v96; // [rsp+1E0h] [rbp+D8h]
  int *v97; // [rsp+1E8h] [rbp+E0h]
  const GUID *v98; // [rsp+1F0h] [rbp+E8h]
  int *v99; // [rsp+1F8h] [rbp+F0h]
  const GUID *v100; // [rsp+200h] [rbp+F8h]
  int *v101; // [rsp+208h] [rbp+100h]
  const GUID *v102; // [rsp+210h] [rbp+108h]
  int *v103; // [rsp+218h] [rbp+110h]
  const GUID *v104; // [rsp+220h] [rbp+118h]
  int *v105; // [rsp+228h] [rbp+120h]
  const GUID *v106; // [rsp+230h] [rbp+128h]
  int *v107; // [rsp+238h] [rbp+130h]
  const GUID *v108; // [rsp+240h] [rbp+138h]
  int *v109; // [rsp+248h] [rbp+140h]
  const GUID *v110; // [rsp+250h] [rbp+148h]
  int *v111; // [rsp+258h] [rbp+150h]
  const GUID *v112; // [rsp+260h] [rbp+158h]
  int *v113; // [rsp+268h] [rbp+160h]
  const GUID *v114; // [rsp+270h] [rbp+168h]
  const struct Windows::Foundation::Numerics::float2 **v115; // [rsp+278h] [rbp+170h]
  const GUID *v116; // [rsp+280h] [rbp+178h]
  char *v117; // [rsp+288h] [rbp+180h]
  const GUID *v118; // [rsp+290h] [rbp+188h]
  int *v119; // [rsp+298h] [rbp+190h]
  const GUID *v120; // [rsp+2A0h] [rbp+198h]
  int *v121; // [rsp+2A8h] [rbp+1A0h]
  const GUID *v122; // [rsp+2B0h] [rbp+1A8h]
  int *v123; // [rsp+2B8h] [rbp+1B0h]
  const GUID *v124; // [rsp+2C0h] [rbp+1B8h]
  int *v125; // [rsp+2C8h] [rbp+1C0h]
  const GUID *v126; // [rsp+2D0h] [rbp+1C8h]
  float *v127; // [rsp+2D8h] [rbp+1D0h]
  const GUID *v128; // [rsp+2E0h] [rbp+1D8h]
  float *v129; // [rsp+2E8h] [rbp+1E0h]
  const GUID *v130; // [rsp+2F0h] [rbp+1E8h]
  float *v131; // [rsp+2F8h] [rbp+1F0h]
  const GUID *v132; // [rsp+300h] [rbp+1F8h]
  int *v133; // [rsp+308h] [rbp+200h]
  const GUID *v134; // [rsp+310h] [rbp+208h]
  __int64 *v135; // [rsp+318h] [rbp+210h]
  const GUID *v136; // [rsp+320h] [rbp+218h]
  char *v137; // [rsp+328h] [rbp+220h]
  const GUID *v138; // [rsp+330h] [rbp+228h]
  __int64 *v139; // [rsp+338h] [rbp+230h]
  const GUID *v140; // [rsp+340h] [rbp+238h]
  char *v141; // [rsp+348h] [rbp+240h]
  const GUID *v142; // [rsp+350h] [rbp+248h]
  int *v143; // [rsp+358h] [rbp+250h]
  const GUID *v144; // [rsp+360h] [rbp+258h]
  const struct Windows::Foundation::Numerics::float2 **v145; // [rsp+368h] [rbp+260h]
  const GUID *v146; // [rsp+370h] [rbp+268h]
  int *v147; // [rsp+378h] [rbp+270h]
  const GUID *v148; // [rsp+380h] [rbp+278h]
  int *v149; // [rsp+388h] [rbp+280h]
  const GUID *v150; // [rsp+390h] [rbp+288h]

  *(_OWORD *)a3 = *(_OWORD *)this;
  *(_OWORD *)(a3 + 16) = *((_OWORD *)this + 1);
  *(_OWORD *)(a3 + 32) = *((_OWORD *)this + 2);
  *(_OWORD *)(a3 + 48) = *((_OWORD *)this + 3);
  *(_DWORD *)(a3 + 64) = *((_DWORD *)this + 16);
  CMILMatrix::operator=((__int64)a4);
  CMILMatrix::operator=((__int64)a5);
  v11 = *v10;
  v40 = 0.0;
  *(_OWORD *)a6 = v11;
  v75 = 32085;
  v12 = v10[1];
  v39[0] = 0;
  *((_OWORD *)a6 + 1) = v12;
  v13 = v10[2];
  v74[2] = _xmm;
  *((_OWORD *)a6 + 2) = v13;
  v14 = v10[3];
  v74[3] = _xmm;
  *((_OWORD *)a6 + 3) = v14;
  *((_DWORD *)a6 + 16) = *((_DWORD *)v10 + 16);
  LODWORD(v14) = *((_DWORD *)this + 13);
  LODWORD(v47) = *((_DWORD *)this + 12);
  LODWORD(v13) = *(_DWORD *)this;
  HIDWORD(v47) = v14;
  LODWORD(v14) = *((_DWORD *)this + 5);
  v45 = v13;
  v46 = v14;
  v74[0] = _xmm;
  v74[1] = _xmm;
  CMILMatrix::Decompose2DAffineMatrixIntoScaleAndRest(this, a5, (struct CMILMatrix *)v74, v39);
  if ( v39[0] )
  {
    v15 = *((_DWORD *)a5 + 5);
    v45 = *(_DWORD *)a5;
    v46 = v15;
    D3DXQuaternionRotationMatrix((struct D2DQuaternion *)&v48, (const struct D2DMatrix *)v74);
    v48 = 0;
    v49 = 0;
    D3DXQuaternionNormalize((struct D2DQuaternion *)&v48, (const struct D2DQuaternion *)&v48);
    if ( v50 >= 0.0 )
      v16 = FLOAT_1_0;
    else
      v16 = FLOAT_N1_0;
    v17 = acosf_0(v51 * v16) * 2.0;
    v40 = v17;
    CMILMatrix::Set2DRotation(a4, v17, 0.0, 0.0);
  }
  else
  {
    v17 = v40;
  }
  if ( !CMILMatrix::Is2DAffine<1>((__int64)this, 1) )
  {
    v43 = 0;
    v44 = 0;
    v41 = 0;
    v42 = 0;
    CMILMatrix::Set2DAffineMatrix(
      (CMILMatrix *)a3,
      (const struct Windows::Foundation::Numerics::float2 *)&v45,
      v17,
      &v47,
      (const struct Windows::Foundation::Numerics::float2 *)&v41,
      (const struct Windows::Foundation::Numerics::float2 *)&v43);
    *(_OWORD *)a6 = *(_OWORD *)a3;
    *((_OWORD *)a6 + 1) = *(_OWORD *)(a3 + 16);
    *((_OWORD *)a6 + 2) = *(_OWORD *)(a3 + 32);
    *((_OWORD *)a6 + 3) = *(_OWORD *)(a3 + 48);
    *((_DWORD *)a6 + 16) = *(_DWORD *)(a3 + 64);
  }
  v76 = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  if ( !CMILMatrix::IsIdentity<0>(a3) && (unsigned int)GetPointerDeviceRects(a2, &v76, &v78) )
  {
    TransformPoint((unsigned int)&v78, (unsigned int)&v76, v18, v19, (__int64)&v52, (__int64)&v52 + 4);
    v43 = 0;
    v44 = 0;
    v41 = 0;
    v42 = 0;
    CMILMatrix::Set2DAffineMatrix(
      a6,
      (const struct Windows::Foundation::Numerics::float2 *)&v45,
      v40,
      &v52,
      (const struct Windows::Foundation::Numerics::float2 *)&v41,
      (const struct Windows::Foundation::Numerics::float2 *)&v43);
  }
  if ( dword_18026D7B0 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 2uLL) )
    {
      v23 = *(_DWORD *)this;
      v68 = v39[0];
      v81 = &v68;
      v69 = v23;
      v24 = *((_DWORD *)this + 1);
      v83 = &v69;
      v70 = v24;
      v25 = *((_DWORD *)this + 2);
      v85 = &v70;
      v71 = v25;
      v26 = *((_DWORD *)this + 3);
      v87 = &v71;
      v72 = v26;
      v27 = *((_DWORD *)this + 4);
      v89 = &v72;
      v73 = v27;
      v28 = *((_DWORD *)this + 5);
      v91 = &v73;
      v53 = v28;
      v29 = *((_DWORD *)this + 6);
      v93 = &v53;
      v54 = v29;
      v30 = *((_DWORD *)this + 7);
      v95 = &v54;
      v55 = v30;
      v31 = *((_DWORD *)this + 8);
      v97 = &v55;
      v56 = v31;
      v32 = *((_DWORD *)this + 9);
      v99 = &v56;
      v57 = v32;
      v33 = *((_DWORD *)this + 10);
      v101 = &v57;
      v58 = v33;
      v34 = *((_DWORD *)this + 11);
      v103 = &v58;
      v59 = v34;
      v35 = *((_DWORD *)this + 12);
      v105 = &v59;
      v60 = v35;
      v36 = *((_DWORD *)this + 13);
      v107 = &v60;
      v61 = v36;
      v37 = *((_DWORD *)this + 14);
      v109 = &v61;
      v62 = v37;
      v38 = *((_DWORD *)this + 15);
      v111 = &v62;
      v82 = v22;
      v84 = v22;
      v86 = v22;
      v88 = v22;
      v90 = v22;
      v92 = v22;
      v94 = v22;
      v96 = v22;
      v98 = v22;
      v100 = v22;
      v102 = v22;
      v104 = v22;
      v106 = v22;
      v108 = v22;
      v110 = v22;
      v112 = v22;
      v63 = v38;
      v113 = &v63;
      v115 = &v47;
      v117 = (char *)&v47 + 4;
      v119 = &v45;
      v121 = &v46;
      v123 = &v48;
      v125 = &v49;
      v127 = &v50;
      v129 = &v51;
      v131 = &v40;
      v133 = &v64;
      v65 = v76;
      v135 = &v65;
      v137 = (char *)&v65 + 4;
      v66 = v77;
      v139 = &v66;
      v141 = (char *)&v66 + 4;
      v67 = v78;
      v143 = &v67;
      LODWORD(v52) = HIDWORD(v78);
      v145 = &v52;
      v41 = v79;
      v147 = &v41;
      v43 = HIDWORD(v79);
      v149 = &v43;
      v114 = v22;
      v116 = v22;
      v118 = v22;
      v120 = v22;
      v122 = v22;
      v124 = v22;
      v126 = v22;
      v128 = v22;
      v130 = v22;
      v132 = v22;
      v64 = a2;
      v134 = v22;
      v136 = v22;
      v138 = v22;
      v140 = v22;
      v142 = v22;
      v144 = v22;
      v146 = v22;
      v148 = v22;
      v150 = v22;
      TlgWrite(v20, &unk_180215820, v21, v22, 0x25u, &pData);
    }
  }
}
