/*
 * XREFs of ?WriteDxgDiagnosticsEvent_SDC@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0003524
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000C080 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C000C2C8 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C000C2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00103C8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?ExtractResolutionAndPosition@@YAXPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO@@IPEAUTelemetryPathInfo@@I@Z @ 0x1C0036718 (-ExtractResolutionAndPosition@@YAXPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO@@IPE.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_SDC(struct _DXGK_DIAG_HEADER *a1)
{
  unsigned int v2; // edi
  struct DISPLAYCONFIG_PATH_INFO *v3; // r12
  unsigned int v4; // r14d
  struct DISPLAYCONFIG_MODE_INFO *v5; // r13
  unsigned int v6; // esi
  const GUID *v7; // r9
  unsigned __int64 v8; // r10
  unsigned __int16 v9; // r14
  unsigned __int16 v10; // si
  const GUID *v11; // r9
  unsigned __int64 v12; // r10
  unsigned __int16 v13; // si
  unsigned int v14; // eax
  const GUID *v15; // r9
  unsigned __int64 v16; // r10
  unsigned __int16 v17; // si
  unsigned int v18; // eax
  const GUID *v19; // r9
  __int64 v20; // r10
  unsigned __int16 v21; // si
  unsigned int v22; // eax
  const GUID *v23; // r9
  unsigned __int64 v24; // r10
  unsigned int pData; // [rsp+30h] [rbp-D8h]
  unsigned __int16 v26; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v27; // [rsp+3Ah] [rbp-CEh] BYREF
  int v28; // [rsp+3Ch] [rbp-CCh] BYREF
  int v29; // [rsp+40h] [rbp-C8h] BYREF
  int v30; // [rsp+44h] [rbp-C4h] BYREF
  int v31; // [rsp+48h] [rbp-C0h] BYREF
  int v32; // [rsp+4Ch] [rbp-BCh] BYREF
  int v33; // [rsp+50h] [rbp-B8h] BYREF
  int v34; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v35; // [rsp+58h] [rbp-B0h] BYREF
  int v36; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v37; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v38; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v40; // [rsp+74h] [rbp-94h] BYREF
  __int64 v41; // [rsp+78h] [rbp-90h] BYREF
  int v42; // [rsp+80h] [rbp-88h] BYREF
  __int64 v43; // [rsp+88h] [rbp-80h] BYREF
  __int64 v44; // [rsp+90h] [rbp-78h] BYREF
  int v45; // [rsp+98h] [rbp-70h] BYREF
  int v46; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v47; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v48; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v49; // [rsp+B0h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR v50; // [rsp+B8h] [rbp-50h] BYREF
  void *v51; // [rsp+D8h] [rbp-30h]
  unsigned __int64 v52; // [rsp+E0h] [rbp-28h]
  char *v53; // [rsp+E8h] [rbp-20h]
  unsigned __int64 v54; // [rsp+F0h] [rbp-18h]
  char *v55; // [rsp+F8h] [rbp-10h]
  __int64 v56; // [rsp+100h] [rbp-8h]
  int *v57; // [rsp+108h] [rbp+0h]
  unsigned __int64 v58; // [rsp+110h] [rbp+8h]
  char *v59; // [rsp+118h] [rbp+10h]
  unsigned __int64 v60; // [rsp+120h] [rbp+18h]
  char *v61; // [rsp+128h] [rbp+20h]
  __int64 v62; // [rsp+130h] [rbp+28h]
  char *v63; // [rsp+138h] [rbp+30h]
  unsigned __int64 v64; // [rsp+140h] [rbp+38h]
  unsigned int *v65; // [rsp+148h] [rbp+40h]
  unsigned __int64 v66; // [rsp+150h] [rbp+48h]
  unsigned int *v67; // [rsp+158h] [rbp+50h]
  unsigned __int64 v68; // [rsp+160h] [rbp+58h]
  char *v69; // [rsp+168h] [rbp+60h]
  unsigned __int64 v70; // [rsp+170h] [rbp+68h]
  int *v71; // [rsp+178h] [rbp+70h]
  unsigned __int64 v72; // [rsp+180h] [rbp+78h]
  int *v73; // [rsp+188h] [rbp+80h]
  unsigned __int64 v74; // [rsp+190h] [rbp+88h]
  int *v75; // [rsp+198h] [rbp+90h]
  unsigned __int64 v76; // [rsp+1A0h] [rbp+98h]
  int *v77; // [rsp+1A8h] [rbp+A0h]
  unsigned __int64 v78; // [rsp+1B0h] [rbp+A8h]
  int *v79; // [rsp+1B8h] [rbp+B0h]
  unsigned __int64 v80; // [rsp+1C0h] [rbp+B8h]
  char *v81; // [rsp+1C8h] [rbp+C0h]
  unsigned __int64 v82; // [rsp+1D0h] [rbp+C8h]
  unsigned __int16 *v83; // [rsp+1D8h] [rbp+D0h]
  __int64 v84; // [rsp+1E0h] [rbp+D8h]
  struct _DXGK_DIAG_HEADER *v85; // [rsp+1E8h] [rbp+E0h]
  __int64 v86; // [rsp+1F0h] [rbp+E8h]
  char *v87; // [rsp+1F8h] [rbp+F0h]
  unsigned __int64 v88; // [rsp+200h] [rbp+F8h]
  char *v89; // [rsp+208h] [rbp+100h]
  unsigned __int64 v90; // [rsp+210h] [rbp+108h]
  _QWORD *v91; // [rsp+218h] [rbp+110h]
  unsigned __int64 v92; // [rsp+220h] [rbp+118h]
  _QWORD *v93; // [rsp+228h] [rbp+120h]
  unsigned __int64 v94; // [rsp+230h] [rbp+128h]
  char *v95; // [rsp+238h] [rbp+130h]
  unsigned __int64 v96; // [rsp+240h] [rbp+138h]
  __int64 *v97; // [rsp+248h] [rbp+140h]
  unsigned __int64 v98; // [rsp+250h] [rbp+148h]
  _QWORD *v99; // [rsp+258h] [rbp+150h]
  unsigned __int64 v100; // [rsp+260h] [rbp+158h]
  char *v101; // [rsp+268h] [rbp+160h]
  unsigned __int64 v102; // [rsp+270h] [rbp+168h]
  unsigned __int16 *v103; // [rsp+278h] [rbp+170h]
  __int64 v104; // [rsp+280h] [rbp+178h]
  struct DISPLAYCONFIG_PATH_INFO *v105; // [rsp+288h] [rbp+180h]
  __int64 v106; // [rsp+290h] [rbp+188h]
  char *v107; // [rsp+298h] [rbp+190h]
  __int64 v108; // [rsp+2A0h] [rbp+198h]
  struct DISPLAYCONFIG_MODE_INFO *v109; // [rsp+2A8h] [rbp+1A0h]
  unsigned __int64 v110; // [rsp+2B0h] [rbp+1A8h]
  __int16 *v111; // [rsp+2B8h] [rbp+1B0h]
  __int64 v112; // [rsp+2C0h] [rbp+1B8h]
  struct _DXGK_DIAG_HEADER *v113; // [rsp+2C8h] [rbp+1C0h]
  unsigned __int64 v114; // [rsp+2D0h] [rbp+1C8h]
  char *v115; // [rsp+2D8h] [rbp+1D0h]
  unsigned __int64 v116; // [rsp+2E0h] [rbp+1D8h]
  __int64 *v117; // [rsp+2E8h] [rbp+1E0h]
  unsigned __int64 v118; // [rsp+2F0h] [rbp+1E8h]
  _QWORD *v119; // [rsp+2F8h] [rbp+1F0h]
  unsigned __int64 v120; // [rsp+300h] [rbp+1F8h]
  char *v121; // [rsp+308h] [rbp+200h]
  unsigned __int64 v122; // [rsp+310h] [rbp+208h]
  int *v123; // [rsp+318h] [rbp+210h]
  __int64 v124; // [rsp+320h] [rbp+218h]
  struct DISPLAYCONFIG_PATH_INFO *v125; // [rsp+328h] [rbp+220h]
  __int64 v126; // [rsp+330h] [rbp+228h]
  char *v127; // [rsp+338h] [rbp+230h]
  __int64 v128; // [rsp+340h] [rbp+238h]
  struct DISPLAYCONFIG_MODE_INFO *v129; // [rsp+348h] [rbp+240h]
  unsigned __int64 v130; // [rsp+350h] [rbp+248h]
  __int16 *v131; // [rsp+358h] [rbp+250h]
  __int64 v132; // [rsp+360h] [rbp+258h]
  struct _DXGK_DIAG_HEADER *v133; // [rsp+368h] [rbp+260h]
  unsigned __int64 v134; // [rsp+370h] [rbp+268h]
  int *v135; // [rsp+378h] [rbp+270h]
  unsigned __int64 v136; // [rsp+380h] [rbp+278h]
  int *v137; // [rsp+388h] [rbp+280h]
  unsigned __int64 v138; // [rsp+390h] [rbp+288h]
  _QWORD *v139; // [rsp+398h] [rbp+290h]
  unsigned __int64 v140; // [rsp+3A0h] [rbp+298h]
  char *v141; // [rsp+3A8h] [rbp+2A0h]
  unsigned __int64 v142; // [rsp+3B0h] [rbp+2A8h]
  unsigned __int16 *v143; // [rsp+3B8h] [rbp+2B0h]
  __int64 v144; // [rsp+3C0h] [rbp+2B8h]
  struct DISPLAYCONFIG_PATH_INFO *v145; // [rsp+3C8h] [rbp+2C0h]
  __int64 v146; // [rsp+3D0h] [rbp+2C8h]
  char *v147; // [rsp+3D8h] [rbp+2D0h]
  __int64 v148; // [rsp+3E0h] [rbp+2D8h]
  struct DISPLAYCONFIG_MODE_INFO *v149; // [rsp+3E8h] [rbp+2E0h]
  unsigned __int64 v150; // [rsp+3F0h] [rbp+2E8h]
  __int16 *v151; // [rsp+3F8h] [rbp+2F0h]
  __int64 v152; // [rsp+400h] [rbp+2F8h]
  struct _DXGK_DIAG_HEADER *v153; // [rsp+408h] [rbp+300h]
  unsigned __int64 v154; // [rsp+410h] [rbp+308h]
  int *v155; // [rsp+418h] [rbp+310h]
  unsigned __int64 v156; // [rsp+420h] [rbp+318h]
  int *v157; // [rsp+428h] [rbp+320h]
  unsigned __int64 v158; // [rsp+430h] [rbp+328h]
  _QWORD *v159; // [rsp+438h] [rbp+330h]
  unsigned __int64 v160; // [rsp+440h] [rbp+338h]
  char *v161; // [rsp+448h] [rbp+340h]
  unsigned __int64 v162; // [rsp+450h] [rbp+348h]
  __int16 *v163; // [rsp+458h] [rbp+350h]
  __int64 v164; // [rsp+460h] [rbp+358h]
  struct DISPLAYCONFIG_PATH_INFO *v165; // [rsp+468h] [rbp+360h]
  int v166; // [rsp+470h] [rbp+368h]
  int v167; // [rsp+474h] [rbp+36Ch]
  int *v168; // [rsp+478h] [rbp+370h]
  __int64 v169; // [rsp+480h] [rbp+378h]
  struct DISPLAYCONFIG_MODE_INFO *v170; // [rsp+488h] [rbp+380h]
  int v171; // [rsp+490h] [rbp+388h]
  int v172; // [rsp+494h] [rbp+38Ch]
  unsigned __int16 *v173; // [rsp+498h] [rbp+390h]
  __int64 v174; // [rsp+4A0h] [rbp+398h]
  struct _DXGK_DIAG_HEADER *v175; // [rsp+4A8h] [rbp+3A0h]
  int v176; // [rsp+4B0h] [rbp+3A8h]
  int v177; // [rsp+4B4h] [rbp+3ACh]
  _QWORD v178[24]; // [rsp+4C8h] [rbp+3C0h] BYREF

  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x200000000001uLL) )
  {
    v2 = *((_DWORD *)a1 + 12);
    if ( (v2 & 1) != 0 )
    {
      v3 = 0LL;
      v4 = 0;
    }
    else
    {
      v4 = *((_DWORD *)a1 + 13);
      v3 = (struct _DXGK_DIAG_HEADER *)((char *)a1 + 88);
    }
    v38 = v4;
    if ( (v2 & 2) != 0 )
    {
      v5 = 0LL;
      v6 = 0;
    }
    else
    {
      v6 = *((_DWORD *)a1 + 14);
      v5 = (struct _DXGK_DIAG_HEADER *)((char *)a1
                                      + 64 * *((unsigned int *)a1 + 13)
                                      + 8 * *((unsigned int *)a1 + 13)
                                      + 88);
    }
    v37 = v6;
    memset(v178, 0, sizeof(v178));
    ExtractResolutionAndPosition(v3, v4, v5, v6, (struct TelemetryPathInfo *)v178, pData);
    if ( v4 )
    {
      switch ( v4 )
      {
        case 1u:
          if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000001uLL) )
          {
            v52 = v20;
            v51 = &unk_1C00541E4;
            v53 = (char *)a1 + 40;
            v55 = (char *)a1 + 32;
            v34 = *(_DWORD *)a1;
            v57 = &v34;
            v59 = (char *)a1 + 44;
            v61 = (char *)a1 + 80;
            v63 = (char *)a1 + 72;
            v65 = &v37;
            v67 = &v38;
            v69 = (char *)a1 + 60;
            v33 = *((_DWORD *)a1 + 16);
            v71 = &v33;
            v54 = v20;
            v32 = (v2 >> 2) & 1;
            v73 = &v32;
            v31 = (v2 >> 1) & 1;
            v56 = 8LL;
            v75 = &v31;
            v77 = &v30;
            v79 = &v29;
            v81 = (char *)a1 + 68;
            v36 = BYTE4(v178[1]);
            v83 = (unsigned __int16 *)&v36;
            v43 = v178[2];
            v85 = (struct _DXGK_DIAG_HEADER *)&v43;
            v87 = (char *)&v178[4] + 4;
            v89 = (char *)v178 + 4;
            v58 = v20;
            v60 = v20;
            v62 = 8LL;
            v64 = v20;
            v66 = v20;
            v68 = v20;
            v70 = v20;
            v72 = v20;
            v74 = v20;
            v76 = v20;
            v30 = v2 & 1;
            v78 = v20;
            v29 = (v2 >> 3) & 1;
            v80 = v20;
            v82 = v20;
            v84 = v20;
            v86 = 8LL;
            v88 = v20;
            v90 = v20;
            v91 = &v178[4];
            v21 = (_WORD)v6 << 6;
            v93 = &v178[1];
            v95 = (char *)&v35 + 4;
            v35 = v178[3];
            v97 = &v35;
            v99 = &v178[5];
            v101 = (char *)&v178[5] + 4;
            v103 = &v26;
            v107 = (char *)&v28;
            LODWORD(v110) = v21;
            v22 = *((unsigned __int16 *)a1 + 2);
            v26 = 72;
            v106 = 72LL;
            v27 = v22;
            v114 = __PAIR64__((unsigned int)v19, v22);
            v92 = v20;
            v94 = v20;
            v96 = v20;
            v98 = v20;
            v100 = v20;
            v102 = v20;
            v104 = 2LL;
            v105 = v3;
            LOWORD(v28) = v21;
            v108 = 2LL;
            v109 = v5;
            HIDWORD(v110) = (_DWORD)v19;
            v111 = &v27;
            v112 = 2LL;
            v113 = a1;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0051085, 0LL, v19, 0x22u, &v50);
          }
          break;
        case 2u:
          if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000001uLL) )
          {
            v52 = v16;
            v51 = &unk_1C00541E4;
            v53 = (char *)a1 + 40;
            v55 = (char *)a1 + 32;
            v34 = *(_DWORD *)a1;
            v57 = &v34;
            v59 = (char *)a1 + 44;
            v61 = (char *)a1 + 80;
            v63 = (char *)a1 + 72;
            v65 = &v37;
            v67 = &v38;
            v69 = (char *)a1 + 60;
            v33 = *((_DWORD *)a1 + 16);
            v71 = &v33;
            v54 = v16;
            v32 = (v2 >> 2) & 1;
            v73 = &v32;
            v31 = (v2 >> 1) & 1;
            v56 = 8LL;
            v75 = &v31;
            v77 = &v30;
            v79 = &v29;
            v81 = (char *)a1 + 68;
            v36 = BYTE4(v178[1]);
            v83 = (unsigned __int16 *)&v36;
            v43 = v178[2];
            v85 = (struct _DXGK_DIAG_HEADER *)&v43;
            v87 = (char *)&v178[4] + 4;
            v89 = (char *)v178 + 4;
            v58 = v16;
            v60 = v16;
            v62 = 8LL;
            v64 = v16;
            v66 = v16;
            v68 = v16;
            v70 = v16;
            v72 = v16;
            v74 = v16;
            v76 = v16;
            v30 = v2 & 1;
            v78 = v16;
            v29 = (v2 >> 3) & 1;
            v80 = v16;
            v82 = v16;
            v84 = v16;
            v86 = 8LL;
            v88 = v16;
            v90 = v16;
            v91 = &v178[4];
            v17 = (_WORD)v6 << 6;
            v93 = &v178[1];
            v95 = (char *)&v35 + 4;
            v35 = v178[3];
            v97 = &v35;
            v99 = &v178[5];
            v101 = (char *)&v178[5] + 4;
            v40 = BYTE4(v178[7]);
            v103 = (unsigned __int16 *)&v40;
            v44 = v178[8];
            v105 = (struct DISPLAYCONFIG_PATH_INFO *)&v44;
            v107 = (char *)&v178[10] + 4;
            v109 = (struct DISPLAYCONFIG_MODE_INFO *)((char *)&v178[6] + 4);
            v111 = (__int16 *)&v178[10];
            v113 = (struct _DXGK_DIAG_HEADER *)&v178[7];
            v115 = (char *)&v39 + 4;
            v39 = v178[9];
            v117 = &v39;
            v119 = &v178[11];
            v121 = (char *)&v178[11] + 4;
            v123 = (int *)&v26;
            v127 = (char *)&v28;
            LODWORD(v130) = v17;
            v18 = *((unsigned __int16 *)a1 + 2);
            v26 = 144;
            v126 = 144LL;
            v27 = v18;
            v92 = v16;
            v94 = v16;
            v96 = v16;
            v98 = v16;
            v100 = v16;
            v102 = v16;
            v104 = v16;
            v106 = 8LL;
            v108 = v16;
            v110 = v16;
            v112 = v16;
            v114 = v16;
            v116 = v16;
            v118 = v16;
            v120 = v16;
            v122 = v16;
            v124 = 2LL;
            v125 = v3;
            LOWORD(v28) = v17;
            v128 = 2LL;
            v129 = v5;
            HIDWORD(v130) = (_DWORD)v15;
            v131 = &v27;
            v132 = 2LL;
            v133 = a1;
            v134 = __PAIR64__((unsigned int)v15, v18);
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0050DF1, 0LL, v15, 0x2Cu, &v50);
          }
          break;
        case 3u:
          if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000001uLL) )
          {
            v52 = v12;
            v51 = &unk_1C00541E4;
            v53 = (char *)a1 + 40;
            v55 = (char *)a1 + 32;
            v34 = *(_DWORD *)a1;
            v57 = &v34;
            v59 = (char *)a1 + 44;
            v61 = (char *)a1 + 80;
            v63 = (char *)a1 + 72;
            v65 = &v37;
            v67 = &v38;
            v69 = (char *)a1 + 60;
            v33 = *((_DWORD *)a1 + 16);
            v71 = &v33;
            v54 = v12;
            v32 = (v2 >> 2) & 1;
            v73 = &v32;
            v31 = (v2 >> 1) & 1;
            v56 = 8LL;
            v75 = &v31;
            v77 = &v30;
            v79 = &v29;
            v81 = (char *)a1 + 68;
            v36 = BYTE4(v178[1]);
            v83 = (unsigned __int16 *)&v36;
            v43 = v178[2];
            v85 = (struct _DXGK_DIAG_HEADER *)&v43;
            v87 = (char *)&v178[4] + 4;
            v89 = (char *)v178 + 4;
            v58 = v12;
            v60 = v12;
            v62 = 8LL;
            v64 = v12;
            v66 = v12;
            v68 = v12;
            v70 = v12;
            v72 = v12;
            v74 = v12;
            v76 = v12;
            v30 = v2 & 1;
            v78 = v12;
            v29 = (v2 >> 3) & 1;
            v80 = v12;
            v82 = v12;
            v84 = v12;
            v86 = 8LL;
            v88 = v12;
            v90 = v12;
            v91 = &v178[4];
            v93 = &v178[1];
            v95 = (char *)&v35 + 4;
            v35 = v178[3];
            v97 = &v35;
            v99 = &v178[5];
            v101 = (char *)&v178[5] + 4;
            v40 = BYTE4(v178[7]);
            v103 = (unsigned __int16 *)&v40;
            v44 = v178[8];
            v105 = (struct DISPLAYCONFIG_PATH_INFO *)&v44;
            v107 = (char *)&v178[10] + 4;
            v109 = (struct DISPLAYCONFIG_MODE_INFO *)((char *)&v178[6] + 4);
            v111 = (__int16 *)&v178[10];
            v113 = (struct _DXGK_DIAG_HEADER *)&v178[7];
            v115 = (char *)&v39 + 4;
            v39 = v178[9];
            v117 = &v39;
            v119 = &v178[11];
            v121 = (char *)&v178[11] + 4;
            v42 = BYTE4(v178[13]);
            v123 = &v42;
            v48 = v178[14];
            v125 = (struct DISPLAYCONFIG_PATH_INFO *)&v48;
            v127 = (char *)&v178[16] + 4;
            v129 = (struct DISPLAYCONFIG_MODE_INFO *)((char *)&v178[12] + 4);
            v131 = (__int16 *)&v178[16];
            v133 = (struct _DXGK_DIAG_HEADER *)&v178[13];
            v92 = v12;
            v94 = v12;
            v96 = v12;
            v98 = v12;
            v100 = v12;
            v102 = v12;
            v104 = v12;
            v106 = 8LL;
            v108 = v12;
            v110 = v12;
            v112 = v12;
            v114 = v12;
            v116 = v12;
            v118 = v12;
            v120 = v12;
            v122 = v12;
            v124 = v12;
            v126 = 8LL;
            v128 = v12;
            v130 = v12;
            v132 = v12;
            v134 = v12;
            v135 = (int *)&v41 + 1;
            v41 = v178[15];
            v137 = (int *)&v41;
            v139 = &v178[17];
            v141 = (char *)&v178[17] + 4;
            v143 = &v26;
            v13 = (_WORD)v6 << 6;
            v147 = (char *)&v28;
            LODWORD(v150) = v13;
            v14 = *((unsigned __int16 *)a1 + 2);
            v26 = 216;
            v146 = 216LL;
            v27 = v14;
            v154 = __PAIR64__((unsigned int)v11, v14);
            v136 = v12;
            v138 = v12;
            v140 = v12;
            v142 = v12;
            v144 = 2LL;
            v145 = v3;
            LOWORD(v28) = v13;
            v148 = 2LL;
            v149 = v5;
            HIDWORD(v150) = (_DWORD)v11;
            v151 = &v27;
            v152 = 2LL;
            v153 = a1;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0050AAB, 0LL, v11, 0x36u, &v50);
          }
          break;
        default:
          if ( hProvider > 4u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000001uLL) )
            {
              v52 = v8;
              v51 = &unk_1C00541E4;
              v53 = (char *)a1 + 40;
              v55 = (char *)a1 + 32;
              v45 = *(_DWORD *)a1;
              v57 = &v45;
              v59 = (char *)a1 + 44;
              v61 = (char *)a1 + 80;
              v63 = (char *)a1 + 72;
              v65 = &v37;
              v67 = &v38;
              v69 = (char *)a1 + 60;
              v46 = *((_DWORD *)a1 + 16);
              v71 = &v46;
              v54 = v8;
              v47 = (v2 >> 2) & 1;
              v73 = &v47;
              LODWORD(v41) = (v2 >> 1) & 1;
              v56 = 8LL;
              v75 = (int *)&v41;
              v77 = (int *)&v41 + 1;
              v79 = &v42;
              v81 = (char *)a1 + 68;
              LODWORD(v39) = BYTE4(v178[1]);
              v83 = (unsigned __int16 *)&v39;
              v49 = v178[2];
              v85 = (struct _DXGK_DIAG_HEADER *)&v49;
              v87 = (char *)&v178[4] + 4;
              v89 = (char *)v178 + 4;
              v58 = v8;
              v60 = v8;
              v62 = 8LL;
              v64 = v8;
              v66 = v8;
              v68 = v8;
              v70 = v8;
              v72 = v8;
              v74 = v8;
              v76 = v8;
              HIDWORD(v41) = v2 & 1;
              v78 = v8;
              v42 = (v2 >> 3) & 1;
              v80 = v8;
              v82 = v8;
              v84 = v8;
              v86 = 8LL;
              v88 = v8;
              v90 = v8;
              v91 = &v178[4];
              v93 = &v178[1];
              HIDWORD(v39) = HIDWORD(v178[3]);
              v95 = (char *)&v39 + 4;
              v40 = v178[3];
              v97 = (__int64 *)&v40;
              v99 = &v178[5];
              v101 = (char *)&v178[5] + 4;
              LODWORD(v35) = BYTE4(v178[7]);
              v103 = (unsigned __int16 *)&v35;
              v48 = v178[8];
              v105 = (struct DISPLAYCONFIG_PATH_INFO *)&v48;
              v107 = (char *)&v178[10] + 4;
              v109 = (struct DISPLAYCONFIG_MODE_INFO *)((char *)&v178[6] + 4);
              v111 = (__int16 *)&v178[10];
              v113 = (struct _DXGK_DIAG_HEADER *)&v178[7];
              HIDWORD(v35) = HIDWORD(v178[9]);
              v115 = (char *)&v35 + 4;
              v36 = v178[9];
              v117 = (__int64 *)&v36;
              v119 = &v178[11];
              v121 = (char *)&v178[11] + 4;
              v29 = BYTE4(v178[13]);
              v123 = &v29;
              v44 = v178[14];
              v125 = (struct DISPLAYCONFIG_PATH_INFO *)&v44;
              v127 = (char *)&v178[16] + 4;
              v129 = (struct DISPLAYCONFIG_MODE_INFO *)((char *)&v178[12] + 4);
              v131 = (__int16 *)&v178[16];
              v133 = (struct _DXGK_DIAG_HEADER *)&v178[13];
              v92 = v8;
              v94 = v8;
              v96 = v8;
              v98 = v8;
              v100 = v8;
              v102 = v8;
              v104 = v8;
              v106 = 8LL;
              v108 = v8;
              v110 = v8;
              v112 = v8;
              v114 = v8;
              v116 = v8;
              v118 = v8;
              v120 = v8;
              v122 = v8;
              v124 = v8;
              v126 = 8LL;
              v128 = v8;
              v130 = v8;
              v132 = v8;
              v134 = v8;
              v30 = HIDWORD(v178[15]);
              v135 = &v30;
              v31 = v178[15];
              v137 = &v31;
              v139 = &v178[17];
              v141 = (char *)&v178[17] + 4;
              v32 = BYTE4(v178[19]);
              v143 = (unsigned __int16 *)&v32;
              v43 = v178[20];
              v145 = (struct DISPLAYCONFIG_PATH_INFO *)&v43;
              v147 = (char *)&v178[22] + 4;
              v149 = (struct DISPLAYCONFIG_MODE_INFO *)((char *)&v178[18] + 4);
              v151 = (__int16 *)&v178[22];
              v153 = (struct _DXGK_DIAG_HEADER *)&v178[19];
              v33 = HIDWORD(v178[21]);
              v155 = &v33;
              v34 = v178[21];
              v157 = &v34;
              v159 = &v178[23];
              v161 = (char *)&v178[23] + 4;
              v136 = v8;
              v9 = 72 * v4;
              v163 = &v27;
              v166 = v9;
              v10 = (_WORD)v6 << 6;
              v168 = &v28;
              v171 = v10;
              v26 = *((_WORD *)a1 + 2);
              v138 = v8;
              v140 = v8;
              v142 = v8;
              v144 = v8;
              v146 = 8LL;
              v148 = v8;
              v150 = v8;
              v152 = v8;
              v154 = v8;
              v156 = v8;
              v158 = v8;
              v160 = v8;
              v162 = v8;
              v27 = v9;
              v164 = 2LL;
              v165 = v3;
              v167 = (int)v7;
              LOWORD(v28) = v10;
              v169 = 2LL;
              v170 = v5;
              v172 = (int)v7;
              v173 = &v26;
              v174 = 2LL;
              v175 = a1;
              v176 = v26;
              v177 = (int)v7;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C00506B3, 0LL, v7, 0x40u, &v50);
            }
          }
          break;
      }
    }
    else if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000001uLL) )
    {
      v52 = v24;
      v51 = &unk_1C00541E4;
      v54 = v24;
      v53 = (char *)a1 + 40;
      v55 = (char *)a1 + 32;
      v34 = *(_DWORD *)a1;
      v57 = &v34;
      v59 = (char *)a1 + 44;
      v61 = (char *)a1 + 80;
      v63 = (char *)a1 + 72;
      v65 = &v37;
      v67 = &v38;
      v69 = (char *)a1 + 60;
      v33 = *((_DWORD *)a1 + 16);
      v71 = &v33;
      v56 = 8LL;
      v32 = (v2 >> 2) & 1;
      v73 = &v32;
      v31 = (v2 >> 1) & 1;
      v58 = v24;
      v75 = &v31;
      v77 = &v30;
      v79 = &v29;
      v81 = (char *)a1 + 68;
      v26 = *((_WORD *)a1 + 2);
      LODWORD(v86) = v26;
      v60 = v24;
      v62 = 8LL;
      v64 = v24;
      v66 = v24;
      v68 = v24;
      v70 = v24;
      v72 = v24;
      v74 = v24;
      v76 = v24;
      v30 = v2 & 1;
      v78 = v24;
      v29 = (v2 >> 3) & 1;
      v80 = v24;
      v82 = v24;
      v83 = &v26;
      v84 = 2LL;
      v85 = a1;
      HIDWORD(v86) = (_DWORD)v23;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0051267, 0LL, v23, 0x14u, &v50);
    }
  }
}
