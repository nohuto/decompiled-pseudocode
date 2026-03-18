/*
 * XREFs of PopDiagTraceCsExitReason @ 0x140766934
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14027B24C (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     EtwWrite @ 0x1400EF820 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceCsExitReason(__int64 a1, char a2)
{
  int v2; // eax
  __int64 v3; // rdx
  unsigned int v4; // ebx
  __int64 v5; // rdi
  int v6; // r11d
  __int64 v7; // rsi
  unsigned __int8 v8; // r10
  REGHANDLE v9; // r14
  int v10; // r13d
  __int64 v11; // r15
  __int64 v12; // r12
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // r8
  int v17; // eax
  int v18; // ebx
  __int64 v19; // rax
  int v20; // r9d
  char v21; // r10
  int v22; // r11d
  char v24; // [rsp+38h] [rbp-D0h] BYREF
  char v25; // [rsp+39h] [rbp-CFh] BYREF
  char v26; // [rsp+3Ah] [rbp-CEh] BYREF
  int v27; // [rsp+3Ch] [rbp-CCh] BYREF
  int v28; // [rsp+40h] [rbp-C8h] BYREF
  int v29; // [rsp+44h] [rbp-C4h] BYREF
  int v30; // [rsp+48h] [rbp-C0h] BYREF
  int v31; // [rsp+4Ch] [rbp-BCh] BYREF
  int v32; // [rsp+50h] [rbp-B8h] BYREF
  BOOL v33; // [rsp+54h] [rbp-B4h] BYREF
  int v34; // [rsp+58h] [rbp-B0h] BYREF
  int v35; // [rsp+5Ch] [rbp-ACh] BYREF
  int v36; // [rsp+60h] [rbp-A8h] BYREF
  int v37; // [rsp+64h] [rbp-A4h] BYREF
  int v38; // [rsp+68h] [rbp-A0h] BYREF
  int v39; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v40; // [rsp+70h] [rbp-98h] BYREF
  BOOL v41; // [rsp+74h] [rbp-94h] BYREF
  int v42; // [rsp+78h] [rbp-90h] BYREF
  int v43; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v44; // [rsp+80h] [rbp-88h] BYREF
  __int64 v45; // [rsp+88h] [rbp-80h] BYREF
  __int64 v46; // [rsp+90h] [rbp-78h] BYREF
  __int64 v47; // [rsp+98h] [rbp-70h] BYREF
  __int64 v48; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v49; // [rsp+A8h] [rbp-60h] BYREF
  int v50; // [rsp+B0h] [rbp-58h] BYREF
  int v51; // [rsp+B4h] [rbp-54h] BYREF
  __int64 v52; // [rsp+B8h] [rbp-50h] BYREF
  REGHANDLE v53; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v54; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v55; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v56; // [rsp+D8h] [rbp-30h] BYREF
  int v57; // [rsp+E0h] [rbp-28h] BYREF
  REGHANDLE RegHandle; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v59; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v60; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v61; // [rsp+100h] [rbp-8h] BYREF
  __int64 v62; // [rsp+108h] [rbp+0h] BYREF
  __int64 v63; // [rsp+110h] [rbp+8h] BYREF
  __int64 v64; // [rsp+118h] [rbp+10h] BYREF
  __int64 v65; // [rsp+120h] [rbp+18h] BYREF
  __int64 v66; // [rsp+128h] [rbp+20h] BYREF
  __int64 v67; // [rsp+130h] [rbp+28h] BYREF
  __int64 v68; // [rsp+138h] [rbp+30h] BYREF
  __int64 v69; // [rsp+140h] [rbp+38h] BYREF
  __int64 v70; // [rsp+148h] [rbp+40h] BYREF
  __int64 v71; // [rsp+150h] [rbp+48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+158h] [rbp+50h] BYREF
  REGHANDLE *v73; // [rsp+168h] [rbp+60h]
  __int64 v74; // [rsp+170h] [rbp+68h]
  __int64 *v75; // [rsp+178h] [rbp+70h]
  __int64 v76; // [rsp+180h] [rbp+78h]
  __int64 *v77; // [rsp+188h] [rbp+80h]
  __int64 v78; // [rsp+190h] [rbp+88h]
  __int64 *v79; // [rsp+198h] [rbp+90h]
  __int64 v80; // [rsp+1A0h] [rbp+98h]
  __int64 *v81; // [rsp+1A8h] [rbp+A0h]
  __int64 v82; // [rsp+1B0h] [rbp+A8h]
  int *v83; // [rsp+1B8h] [rbp+B0h]
  __int64 v84; // [rsp+1C0h] [rbp+B8h]
  char *v85; // [rsp+1C8h] [rbp+C0h]
  __int64 v86; // [rsp+1D0h] [rbp+C8h]
  BOOL *v87; // [rsp+1D8h] [rbp+D0h]
  __int64 v88; // [rsp+1E0h] [rbp+D8h]
  int *v89; // [rsp+1E8h] [rbp+E0h]
  __int64 v90; // [rsp+1F0h] [rbp+E8h]
  __int64 *v91; // [rsp+1F8h] [rbp+F0h]
  __int64 v92; // [rsp+200h] [rbp+F8h]
  __int64 *v93; // [rsp+208h] [rbp+100h]
  __int64 v94; // [rsp+210h] [rbp+108h]
  int *v95; // [rsp+218h] [rbp+110h]
  __int64 v96; // [rsp+220h] [rbp+118h]
  __int64 *v97; // [rsp+228h] [rbp+120h]
  __int64 v98; // [rsp+230h] [rbp+128h]
  __int64 *v99; // [rsp+238h] [rbp+130h]
  __int64 v100; // [rsp+240h] [rbp+138h]
  int *v101; // [rsp+248h] [rbp+140h]
  __int64 v102; // [rsp+250h] [rbp+148h]
  int *v103; // [rsp+258h] [rbp+150h]
  __int64 v104; // [rsp+260h] [rbp+158h]
  __int64 *v105; // [rsp+268h] [rbp+160h]
  __int64 v106; // [rsp+270h] [rbp+168h]
  int *v107; // [rsp+278h] [rbp+170h]
  __int64 v108; // [rsp+280h] [rbp+178h]
  int *v109; // [rsp+288h] [rbp+180h]
  __int64 v110; // [rsp+290h] [rbp+188h]
  int *v111; // [rsp+298h] [rbp+190h]
  __int64 v112; // [rsp+2A0h] [rbp+198h]
  int *v113; // [rsp+2A8h] [rbp+1A0h]
  __int64 v114; // [rsp+2B0h] [rbp+1A8h]
  char *v115; // [rsp+2B8h] [rbp+1B0h]
  __int64 v116; // [rsp+2C0h] [rbp+1B8h]
  int *v117; // [rsp+2C8h] [rbp+1C0h]
  __int64 v118; // [rsp+2D0h] [rbp+1C8h]
  int *v119; // [rsp+2D8h] [rbp+1D0h]
  __int64 v120; // [rsp+2E0h] [rbp+1D8h]
  int *v121; // [rsp+2E8h] [rbp+1E0h]
  __int64 v122; // [rsp+2F0h] [rbp+1E8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2F8h] [rbp+1F0h] BYREF
  char *v124; // [rsp+318h] [rbp+210h]
  __int64 v125; // [rsp+320h] [rbp+218h]
  int *v126; // [rsp+328h] [rbp+220h]
  __int64 v127; // [rsp+330h] [rbp+228h]
  REGHANDLE *p_RegHandle; // [rsp+338h] [rbp+230h]
  __int64 v129; // [rsp+340h] [rbp+238h]
  __int64 *v130; // [rsp+348h] [rbp+240h]
  __int64 v131; // [rsp+350h] [rbp+248h]
  __int64 *v132; // [rsp+358h] [rbp+250h]
  __int64 v133; // [rsp+360h] [rbp+258h]
  __int64 *v134; // [rsp+368h] [rbp+260h]
  __int64 v135; // [rsp+370h] [rbp+268h]
  __int64 *v136; // [rsp+378h] [rbp+270h]
  __int64 v137; // [rsp+380h] [rbp+278h]
  BOOL *v138; // [rsp+388h] [rbp+280h]
  __int64 v139; // [rsp+390h] [rbp+288h]
  char *v140; // [rsp+398h] [rbp+290h]
  __int64 v141; // [rsp+3A0h] [rbp+298h]
  int *v142; // [rsp+3A8h] [rbp+2A0h]
  __int64 v143; // [rsp+3B0h] [rbp+2A8h]
  int *v144; // [rsp+3B8h] [rbp+2B0h]
  __int64 v145; // [rsp+3C0h] [rbp+2B8h]
  __int64 *v146; // [rsp+3C8h] [rbp+2C0h]
  __int64 v147; // [rsp+3D0h] [rbp+2C8h]
  __int64 *v148; // [rsp+3D8h] [rbp+2D0h]
  __int64 v149; // [rsp+3E0h] [rbp+2D8h]
  int *v150; // [rsp+3E8h] [rbp+2E0h]
  __int64 v151; // [rsp+3F0h] [rbp+2E8h]
  __int64 *v152; // [rsp+3F8h] [rbp+2F0h]
  __int64 v153; // [rsp+400h] [rbp+2F8h]
  __int64 *v154; // [rsp+408h] [rbp+300h]
  __int64 v155; // [rsp+410h] [rbp+308h]
  __int64 *v156; // [rsp+418h] [rbp+310h]
  __int64 v157; // [rsp+420h] [rbp+318h]
  __int64 *v158; // [rsp+428h] [rbp+320h]
  __int64 v159; // [rsp+430h] [rbp+328h]
  __int64 *v160; // [rsp+438h] [rbp+330h]
  __int64 v161; // [rsp+440h] [rbp+338h]
  __int64 *v162; // [rsp+448h] [rbp+340h]
  __int64 v163; // [rsp+450h] [rbp+348h]
  __int64 *v164; // [rsp+458h] [rbp+350h]
  __int64 v165; // [rsp+460h] [rbp+358h]
  int *v166; // [rsp+468h] [rbp+360h]
  __int64 v167; // [rsp+470h] [rbp+368h]
  int *v168; // [rsp+478h] [rbp+370h]
  __int64 v169; // [rsp+480h] [rbp+378h]
  char v170; // [rsp+4D0h] [rbp+3C8h] BYREF

  v170 = a2;
  v2 = *(_DWORD *)(a1 + 168);
  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(unsigned __int8 *)(a1 + 117);
  v5 = *(_QWORD *)(a1 + 80);
  v6 = *(_BYTE *)(a1 + 117) & 1;
  v7 = *(_QWORD *)(a1 + 40);
  v8 = *(_BYTE *)(a1 + 116);
  v9 = *(_QWORD *)(a1 + 48);
  v10 = v8 & 1;
  v11 = *(_QWORD *)(a1 + 64);
  v12 = *(_QWORD *)(a1 + 72);
  v27 = *(_DWORD *)a1;
  v34 = v27;
  v28 = *(_DWORD *)(a1 + 56);
  v35 = v28;
  v47 = *(_QWORD *)(a1 + 88);
  v63 = v47;
  v13 = *(_QWORD *)(a1 + 96);
  v57 = v2;
  v14 = *(_DWORD *)(a1 + 172);
  v49 = v13;
  v59 = v13;
  v15 = *(_QWORD *)(a1 + 120);
  v50 = v14;
  v45 = v15;
  v60 = v15;
  LODWORD(v15) = *(_DWORD *)(a1 + 108);
  v44 = (unsigned __int8)PopConsoleExternalDisplayConnected;
  v29 = v15;
  v36 = v15;
  v16 = *(_QWORD *)(a1 + 144);
  v43 = (unsigned __int8)PopLidOpened;
  v17 = *(unsigned __int8 *)(a1 + 176);
  v18 = (v4 >> 1) & 1;
  v46 = v16;
  v61 = v16;
  LODWORD(v16) = *(_DWORD *)(a1 + 180);
  v31 = *(_DWORD *)(a1 + 184);
  v40 = v31;
  v51 = v17;
  v19 = v5;
  v48 = v3;
  v62 = v3;
  v52 = v7;
  v53 = v9;
  v54 = v11;
  v55 = v12;
  v56 = v5;
  v24 = v8 >> 1;
  v25 = v8 >> 1;
  v42 = v10;
  v32 = v6;
  v37 = v6;
  v38 = v18;
  v30 = v16;
  v39 = v16;
  if ( !v3 )
  {
    v9 = 0LL;
    v53 = 0LL;
    v7 = 0LL;
    v52 = 0LL;
    v11 = 0LL;
    v54 = 0LL;
    v12 = 0LL;
    v55 = 0LL;
    v5 = 0LL;
    v56 = 0LL;
    v19 = 0LL;
  }
  v33 = v19 != 0;
  v41 = v33;
  if ( PopDiagHandleRegistered )
  {
    RegHandle = PopDiagHandle;
    LOBYTE(v19) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CS_EXIT_REASON);
    if ( (_BYTE)v19 )
    {
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)&v34;
      v74 = 8LL;
      v73 = &v53;
      v75 = &v55;
      v77 = &v54;
      v79 = &v52;
      v81 = &v62;
      v83 = &v35;
      v85 = &v25;
      v87 = &v41;
      v89 = &v36;
      v91 = &v56;
      v93 = &v63;
      v95 = &v42;
      v97 = &v60;
      v99 = &v61;
      v101 = &v38;
      v103 = &v37;
      v105 = &v59;
      v107 = &v57;
      v109 = &v50;
      v111 = &v43;
      v113 = &v44;
      v115 = &v170;
      v117 = &v51;
      v119 = &v39;
      v121 = &v40;
      v76 = 8LL;
      v78 = 8LL;
      v80 = 8LL;
      v82 = 8LL;
      v84 = 4LL;
      v86 = 1LL;
      v88 = 4LL;
      v90 = 4LL;
      v92 = 8LL;
      v94 = 8LL;
      v96 = 4LL;
      v98 = 8LL;
      v100 = 8LL;
      v102 = 4LL;
      v104 = 4LL;
      v106 = 8LL;
      v108 = 4LL;
      v110 = 4LL;
      v112 = 4LL;
      v114 = 4LL;
      v116 = 1LL;
      v118 = 4LL;
      v120 = 4LL;
      v122 = 4LL;
      EtwWrite(RegHandle, &POP_ETW_EVENT_CS_EXIT_REASON, 0LL, 0x1Au, &UserData);
      v7 = v52;
      v9 = v53;
      v11 = v54;
      v12 = v55;
      v5 = v56;
      v10 = v42;
      v18 = v38;
      v27 = v34;
      v48 = v62;
      v28 = v35;
      v47 = v63;
      v49 = v59;
      v45 = v60;
      v29 = v36;
      v46 = v61;
      v30 = v39;
      LOBYTE(v19) = v40;
      v31 = v40;
    }
  }
  if ( pCallbackContext.LevelPlus1 > 5 )
  {
    LOBYTE(v19) = TlgKeywordOn(&pCallbackContext, 0x400000000000uLL);
    if ( (_BYTE)v19 )
    {
      v24 = PopWnfCsEnterScenarioId;
      v32 = v27;
      v67 = v48;
      v33 = v28;
      v69 = v47;
      v70 = v45;
      v71 = v46;
      LODWORD(v47) = v43;
      LODWORD(v48) = v44;
      v124 = &v24;
      v126 = &v32;
      p_RegHandle = &RegHandle;
      v130 = &v64;
      v132 = &v65;
      v134 = &v66;
      v136 = &v67;
      v138 = &v33;
      v140 = &v26;
      v142 = &v28;
      v144 = &v29;
      v146 = &v68;
      v148 = &v69;
      v150 = &v27;
      v152 = &v70;
      RegHandle = v9;
      v64 = v12;
      v65 = v11;
      v66 = v7;
      v26 = v21;
      v28 = v20;
      v68 = v5;
      v27 = v10;
      LODWORD(v46) = v18;
      LODWORD(v45) = v22;
      v125 = 1LL;
      v127 = 4LL;
      v129 = 8LL;
      v131 = 8LL;
      v133 = 8LL;
      v135 = 8LL;
      v137 = 8LL;
      v139 = 4LL;
      v141 = 1LL;
      v143 = 4LL;
      v145 = 4LL;
      v147 = 8LL;
      v149 = 8LL;
      v151 = 4LL;
      v153 = 8LL;
      v155 = 8LL;
      v154 = &v71;
      v156 = &v46;
      v158 = &v45;
      v160 = &v49;
      v162 = &v47;
      v164 = &v48;
      v166 = &v30;
      v168 = &v31;
      v157 = 4LL;
      v159 = 4LL;
      v161 = 8LL;
      v163 = 4LL;
      v165 = 4LL;
      v167 = 4LL;
      v169 = 4LL;
      LOBYTE(v19) = TlgWrite(&pCallbackContext, &unk_14030B99B, 0LL, 0LL, 0x19u, &pData);
    }
  }
  return v19;
}
