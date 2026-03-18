/*
 * XREFs of ?CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z @ 0x1C0040CC4
 * Callers:
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z @ 0x1C0040BD8 (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z.c)
 *     ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C006A1B4 (-CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0040798 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C004E080 (_TlgCreateWsz.c)
 *     ?CitpAudioStatSnapDelta@@YAXPEAU_CIT_AUDIO_STATS@@@Z @ 0x1C006A4C0 (-CitpAudioStatSnapDelta@@YAXPEAU_CIT_AUDIO_STATS@@@Z.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 */

void __fastcall CitpInteractionSummaryStopTracking(struct _CIT_INTERACTION_SUMMARY *a1, int a2)
{
  struct _CIT_INTERACTION_SUMMARY *v2; // r11
  __int64 v4; // rcx
  struct _CIT_INTERACTION_SUMMARY **v5; // rax
  _DWORD *v6; // r12
  _DWORD *v7; // r13
  struct _CIT_AUDIO_STATS **v8; // rdi
  __int64 v9; // rsi
  struct _CIT_IMPACT_CONTEXT *v10; // rdi
  char *v11; // r15
  char *v12; // rsi
  char *v13; // r14
  const GUID *v14; // r9
  int v15; // r10d
  __int64 v16; // r11
  int v17; // eax
  int v18; // eax
  PVOID v19; // rax
  __int64 v20; // r10
  const WCHAR *v21; // r13
  const WCHAR *v22; // r12
  const WCHAR *v23; // rbx
  __int64 v24; // rax
  const WCHAR *v25; // r9
  __int64 v26; // r10
  __int64 v27; // r11
  int v28; // eax
  int v29; // eax
  LPCGUID v30; // r9
  _BYTE v31[3]; // [rsp+38h] [rbp-D0h] BYREF
  char v32; // [rsp+3Bh] [rbp-CDh] BYREF
  __int16 v33; // [rsp+3Ch] [rbp-CCh] BYREF
  __int16 v34; // [rsp+3Eh] [rbp-CAh] BYREF
  int v35; // [rsp+40h] [rbp-C8h] BYREF
  int v36; // [rsp+44h] [rbp-C4h] BYREF
  int v37; // [rsp+48h] [rbp-C0h] BYREF
  int v38; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v39; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v40[2]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v41[2]; // [rsp+68h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+A8h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+B8h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+C8h] [rbp-40h] BYREF
  const GUID *v47; // [rsp+D8h] [rbp-30h]
  __int64 v48; // [rsp+E0h] [rbp-28h]
  _QWORD *v49; // [rsp+E8h] [rbp-20h]
  __int64 v50; // [rsp+F0h] [rbp-18h]
  char *v51; // [rsp+F8h] [rbp-10h]
  __int64 v52; // [rsp+100h] [rbp-8h]
  _BYTE *v53; // [rsp+108h] [rbp+0h]
  __int64 v54; // [rsp+110h] [rbp+8h]
  _BYTE *v55; // [rsp+118h] [rbp+10h]
  __int64 v56; // [rsp+120h] [rbp+18h]
  int *v57; // [rsp+128h] [rbp+20h]
  __int64 v58; // [rsp+130h] [rbp+28h]
  __int64 v59; // [rsp+138h] [rbp+30h]
  __int64 v60; // [rsp+140h] [rbp+38h]
  _QWORD *v61; // [rsp+148h] [rbp+40h]
  __int64 v62; // [rsp+150h] [rbp+48h]
  __int16 *v63; // [rsp+158h] [rbp+50h]
  __int64 v64; // [rsp+160h] [rbp+58h]
  __int64 *v65; // [rsp+168h] [rbp+60h]
  __int64 v66; // [rsp+170h] [rbp+68h]
  __int64 v67; // [rsp+178h] [rbp+70h]
  __int64 v68; // [rsp+180h] [rbp+78h] BYREF
  int *v69; // [rsp+188h] [rbp+80h]
  __int64 v70; // [rsp+190h] [rbp+88h]
  char *v71; // [rsp+198h] [rbp+90h]
  __int64 v72; // [rsp+1A0h] [rbp+98h]
  char *v73; // [rsp+1A8h] [rbp+A0h]
  __int64 v74; // [rsp+1B0h] [rbp+A8h]
  __int16 *v75; // [rsp+1B8h] [rbp+B0h]
  __int64 v76; // [rsp+1C0h] [rbp+B8h]
  __int64 *v77; // [rsp+1C8h] [rbp+C0h]
  __int64 v78; // [rsp+1D0h] [rbp+C8h]
  char *v79; // [rsp+1D8h] [rbp+D0h]
  __int64 v80; // [rsp+1E0h] [rbp+D8h] BYREF
  char *v81; // [rsp+1E8h] [rbp+E0h]
  __int64 v82; // [rsp+1F0h] [rbp+E8h]
  char *v83; // [rsp+1F8h] [rbp+F0h]
  __int64 v84; // [rsp+200h] [rbp+F8h]
  char *v85; // [rsp+208h] [rbp+100h]
  __int64 v86; // [rsp+210h] [rbp+108h]
  char *v87; // [rsp+218h] [rbp+110h]
  __int64 v88; // [rsp+220h] [rbp+118h]
  _BYTE *v89; // [rsp+228h] [rbp+120h]
  __int64 v90; // [rsp+230h] [rbp+128h]
  __int16 *v91; // [rsp+238h] [rbp+130h]
  __int64 v92; // [rsp+240h] [rbp+138h]
  int *v93; // [rsp+248h] [rbp+140h]
  __int64 v94; // [rsp+250h] [rbp+148h]
  char *v95; // [rsp+258h] [rbp+150h]
  __int64 v96; // [rsp+260h] [rbp+158h]
  unsigned int *v97; // [rsp+268h] [rbp+160h]
  __int64 v98; // [rsp+270h] [rbp+168h]
  __int64 *v99; // [rsp+278h] [rbp+170h]
  __int64 v100; // [rsp+280h] [rbp+178h]
  _BYTE *v101; // [rsp+288h] [rbp+180h]
  __int64 v102; // [rsp+290h] [rbp+188h]
  __int16 *v103; // [rsp+298h] [rbp+190h]
  __int64 v104; // [rsp+2A0h] [rbp+198h]
  int *v105; // [rsp+2A8h] [rbp+1A0h]
  __int64 v106; // [rsp+2B0h] [rbp+1A8h]
  char *v107; // [rsp+2B8h] [rbp+1B0h]
  __int64 v108; // [rsp+2C0h] [rbp+1B8h]
  unsigned int *v109; // [rsp+2C8h] [rbp+1C0h]
  __int64 v110; // [rsp+2D0h] [rbp+1C8h]
  __int64 *v111; // [rsp+2D8h] [rbp+1D0h]
  __int64 v112; // [rsp+2E0h] [rbp+1D8h]
  char *v113; // [rsp+2E8h] [rbp+1E0h]
  __int64 v114; // [rsp+2F0h] [rbp+1E8h]
  __int64 v115; // [rsp+2F8h] [rbp+1F0h]
  __int64 v116; // [rsp+300h] [rbp+1F8h]
  int *v117; // [rsp+308h] [rbp+200h]
  __int64 v118; // [rsp+310h] [rbp+208h]
  int *v119; // [rsp+318h] [rbp+210h]
  __int64 v120; // [rsp+320h] [rbp+218h]
  _QWORD *v121; // [rsp+328h] [rbp+220h]
  __int64 v122; // [rsp+330h] [rbp+228h]
  __int64 *v123; // [rsp+338h] [rbp+230h]
  __int64 v124; // [rsp+340h] [rbp+238h]
  char *v125; // [rsp+348h] [rbp+240h]
  __int64 v126; // [rsp+350h] [rbp+248h]
  __int64 v127; // [rsp+358h] [rbp+250h]
  __int64 v128; // [rsp+360h] [rbp+258h]
  int *v129; // [rsp+368h] [rbp+260h]
  __int64 v130; // [rsp+370h] [rbp+268h]
  int *v131; // [rsp+378h] [rbp+270h]
  __int64 v132; // [rsp+380h] [rbp+278h]
  _QWORD *v133; // [rsp+388h] [rbp+280h]
  __int64 v134; // [rsp+390h] [rbp+288h]
  __int64 *v135; // [rsp+398h] [rbp+290h]
  __int64 v136; // [rsp+3A0h] [rbp+298h]
  char *v137; // [rsp+3A8h] [rbp+2A0h]
  __int64 v138; // [rsp+3B0h] [rbp+2A8h]

  v2 = a1;
  v4 = *(_QWORD *)a1;
  if ( *(struct _CIT_INTERACTION_SUMMARY **)(v4 + 8) != v2
    || (v5 = (struct _CIT_INTERACTION_SUMMARY **)*((_QWORD *)v2 + 1), *v5 != v2) )
  {
    __fastfail(3u);
  }
  *v5 = (struct _CIT_INTERACTION_SUMMARY *)v4;
  v6 = (_DWORD *)((char *)v2 + 100);
  *(_QWORD *)(v4 + 8) = v5;
  v7 = (_DWORD *)((char *)v2 + 108);
  *((_QWORD *)v2 + 1) = v2;
  v8 = (struct _CIT_AUDIO_STATS **)v40;
  *(_QWORD *)v2 = v2;
  v9 = 2LL;
  v40[0] = (char *)v2 + 100;
  v40[1] = (char *)v2 + 108;
  do
  {
    if ( *((_BYTE *)*v8 + 3) )
      CitpAudioStatSnapDelta(*v8);
    ++v8;
    --v9;
  }
  while ( v9 );
  if ( ((qword_1C01A1694 & 0x10) == 0
     || *((_WORD *)v2 + 49) != 4
     || *((_WORD *)v2 + 46)
     && *((_WORD *)v2 + 47)
     && ((*((_BYTE *)v2 + 84) & 1) != 0 || (v19 = **(PVOID **)(*((_QWORD *)v2 + 3) + 8LL)) == 0LL || v19 != g_pepDwm))
    && ((qword_1C01A1694 & 0x20) == 0
     || (*((_WORD *)v2 + 49) & 0xFFF3) != 0
     || (*((_WORD *)v2 + 49) & 8) == 0
     || *((_WORD *)v2 + 45) >= 3u
     || *((_WORD *)v2 + 46) && *((_WORD *)v2 + 47)) )
  {
    v10 = qword_1C01A16B0;
    v11 = (char *)v2 + 48;
    v12 = (char *)v2 + 32;
    LODWORD(v39) = a2 - *((_DWORD *)v2 + 19);
    v13 = (char *)qword_1C01A16B0 + 776;
    v41[0] = *((_QWORD *)qword_1C01A16B0 + 100);
    v38 = a2 - *((_DWORD *)qword_1C01A16B0 + 202);
    ++*((_QWORD *)qword_1C01A16B0 + 97);
    if ( (*((_BYTE *)v2 + 84) & 1) != 0 )
    {
      v20 = *((_QWORD *)v2 + 3);
      v21 = &pwsz;
      v22 = &pwsz;
      v23 = &pwsz;
      if ( *(_QWORD *)(v20 + 40) )
      {
        v24 = *(_QWORD *)(v20 + 48);
        if ( *(_DWORD *)(v20 + 72) == 1 )
        {
          v21 = *(const WCHAR **)(v20 + 40);
          if ( v24 )
            v22 = *(const WCHAR **)(v20 + 48);
        }
        else if ( v24 )
        {
          v23 = *(const WCHAR **)(v20 + 48);
        }
      }
      if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x800000000800uLL) )
      {
        TlgCreateWsz(&pDesc, v25);
        TlgCreateWsz(&v44, v21);
        TlgCreateWsz(&v45, v22);
        TlgCreateWsz(&v46, v23);
        v48 = 4LL;
        v49 = (_QWORD *)(v26 + 64);
        v47 = (const GUID *)(v26 + 68);
        v51 = &v32;
        v50 = 4LL;
        v53 = v31;
        v55 = &v31[1];
        v57 = (int *)(v27 + 60);
        v59 = v27 + 60;
        v61 = v41;
        v63 = (__int16 *)&v38;
        v65 = (__int64 *)(v27 + 120);
        v67 = v27 + 116;
        v35 = *(unsigned __int16 *)(v27 + 86);
        v69 = &v35;
        v71 = (char *)(v27 + 128);
        v73 = (char *)(v27 + 136);
        v33 = *(_WORD *)(v27 + 124);
        v75 = &v33;
        v77 = &v80;
        v79 = *(char **)(v27 + 144);
        v80 = *(unsigned __int16 *)(v27 + 152);
        v83 = v12 + 2;
        v85 = v12 + 4;
        v32 = 1;
        v52 = 1LL;
        *(_WORD *)v31 = 257;
        v54 = 1LL;
        v56 = 1LL;
        v58 = 16LL;
        v60 = 16LL;
        v62 = 8LL;
        v64 = 4LL;
        v66 = 4LL;
        v68 = 4LL;
        v70 = 4LL;
        v72 = 4LL;
        v74 = 4LL;
        v76 = 2LL;
        v78 = 2LL;
        v81 = v12;
        v82 = 2LL;
        v84 = 2LL;
        v86 = 2LL;
        v88 = 2LL;
        v87 = v12 + 8;
        v90 = 2LL;
        v89 = v12 + 10;
        v91 = (__int16 *)(v12 + 6);
        v95 = v11 + 2;
        v97 = (unsigned int *)(v11 + 4);
        v99 = (__int64 *)(v11 + 6);
        v31[2] = v11[10];
        v101 = &v31[2];
        v34 = *((_WORD *)v11 + 4);
        v103 = &v34;
        v105 = &dword_1C01A1688;
        v107 = (char *)&qword_1C01A1694 + 4;
        v109 = &dword_1C01A169C;
        v111 = &qword_1C01A1694;
        v113 = (char *)v10 + 812;
        v115 = v27 + 88;
        v117 = (int *)(v12 + 12);
        v119 = (int *)(v27 + 80);
        v121 = (_QWORD *)(v27 + 92);
        v123 = (__int64 *)(v27 + 94);
        v125 = (char *)(v27 + 96);
        v127 = v27 + 90;
        v28 = *(_DWORD *)(v27 + 100) & 0xFFFFFF;
        v92 = 2LL;
        v36 = v28;
        v129 = &v36;
        v29 = *(_DWORD *)(v27 + 108) & 0xFFFFFF;
        v93 = (int *)v11;
        v37 = v29;
        v131 = &v37;
        v40[0] = *(_QWORD *)(v27 + 16);
        v94 = 2LL;
        v96 = 2LL;
        v98 = 2LL;
        v100 = 2LL;
        v102 = 1LL;
        v104 = 2LL;
        v106 = 4LL;
        v108 = 4LL;
        v110 = 4LL;
        v112 = 4LL;
        v114 = 4LL;
        v116 = 2LL;
        v118 = 2LL;
        v120 = 4LL;
        v122 = 2LL;
        v124 = 2LL;
        v126 = 2LL;
        v128 = 2LL;
        v130 = 4LL;
        v132 = 4LL;
        v134 = 8LL;
        v133 = v40;
        v135 = &v39;
        v136 = 4LL;
        v137 = v13;
        v138 = 8LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C01798FB, 0LL, v30, 0x34u, &pData);
      }
    }
    else if ( hProvider > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x800000000800uLL) )
      {
        pDesc.Ptr = (ULONGLONG)v14;
        v44.Ptr = (ULONGLONG)&v31[2];
        v45.Ptr = (ULONGLONG)&v31[1];
        v49 = v41;
        v51 = (char *)&v38;
        v53 = (_BYTE *)(v16 + 120);
        v55 = (_BYTE *)(v16 + 116);
        v37 = *(unsigned __int16 *)(v16 + 86);
        v57 = &v37;
        v59 = v16 + 128;
        v61 = (_QWORD *)(v16 + 136);
        v34 = *(_WORD *)(v16 + 124);
        v63 = &v34;
        v65 = &v68;
        v67 = *(_QWORD *)(v16 + 144);
        LODWORD(v68) = *(unsigned __int16 *)(v16 + 152);
        v71 = v12 + 2;
        v73 = v12 + 4;
        v75 = (__int16 *)(v12 + 8);
        v77 = (__int64 *)(v12 + 10);
        v79 = v12 + 6;
        v83 = v11 + 2;
        v85 = v11 + 4;
        v87 = v11 + 6;
        v31[0] = v11[10];
        *(_QWORD *)&pDesc.Size = 16LL;
        *(_QWORD *)&v44.Size = 1LL;
        *(_WORD *)&v31[1] = 257;
        *(_QWORD *)&v45.Size = 1LL;
        v46.Ptr = (ULONGLONG)v14;
        *(_QWORD *)&v46.Size = 16LL;
        v47 = v14;
        v48 = 16LL;
        v50 = 8LL;
        v52 = 4LL;
        v54 = 4LL;
        v56 = 4LL;
        v58 = 4LL;
        v60 = 4LL;
        v62 = 4LL;
        v64 = 2LL;
        v66 = 2LL;
        HIDWORD(v68) = v15;
        v69 = (int *)v12;
        v70 = 2LL;
        v72 = 2LL;
        v74 = 2LL;
        v76 = 2LL;
        v78 = 2LL;
        v80 = 2LL;
        v81 = v11;
        v82 = 2LL;
        v84 = 2LL;
        v86 = 2LL;
        v88 = 2LL;
        v89 = v31;
        v33 = *((_WORD *)v11 + 4);
        v91 = &v33;
        v93 = &dword_1C01A1688;
        v95 = (char *)&qword_1C01A1694 + 4;
        v97 = &dword_1C01A169C;
        v99 = &qword_1C01A1694;
        v101 = (char *)v10 + 812;
        v103 = (__int16 *)(v16 + 88);
        v105 = (int *)(v12 + 12);
        v107 = (char *)(v16 + 80);
        v109 = (unsigned int *)(v16 + 92);
        v111 = (__int64 *)(v16 + 94);
        v113 = (char *)(v16 + 96);
        v115 = v16 + 90;
        v17 = *v6 & 0xFFFFFF;
        v90 = 1LL;
        v36 = v17;
        v117 = &v36;
        v18 = *v7 & 0xFFFFFF;
        v92 = 2LL;
        v35 = v18;
        v119 = &v35;
        v40[0] = *(_QWORD *)(v16 + 16);
        v121 = v40;
        v123 = &v39;
        v94 = 4LL;
        v96 = 4LL;
        v98 = 4LL;
        v100 = 4LL;
        v102 = 4LL;
        v104 = 2LL;
        v106 = 2LL;
        v108 = 4LL;
        v110 = 2LL;
        v112 = 2LL;
        v114 = 2LL;
        v116 = 2LL;
        v118 = 4LL;
        v120 = 4LL;
        v122 = 8LL;
        v124 = 4LL;
        v125 = v13;
        v126 = 8LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C01795AB, 0LL, v14, 0x2Eu, &pData);
      }
    }
  }
}
