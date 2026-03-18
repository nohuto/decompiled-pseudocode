/*
 * XREFs of ?CitpDPDataLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C01610DC
 * Callers:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C003FDE0 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C0160038 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 * Callees:
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C003BDB8 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     _TlgKeywordOn @ 0x1C0040798 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?CitDPMemoizationInitialize@@YAXPEAU_CIT_DP_MEMOIZATION_CONTEXT@@PEBU_CIT_DP_CALC_CONTEXT@@II@Z @ 0x1C015FF30 (-CitDPMemoizationInitialize@@YAXPEAU_CIT_DP_MEMOIZATION_CONTEXT@@PEBU_CIT_DP_CALC_CONTEXT@@II@Z.c)
 *     ?CitpDPCalcInit@@YAXPEAU_CIT_DP_CALC_CONTEXT@@NN@Z @ 0x1C0160DA4 (-CitpDPCalcInit@@YAXPEAU_CIT_DP_CALC_CONTEXT@@NN@Z.c)
 *     ?CitpDPDataSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0161834 (-CitpDPDataSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpDPProcessDuration@@YAIPEBU_CIT_DP_MEMOIZATION_CONTEXT@@PEBU_CIT_DP_CALC_CONTEXT@@II@Z @ 0x1C01619B8 (-CitpDPProcessDuration@@YAIPEBU_CIT_DP_MEMOIZATION_CONTEXT@@PEBU_CIT_DP_CALC_CONTEXT@@II@Z.c)
 */

void __fastcall CitpDPDataLog(struct _CIT_IMPACT_CONTEXT *a1)
{
  char *v1; // rbx
  int v3; // edi
  double v4; // xmm6_8
  unsigned int v5; // r9d
  const struct _CIT_DP_MEMOIZATION_CONTEXT *v6; // r14
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // r12
  unsigned int v21; // r15d
  unsigned int v22; // ebx
  _DWORD *v23; // rsi
  unsigned int v24; // r9d
  __int64 v25; // r10
  const GUID *v26; // r9
  float v27; // xmm0_4
  unsigned int v28; // r9d
  __int64 v29; // r10
  const GUID *v30; // r9
  float v31; // xmm0_4
  const GUID *v32; // r9
  float v33; // xmm0_4
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  char *v41; // rbx
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int64 v47; // rax
  char v48; // [rsp+38h] [rbp-D0h] BYREF
  char v49; // [rsp+39h] [rbp-CFh] BYREF
  char v50; // [rsp+3Ah] [rbp-CEh] BYREF
  char v51; // [rsp+3Bh] [rbp-CDh] BYREF
  char v52; // [rsp+3Ch] [rbp-CCh] BYREF
  char v53; // [rsp+3Dh] [rbp-CBh] BYREF
  __int16 v54; // [rsp+3Eh] [rbp-CAh] BYREF
  __int16 v55; // [rsp+40h] [rbp-C8h] BYREF
  __int16 v56; // [rsp+42h] [rbp-C6h] BYREF
  unsigned int v57; // [rsp+44h] [rbp-C4h] BYREF
  float v58; // [rsp+48h] [rbp-C0h] BYREF
  float v59; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v60; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v61; // [rsp+54h] [rbp-B4h] BYREF
  float v62; // [rsp+58h] [rbp-B0h] BYREF
  float v63; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v64; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v65; // [rsp+64h] [rbp-A4h] BYREF
  float v66; // [rsp+68h] [rbp-A0h] BYREF
  float v67; // [rsp+6Ch] [rbp-9Ch] BYREF
  unsigned int v68; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v69; // [rsp+74h] [rbp-94h] BYREF
  unsigned int v70; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v71; // [rsp+7Ch] [rbp-8Ch] BYREF
  _BYTE v72[80]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v73; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v74; // [rsp+E8h] [rbp-20h]
  __int128 v75; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v76; // [rsp+108h] [rbp+0h]
  __int128 v77; // [rsp+118h] [rbp+10h]
  __int128 v78; // [rsp+128h] [rbp+20h]
  __int128 v79; // [rsp+138h] [rbp+30h]
  __int128 v80; // [rsp+148h] [rbp+40h]
  __int128 v81; // [rsp+158h] [rbp+50h]
  __int128 v82; // [rsp+168h] [rbp+60h]
  __int128 v83; // [rsp+178h] [rbp+70h]
  __int128 v84; // [rsp+188h] [rbp+80h]
  __int128 v85; // [rsp+198h] [rbp+90h]
  __int128 v86; // [rsp+1A8h] [rbp+A0h]
  __int64 v87; // [rsp+1B8h] [rbp+B0h]
  EVENT_DATA_DESCRIPTOR v88; // [rsp+1C8h] [rbp+C0h] BYREF
  char *v89; // [rsp+1E8h] [rbp+E0h]
  __int64 v90; // [rsp+1F0h] [rbp+E8h]
  char *v91; // [rsp+1F8h] [rbp+F0h]
  __int64 v92; // [rsp+200h] [rbp+F8h]
  unsigned int *v93; // [rsp+208h] [rbp+100h]
  __int64 v94; // [rsp+210h] [rbp+108h]
  float *v95; // [rsp+218h] [rbp+110h]
  __int64 v96; // [rsp+220h] [rbp+118h]
  float *v97; // [rsp+228h] [rbp+120h]
  __int64 v98; // [rsp+230h] [rbp+128h]
  __int16 *v99; // [rsp+238h] [rbp+130h]
  __int64 v100; // [rsp+240h] [rbp+138h]
  unsigned int *v101; // [rsp+248h] [rbp+140h]
  __int64 v102; // [rsp+250h] [rbp+148h]
  unsigned int *v103; // [rsp+258h] [rbp+150h]
  __int64 v104; // [rsp+260h] [rbp+158h]
  unsigned int *v105; // [rsp+268h] [rbp+160h]
  __int64 v106; // [rsp+270h] [rbp+168h]
  char *v107; // [rsp+278h] [rbp+170h]
  __int64 v108; // [rsp+280h] [rbp+178h]
  char *v109; // [rsp+288h] [rbp+180h]
  __int64 v110; // [rsp+290h] [rbp+188h]
  char *v111; // [rsp+298h] [rbp+190h]
  __int64 v112; // [rsp+2A0h] [rbp+198h]
  unsigned int *v113; // [rsp+2A8h] [rbp+1A0h]
  __int64 v114; // [rsp+2B0h] [rbp+1A8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2B8h] [rbp+1B0h] BYREF
  char *v116; // [rsp+2D8h] [rbp+1D0h]
  __int64 v117; // [rsp+2E0h] [rbp+1D8h]
  char *v118; // [rsp+2E8h] [rbp+1E0h]
  __int64 v119; // [rsp+2F0h] [rbp+1E8h]
  unsigned int *v120; // [rsp+2F8h] [rbp+1F0h]
  __int64 v121; // [rsp+300h] [rbp+1F8h]
  float *v122; // [rsp+308h] [rbp+200h]
  __int64 v123; // [rsp+310h] [rbp+208h]
  float *v124; // [rsp+318h] [rbp+210h]
  __int64 v125; // [rsp+320h] [rbp+218h]
  __int16 *v126; // [rsp+328h] [rbp+220h]
  __int64 v127; // [rsp+330h] [rbp+228h]
  unsigned int *v128; // [rsp+338h] [rbp+230h]
  __int64 v129; // [rsp+340h] [rbp+238h]
  unsigned int *v130; // [rsp+348h] [rbp+240h]
  __int64 v131; // [rsp+350h] [rbp+248h]
  EVENT_DATA_DESCRIPTOR v132; // [rsp+358h] [rbp+250h] BYREF
  char *v133; // [rsp+378h] [rbp+270h]
  __int64 v134; // [rsp+380h] [rbp+278h]
  char *v135; // [rsp+388h] [rbp+280h]
  __int64 v136; // [rsp+390h] [rbp+288h]
  unsigned int *v137; // [rsp+398h] [rbp+290h]
  __int64 v138; // [rsp+3A0h] [rbp+298h]
  float *v139; // [rsp+3A8h] [rbp+2A0h]
  __int64 v140; // [rsp+3B0h] [rbp+2A8h]
  float *v141; // [rsp+3B8h] [rbp+2B0h]
  __int64 v142; // [rsp+3C0h] [rbp+2B8h]
  __int16 *v143; // [rsp+3C8h] [rbp+2C0h]
  __int64 v144; // [rsp+3D0h] [rbp+2C8h]
  unsigned int *v145; // [rsp+3D8h] [rbp+2D0h]
  __int64 v146; // [rsp+3E0h] [rbp+2D8h]
  unsigned int *v147; // [rsp+3E8h] [rbp+2E0h]
  __int64 v148; // [rsp+3F0h] [rbp+2E8h]

  v1 = (char *)a1 + 528;
  v3 = 0x546000u / HIBYTE(word_1C01A16A6);
  v4 = 8.0 / (double)(unsigned __int8)word_1C01A16A6;
  CitpDPCalcInit((struct _CIT_DP_CALC_CONTEXT *)v72, v4, (double)((unk_1C01A16A4 >> 2) & 0xF) * 0.025);
  v6 = (const struct _CIT_DP_MEMOIZATION_CONTEXT *)(v1 + 88);
  if ( *((double *)v1 + 11) != v4 || *((_DWORD *)v1 + 24) != v3 )
    CitDPMemoizationInitialize(
      (struct _CIT_DP_MEMOIZATION_CONTEXT *)(v1 + 88),
      (const struct _CIT_DP_CALC_CONTEXT *)v72,
      v3,
      v5);
  CitpStatIncrement((unsigned __int16 *)v1 + 2, 1);
  v7 = *((_OWORD *)v1 + 1);
  v73 = *(_OWORD *)v1;
  v8 = *((_OWORD *)v1 + 2);
  v74 = v7;
  v9 = *((_OWORD *)v1 + 3);
  v75 = v8;
  v10 = *((_OWORD *)v1 + 4);
  v76 = v9;
  v11 = *((_OWORD *)v1 + 5);
  v77 = v10;
  v12 = *((_OWORD *)v1 + 6);
  v78 = v11;
  v13 = *((_OWORD *)v1 + 8);
  v79 = v12;
  v80 = *((_OWORD *)v1 + 7);
  v14 = *((_OWORD *)v1 + 9);
  v81 = v13;
  v15 = *((_OWORD *)v1 + 10);
  v82 = v14;
  v16 = *((_OWORD *)v1 + 11);
  v83 = v15;
  v17 = *((_OWORD *)v1 + 12);
  v84 = v16;
  v18 = *((_OWORD *)v1 + 13);
  v19 = *((_QWORD *)v1 + 28);
  v85 = v17;
  v86 = v18;
  v87 = v19;
  v20 = MEMORY[0xFFFFF78000000014];
  v21 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - *((_DWORD *)a1 + 190);
  *((_DWORD *)a1 + 190) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *((_QWORD *)v1 + 4) = v20;
  memset(v1 + 40, 0, 0x2CuLL);
  if ( (int)CitpDPDataSave(a1) < 0 )
  {
    v34 = v74;
    *(_OWORD *)v1 = v73;
    v35 = v75;
    *((_OWORD *)v1 + 1) = v34;
    v36 = v76;
    *((_OWORD *)v1 + 2) = v35;
    v37 = v77;
    *((_OWORD *)v1 + 3) = v36;
    v38 = v78;
    *((_OWORD *)v1 + 4) = v37;
    v39 = v79;
    *((_OWORD *)v1 + 5) = v38;
    v40 = v80;
    *((_OWORD *)v1 + 6) = v39;
    v41 = v1 + 128;
    *((_OWORD *)v41 - 1) = v40;
    v42 = v82;
    *(_OWORD *)v41 = v81;
    v43 = v83;
    *((_OWORD *)v41 + 1) = v42;
    v44 = v84;
    *((_OWORD *)v41 + 2) = v43;
    v45 = v85;
    *((_OWORD *)v41 + 3) = v44;
    v46 = v86;
    v47 = v87;
    *((_OWORD *)v41 + 4) = v45;
    *((_OWORD *)v41 + 5) = v46;
    *((_QWORD *)v41 + 12) = v47;
  }
  else
  {
    v22 = 0;
    v23 = (_DWORD *)&v75 + 2;
    do
    {
      v70 = *v23 / 0x3E8u;
      v57 = CitpDPProcessDuration(v6, (const struct _CIT_DP_CALC_CONTEXT *)v72, v22, v70);
      if ( (unk_1C01A16A4 & 1) != 0 )
      {
        if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x800000000800uLL) )
        {
          v26 = (const GUID *)(v24 >> 2);
          v48 = v25 + 3;
          v27 = v4;
          v117 = v25;
          v116 = &v48;
          v49 = v22;
          v118 = &v49;
          LOWORD(v26) = (unsigned __int8)v26 & 0xF;
          v119 = v25;
          v120 = &v57;
          v122 = &v58;
          v124 = &v59;
          v126 = &v54;
          v58 = v27;
          v121 = (unsigned int)(v25 + 3);
          v128 = &v60;
          v60 = dword_1C01A16A0 / 0x3E8u;
          v59 = (float)v3;
          v123 = v121;
          v61 = v21 / 0x3E8;
          v125 = v121;
          v54 = (__int16)v26;
          v127 = 2LL;
          v129 = v121;
          v130 = &v61;
          v131 = v121;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0179E6C, 0LL, v26, 0xAu, &pData);
        }
      }
      else if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000800uLL) )
      {
        v30 = (const GUID *)(v28 >> 2);
        v50 = 4;
        v31 = v4;
        v134 = v29;
        v133 = &v50;
        v51 = v22;
        v135 = &v51;
        LOWORD(v30) = (unsigned __int8)v30 & 0xF;
        v136 = v29;
        v137 = &v57;
        v139 = &v62;
        v141 = &v63;
        v143 = &v55;
        v62 = v31;
        v138 = 4LL;
        v145 = &v64;
        v64 = dword_1C01A16A0 / 0x3E8u;
        v63 = (float)v3;
        v140 = 4LL;
        v65 = v21 / 0x3E8;
        v142 = 4LL;
        v55 = (__int16)v30;
        v144 = 2LL;
        v146 = 4LL;
        v147 = &v65;
        v148 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0179DF4, 0LL, v30, 0xAu, &v132);
      }
      if ( hProvider > 5u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000800uLL) )
        {
          v90 = 1LL;
          v52 = 4;
          v53 = v22;
          v89 = &v52;
          v92 = 1LL;
          v91 = &v53;
          v94 = 4LL;
          v93 = &v57;
          v95 = &v66;
          v97 = &v67;
          v96 = 4LL;
          v56 = (unk_1C01A16A4 >> 2) & 0xF;
          v99 = &v56;
          v33 = v4;
          v98 = 4LL;
          v101 = &v68;
          v68 = dword_1C01A16A0 / 0x3E8u;
          v66 = v33;
          v100 = 2LL;
          v103 = &v69;
          v105 = &v70;
          v107 = (char *)&v73 + 8;
          v109 = (char *)&v73 + 6;
          v111 = (char *)&v73 + 4;
          v69 = v21 / 0x3E8;
          v67 = (float)v3;
          v102 = 4LL;
          v71 = (unsigned int)v32 / 0x3E8;
          v104 = 4LL;
          v106 = 4LL;
          v108 = 2LL;
          v110 = 2LL;
          v112 = 2LL;
          v113 = &v71;
          v114 = 4LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0179D2F, 0LL, v32, 0xFu, &v88);
        }
      }
      ++v22;
      ++v23;
    }
    while ( v22 < 0xB );
  }
}
