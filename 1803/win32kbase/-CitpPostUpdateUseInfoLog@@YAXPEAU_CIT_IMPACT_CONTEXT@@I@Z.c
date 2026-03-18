/*
 * XREFs of ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0162E30
 * Callers:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C003FDE0 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C0160038 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C01620C8 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 * Callees:
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C003BDB8 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     _TlgKeywordOn @ 0x1C0040798 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     ?CitUpdateInputTypeCoverage@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C01601C0 (-CitUpdateInputTypeCoverage@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpPostUpdateUseInfoCalculate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C01624B4 (-CitpPostUpdateUseInfoCalculate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_POST_UPDATE_USE_INFO@@@Z.c)
 *     ?CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C0163794 (-CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z.c)
 */

void __fastcall CitpPostUpdateUseInfoLog(struct _CIT_IMPACT_CONTEXT *a1, int a2)
{
  const GUID *v3; // r9
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // kr00_8
  unsigned __int16 v7; // cx
  int v8; // eax
  __int16 v9; // ax
  unsigned __int16 v10; // cx
  __int16 v11; // ax
  unsigned __int16 v12; // cx
  __int16 v13; // ax
  unsigned int v14; // ecx
  unsigned int v15; // eax
  unsigned int v16; // ecx
  int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // eax
  unsigned int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // ecx
  unsigned int v25; // eax
  unsigned int v26; // ecx
  int v27; // eax
  unsigned int v28; // ecx
  unsigned int v29; // eax
  unsigned int v30; // ecx
  unsigned int v31; // eax
  unsigned int v32; // ecx
  unsigned int v33; // eax
  unsigned int v34; // ecx
  int v35; // eax
  unsigned int v36; // ecx
  unsigned int v37; // eax
  unsigned int v38; // eax
  unsigned __int64 v39; // rdi
  unsigned int v40; // edx
  int v41; // ecx
  unsigned int v42; // r8d
  const GUID *v43; // r9
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int16 v50; // [rsp+38h] [rbp-D0h] BYREF
  char v51; // [rsp+3Ah] [rbp-CEh] BYREF
  __int16 v52; // [rsp+3Ch] [rbp-CCh] BYREF
  __int16 v53; // [rsp+3Eh] [rbp-CAh] BYREF
  int v54; // [rsp+40h] [rbp-C8h] BYREF
  int v55; // [rsp+44h] [rbp-C4h] BYREF
  unsigned int v56; // [rsp+48h] [rbp-C0h] BYREF
  int v57; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v58; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v59; // [rsp+54h] [rbp-B4h] BYREF
  unsigned int v60; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v61; // [rsp+5Ch] [rbp-ACh] BYREF
  int v62; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v63; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v64; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v65; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v66; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v67; // [rsp+74h] [rbp-94h] BYREF
  int v68; // [rsp+78h] [rbp-90h] BYREF
  int v69; // [rsp+7Ch] [rbp-8Ch] BYREF
  unsigned int v70; // [rsp+80h] [rbp-88h] BYREF
  double v71; // [rsp+88h] [rbp-80h] BYREF
  double v72; // [rsp+90h] [rbp-78h] BYREF
  __int128 Data; // [rsp+98h] [rbp-70h] BYREF
  __int128 v74; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v75; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v76; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v77; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v78; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v79; // [rsp+F8h] [rbp-10h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+108h] [rbp+0h] BYREF
  __int128 *p_Data; // [rsp+128h] [rbp+20h]
  __int64 v82; // [rsp+130h] [rbp+28h]
  char *v83; // [rsp+138h] [rbp+30h]
  __int64 v84; // [rsp+140h] [rbp+38h]
  char *v85; // [rsp+148h] [rbp+40h]
  __int64 v86; // [rsp+150h] [rbp+48h]
  char *v87; // [rsp+158h] [rbp+50h]
  __int64 v88; // [rsp+160h] [rbp+58h]
  char *v89; // [rsp+168h] [rbp+60h]
  __int64 v90; // [rsp+170h] [rbp+68h]
  char *v91; // [rsp+178h] [rbp+70h]
  __int64 v92; // [rsp+180h] [rbp+78h]
  __int128 *v93; // [rsp+188h] [rbp+80h]
  __int64 v94; // [rsp+190h] [rbp+88h]
  char *v95; // [rsp+198h] [rbp+90h]
  __int64 v96; // [rsp+1A0h] [rbp+98h]
  char *v97; // [rsp+1A8h] [rbp+A0h]
  __int64 v98; // [rsp+1B0h] [rbp+A8h]
  char *v99; // [rsp+1B8h] [rbp+B0h]
  __int64 v100; // [rsp+1C0h] [rbp+B8h]
  char *v101; // [rsp+1C8h] [rbp+C0h]
  __int64 v102; // [rsp+1D0h] [rbp+C8h]
  __int128 *v103; // [rsp+1D8h] [rbp+D0h]
  __int64 v104; // [rsp+1E0h] [rbp+D8h]
  char *v105; // [rsp+1E8h] [rbp+E0h]
  __int64 v106; // [rsp+1F0h] [rbp+E8h]
  char *v107; // [rsp+1F8h] [rbp+F0h]
  __int64 v108; // [rsp+200h] [rbp+F8h]
  char *v109; // [rsp+208h] [rbp+100h]
  __int64 v110; // [rsp+210h] [rbp+108h]
  __int128 *v111; // [rsp+218h] [rbp+110h]
  __int64 v112; // [rsp+220h] [rbp+118h]
  char *v113; // [rsp+228h] [rbp+120h]
  __int64 v114; // [rsp+230h] [rbp+128h]
  char *v115; // [rsp+238h] [rbp+130h]
  __int64 v116; // [rsp+240h] [rbp+138h]
  char *v117; // [rsp+248h] [rbp+140h]
  __int64 v118; // [rsp+250h] [rbp+148h]
  __int128 *v119; // [rsp+258h] [rbp+150h]
  __int64 v120; // [rsp+260h] [rbp+158h]
  char *v121; // [rsp+268h] [rbp+160h]
  __int64 v122; // [rsp+270h] [rbp+168h]
  int *v123; // [rsp+278h] [rbp+170h]
  __int64 v124; // [rsp+280h] [rbp+178h]
  __int16 *v125; // [rsp+288h] [rbp+180h]
  __int64 v126; // [rsp+290h] [rbp+188h]
  __int16 *v127; // [rsp+298h] [rbp+190h]
  __int64 v128; // [rsp+2A0h] [rbp+198h]
  int *v129; // [rsp+2A8h] [rbp+1A0h]
  __int64 v130; // [rsp+2B0h] [rbp+1A8h]
  int *v131; // [rsp+2B8h] [rbp+1B0h]
  __int64 v132; // [rsp+2C0h] [rbp+1B8h]
  int *v133; // [rsp+2C8h] [rbp+1C0h]
  __int64 v134; // [rsp+2D0h] [rbp+1C8h]
  int *v135; // [rsp+2D8h] [rbp+1D0h]
  __int64 v136; // [rsp+2E0h] [rbp+1D8h]
  int *v137; // [rsp+2E8h] [rbp+1E0h]
  __int64 v138; // [rsp+2F0h] [rbp+1E8h]
  int *v139; // [rsp+2F8h] [rbp+1F0h]
  __int64 v140; // [rsp+300h] [rbp+1F8h]
  int *v141; // [rsp+308h] [rbp+200h]
  __int64 v142; // [rsp+310h] [rbp+208h]
  int *v143; // [rsp+318h] [rbp+210h]
  __int64 v144; // [rsp+320h] [rbp+218h]
  int *v145; // [rsp+328h] [rbp+220h]
  __int64 v146; // [rsp+330h] [rbp+228h]
  int *v147; // [rsp+338h] [rbp+230h]
  __int64 v148; // [rsp+340h] [rbp+238h]
  int *v149; // [rsp+348h] [rbp+240h]
  __int64 v150; // [rsp+350h] [rbp+248h]
  int *v151; // [rsp+358h] [rbp+250h]
  __int64 v152; // [rsp+360h] [rbp+258h]
  int *v153; // [rsp+368h] [rbp+260h]
  __int64 v154; // [rsp+370h] [rbp+268h]
  char *v155; // [rsp+378h] [rbp+270h]
  __int64 v156; // [rsp+380h] [rbp+278h]
  int *v157; // [rsp+388h] [rbp+280h]
  __int64 v158; // [rsp+390h] [rbp+288h]
  __int128 *v159; // [rsp+398h] [rbp+290h]
  __int64 v160; // [rsp+3A0h] [rbp+298h]
  char *v161; // [rsp+3A8h] [rbp+2A0h]
  __int64 v162; // [rsp+3B0h] [rbp+2A8h]
  char *v163; // [rsp+3B8h] [rbp+2B0h]
  __int64 v164; // [rsp+3C0h] [rbp+2B8h]
  __int128 *v165; // [rsp+3C8h] [rbp+2C0h]
  __int64 v166; // [rsp+3D0h] [rbp+2C8h]
  EVENT_DATA_DESCRIPTOR v167; // [rsp+3D8h] [rbp+2D0h] BYREF
  int *v168; // [rsp+3F8h] [rbp+2F0h]
  __int64 v169; // [rsp+400h] [rbp+2F8h]
  int *v170; // [rsp+408h] [rbp+300h]
  __int64 v171; // [rsp+410h] [rbp+308h]
  __int16 *v172; // [rsp+418h] [rbp+310h]
  __int64 v173; // [rsp+420h] [rbp+318h]
  _QWORD *v174; // [rsp+428h] [rbp+320h]
  __int64 v175; // [rsp+430h] [rbp+328h]
  const wchar_t *v176; // [rsp+438h] [rbp+330h]
  _QWORD v177[13]; // [rsp+440h] [rbp+338h] BYREF
  int v178; // [rsp+4F0h] [rbp+3E8h] BYREF

  v178 = a2;
  CitUpdateInputTypeCoverage(a1);
  if ( *((_WORD *)a1 + 148) )
  {
    CitpStatIncrement((unsigned __int16 *)a1 + 149, 1);
    CitpPostUpdateUseInfoCalculate(a1, (struct _CIT_POST_UPDATE_USE_INFO *)&Data);
    if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x800000000800uLL) )
    {
      p_Data = &Data;
      v83 = (char *)&Data + 4;
      v85 = (char *)&Data + 6;
      v87 = (char *)&Data + 8;
      v89 = (char *)&Data + 10;
      v91 = (char *)&Data + 12;
      v93 = &v74;
      v95 = (char *)&v74 + 4;
      v97 = (char *)&v74 + 8;
      v99 = (char *)&v74 + 12;
      v101 = (char *)&v74 + 14;
      v103 = &v75;
      v105 = (char *)&v75 + 4;
      v107 = (char *)&v75 + 8;
      v109 = (char *)&v75 + 12;
      v111 = &v76;
      v113 = (char *)&v76 + 4;
      v115 = (char *)&v76 + 8;
      v117 = (char *)&v76 + 12;
      v119 = &v77;
      v121 = (char *)&v77 + 4;
      v4 = *((_QWORD *)a1 + 59);
      v82 = 4LL;
      v84 = 2LL;
      v86 = 2LL;
      v88 = 2LL;
      v90 = 2LL;
      v92 = 4LL;
      v94 = 4LL;
      v96 = 4LL;
      v98 = 2LL;
      v100 = 2LL;
      v102 = 2LL;
      v104 = 4LL;
      v106 = 4LL;
      v108 = 4LL;
      v110 = 4LL;
      v112 = 4LL;
      v114 = 4LL;
      v116 = 4LL;
      v118 = 4LL;
      v120 = 4LL;
      v122 = 4LL;
      if ( *((_QWORD *)&v77 + 1) > v4 )
        v5 = *((_QWORD *)&v77 + 1) - v4;
      else
        v5 = 0LL;
      v124 = 4LL;
      v6 = v5;
      v7 = *((_WORD *)a1 + 202);
      v8 = -1;
      if ( v6 / 0x989680 <= 0xFFFFFFFF )
        v8 = v6 / 0x989680;
      v55 = v8;
      v123 = &v55;
      if ( WORD2(Data) > v7 )
        v9 = WORD2(Data) - v7;
      else
        v9 = 0;
      v10 = *((_WORD *)a1 + 203);
      v52 = v9;
      v125 = &v52;
      v126 = 2LL;
      if ( WORD3(Data) > v10 )
        v11 = WORD3(Data) - v10;
      else
        v11 = 0;
      v12 = *((_WORD *)a1 + 204);
      v53 = v11;
      v127 = &v53;
      v128 = 2LL;
      if ( WORD4(Data) > v12 )
        v13 = WORD4(Data) - v12;
      else
        v13 = 0;
      v14 = *((_DWORD *)a1 + 103);
      LOWORD(v54) = v13;
      v129 = &v54;
      v130 = 2LL;
      if ( HIDWORD(Data) > v14 )
        v15 = HIDWORD(Data) - v14;
      else
        v15 = 0;
      v16 = *((_DWORD *)a1 + 104);
      v56 = v15;
      v131 = (int *)&v56;
      v132 = 4LL;
      if ( (unsigned int)v74 > v16 )
        v17 = v74 - v16;
      else
        v17 = 0;
      v18 = *((_DWORD *)a1 + 105);
      v57 = v17;
      v133 = &v57;
      v134 = 4LL;
      if ( DWORD1(v74) > v18 )
        v19 = DWORD1(v74) - v18;
      else
        v19 = 0;
      v20 = *((_DWORD *)a1 + 109);
      v58 = v19;
      v135 = (int *)&v58;
      v136 = 4LL;
      if ( DWORD1(v75) > v20 )
        v21 = DWORD1(v75) - v20;
      else
        v21 = 0;
      v22 = *((_DWORD *)a1 + 110);
      v59 = v21;
      v137 = (int *)&v59;
      v138 = 4LL;
      if ( DWORD2(v75) > v22 )
        v23 = DWORD2(v75) - v22;
      else
        v23 = 0;
      v24 = *((_DWORD *)a1 + 111);
      v60 = v23;
      v139 = (int *)&v60;
      v140 = 4LL;
      if ( HIDWORD(v75) > v24 )
        v25 = HIDWORD(v75) - v24;
      else
        v25 = 0;
      v26 = *((_DWORD *)a1 + 112);
      v61 = v25;
      v141 = (int *)&v61;
      v142 = 4LL;
      if ( (unsigned int)v76 > v26 )
        v27 = v76 - v26;
      else
        v27 = 0;
      v28 = *((_DWORD *)a1 + 113);
      v62 = v27;
      v143 = &v62;
      v144 = 4LL;
      if ( DWORD1(v76) > v28 )
        v29 = DWORD1(v76) - v28;
      else
        v29 = 0;
      v30 = *((_DWORD *)a1 + 114);
      v63 = v29;
      v145 = (int *)&v63;
      v146 = 4LL;
      if ( DWORD2(v76) > v30 )
        v31 = DWORD2(v76) - v30;
      else
        v31 = 0;
      v32 = *((_DWORD *)a1 + 115);
      v64 = v31;
      v147 = (int *)&v64;
      v148 = 4LL;
      if ( HIDWORD(v76) > v32 )
        v33 = HIDWORD(v76) - v32;
      else
        v33 = 0;
      v34 = *((_DWORD *)a1 + 116);
      v65 = v33;
      v149 = (int *)&v65;
      v150 = 4LL;
      if ( (unsigned int)v77 > v34 )
        v35 = v77 - v34;
      else
        v35 = 0;
      v36 = *((_DWORD *)a1 + 117);
      v66 = v35;
      v151 = &v66;
      v152 = 4LL;
      if ( DWORD1(v77) > v36 )
        v37 = DWORD1(v77) - v36;
      else
        v37 = 0;
      v67 = v37;
      v153 = (int *)&v67;
      v155 = (char *)a1 + 200;
      v157 = &v178;
      v159 = &v78;
      v161 = (char *)&v78 + 8;
      v163 = (char *)&v78 + 12;
      v165 = &v79;
      v154 = 4LL;
      v156 = 4LL;
      v158 = 4LL;
      v160 = 8LL;
      v162 = 2LL;
      v164 = 4LL;
      v166 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C01791FF, 0LL, v3, 0x2Du, &pData);
    }
    v38 = *((_DWORD *)a1 + 104);
    v39 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v40 = v39 - *((_DWORD *)a1 + 191);
    DWORD2(v79) = v40;
    if ( (unsigned int)v74 > v38 )
      v41 = v74 - v38;
    else
      v41 = 0;
    v42 = v41 + DWORD1(v79);
    DWORD1(v79) += v41;
    if ( v178 == 2 || v40 >= dword_1C01A1690 )
    {
      v70 = dword_1C01A1690 / 0x3E8u;
      if ( v42 >= dword_1C01A1690 / 0x3E8u )
        DWORD1(v79) = dword_1C01A1690 / 0x3E8u - 1;
      if ( dword_1C019A310 > 5u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C019A310, 0x800000000000uLL) )
        {
          v168 = &v68;
          v170 = &v69;
          v172 = &v50;
          v174 = v177;
          v176 = L"Value";
          v177[1] = (char *)&v79 + 4;
          v177[3] = &v70;
          v177[5] = (char *)&v50 + 1;
          v177[7] = &v51;
          v177[9] = &v71;
          v177[11] = &v72;
          v71 = DOUBLE_N1_0;
          v72 = DOUBLE_N1_0;
          v68 = 1;
          v169 = 4LL;
          v69 = 1;
          v171 = 4LL;
          v50 = 0;
          v173 = 1LL;
          v175 = 2LL;
          v177[0] = 10LL;
          v177[2] = 4LL;
          v177[4] = 4LL;
          v177[6] = 1LL;
          v51 = 4;
          v177[8] = 1LL;
          v177[10] = 8LL;
          v177[12] = 8LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C019A310, &unk_1C017916F, 0LL, v43, 0xDu, &v167);
        }
      }
      *(_QWORD *)((char *)&v79 + 4) = 0LL;
      *((_DWORD *)a1 + 191) = v39;
    }
    CitpPostUpdateUseInfoSave(a1, &Data);
    v44 = v74;
    *((_OWORD *)a1 + 25) = Data;
    v45 = v75;
    *((_OWORD *)a1 + 26) = v44;
    v46 = v76;
    *((_OWORD *)a1 + 27) = v45;
    v47 = v77;
    *((_OWORD *)a1 + 28) = v46;
    v48 = v78;
    *((_OWORD *)a1 + 29) = v47;
    v49 = v79;
    *((_OWORD *)a1 + 30) = v48;
    *((_OWORD *)a1 + 31) = v49;
  }
}
