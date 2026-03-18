/*
 * XREFs of ?CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z @ 0x1C001B764
 * Callers:
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z @ 0x1C001B4FC (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z.c)
 *     ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C001C8FC (-CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1C000C4FC (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1C001C648 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C001C674 (_TlgWrite.c)
 *     ?CitpAudioStatSnapDelta@@YAXPEAU_CIT_AUDIO_STATS@@@Z @ 0x1C0091AE8 (-CitpAudioStatSnapDelta@@YAXPEAU_CIT_AUDIO_STATS@@@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

void __fastcall CitpInteractionSummaryStopTracking(struct _CIT_INTERACTION_SUMMARY *a1, int a2)
{
  struct _CIT_INTERACTION_SUMMARY *v2; // r11
  __int64 v4; // rcx
  struct _CIT_INTERACTION_SUMMARY **v5; // rax
  _DWORD *v6; // r12
  _DWORD *v7; // r13
  struct _CIT_AUDIO_STATS **v8; // rbx
  __int64 v9; // rdi
  struct _CIT_IMPACT_CONTEXT *v10; // rdi
  char *v11; // r15
  char *v12; // r14
  char *v13; // rsi
  const GUID *v14; // r9
  int v15; // r10d
  __int64 v16; // r11
  int v17; // eax
  int v18; // eax
  __int64 v19; // r10
  const WCHAR *v20; // rbx
  const WCHAR *v21; // r9
  __int64 v22; // r10
  __int64 v23; // r11
  int v24; // eax
  int v25; // eax
  _BYTE v26[3]; // [rsp+38h] [rbp-D0h] BYREF
  char v27; // [rsp+3Bh] [rbp-CDh] BYREF
  __int16 v28; // [rsp+3Ch] [rbp-CCh] BYREF
  __int16 v29; // [rsp+3Eh] [rbp-CAh] BYREF
  __int64 v30; // [rsp+40h] [rbp-C8h] BYREF
  LPCWSTR v31; // [rsp+48h] [rbp-C0h] BYREF
  LPCWSTR pwsz; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v34[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+70h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+A8h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+B8h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+C8h] [rbp-40h] BYREF
  const GUID *v41; // [rsp+D8h] [rbp-30h]
  __int64 v42; // [rsp+E0h] [rbp-28h]
  __int64 *v43; // [rsp+E8h] [rbp-20h]
  __int64 v44; // [rsp+F0h] [rbp-18h]
  char *v45; // [rsp+F8h] [rbp-10h]
  __int64 v46; // [rsp+100h] [rbp-8h]
  _BYTE *v47; // [rsp+108h] [rbp+0h]
  __int64 v48; // [rsp+110h] [rbp+8h]
  _BYTE *v49; // [rsp+118h] [rbp+10h]
  __int64 v50; // [rsp+120h] [rbp+18h]
  LPCWSTR *v51; // [rsp+128h] [rbp+20h]
  __int64 v52; // [rsp+130h] [rbp+28h]
  __int64 v53; // [rsp+138h] [rbp+30h]
  __int64 v54; // [rsp+140h] [rbp+38h]
  __int64 *v55; // [rsp+148h] [rbp+40h]
  __int64 v56; // [rsp+150h] [rbp+48h]
  __int16 *v57; // [rsp+158h] [rbp+50h]
  __int64 v58; // [rsp+160h] [rbp+58h]
  __int64 *v59; // [rsp+168h] [rbp+60h]
  __int64 v60; // [rsp+170h] [rbp+68h]
  __int64 v61; // [rsp+178h] [rbp+70h]
  __int64 v62; // [rsp+180h] [rbp+78h] BYREF
  __int64 *v63; // [rsp+188h] [rbp+80h]
  __int64 v64; // [rsp+190h] [rbp+88h]
  char *v65; // [rsp+198h] [rbp+90h]
  __int64 v66; // [rsp+1A0h] [rbp+98h]
  char *v67; // [rsp+1A8h] [rbp+A0h]
  __int64 v68; // [rsp+1B0h] [rbp+A8h]
  __int16 *v69; // [rsp+1B8h] [rbp+B0h]
  __int64 v70; // [rsp+1C0h] [rbp+B8h]
  __int64 *v71; // [rsp+1C8h] [rbp+C0h]
  __int64 v72; // [rsp+1D0h] [rbp+C8h]
  char *v73; // [rsp+1D8h] [rbp+D0h]
  __int64 v74; // [rsp+1E0h] [rbp+D8h] BYREF
  char *v75; // [rsp+1E8h] [rbp+E0h]
  __int64 v76; // [rsp+1F0h] [rbp+E8h]
  char *v77; // [rsp+1F8h] [rbp+F0h]
  __int64 v78; // [rsp+200h] [rbp+F8h]
  char *v79; // [rsp+208h] [rbp+100h]
  __int64 v80; // [rsp+210h] [rbp+108h]
  char *v81; // [rsp+218h] [rbp+110h]
  __int64 v82; // [rsp+220h] [rbp+118h]
  _BYTE *v83; // [rsp+228h] [rbp+120h]
  __int64 v84; // [rsp+230h] [rbp+128h]
  __int16 *v85; // [rsp+238h] [rbp+130h]
  __int64 v86; // [rsp+240h] [rbp+138h]
  int *v87; // [rsp+248h] [rbp+140h]
  __int64 v88; // [rsp+250h] [rbp+148h]
  int *v89; // [rsp+258h] [rbp+150h]
  __int64 v90; // [rsp+260h] [rbp+158h]
  unsigned int *v91; // [rsp+268h] [rbp+160h]
  __int64 v92; // [rsp+270h] [rbp+168h]
  int *v93; // [rsp+278h] [rbp+170h]
  __int64 v94; // [rsp+280h] [rbp+178h]
  _BYTE *v95; // [rsp+288h] [rbp+180h]
  __int64 v96; // [rsp+290h] [rbp+188h]
  __int16 *v97; // [rsp+298h] [rbp+190h]
  __int64 v98; // [rsp+2A0h] [rbp+198h]
  int *v99; // [rsp+2A8h] [rbp+1A0h]
  __int64 v100; // [rsp+2B0h] [rbp+1A8h]
  int *v101; // [rsp+2B8h] [rbp+1B0h]
  __int64 v102; // [rsp+2C0h] [rbp+1B8h]
  unsigned int *v103; // [rsp+2C8h] [rbp+1C0h]
  __int64 v104; // [rsp+2D0h] [rbp+1C8h]
  int *v105; // [rsp+2D8h] [rbp+1D0h]
  __int64 v106; // [rsp+2E0h] [rbp+1D8h]
  char *v107; // [rsp+2E8h] [rbp+1E0h]
  __int64 v108; // [rsp+2F0h] [rbp+1E8h]
  __int64 v109; // [rsp+2F8h] [rbp+1F0h]
  __int64 v110; // [rsp+300h] [rbp+1F8h]
  LPCWSTR *v111; // [rsp+308h] [rbp+200h]
  __int64 v112; // [rsp+310h] [rbp+208h]
  __int64 *v113; // [rsp+318h] [rbp+210h]
  __int64 v114; // [rsp+320h] [rbp+218h]
  _QWORD *v115; // [rsp+328h] [rbp+220h]
  __int64 v116; // [rsp+330h] [rbp+228h]
  char *v117; // [rsp+338h] [rbp+230h]
  __int64 v118; // [rsp+340h] [rbp+238h]
  __int64 v119; // [rsp+348h] [rbp+240h]
  __int64 v120; // [rsp+350h] [rbp+248h]
  __int64 v121; // [rsp+358h] [rbp+250h]
  __int64 v122; // [rsp+360h] [rbp+258h]
  LPCWSTR *v123; // [rsp+368h] [rbp+260h]
  __int64 v124; // [rsp+370h] [rbp+268h]
  LPCWSTR *p_pwsz; // [rsp+378h] [rbp+270h]
  __int64 v126; // [rsp+380h] [rbp+278h]
  _QWORD *v127; // [rsp+388h] [rbp+280h]
  __int64 v128; // [rsp+390h] [rbp+288h]
  char *v129; // [rsp+398h] [rbp+290h]
  __int64 v130; // [rsp+3A0h] [rbp+298h]

  v2 = a1;
  v4 = *(_QWORD *)a1;
  if ( *(struct _CIT_INTERACTION_SUMMARY **)(v4 + 8) != v2
    || (v5 = (struct _CIT_INTERACTION_SUMMARY **)*((_QWORD *)v2 + 1), *v5 != v2) )
  {
    __fastfail(3u);
  }
  *v5 = (struct _CIT_INTERACTION_SUMMARY *)v4;
  v6 = (_DWORD *)((char *)v2 + 96);
  *(_QWORD *)(v4 + 8) = v5;
  v7 = (_DWORD *)((char *)v2 + 104);
  *((_QWORD *)v2 + 1) = v2;
  v8 = (struct _CIT_AUDIO_STATS **)v34;
  *(_QWORD *)v2 = v2;
  v9 = 2LL;
  v34[0] = (char *)v2 + 96;
  v34[1] = (char *)v2 + 104;
  do
  {
    if ( *((_BYTE *)*v8 + 3) )
      CitpAudioStatSnapDelta(*v8);
    ++v8;
    --v9;
  }
  while ( v9 );
  v10 = qword_1C0193750;
  v11 = (char *)v2 + 48;
  v12 = (char *)v2 + 32;
  v35 = *((_QWORD *)qword_1C0193750 + 98);
  LODWORD(v33) = a2 - *((_DWORD *)qword_1C0193750 + 198);
  v13 = (char *)qword_1C0193750 + 760;
  ++*((_QWORD *)qword_1C0193750 + 95);
  if ( (*((_BYTE *)v2 + 80) & 1) != 0 )
  {
    v19 = *((_QWORD *)v2 + 3);
    pwsz = &word_1C0160290;
    v20 = &word_1C0160290;
    v31 = &word_1C0160290;
    if ( *(_QWORD *)(v19 + 40) )
    {
      if ( *(_DWORD *)(v19 + 72) == 1 )
      {
        pwsz = *(LPCWSTR *)(v19 + 40);
        if ( *(_QWORD *)(v19 + 48) )
          v31 = *(LPCWSTR *)(v19 + 48);
      }
      else if ( *(_QWORD *)(v19 + 48) )
      {
        v20 = *(const WCHAR **)(v19 + 48);
      }
    }
    if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x800000000800uLL) )
    {
      TlgCreateWsz(&pDesc, v21);
      TlgCreateWsz(&v38, pwsz);
      TlgCreateWsz(&v39, v31);
      TlgCreateWsz(&v40, v20);
      v42 = 4LL;
      v43 = (__int64 *)(v22 + 64);
      v41 = (const GUID *)(v22 + 68);
      v45 = &v27;
      v44 = 4LL;
      v47 = v26;
      v49 = &v26[1];
      v51 = (LPCWSTR *)(v23 + 60);
      v53 = v23 + 60;
      v55 = &v35;
      v57 = (__int16 *)&v33;
      v59 = (__int64 *)(v23 + 116);
      v61 = v23 + 112;
      LODWORD(v30) = *(unsigned __int16 *)(v23 + 82);
      v63 = &v30;
      v65 = (char *)(v23 + 124);
      v67 = (char *)(v23 + 132);
      v28 = *(_WORD *)(v23 + 120);
      v69 = &v28;
      v71 = &v74;
      v73 = *(char **)(v23 + 136);
      v74 = *(unsigned __int16 *)(v23 + 144);
      v77 = v12 + 2;
      v79 = v12 + 4;
      v27 = 1;
      v46 = 1LL;
      *(_WORD *)v26 = 257;
      v48 = 1LL;
      v50 = 1LL;
      v52 = 16LL;
      v54 = 16LL;
      v56 = 8LL;
      v58 = 4LL;
      v60 = 4LL;
      v62 = 4LL;
      v64 = 4LL;
      v66 = 4LL;
      v68 = 4LL;
      v70 = 2LL;
      v72 = 2LL;
      v75 = v12;
      v76 = 2LL;
      v78 = 2LL;
      v80 = 2LL;
      v82 = 2LL;
      v81 = v12 + 8;
      v84 = 2LL;
      v83 = v12 + 10;
      v85 = (__int16 *)(v12 + 6);
      v89 = (int *)(v11 + 2);
      v91 = (unsigned int *)(v11 + 4);
      v93 = (int *)(v11 + 6);
      v26[2] = v11[10];
      v95 = &v26[2];
      v29 = *((_WORD *)v11 + 4);
      v97 = &v29;
      v99 = &dword_1C0193728;
      v101 = &dword_1C0193734;
      v103 = &dword_1C0193738;
      v105 = &dword_1C0193730;
      v107 = (char *)v10 + 796;
      v109 = v23 + 84;
      v111 = (LPCWSTR *)(v12 + 12);
      v113 = (__int64 *)(v23 + 76);
      v115 = (_QWORD *)(v23 + 88);
      v117 = (char *)(v23 + 90);
      v119 = v23 + 92;
      v121 = v23 + 86;
      v24 = *v6 & 0xFFFFFF;
      v86 = 2LL;
      LODWORD(v31) = v24;
      v123 = &v31;
      v25 = *v7 & 0xFFFFFF;
      v87 = (int *)v11;
      LODWORD(pwsz) = v25;
      p_pwsz = &pwsz;
      v34[0] = *(_QWORD *)(v23 + 16);
      v88 = 2LL;
      v90 = 2LL;
      v92 = 2LL;
      v94 = 2LL;
      v96 = 1LL;
      v98 = 2LL;
      v100 = 4LL;
      v102 = 4LL;
      v104 = 4LL;
      v106 = 4LL;
      v108 = 4LL;
      v110 = 2LL;
      v112 = 2LL;
      v114 = 4LL;
      v116 = 2LL;
      v118 = 2LL;
      v120 = 2LL;
      v122 = 2LL;
      v124 = 4LL;
      v126 = 4LL;
      v128 = 8LL;
      v127 = v34;
      v129 = v13;
      v130 = 8LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C016B5F5, 0LL, (LPCGUID)1, 0x33u, &pData);
    }
  }
  else if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x800000000800uLL) )
    {
      pDesc.Ptr = (ULONGLONG)v14;
      v38.Ptr = (ULONGLONG)&v26[2];
      v39.Ptr = (ULONGLONG)&v26[1];
      v43 = &v35;
      v45 = (char *)&v33;
      v47 = (_BYTE *)(v16 + 116);
      v49 = (_BYTE *)(v16 + 112);
      LODWORD(pwsz) = *(unsigned __int16 *)(v16 + 82);
      v51 = &pwsz;
      v53 = v16 + 124;
      v55 = (__int64 *)(v16 + 132);
      v29 = *(_WORD *)(v16 + 120);
      v57 = &v29;
      v59 = &v62;
      v61 = *(_QWORD *)(v16 + 136);
      LODWORD(v62) = *(unsigned __int16 *)(v16 + 144);
      v65 = v12 + 2;
      v67 = v12 + 4;
      v69 = (__int16 *)(v12 + 8);
      v71 = (__int64 *)(v12 + 10);
      v73 = v12 + 6;
      v77 = v11 + 2;
      v79 = v11 + 4;
      v81 = v11 + 6;
      v26[0] = v11[10];
      *(_QWORD *)&pDesc.Size = 16LL;
      *(_QWORD *)&v38.Size = 1LL;
      *(_WORD *)&v26[1] = 257;
      *(_QWORD *)&v39.Size = 1LL;
      v40.Ptr = (ULONGLONG)v14;
      *(_QWORD *)&v40.Size = 16LL;
      v41 = v14;
      v42 = 16LL;
      v44 = 8LL;
      v46 = 4LL;
      v48 = 4LL;
      v50 = 4LL;
      v52 = 4LL;
      v54 = 4LL;
      v56 = 4LL;
      v58 = 2LL;
      v60 = 2LL;
      HIDWORD(v62) = v15;
      v63 = (__int64 *)v12;
      v64 = 2LL;
      v66 = 2LL;
      v68 = 2LL;
      v70 = 2LL;
      v72 = 2LL;
      v74 = 2LL;
      v75 = v11;
      v76 = 2LL;
      v78 = 2LL;
      v80 = 2LL;
      v82 = 2LL;
      v83 = v26;
      v28 = *((_WORD *)v11 + 4);
      v85 = &v28;
      v87 = &dword_1C0193728;
      v89 = &dword_1C0193734;
      v91 = &dword_1C0193738;
      v93 = &dword_1C0193730;
      v95 = (char *)v10 + 796;
      v97 = (__int16 *)(v16 + 84);
      v99 = (int *)(v12 + 12);
      v101 = (int *)(v16 + 76);
      v103 = (unsigned int *)(v16 + 88);
      v105 = (int *)(v16 + 90);
      v107 = (char *)(v16 + 92);
      v109 = v16 + 86;
      v17 = *v6 & 0xFFFFFF;
      v84 = 1LL;
      LODWORD(v31) = v17;
      v111 = &v31;
      v18 = *v7 & 0xFFFFFF;
      v86 = 2LL;
      LODWORD(v30) = v18;
      v113 = &v30;
      v34[0] = *(_QWORD *)(v16 + 16);
      v115 = v34;
      v88 = 4LL;
      v90 = 4LL;
      v92 = 4LL;
      v94 = 4LL;
      v96 = 4LL;
      v98 = 2LL;
      v100 = 2LL;
      v102 = 4LL;
      v104 = 2LL;
      v106 = 2LL;
      v108 = 2LL;
      v110 = 2LL;
      v112 = 4LL;
      v114 = 4LL;
      v116 = 8LL;
      v117 = v13;
      v118 = 8LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C016B2C0, 0LL, v14, 0x2Du, &pData);
    }
  }
}
