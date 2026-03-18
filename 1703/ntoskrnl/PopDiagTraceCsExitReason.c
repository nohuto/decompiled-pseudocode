/*
 * XREFs of PopDiagTraceCsExitReason @ 0x1406CCB2C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402301D4 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
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
  __int64 v13; // r8
  __int64 v14; // r8
  int v15; // ebx
  __int64 v16; // r8
  int v17; // eax
  int v18; // r9d
  char v19; // r10
  int v20; // r11d
  char v22; // [rsp+38h] [rbp-D0h] BYREF
  char v23; // [rsp+39h] [rbp-CFh] BYREF
  char v24; // [rsp+3Ah] [rbp-CEh] BYREF
  int v25; // [rsp+3Ch] [rbp-CCh] BYREF
  int v26; // [rsp+40h] [rbp-C8h] BYREF
  int v27; // [rsp+44h] [rbp-C4h] BYREF
  int v28; // [rsp+48h] [rbp-C0h] BYREF
  BOOL v29; // [rsp+4Ch] [rbp-BCh] BYREF
  int v30; // [rsp+50h] [rbp-B8h] BYREF
  int v31; // [rsp+54h] [rbp-B4h] BYREF
  int v32; // [rsp+58h] [rbp-B0h] BYREF
  int v33; // [rsp+5Ch] [rbp-ACh] BYREF
  int v34; // [rsp+60h] [rbp-A8h] BYREF
  BOOL v35; // [rsp+64h] [rbp-A4h] BYREF
  int v36; // [rsp+68h] [rbp-A0h] BYREF
  int v37; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v38; // [rsp+70h] [rbp-98h] BYREF
  __int64 v39; // [rsp+78h] [rbp-90h] BYREF
  __int64 v40; // [rsp+80h] [rbp-88h] BYREF
  __int64 v41; // [rsp+88h] [rbp-80h] BYREF
  __int64 v42; // [rsp+90h] [rbp-78h] BYREF
  __int64 v43; // [rsp+98h] [rbp-70h] BYREF
  int v44; // [rsp+A0h] [rbp-68h] BYREF
  int v45; // [rsp+A4h] [rbp-64h] BYREF
  int v46; // [rsp+A8h] [rbp-60h] BYREF
  REGHANDLE v47; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v48; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v49; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v50; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v51; // [rsp+D0h] [rbp-38h] BYREF
  REGHANDLE RegHandle; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v53; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v54; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v55; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v56; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v57; // [rsp+100h] [rbp-8h] BYREF
  __int64 v58; // [rsp+108h] [rbp+0h] BYREF
  __int64 v59; // [rsp+110h] [rbp+8h] BYREF
  __int64 v60; // [rsp+118h] [rbp+10h] BYREF
  __int64 v61; // [rsp+120h] [rbp+18h] BYREF
  __int64 v62; // [rsp+128h] [rbp+20h] BYREF
  __int64 v63; // [rsp+130h] [rbp+28h] BYREF
  __int64 v64; // [rsp+138h] [rbp+30h] BYREF
  __int64 v65; // [rsp+140h] [rbp+38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+148h] [rbp+40h] BYREF
  REGHANDLE *v67; // [rsp+158h] [rbp+50h]
  __int64 v68; // [rsp+160h] [rbp+58h]
  __int64 *v69; // [rsp+168h] [rbp+60h]
  __int64 v70; // [rsp+170h] [rbp+68h]
  __int64 *v71; // [rsp+178h] [rbp+70h]
  __int64 v72; // [rsp+180h] [rbp+78h]
  __int64 *v73; // [rsp+188h] [rbp+80h]
  __int64 v74; // [rsp+190h] [rbp+88h]
  __int64 *v75; // [rsp+198h] [rbp+90h]
  __int64 v76; // [rsp+1A0h] [rbp+98h]
  int *v77; // [rsp+1A8h] [rbp+A0h]
  __int64 v78; // [rsp+1B0h] [rbp+A8h]
  char *v79; // [rsp+1B8h] [rbp+B0h]
  __int64 v80; // [rsp+1C0h] [rbp+B8h]
  BOOL *v81; // [rsp+1C8h] [rbp+C0h]
  __int64 v82; // [rsp+1D0h] [rbp+C8h]
  int *v83; // [rsp+1D8h] [rbp+D0h]
  __int64 v84; // [rsp+1E0h] [rbp+D8h]
  __int64 *v85; // [rsp+1E8h] [rbp+E0h]
  __int64 v86; // [rsp+1F0h] [rbp+E8h]
  __int64 *v87; // [rsp+1F8h] [rbp+F0h]
  __int64 v88; // [rsp+200h] [rbp+F8h]
  int *v89; // [rsp+208h] [rbp+100h]
  __int64 v90; // [rsp+210h] [rbp+108h]
  __int64 *v91; // [rsp+218h] [rbp+110h]
  __int64 v92; // [rsp+220h] [rbp+118h]
  __int64 *v93; // [rsp+228h] [rbp+120h]
  __int64 v94; // [rsp+230h] [rbp+128h]
  int *v95; // [rsp+238h] [rbp+130h]
  __int64 v96; // [rsp+240h] [rbp+138h]
  int *v97; // [rsp+248h] [rbp+140h]
  __int64 v98; // [rsp+250h] [rbp+148h]
  __int64 *v99; // [rsp+258h] [rbp+150h]
  __int64 v100; // [rsp+260h] [rbp+158h]
  int *v101; // [rsp+268h] [rbp+160h]
  __int64 v102; // [rsp+270h] [rbp+168h]
  int *v103; // [rsp+278h] [rbp+170h]
  __int64 v104; // [rsp+280h] [rbp+178h]
  int *v105; // [rsp+288h] [rbp+180h]
  __int64 v106; // [rsp+290h] [rbp+188h]
  __int64 *v107; // [rsp+298h] [rbp+190h]
  __int64 v108; // [rsp+2A0h] [rbp+198h]
  char *v109; // [rsp+2A8h] [rbp+1A0h]
  __int64 v110; // [rsp+2B0h] [rbp+1A8h]
  int *v111; // [rsp+2B8h] [rbp+1B0h]
  __int64 v112; // [rsp+2C0h] [rbp+1B8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2D8h] [rbp+1D0h] BYREF
  char *v114; // [rsp+2F8h] [rbp+1F0h]
  __int64 v115; // [rsp+300h] [rbp+1F8h]
  int *v116; // [rsp+308h] [rbp+200h]
  __int64 v117; // [rsp+310h] [rbp+208h]
  REGHANDLE *p_RegHandle; // [rsp+318h] [rbp+210h]
  __int64 v119; // [rsp+320h] [rbp+218h]
  __int64 *v120; // [rsp+328h] [rbp+220h]
  __int64 v121; // [rsp+330h] [rbp+228h]
  __int64 *v122; // [rsp+338h] [rbp+230h]
  __int64 v123; // [rsp+340h] [rbp+238h]
  __int64 *v124; // [rsp+348h] [rbp+240h]
  __int64 v125; // [rsp+350h] [rbp+248h]
  __int64 *v126; // [rsp+358h] [rbp+250h]
  __int64 v127; // [rsp+360h] [rbp+258h]
  BOOL *v128; // [rsp+368h] [rbp+260h]
  __int64 v129; // [rsp+370h] [rbp+268h]
  char *v130; // [rsp+378h] [rbp+270h]
  __int64 v131; // [rsp+380h] [rbp+278h]
  int *v132; // [rsp+388h] [rbp+280h]
  __int64 v133; // [rsp+390h] [rbp+288h]
  int *v134; // [rsp+398h] [rbp+290h]
  __int64 v135; // [rsp+3A0h] [rbp+298h]
  __int64 *v136; // [rsp+3A8h] [rbp+2A0h]
  __int64 v137; // [rsp+3B0h] [rbp+2A8h]
  __int64 *v138; // [rsp+3B8h] [rbp+2B0h]
  __int64 v139; // [rsp+3C0h] [rbp+2B8h]
  int *v140; // [rsp+3C8h] [rbp+2C0h]
  __int64 v141; // [rsp+3D0h] [rbp+2C8h]
  __int64 *v142; // [rsp+3D8h] [rbp+2D0h]
  __int64 v143; // [rsp+3E0h] [rbp+2D8h]
  __int64 *v144; // [rsp+3E8h] [rbp+2E0h]
  __int64 v145; // [rsp+3F0h] [rbp+2E8h]
  __int64 *v146; // [rsp+3F8h] [rbp+2F0h]
  __int64 v147; // [rsp+400h] [rbp+2F8h]
  __int64 *v148; // [rsp+408h] [rbp+300h]
  __int64 v149; // [rsp+410h] [rbp+308h]
  __int64 *v150; // [rsp+418h] [rbp+310h]
  __int64 v151; // [rsp+420h] [rbp+318h]
  __int64 *v152; // [rsp+428h] [rbp+320h]
  __int64 v153; // [rsp+430h] [rbp+328h]
  __int64 *v154; // [rsp+438h] [rbp+330h]
  __int64 v155; // [rsp+440h] [rbp+338h]
  char v156; // [rsp+4A0h] [rbp+398h] BYREF

  v156 = a2;
  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_DWORD *)(a1 + 152);
  v4 = *(unsigned __int8 *)(a1 + 101);
  v5 = *(_QWORD *)(a1 + 24);
  v6 = *(_BYTE *)(a1 + 101) & 1;
  v7 = *(_QWORD *)(a1 + 32);
  v8 = *(_BYTE *)(a1 + 100);
  v9 = *(_QWORD *)(a1 + 48);
  v10 = v8 & 1;
  v11 = *(_QWORD *)(a1 + 56);
  v12 = *(_QWORD *)(a1 + 64);
  v25 = *(_DWORD *)a1;
  v30 = v25;
  v26 = *(_DWORD *)(a1 + 40);
  v31 = v26;
  v39 = *(_QWORD *)(a1 + 72);
  v54 = v39;
  v13 = *(_QWORD *)(a1 + 80);
  v44 = v3;
  v45 = *(_DWORD *)(a1 + 156);
  v41 = v13;
  v55 = v13;
  v14 = *(_QWORD *)(a1 + 104);
  LODWORD(v38) = (unsigned __int8)PopConsoleExternalDisplayConnected;
  v43 = v14;
  v56 = v14;
  v15 = (v4 >> 1) & 1;
  v27 = *(_DWORD *)(a1 + 92);
  v36 = v27;
  v16 = *(_QWORD *)(a1 + 128);
  v37 = (unsigned __int8)PopLidOpened;
  v17 = *(unsigned __int8 *)(a1 + 160);
  v40 = v2;
  v53 = v2;
  v51 = v5;
  v47 = v7;
  v48 = v9;
  v49 = v11;
  v50 = v12;
  v22 = v8 >> 1;
  v23 = v8 >> 1;
  v32 = v10;
  v42 = v16;
  v57 = v16;
  v28 = v6;
  v33 = v6;
  v34 = v15;
  v46 = v17;
  if ( !v2 )
  {
    v7 = 0LL;
    v47 = 0LL;
    v5 = 0LL;
    v51 = 0LL;
    v9 = 0LL;
    v48 = 0LL;
    v11 = 0LL;
    v49 = 0LL;
    v12 = 0LL;
    v50 = 0LL;
  }
  v29 = v12 != 0;
  v35 = v29;
  if ( PopDiagHandleRegistered )
  {
    RegHandle = PopDiagHandle;
    LOBYTE(v17) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CS_EXIT_REASON);
    if ( (_BYTE)v17 )
    {
      UserData.Ptr = (ULONGLONG)&v30;
      *(_QWORD *)&UserData.Size = 4LL;
      v67 = &v47;
      v68 = 8LL;
      v69 = &v49;
      v70 = 8LL;
      v71 = &v48;
      v73 = &v51;
      v75 = &v53;
      v77 = &v31;
      v79 = &v23;
      v81 = &v35;
      v83 = &v36;
      v85 = &v50;
      v87 = &v54;
      v89 = &v32;
      v91 = &v56;
      v93 = &v57;
      v95 = &v34;
      v97 = &v33;
      v99 = &v55;
      v101 = &v44;
      v103 = &v45;
      v105 = &v37;
      v107 = &v38;
      v109 = &v156;
      v111 = &v46;
      v72 = 8LL;
      v74 = 8LL;
      v76 = 8LL;
      v78 = 4LL;
      v80 = 1LL;
      v82 = 4LL;
      v84 = 4LL;
      v86 = 8LL;
      v88 = 8LL;
      v90 = 4LL;
      v92 = 8LL;
      v94 = 8LL;
      v96 = 4LL;
      v98 = 4LL;
      v100 = 8LL;
      v102 = 4LL;
      v104 = 4LL;
      v106 = 4LL;
      v108 = 4LL;
      v110 = 1LL;
      v112 = 4LL;
      EtwWrite(RegHandle, &POP_ETW_EVENT_CS_EXIT_REASON, 0LL, 0x18u, &UserData);
      v25 = v30;
      v5 = v51;
      v7 = v47;
      v9 = v48;
      v11 = v49;
      v12 = v50;
      v10 = v32;
      v15 = v34;
      v40 = v53;
      v26 = v31;
      v39 = v54;
      v41 = v55;
      v43 = v56;
      v27 = v36;
      LOBYTE(v17) = v57;
      v42 = v57;
    }
  }
  if ( hProvider.LevelPlus1 > 5 )
  {
    LOBYTE(v17) = TlgKeywordOn(&hProvider, 0x400000000000uLL);
    if ( (_BYTE)v17 )
    {
      v22 = PopWnfCsEnterScenarioId;
      v28 = v25;
      v61 = v40;
      v29 = v26;
      v63 = v39;
      v64 = v43;
      v65 = v42;
      LODWORD(v39) = v37;
      LODWORD(v40) = v38;
      v114 = &v22;
      v116 = &v28;
      p_RegHandle = &RegHandle;
      v120 = &v58;
      v122 = &v59;
      v124 = &v60;
      v126 = &v61;
      v128 = &v29;
      v130 = &v24;
      v132 = &v26;
      v134 = &v27;
      v136 = &v62;
      v138 = &v63;
      v140 = &v25;
      v142 = &v64;
      v144 = &v65;
      RegHandle = v7;
      v58 = v11;
      v59 = v9;
      v60 = v5;
      v24 = v19;
      v26 = v18;
      v62 = v12;
      v25 = v10;
      LODWORD(v42) = v15;
      LODWORD(v43) = v20;
      v115 = 1LL;
      v117 = 4LL;
      v119 = 8LL;
      v121 = 8LL;
      v123 = 8LL;
      v125 = 8LL;
      v127 = 8LL;
      v129 = 4LL;
      v131 = 1LL;
      v133 = 4LL;
      v135 = 4LL;
      v137 = 8LL;
      v139 = 8LL;
      v141 = 4LL;
      v143 = 8LL;
      v145 = 8LL;
      v146 = &v42;
      v148 = &v43;
      v150 = &v41;
      v152 = &v39;
      v154 = &v40;
      v147 = 4LL;
      v149 = 4LL;
      v151 = 8LL;
      v153 = 4LL;
      v155 = 4LL;
      LOBYTE(v17) = TlgWrite(&hProvider, &unk_1402AD972, 0LL, 0LL, 0x17u, &pData);
    }
  }
  return v17;
}
