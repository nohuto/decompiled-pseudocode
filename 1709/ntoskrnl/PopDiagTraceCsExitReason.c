/*
 * XREFs of PopDiagTraceCsExitReason @ 0x1407029B8
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140244A94 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     EtwWrite @ 0x140087CA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceCsExitReason(__int64 a1, char a2)
{
  __int64 v2; // rdx
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rsi
  int v6; // r11d
  REGHANDLE v7; // r14
  unsigned __int8 v8; // r10
  __int64 v9; // r15
  int v10; // r13d
  __int64 v11; // r12
  __int64 v12; // rdi
  int v13; // r8d
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // r8
  int v18; // eax
  int v19; // eax
  int v20; // ebx
  __int64 v21; // r8
  int v22; // eax
  BOOL v23; // r9d
  char v24; // r10
  int v25; // r11d
  char v27; // [rsp+38h] [rbp-D0h] BYREF
  char v28; // [rsp+39h] [rbp-CFh] BYREF
  char v29; // [rsp+3Ah] [rbp-CEh] BYREF
  int v30; // [rsp+3Ch] [rbp-CCh] BYREF
  BOOL v31; // [rsp+40h] [rbp-C8h] BYREF
  int v32; // [rsp+44h] [rbp-C4h] BYREF
  int v33; // [rsp+48h] [rbp-C0h] BYREF
  int v34; // [rsp+4Ch] [rbp-BCh] BYREF
  int v35; // [rsp+50h] [rbp-B8h] BYREF
  BOOL v36; // [rsp+54h] [rbp-B4h] BYREF
  int v37; // [rsp+58h] [rbp-B0h] BYREF
  BOOL v38; // [rsp+5Ch] [rbp-ACh] BYREF
  int v39; // [rsp+60h] [rbp-A8h] BYREF
  int v40; // [rsp+64h] [rbp-A4h] BYREF
  int v41; // [rsp+68h] [rbp-A0h] BYREF
  int v42; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v43; // [rsp+70h] [rbp-98h] BYREF
  BOOL v44; // [rsp+74h] [rbp-94h] BYREF
  int v45; // [rsp+78h] [rbp-90h] BYREF
  int v46; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v47; // [rsp+80h] [rbp-88h] BYREF
  __int64 v48; // [rsp+88h] [rbp-80h] BYREF
  __int64 v49; // [rsp+90h] [rbp-78h] BYREF
  __int64 v50; // [rsp+98h] [rbp-70h] BYREF
  __int64 v51; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v52; // [rsp+A8h] [rbp-60h] BYREF
  int v53; // [rsp+B0h] [rbp-58h] BYREF
  int v54; // [rsp+B4h] [rbp-54h] BYREF
  __int64 v55; // [rsp+B8h] [rbp-50h] BYREF
  REGHANDLE v56; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v57; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v58; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v59; // [rsp+D8h] [rbp-30h] BYREF
  int v60; // [rsp+E0h] [rbp-28h] BYREF
  REGHANDLE RegHandle; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v62; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v63; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v64; // [rsp+100h] [rbp-8h] BYREF
  __int64 v65; // [rsp+108h] [rbp+0h] BYREF
  __int64 v66; // [rsp+110h] [rbp+8h] BYREF
  __int64 v67; // [rsp+118h] [rbp+10h] BYREF
  __int64 v68; // [rsp+120h] [rbp+18h] BYREF
  __int64 v69; // [rsp+128h] [rbp+20h] BYREF
  __int64 v70; // [rsp+130h] [rbp+28h] BYREF
  __int64 v71; // [rsp+138h] [rbp+30h] BYREF
  __int64 v72; // [rsp+140h] [rbp+38h] BYREF
  __int64 v73; // [rsp+148h] [rbp+40h] BYREF
  __int64 v74; // [rsp+150h] [rbp+48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+158h] [rbp+50h] BYREF
  REGHANDLE *v76; // [rsp+168h] [rbp+60h]
  __int64 v77; // [rsp+170h] [rbp+68h]
  __int64 *v78; // [rsp+178h] [rbp+70h]
  __int64 v79; // [rsp+180h] [rbp+78h]
  __int64 *v80; // [rsp+188h] [rbp+80h]
  __int64 v81; // [rsp+190h] [rbp+88h]
  __int64 *v82; // [rsp+198h] [rbp+90h]
  __int64 v83; // [rsp+1A0h] [rbp+98h]
  __int64 *v84; // [rsp+1A8h] [rbp+A0h]
  __int64 v85; // [rsp+1B0h] [rbp+A8h]
  BOOL *v86; // [rsp+1B8h] [rbp+B0h]
  __int64 v87; // [rsp+1C0h] [rbp+B8h]
  char *v88; // [rsp+1C8h] [rbp+C0h]
  __int64 v89; // [rsp+1D0h] [rbp+C8h]
  BOOL *v90; // [rsp+1D8h] [rbp+D0h]
  __int64 v91; // [rsp+1E0h] [rbp+D8h]
  int *v92; // [rsp+1E8h] [rbp+E0h]
  __int64 v93; // [rsp+1F0h] [rbp+E8h]
  __int64 *v94; // [rsp+1F8h] [rbp+F0h]
  __int64 v95; // [rsp+200h] [rbp+F8h]
  __int64 *v96; // [rsp+208h] [rbp+100h]
  __int64 v97; // [rsp+210h] [rbp+108h]
  int *v98; // [rsp+218h] [rbp+110h]
  __int64 v99; // [rsp+220h] [rbp+118h]
  __int64 *v100; // [rsp+228h] [rbp+120h]
  __int64 v101; // [rsp+230h] [rbp+128h]
  __int64 *v102; // [rsp+238h] [rbp+130h]
  __int64 v103; // [rsp+240h] [rbp+138h]
  int *v104; // [rsp+248h] [rbp+140h]
  __int64 v105; // [rsp+250h] [rbp+148h]
  int *v106; // [rsp+258h] [rbp+150h]
  __int64 v107; // [rsp+260h] [rbp+158h]
  __int64 *v108; // [rsp+268h] [rbp+160h]
  __int64 v109; // [rsp+270h] [rbp+168h]
  int *v110; // [rsp+278h] [rbp+170h]
  __int64 v111; // [rsp+280h] [rbp+178h]
  int *v112; // [rsp+288h] [rbp+180h]
  __int64 v113; // [rsp+290h] [rbp+188h]
  int *v114; // [rsp+298h] [rbp+190h]
  __int64 v115; // [rsp+2A0h] [rbp+198h]
  int *v116; // [rsp+2A8h] [rbp+1A0h]
  __int64 v117; // [rsp+2B0h] [rbp+1A8h]
  char *v118; // [rsp+2B8h] [rbp+1B0h]
  __int64 v119; // [rsp+2C0h] [rbp+1B8h]
  int *v120; // [rsp+2C8h] [rbp+1C0h]
  __int64 v121; // [rsp+2D0h] [rbp+1C8h]
  int *v122; // [rsp+2D8h] [rbp+1D0h]
  __int64 v123; // [rsp+2E0h] [rbp+1D8h]
  int *v124; // [rsp+2E8h] [rbp+1E0h]
  __int64 v125; // [rsp+2F0h] [rbp+1E8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2F8h] [rbp+1F0h] BYREF
  char *v127; // [rsp+318h] [rbp+210h]
  __int64 v128; // [rsp+320h] [rbp+218h]
  int *v129; // [rsp+328h] [rbp+220h]
  __int64 v130; // [rsp+330h] [rbp+228h]
  REGHANDLE *p_RegHandle; // [rsp+338h] [rbp+230h]
  __int64 v132; // [rsp+340h] [rbp+238h]
  __int64 *v133; // [rsp+348h] [rbp+240h]
  __int64 v134; // [rsp+350h] [rbp+248h]
  __int64 *v135; // [rsp+358h] [rbp+250h]
  __int64 v136; // [rsp+360h] [rbp+258h]
  __int64 *v137; // [rsp+368h] [rbp+260h]
  __int64 v138; // [rsp+370h] [rbp+268h]
  __int64 *v139; // [rsp+378h] [rbp+270h]
  __int64 v140; // [rsp+380h] [rbp+278h]
  BOOL *v141; // [rsp+388h] [rbp+280h]
  __int64 v142; // [rsp+390h] [rbp+288h]
  char *v143; // [rsp+398h] [rbp+290h]
  __int64 v144; // [rsp+3A0h] [rbp+298h]
  BOOL *v145; // [rsp+3A8h] [rbp+2A0h]
  __int64 v146; // [rsp+3B0h] [rbp+2A8h]
  int *v147; // [rsp+3B8h] [rbp+2B0h]
  __int64 v148; // [rsp+3C0h] [rbp+2B8h]
  __int64 *v149; // [rsp+3C8h] [rbp+2C0h]
  __int64 v150; // [rsp+3D0h] [rbp+2C8h]
  __int64 *v151; // [rsp+3D8h] [rbp+2D0h]
  __int64 v152; // [rsp+3E0h] [rbp+2D8h]
  int *v153; // [rsp+3E8h] [rbp+2E0h]
  __int64 v154; // [rsp+3F0h] [rbp+2E8h]
  __int64 *v155; // [rsp+3F8h] [rbp+2F0h]
  __int64 v156; // [rsp+400h] [rbp+2F8h]
  __int64 *v157; // [rsp+408h] [rbp+300h]
  __int64 v158; // [rsp+410h] [rbp+308h]
  __int64 *v159; // [rsp+418h] [rbp+310h]
  __int64 v160; // [rsp+420h] [rbp+318h]
  __int64 *v161; // [rsp+428h] [rbp+320h]
  __int64 v162; // [rsp+430h] [rbp+328h]
  __int64 *v163; // [rsp+438h] [rbp+330h]
  __int64 v164; // [rsp+440h] [rbp+338h]
  __int64 *v165; // [rsp+448h] [rbp+340h]
  __int64 v166; // [rsp+450h] [rbp+348h]
  __int64 *v167; // [rsp+458h] [rbp+350h]
  __int64 v168; // [rsp+460h] [rbp+358h]
  int *v169; // [rsp+468h] [rbp+360h]
  __int64 v170; // [rsp+470h] [rbp+368h]
  int *v171; // [rsp+478h] [rbp+370h]
  __int64 v172; // [rsp+480h] [rbp+378h]
  char v173; // [rsp+4D0h] [rbp+3C8h] BYREF

  v173 = a2;
  v2 = *(_QWORD *)(a1 + 32);
  v3 = *(_DWORD *)(a1 + 168);
  v4 = *(unsigned __int8 *)(a1 + 117);
  v5 = *(_QWORD *)(a1 + 40);
  v6 = *(_BYTE *)(a1 + 117) & 1;
  v7 = *(_QWORD *)(a1 + 48);
  v8 = *(_BYTE *)(a1 + 116);
  v9 = *(_QWORD *)(a1 + 64);
  v10 = v8 & 1;
  v11 = *(_QWORD *)(a1 + 72);
  v12 = *(_QWORD *)(a1 + 80);
  v30 = *(_DWORD *)a1;
  v37 = v30;
  v13 = *(_DWORD *)(a1 + 56);
  v60 = v3;
  v14 = *(_DWORD *)(a1 + 172);
  v31 = v13;
  v38 = v13;
  v15 = *(_QWORD *)(a1 + 88);
  v53 = v14;
  v50 = v15;
  v66 = v15;
  v16 = *(_QWORD *)(a1 + 96);
  v47 = (unsigned __int8)PopConsoleExternalDisplayConnected;
  v52 = v16;
  v62 = v16;
  v17 = *(_QWORD *)(a1 + 120);
  v46 = (unsigned __int8)PopLidOpened;
  v18 = *(unsigned __int8 *)(a1 + 176);
  v48 = v17;
  v63 = v17;
  LODWORD(v17) = *(_DWORD *)(a1 + 108);
  v54 = v18;
  v19 = *(_DWORD *)(a1 + 180);
  v20 = (v4 >> 1) & 1;
  v32 = v17;
  v39 = v17;
  v21 = *(_QWORD *)(a1 + 144);
  v33 = v19;
  v42 = v19;
  v22 = *(_DWORD *)(a1 + 184);
  v51 = v2;
  v65 = v2;
  v55 = v5;
  v56 = v7;
  v57 = v9;
  v58 = v11;
  v59 = v12;
  v27 = v8 >> 1;
  v28 = v8 >> 1;
  v45 = v10;
  v49 = v21;
  v64 = v21;
  v35 = v6;
  v40 = v6;
  v41 = v20;
  v34 = v22;
  v43 = v22;
  if ( !v2 )
  {
    v7 = 0LL;
    v56 = 0LL;
    v5 = 0LL;
    v55 = 0LL;
    v9 = 0LL;
    v57 = 0LL;
    v11 = 0LL;
    v58 = 0LL;
    v12 = 0LL;
    v59 = 0LL;
  }
  v36 = v12 != 0;
  v44 = v36;
  if ( PopDiagHandleRegistered )
  {
    RegHandle = PopDiagHandle;
    LOBYTE(v22) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CS_EXIT_REASON);
    if ( (_BYTE)v22 )
    {
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)&v37;
      v77 = 8LL;
      v76 = &v56;
      v78 = &v58;
      v80 = &v57;
      v82 = &v55;
      v84 = &v65;
      v86 = &v38;
      v88 = &v28;
      v90 = &v44;
      v92 = &v39;
      v94 = &v59;
      v96 = &v66;
      v98 = &v45;
      v100 = &v63;
      v102 = &v64;
      v104 = &v41;
      v106 = &v40;
      v108 = &v62;
      v110 = &v60;
      v112 = &v53;
      v114 = &v46;
      v116 = &v47;
      v118 = &v173;
      v120 = &v54;
      v122 = &v42;
      v124 = &v43;
      v79 = 8LL;
      v81 = 8LL;
      v83 = 8LL;
      v85 = 8LL;
      v87 = 4LL;
      v89 = 1LL;
      v91 = 4LL;
      v93 = 4LL;
      v95 = 8LL;
      v97 = 8LL;
      v99 = 4LL;
      v101 = 8LL;
      v103 = 8LL;
      v105 = 4LL;
      v107 = 4LL;
      v109 = 8LL;
      v111 = 4LL;
      v113 = 4LL;
      v115 = 4LL;
      v117 = 4LL;
      v119 = 1LL;
      v121 = 4LL;
      v123 = 4LL;
      v125 = 4LL;
      EtwWrite(RegHandle, &POP_ETW_EVENT_CS_EXIT_REASON, 0LL, 0x1Au, &UserData);
      v5 = v55;
      v7 = v56;
      v9 = v57;
      v11 = v58;
      v12 = v59;
      v10 = v45;
      v20 = v41;
      v30 = v37;
      v51 = v65;
      v31 = v38;
      v50 = v66;
      v52 = v62;
      v48 = v63;
      v32 = v39;
      v49 = v64;
      v33 = v42;
      LOBYTE(v22) = v43;
      v34 = v43;
    }
  }
  if ( pCallbackContext.LevelPlus1 > 5 )
  {
    LOBYTE(v22) = TlgKeywordOn(&pCallbackContext, 0x400000000000uLL);
    if ( (_BYTE)v22 )
    {
      v27 = PopWnfCsEnterScenarioId;
      v35 = v30;
      v70 = v51;
      v36 = v31;
      v72 = v50;
      v73 = v48;
      v74 = v49;
      LODWORD(v50) = v46;
      LODWORD(v51) = v47;
      v127 = &v27;
      v129 = &v35;
      p_RegHandle = &RegHandle;
      v133 = &v67;
      v135 = &v68;
      v137 = &v69;
      v139 = &v70;
      v141 = &v36;
      v143 = &v29;
      v145 = &v31;
      v147 = &v32;
      v149 = &v71;
      v151 = &v72;
      v153 = &v30;
      v155 = &v73;
      RegHandle = v7;
      v67 = v11;
      v68 = v9;
      v69 = v5;
      v29 = v24;
      v31 = v23;
      v71 = v12;
      v30 = v10;
      LODWORD(v49) = v20;
      LODWORD(v48) = v25;
      v128 = 1LL;
      v130 = 4LL;
      v132 = 8LL;
      v134 = 8LL;
      v136 = 8LL;
      v138 = 8LL;
      v140 = 8LL;
      v142 = 4LL;
      v144 = 1LL;
      v146 = 4LL;
      v148 = 4LL;
      v150 = 8LL;
      v152 = 8LL;
      v154 = 4LL;
      v156 = 8LL;
      v158 = 8LL;
      v157 = &v74;
      v159 = &v49;
      v161 = &v48;
      v163 = &v52;
      v165 = &v50;
      v167 = &v51;
      v169 = &v33;
      v171 = &v34;
      v160 = 4LL;
      v162 = 4LL;
      v164 = 8LL;
      v166 = 4LL;
      v168 = 4LL;
      v170 = 4LL;
      v172 = 4LL;
      LOBYTE(v22) = TlgWrite(&pCallbackContext, &unk_1402D2710, 0LL, 0LL, 0x19u, &pData);
    }
  }
  return v22;
}
