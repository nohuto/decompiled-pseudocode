/*
 * XREFs of ?FeedRecognizer@MPCSpatialGestureRecognizerHandler@@QEAAXPEAUInputInfo@@@Z @ 0x18006466C
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800621D4 (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetMode@MPCSpatialGestureRecognizerHandler@@AEAAXW4MPC2DGestureMode@@@Z @ 0x1800645AC (-SetMode@MPCSpatialGestureRecognizerHandler@@AEAAXW4MPC2DGestureMode@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCSpatialGestureRecognizerHandler::FeedRecognizer(
        MPCSpatialGestureRecognizerHandler *this,
        struct InputInfo *a2)
{
  __int128 *v2; // rbx
  __int128 *v5; // rax
  __int128 v6; // xmm1
  __int64 v7; // rcx
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 *v16; // rcx
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int64 v21; // rax
  __int128 v22; // xmm0
  __int64 (__fastcall *v23)(__int64 *, __int128 *, __int128 *, __int128 *); // rax
  __int128 v24; // xmm1
  int v25; // eax
  __int128 *v26; // rax
  __int64 v27; // rcx
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int64 *v37; // rcx
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int64 v42; // rax
  __int128 v43; // xmm0
  __int64 (__fastcall *v44)(__int64 *, __int128 *, __int128 *, __int128 *); // rax
  __int128 v45; // xmm1
  int v46; // eax
  __int128 *v47; // rax
  __int64 v48; // rcx
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int64 *v58; // rcx
  __int128 v59; // xmm1
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  __int128 v62; // xmm0
  __int64 v63; // rax
  __int128 v64; // xmm0
  __int64 (__fastcall *v65)(__int64 *, __int128 *, __int128 *, __int128 *); // rax
  __int128 v66; // xmm1
  int v67; // eax
  __int128 *v68; // rax
  __int64 v69; // rcx
  __int128 v70; // xmm1
  __int128 v71; // xmm0
  __int128 v72; // xmm1
  __int128 v73; // xmm0
  __int128 v74; // xmm1
  __int128 v75; // xmm0
  __int128 v76; // xmm1
  __int128 v77; // xmm0
  __int128 v78; // xmm1
  __int64 *v79; // rcx
  __int128 v80; // xmm1
  __int128 v81; // xmm0
  __int128 v82; // xmm1
  __int128 v83; // xmm0
  __int64 v84; // rax
  __int128 v85; // xmm0
  __int64 (__fastcall *v86)(__int64 *, __int128 *, __int128 *, __int128 *); // rax
  __int128 v87; // xmm1
  int v88; // eax
  int v89; // eax
  __int64 v90; // r8
  __int128 v91; // xmm1
  __int128 v92; // xmm0
  __int128 v93; // xmm1
  __int128 v94; // xmm0
  __int128 v95; // xmm1
  __int128 v96; // xmm0
  __int128 v97; // xmm1
  __int128 v98; // xmm0
  __int128 v99; // xmm1
  __int64 v100; // rax
  __int128 v101; // xmm0
  __int128 v102; // xmm1
  __int128 v103; // xmm0
  __int128 v104; // xmm1
  __int128 v105; // xmm0
  __int128 v106; // xmm1
  __int64 v107; // rcx
  int v108; // eax
  __int64 v109; // r8
  __int128 v110; // xmm1
  __int128 v111; // xmm0
  __int128 v112; // xmm1
  __int128 v113; // xmm0
  __int128 v114; // xmm1
  __int128 v115; // xmm0
  __int128 v116; // xmm1
  __int128 v117; // xmm0
  __int128 v118; // xmm1
  __int64 v119; // rax
  __int128 v120; // xmm0
  __int128 v121; // xmm1
  __int128 v122; // xmm0
  __int128 v123; // xmm1
  __int128 v124; // xmm0
  __int128 v125; // xmm1
  __int64 v126; // rcx
  int v127; // eax
  __int64 v128; // r8
  __int128 v129; // xmm1
  __int128 v130; // xmm0
  __int128 v131; // xmm1
  __int128 v132; // xmm0
  __int128 v133; // xmm1
  __int128 v134; // xmm0
  __int128 v135; // xmm1
  __int128 v136; // xmm0
  __int128 v137; // xmm1
  __int64 v138; // rax
  __int128 v139; // xmm0
  __int128 v140; // xmm1
  __int128 v141; // xmm0
  __int128 v142; // xmm1
  __int128 v143; // xmm0
  __int128 v144; // xmm1
  __int64 v145; // rcx
  int v146; // eax
  int v147; // edx
  __int64 v148; // r8
  __int128 v149; // xmm1
  __int128 v150; // xmm0
  __int128 v151; // xmm1
  __int128 v152; // xmm0
  __int128 v153; // xmm1
  __int128 v154; // xmm0
  __int128 v155; // xmm1
  __int128 v156; // xmm0
  __int128 v157; // xmm1
  __int64 v158; // rax
  __int128 v159; // xmm0
  __int128 v160; // xmm1
  __int128 v161; // xmm0
  __int128 v162; // xmm1
  __int128 v163; // xmm0
  __int128 v164; // xmm1
  __int64 v165; // rcx
  int v166; // eax
  __int128 v167; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v168; // [rsp+48h] [rbp-C0h]
  __int128 v169; // [rsp+58h] [rbp-B0h]
  __int128 v170; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v171; // [rsp+78h] [rbp-90h]
  __int128 v172; // [rsp+88h] [rbp-80h]
  __int128 v173; // [rsp+98h] [rbp-70h]
  __int64 v174; // [rsp+A8h] [rbp-60h]
  int v175; // [rsp+B0h] [rbp-58h]
  __int128 v176; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v177; // [rsp+C8h] [rbp-40h]
  __int128 v178; // [rsp+D8h] [rbp-30h]
  __int128 v179; // [rsp+E8h] [rbp-20h]
  __int128 v180; // [rsp+F8h] [rbp-10h]
  __int128 v181; // [rsp+108h] [rbp+0h]
  __int128 v182; // [rsp+118h] [rbp+10h]
  __int128 v183; // [rsp+128h] [rbp+20h]
  __int128 v184; // [rsp+138h] [rbp+30h]
  __int128 v185; // [rsp+148h] [rbp+40h]
  __int128 v186; // [rsp+158h] [rbp+50h]
  __int128 v187; // [rsp+168h] [rbp+60h]
  __int128 v188; // [rsp+178h] [rbp+70h]
  __int128 v189; // [rsp+188h] [rbp+80h]
  __int64 v190; // [rsp+198h] [rbp+90h]
  int v191; // [rsp+1A0h] [rbp+98h]
  wil::details::in1diag3 *retaddr; // [rsp+270h] [rbp+168h]

  *((_QWORD *)this + 13) = a2;
  v2 = (__int128 *)((char *)a2 + 1400);
  *((_DWORD *)this + 8) = (int)*((float *)a2 + 322);
  *((_DWORD *)this + 9) = (int)*((float *)a2 + 323);
  *((_QWORD *)this + 20) = *((_QWORD *)a2 + 175);
  switch ( *((_DWORD *)a2 + 174) )
  {
    case 2:
      MPCSpatialGestureRecognizerHandler::SetMode((__int64)this, *((_DWORD *)a2 + 201));
      v68 = &v176;
      v69 = 3LL;
      v70 = *((_OWORD *)a2 + 54);
      v167 = *((_OWORD *)a2 + 53);
      v71 = *((_OWORD *)a2 + 55);
      v168 = v70;
      v169 = v71;
      do
      {
        v72 = v2[1];
        *v68 = *v2;
        v73 = v2[2];
        v68[1] = v72;
        v74 = v2[3];
        v68[2] = v73;
        v75 = v2[4];
        v68[3] = v74;
        v76 = v2[5];
        v68[4] = v75;
        v77 = v2[6];
        v68[5] = v76;
        v78 = v2[7];
        v2 += 8;
        v68[6] = v77;
        v68 += 8;
        *(v68 - 1) = v78;
        --v69;
      }
      while ( v69 );
      v79 = (__int64 *)*((_QWORD *)this + 3);
      v80 = v2[1];
      *v68 = *v2;
      v81 = v2[2];
      v68[1] = v80;
      v82 = *(_OWORD *)((char *)a2 + 1336);
      v68[2] = v81;
      v83 = *(_OWORD *)((char *)a2 + 1320);
      v175 = *((_DWORD *)a2 + 348);
      v84 = *v79;
      v170 = v83;
      v85 = *(_OWORD *)((char *)a2 + 1352);
      v86 = *(__int64 (__fastcall **)(__int64 *, __int128 *, __int128 *, __int128 *))(v84 + 48);
      v171 = v82;
      v87 = *(_OWORD *)((char *)a2 + 1368);
      v172 = v85;
      v174 = *((_QWORD *)a2 + 173);
      v173 = v87;
      v88 = v86(v79, &v170, &v176, &v167);
      if ( v88 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0xC3,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
          (const char *)(unsigned int)v88);
        __debugbreak();
      }
      break;
    case 3:
      v47 = &v176;
      v48 = 3LL;
      v49 = *((_OWORD *)a2 + 54);
      v167 = *((_OWORD *)a2 + 53);
      v50 = *((_OWORD *)a2 + 55);
      v168 = v49;
      v169 = v50;
      do
      {
        v51 = v2[1];
        *v47 = *v2;
        v52 = v2[2];
        v47[1] = v51;
        v53 = v2[3];
        v47[2] = v52;
        v54 = v2[4];
        v47[3] = v53;
        v55 = v2[5];
        v47[4] = v54;
        v56 = v2[6];
        v47[5] = v55;
        v57 = v2[7];
        v2 += 8;
        v47[6] = v56;
        v47 += 8;
        *(v47 - 1) = v57;
        --v48;
      }
      while ( v48 );
      v58 = (__int64 *)*((_QWORD *)this + 3);
      v59 = v2[1];
      *v47 = *v2;
      v60 = v2[2];
      v47[1] = v59;
      v61 = *(_OWORD *)((char *)a2 + 1336);
      v47[2] = v60;
      v62 = *(_OWORD *)((char *)a2 + 1320);
      v175 = *((_DWORD *)a2 + 348);
      v63 = *v58;
      v170 = v62;
      v64 = *(_OWORD *)((char *)a2 + 1352);
      v65 = *(__int64 (__fastcall **)(__int64 *, __int128 *, __int128 *, __int128 *))(v63 + 64);
      v171 = v61;
      v66 = *(_OWORD *)((char *)a2 + 1368);
      v172 = v64;
      v174 = *((_QWORD *)a2 + 173);
      v173 = v66;
      v67 = v65(v58, &v170, &v176, &v167);
      if ( v67 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0xD5,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
          (const char *)(unsigned int)v67);
        __debugbreak();
      }
      break;
    case 4:
      v26 = &v176;
      v27 = 3LL;
      v28 = *((_OWORD *)a2 + 54);
      v167 = *((_OWORD *)a2 + 53);
      v29 = *((_OWORD *)a2 + 55);
      v168 = v28;
      v169 = v29;
      do
      {
        v30 = v2[1];
        *v26 = *v2;
        v31 = v2[2];
        v26[1] = v30;
        v32 = v2[3];
        v26[2] = v31;
        v33 = v2[4];
        v26[3] = v32;
        v34 = v2[5];
        v26[4] = v33;
        v35 = v2[6];
        v26[5] = v34;
        v36 = v2[7];
        v2 += 8;
        v26[6] = v35;
        v26 += 8;
        *(v26 - 1) = v36;
        --v27;
      }
      while ( v27 );
      v37 = (__int64 *)*((_QWORD *)this + 3);
      v38 = v2[1];
      *v26 = *v2;
      v39 = v2[2];
      v26[1] = v38;
      v40 = *(_OWORD *)((char *)a2 + 1336);
      v26[2] = v39;
      v41 = *(_OWORD *)((char *)a2 + 1320);
      v175 = *((_DWORD *)a2 + 348);
      v42 = *v37;
      v170 = v41;
      v43 = *(_OWORD *)((char *)a2 + 1352);
      v44 = *(__int64 (__fastcall **)(__int64 *, __int128 *, __int128 *, __int128 *))(v42 + 72);
      v171 = v40;
      v45 = *(_OWORD *)((char *)a2 + 1368);
      v172 = v43;
      v174 = *((_QWORD *)a2 + 173);
      v173 = v45;
      v46 = v44(v37, &v170, &v176, &v167);
      if ( v46 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0xDE,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
          (const char *)(unsigned int)v46);
        __debugbreak();
      }
      break;
    case 6:
      v5 = &v176;
      v6 = *((_OWORD *)a2 + 54);
      v7 = 3LL;
      v167 = *((_OWORD *)a2 + 53);
      v8 = *((_OWORD *)a2 + 55);
      v168 = v6;
      v169 = v8;
      do
      {
        v9 = v2[1];
        *v5 = *v2;
        v10 = v2[2];
        v5[1] = v9;
        v11 = v2[3];
        v5[2] = v10;
        v12 = v2[4];
        v5[3] = v11;
        v13 = v2[5];
        v5[4] = v12;
        v14 = v2[6];
        v5[5] = v13;
        v15 = v2[7];
        v2 += 8;
        v5[6] = v14;
        v5 += 8;
        *(v5 - 1) = v15;
        --v7;
      }
      while ( v7 );
      v16 = (__int64 *)*((_QWORD *)this + 3);
      v17 = v2[1];
      *v5 = *v2;
      v18 = v2[2];
      v5[1] = v17;
      v19 = *(_OWORD *)((char *)a2 + 1336);
      v5[2] = v18;
      v20 = *(_OWORD *)((char *)a2 + 1320);
      v175 = *((_DWORD *)a2 + 348);
      v21 = *v16;
      v170 = v20;
      v22 = *(_OWORD *)((char *)a2 + 1352);
      v23 = *(__int64 (__fastcall **)(__int64 *, __int128 *, __int128 *, __int128 *))(v21 + 56);
      v171 = v19;
      v24 = *(_OWORD *)((char *)a2 + 1368);
      v172 = v22;
      v174 = *((_QWORD *)a2 + 173);
      v173 = v24;
      v25 = v23(v16, &v170, &v176, &v167);
      if ( v25 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0xCC,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
          (const char *)(unsigned int)v25);
        __debugbreak();
      }
      break;
  }
  if ( *((_DWORD *)a2 + 175) == 2 )
  {
    if ( *(_DWORD *)a2 == 0x2000 )
      v147 = 0;
    else
      v147 = *((_DWORD *)a2 + 201);
    MPCSpatialGestureRecognizerHandler::SetMode((__int64)this, v147);
    v148 = *((_QWORD *)a2 + 2);
    v149 = *((_OWORD *)a2 + 54);
    v167 = *((_OWORD *)a2 + 53);
    v150 = *((_OWORD *)a2 + 55);
    v168 = v149;
    v151 = *(_OWORD *)((char *)a2 + 1336);
    v169 = v150;
    v176 = *(_OWORD *)((char *)a2 + 1320);
    v152 = *(_OWORD *)((char *)a2 + 1352);
    v177 = v151;
    v153 = *(_OWORD *)((char *)a2 + 1368);
    v178 = v152;
    v154 = *(_OWORD *)((char *)a2 + 1384);
    v179 = v153;
    v155 = *(_OWORD *)((char *)a2 + 1400);
    v180 = v154;
    v156 = *(_OWORD *)((char *)a2 + 1416);
    v181 = v155;
    v157 = *(_OWORD *)((char *)a2 + 1432);
    v182 = v156;
    v158 = *((_QWORD *)a2 + 193);
    v159 = *(_OWORD *)((char *)a2 + 1448);
    v183 = v157;
    v160 = *(_OWORD *)((char *)a2 + 1464);
    v184 = v159;
    v161 = *(_OWORD *)((char *)a2 + 1480);
    v185 = v160;
    v162 = *(_OWORD *)((char *)a2 + 1496);
    v186 = v161;
    v163 = *(_OWORD *)((char *)a2 + 1512);
    v187 = v162;
    v164 = *(_OWORD *)((char *)a2 + 1528);
    v188 = v163;
    v189 = v164;
    v190 = v158;
    v165 = *((_QWORD *)this + 3);
    v191 = *((_DWORD *)a2 + 388);
    v166 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, __int128 *))(*(_QWORD *)v165 + 80LL))(
             v165,
             &v176,
             v148,
             &v167);
    if ( v166 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0xF9,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
        (const char *)(unsigned int)v166);
      JUMPOUT(0x180064FF4LL);
    }
  }
  else
  {
    switch ( *((_DWORD *)a2 + 175) )
    {
      case 3:
LABEL_32:
        v128 = *((_QWORD *)a2 + 2);
        v129 = *((_OWORD *)a2 + 54);
        v167 = *((_OWORD *)a2 + 53);
        v130 = *((_OWORD *)a2 + 55);
        v168 = v129;
        v131 = *(_OWORD *)((char *)a2 + 1336);
        v169 = v130;
        v176 = *(_OWORD *)((char *)a2 + 1320);
        v132 = *(_OWORD *)((char *)a2 + 1352);
        v177 = v131;
        v133 = *(_OWORD *)((char *)a2 + 1368);
        v178 = v132;
        v134 = *(_OWORD *)((char *)a2 + 1384);
        v179 = v133;
        v135 = *(_OWORD *)((char *)a2 + 1400);
        v180 = v134;
        v136 = *(_OWORD *)((char *)a2 + 1416);
        v181 = v135;
        v137 = *(_OWORD *)((char *)a2 + 1432);
        v182 = v136;
        v138 = *((_QWORD *)a2 + 193);
        v139 = *(_OWORD *)((char *)a2 + 1448);
        v183 = v137;
        v140 = *(_OWORD *)((char *)a2 + 1464);
        v184 = v139;
        v141 = *(_OWORD *)((char *)a2 + 1480);
        v185 = v140;
        v142 = *(_OWORD *)((char *)a2 + 1496);
        v186 = v141;
        v143 = *(_OWORD *)((char *)a2 + 1512);
        v187 = v142;
        v144 = *(_OWORD *)((char *)a2 + 1528);
        v188 = v143;
        v189 = v144;
        v190 = v138;
        v145 = *((_QWORD *)this + 3);
        v191 = *((_DWORD *)a2 + 388);
        v146 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, __int128 *))(*(_QWORD *)v145 + 88LL))(
                 v145,
                 &v176,
                 v128,
                 &v167);
        if ( v146 < 0 )
        {
          wil::details::in1diag3::_FailFast_Hr(
            retaddr,
            (void *)0x103,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturereco"
                     "gnizerhandler.cpp",
            (const char *)(unsigned int)v146);
          __debugbreak();
        }
        goto LABEL_25;
      case 4:
        v90 = *((_QWORD *)a2 + 2);
        v91 = *((_OWORD *)a2 + 54);
        v167 = *((_OWORD *)a2 + 53);
        v92 = *((_OWORD *)a2 + 55);
        v168 = v91;
        v93 = *(_OWORD *)((char *)a2 + 1336);
        v169 = v92;
        v176 = *(_OWORD *)((char *)a2 + 1320);
        v94 = *(_OWORD *)((char *)a2 + 1352);
        v177 = v93;
        v95 = *(_OWORD *)((char *)a2 + 1368);
        v178 = v94;
        v96 = *(_OWORD *)((char *)a2 + 1384);
        v179 = v95;
        v97 = *(_OWORD *)((char *)a2 + 1400);
        v180 = v96;
        v98 = *(_OWORD *)((char *)a2 + 1416);
        v181 = v97;
        v99 = *(_OWORD *)((char *)a2 + 1432);
        v182 = v98;
        v100 = *((_QWORD *)a2 + 193);
        v101 = *(_OWORD *)((char *)a2 + 1448);
        v183 = v99;
        v102 = *(_OWORD *)((char *)a2 + 1464);
        v184 = v101;
        v103 = *(_OWORD *)((char *)a2 + 1480);
        v185 = v102;
        v104 = *(_OWORD *)((char *)a2 + 1496);
        v186 = v103;
        v105 = *(_OWORD *)((char *)a2 + 1512);
        v187 = v104;
        v106 = *(_OWORD *)((char *)a2 + 1528);
        v188 = v105;
        v189 = v106;
        v190 = v100;
        v107 = *((_QWORD *)this + 3);
        v191 = *((_DWORD *)a2 + 388);
        v108 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, __int128 *))(*(_QWORD *)v107 + 96LL))(
                 v107,
                 &v176,
                 v90,
                 &v167);
        if ( v108 < 0 )
        {
          wil::details::in1diag3::_FailFast_Hr(
            retaddr,
            (void *)0x10C,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturereco"
                     "gnizerhandler.cpp",
            (const char *)(unsigned int)v108);
          __debugbreak();
        }
        break;
      case 5:
        break;
      case 6:
        goto LABEL_32;
      default:
        goto LABEL_25;
    }
    v109 = *((_QWORD *)a2 + 2);
    v110 = *((_OWORD *)a2 + 54);
    v167 = *((_OWORD *)a2 + 53);
    v111 = *((_OWORD *)a2 + 55);
    v168 = v110;
    v112 = *(_OWORD *)((char *)a2 + 1336);
    v169 = v111;
    v176 = *(_OWORD *)((char *)a2 + 1320);
    v113 = *(_OWORD *)((char *)a2 + 1352);
    v177 = v112;
    v114 = *(_OWORD *)((char *)a2 + 1368);
    v178 = v113;
    v115 = *(_OWORD *)((char *)a2 + 1384);
    v179 = v114;
    v116 = *(_OWORD *)((char *)a2 + 1400);
    v180 = v115;
    v117 = *(_OWORD *)((char *)a2 + 1416);
    v181 = v116;
    v118 = *(_OWORD *)((char *)a2 + 1432);
    v182 = v117;
    v119 = *((_QWORD *)a2 + 193);
    v120 = *(_OWORD *)((char *)a2 + 1448);
    v183 = v118;
    v121 = *(_OWORD *)((char *)a2 + 1464);
    v184 = v120;
    v122 = *(_OWORD *)((char *)a2 + 1480);
    v185 = v121;
    v123 = *(_OWORD *)((char *)a2 + 1496);
    v186 = v122;
    v124 = *(_OWORD *)((char *)a2 + 1512);
    v187 = v123;
    v125 = *(_OWORD *)((char *)a2 + 1528);
    v188 = v124;
    v189 = v125;
    v190 = v119;
    v126 = *((_QWORD *)this + 3);
    v191 = *((_DWORD *)a2 + 388);
    v127 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, __int128 *))(*(_QWORD *)v126 + 104LL))(
             v126,
             &v176,
             v109,
             &v167);
    if ( v127 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x114,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
        (const char *)(unsigned int)v127);
      __debugbreak();
    }
  }
LABEL_25:
  if ( *((_BYTE *)this + 200) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 280LL))(*((_QWORD *)this + 2));
    *((_BYTE *)this + 200) = 0;
  }
  if ( *((_BYTE *)this + 172) )
    v89 = *((_DWORD *)this + 42);
  else
    v89 = 0;
  *((_DWORD *)a2 + 309) = v89;
  *((_DWORD *)a2 + 310) = *((_DWORD *)this + 44);
  *((_DWORD *)a2 + 311) = *((_DWORD *)this + 45);
  *((_QWORD *)this + 13) = 0LL;
}
