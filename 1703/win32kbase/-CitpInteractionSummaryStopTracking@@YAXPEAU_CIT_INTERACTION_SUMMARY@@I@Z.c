/*
 * XREFs of ?CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z @ 0x1C00522F8
 * Callers:
 *     ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C0052034 (-CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0052258 (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1C00073E8 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C0052730 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00533FC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

void __fastcall CitpInteractionSummaryStopTracking(struct _CIT_INTERACTION_SUMMARY *a1, int a2)
{
  __int64 v3; // rcx
  struct _CIT_INTERACTION_SUMMARY **v4; // rax
  char *v5; // r12
  struct _CIT_IMPACT_CONTEXT *v6; // rsi
  char *v7; // r15
  char *v8; // r14
  LPCWSTR *v9; // r13
  __int64 *v10; // rbx
  const GUID *v11; // r9
  __int64 v12; // r10
  __int64 v13; // r11
  __int64 v14; // r11
  const WCHAR *v15; // rdi
  const WCHAR *v16; // r9
  __int64 v17; // r11
  __int64 v18; // r10
  __int16 v19; // [rsp+38h] [rbp-D0h] BYREF
  char v20; // [rsp+3Ah] [rbp-CEh] BYREF
  char v21; // [rsp+3Bh] [rbp-CDh] BYREF
  __int16 v22; // [rsp+3Ch] [rbp-CCh] BYREF
  __int16 v23; // [rsp+3Eh] [rbp-CAh] BYREF
  LPCWSTR pwsz; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+48h] [rbp-C0h] BYREF
  LPCWSTR v26; // [rsp+50h] [rbp-B8h]
  _QWORD v27[2]; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+98h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+A8h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+B8h] [rbp-50h] BYREF
  LPCWSTR *v33; // [rsp+C8h] [rbp-40h]
  __int64 v34; // [rsp+D0h] [rbp-38h]
  _QWORD *v35; // [rsp+D8h] [rbp-30h]
  __int64 v36; // [rsp+E0h] [rbp-28h]
  char *v37; // [rsp+E8h] [rbp-20h]
  __int64 v38; // [rsp+F0h] [rbp-18h]
  __int16 *v39; // [rsp+F8h] [rbp-10h]
  __int64 v40; // [rsp+100h] [rbp-8h]
  char *v41; // [rsp+108h] [rbp+0h]
  __int64 v42; // [rsp+110h] [rbp+8h]
  LPCWSTR *v43; // [rsp+118h] [rbp+10h]
  __int64 v44; // [rsp+120h] [rbp+18h]
  LPCWSTR *v45; // [rsp+128h] [rbp+20h]
  __int64 v46; // [rsp+130h] [rbp+28h]
  _QWORD *v47; // [rsp+138h] [rbp+30h]
  __int64 v48; // [rsp+140h] [rbp+38h]
  __int16 *v49; // [rsp+148h] [rbp+40h]
  __int64 v50; // [rsp+150h] [rbp+48h]
  __int64 *v51; // [rsp+158h] [rbp+50h]
  __int64 v52; // [rsp+160h] [rbp+58h]
  char *v53; // [rsp+168h] [rbp+60h]
  __int64 v54; // [rsp+170h] [rbp+68h] BYREF
  LPCWSTR *p_pwsz; // [rsp+178h] [rbp+70h]
  __int64 v56; // [rsp+180h] [rbp+78h]
  char *v57; // [rsp+188h] [rbp+80h]
  __int64 v58; // [rsp+190h] [rbp+88h]
  char *v59; // [rsp+198h] [rbp+90h]
  __int64 v60; // [rsp+1A0h] [rbp+98h]
  __int16 *v61; // [rsp+1A8h] [rbp+A0h]
  __int64 v62; // [rsp+1B0h] [rbp+A8h]
  __int64 *v63; // [rsp+1B8h] [rbp+B0h]
  __int64 v64; // [rsp+1C0h] [rbp+B8h]
  char *v65; // [rsp+1C8h] [rbp+C0h]
  __int64 v66; // [rsp+1D0h] [rbp+C8h] BYREF
  char *v67; // [rsp+1D8h] [rbp+D0h]
  __int64 v68; // [rsp+1E0h] [rbp+D8h]
  char *v69; // [rsp+1E8h] [rbp+E0h]
  __int64 v70; // [rsp+1F0h] [rbp+E8h]
  char *v71; // [rsp+1F8h] [rbp+F0h]
  __int64 v72; // [rsp+200h] [rbp+F8h]
  char *v73; // [rsp+208h] [rbp+100h]
  __int64 v74; // [rsp+210h] [rbp+108h]
  __int16 *v75; // [rsp+218h] [rbp+110h]
  __int64 v76; // [rsp+220h] [rbp+118h]
  __int16 *v77; // [rsp+228h] [rbp+120h]
  __int64 v78; // [rsp+230h] [rbp+128h]
  int *v79; // [rsp+238h] [rbp+130h]
  __int64 v80; // [rsp+240h] [rbp+138h]
  char *v81; // [rsp+248h] [rbp+140h]
  __int64 v82; // [rsp+250h] [rbp+148h]
  unsigned int *v83; // [rsp+258h] [rbp+150h]
  __int64 v84; // [rsp+260h] [rbp+158h]
  __int64 *v85; // [rsp+268h] [rbp+160h]
  __int64 v86; // [rsp+270h] [rbp+168h]
  char *v87; // [rsp+278h] [rbp+170h]
  __int64 v88; // [rsp+280h] [rbp+178h]
  __int16 *v89; // [rsp+288h] [rbp+180h]
  __int64 v90; // [rsp+290h] [rbp+188h]
  int *v91; // [rsp+298h] [rbp+190h]
  __int64 v92; // [rsp+2A0h] [rbp+198h]
  char *v93; // [rsp+2A8h] [rbp+1A0h]
  __int64 v94; // [rsp+2B0h] [rbp+1A8h]
  unsigned int *v95; // [rsp+2B8h] [rbp+1B0h]
  __int64 v96; // [rsp+2C0h] [rbp+1B8h]
  __int64 *v97; // [rsp+2C8h] [rbp+1C0h]
  __int64 v98; // [rsp+2D0h] [rbp+1C8h]
  __int64 v99; // [rsp+2D8h] [rbp+1D0h]
  __int64 v100; // [rsp+2E0h] [rbp+1D8h]
  char *v101; // [rsp+2E8h] [rbp+1E0h]
  __int64 v102; // [rsp+2F0h] [rbp+1E8h]
  char *v103; // [rsp+2F8h] [rbp+1F0h]
  __int64 v104; // [rsp+300h] [rbp+1F8h]
  char *v105; // [rsp+308h] [rbp+200h]
  __int64 v106; // [rsp+310h] [rbp+208h]
  __int64 v107; // [rsp+318h] [rbp+210h]
  __int64 v108; // [rsp+320h] [rbp+218h]
  __int64 *v109; // [rsp+328h] [rbp+220h]
  __int64 v110; // [rsp+330h] [rbp+228h]

  v3 = *(_QWORD *)a1;
  v4 = (struct _CIT_INTERACTION_SUMMARY **)*((_QWORD *)a1 + 1);
  if ( *(struct _CIT_INTERACTION_SUMMARY **)(v3 + 8) != a1 || *v4 != a1 )
    __fastfail(3u);
  *v4 = (struct _CIT_INTERACTION_SUMMARY *)v3;
  v5 = (char *)a1 + 76;
  *(_QWORD *)(v3 + 8) = v4;
  *((_QWORD *)a1 + 1) = a1;
  *(_QWORD *)a1 = a1;
  if ( *((_DWORD *)a1 + 19) )
  {
    v6 = qword_1C018E8C8;
    v7 = (char *)a1 + 40;
    v8 = (char *)a1 + 24;
    v9 = (LPCWSTR *)((char *)a1 + 52);
    v10 = (__int64 *)((char *)qword_1C018E8C8 + 952);
    v27[0] = *((_QWORD *)qword_1C018E8C8 + 122);
    LODWORD(v25) = a2 - *((_DWORD *)qword_1C018E8C8 + 246);
    ++*((_QWORD *)qword_1C018E8C8 + 119);
    if ( (*((_BYTE *)a1 + 72) & 1) != 0 )
    {
      v14 = *((_QWORD *)a1 + 2);
      pwsz = &word_1C0163008;
      v15 = &word_1C0163008;
      v26 = &word_1C0163008;
      if ( *(_QWORD *)(v14 + 40) )
      {
        if ( *(_DWORD *)(v14 + 72) == 1 )
        {
          pwsz = *(LPCWSTR *)(v14 + 40);
          if ( *(_QWORD *)(v14 + 48) )
            v26 = *(LPCWSTR *)(v14 + 48);
        }
        else if ( *(_QWORD *)(v14 + 48) )
        {
          v15 = *(const WCHAR **)(v14 + 48);
        }
      }
      if ( dword_1C0186860 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0186860, 0x800000000800uLL) )
      {
        TlgCreateWsz(&pDesc, v16);
        TlgCreateWsz(&v30, pwsz);
        TlgCreateWsz(&v31, v26);
        TlgCreateWsz(&v32, v15);
        v34 = 4LL;
        v35 = (_QWORD *)(v17 + 64);
        v33 = (LPCWSTR *)(v17 + 68);
        v37 = &v21;
        v36 = 4LL;
        v39 = &v19;
        v41 = (char *)&v19 + 1;
        v47 = v27;
        v21 = 1;
        v49 = (__int16 *)&v25;
        v51 = (__int64 *)(v18 + 80);
        LODWORD(pwsz) = *(unsigned __int16 *)(v18 + 74);
        p_pwsz = &pwsz;
        v57 = (char *)(v18 + 88);
        v59 = (char *)(v18 + 96);
        v22 = *(_WORD *)(v18 + 84);
        v61 = &v22;
        v63 = &v66;
        v65 = *(char **)(v18 + 112);
        v66 = *(unsigned __int16 *)(v18 + 120);
        v69 = v8 + 2;
        v71 = v8 + 4;
        v73 = v8 + 8;
        v38 = 1LL;
        v19 = 257;
        v40 = 1LL;
        v42 = 1LL;
        v43 = v9;
        v44 = 16LL;
        v45 = v9;
        v46 = 16LL;
        v48 = 8LL;
        v50 = 4LL;
        v52 = 4LL;
        v53 = v5;
        v54 = 4LL;
        v56 = 4LL;
        v58 = 4LL;
        v60 = 4LL;
        v62 = 2LL;
        v64 = 2LL;
        v67 = v8;
        v68 = 2LL;
        v70 = 2LL;
        v72 = 2LL;
        v74 = 2LL;
        v75 = (__int16 *)(v8 + 10);
        v77 = (__int16 *)(v8 + 6);
        v81 = v7 + 2;
        v83 = (unsigned int *)(v7 + 4);
        v85 = (__int64 *)(v7 + 6);
        v20 = v7[10];
        v87 = &v20;
        v23 = *((_WORD *)v7 + 4);
        v89 = &v23;
        v91 = &dword_1C018E890;
        v93 = (char *)&qword_1C018E8A0 + 4;
        v95 = &dword_1C018E8A8;
        v97 = &qword_1C018E8A0;
        v99 = v18 + 104;
        v101 = (char *)v6 + 988;
        v103 = v8 + 12;
        v105 = v8 + 14;
        v107 = v18 + 68;
        v76 = 2LL;
        v78 = 2LL;
        v79 = (int *)v7;
        v80 = 2LL;
        v82 = 2LL;
        v84 = 2LL;
        v86 = 2LL;
        v88 = 1LL;
        v90 = 2LL;
        v92 = 4LL;
        v94 = 4LL;
        v96 = 4LL;
        v98 = 4LL;
        v100 = 4LL;
        v102 = 4LL;
        v104 = 2LL;
        v106 = 2LL;
        v108 = 4LL;
        v109 = v10;
        v110 = 8LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C0186860, &unk_1C016B265, 0LL, 0LL, 0x2Du, &pData);
      }
    }
    else
    {
      ++*v10;
      if ( dword_1C0186860 > 5u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0186860, 0x800000000800uLL) )
        {
          pDesc.Ptr = (ULONGLONG)v9;
          v35 = v27;
          v30.Ptr = (ULONGLONG)&v20;
          v37 = (char *)&v25;
          *(_QWORD *)&pDesc.Size = 16LL;
          v39 = (__int16 *)(v12 + 80);
          LODWORD(pwsz) = *(unsigned __int16 *)(v12 + 74);
          v43 = &pwsz;
          v45 = (LPCWSTR *)(v12 + 88);
          v47 = (_QWORD *)(v12 + 96);
          v23 = *(_WORD *)(v12 + 84);
          v49 = &v23;
          v51 = &v54;
          v53 = *(char **)(v12 + 112);
          LODWORD(v54) = *(unsigned __int16 *)(v12 + 120);
          v57 = v8 + 2;
          v59 = v8 + 4;
          v61 = (__int16 *)(v8 + 8);
          v63 = (__int64 *)(v8 + 10);
          v65 = v8 + 6;
          v69 = v7 + 2;
          v71 = v7 + 4;
          v73 = v7 + 6;
          LOBYTE(v19) = v7[10];
          v75 = &v19;
          v20 = v13;
          *(_QWORD *)&v30.Size = v13;
          HIBYTE(v19) = v13;
          v31.Ptr = (ULONGLONG)&v19 + 1;
          *(_QWORD *)&v31.Size = v13;
          v32.Ptr = (ULONGLONG)v9;
          *(_QWORD *)&v32.Size = 16LL;
          v33 = v9;
          v34 = 16LL;
          v36 = 8LL;
          v38 = 4LL;
          v40 = 4LL;
          v41 = v5;
          v42 = 4LL;
          v44 = 4LL;
          v46 = 4LL;
          v48 = 4LL;
          v50 = 2LL;
          v52 = 2LL;
          HIDWORD(v54) = (_DWORD)v11;
          p_pwsz = (LPCWSTR *)v8;
          v56 = 2LL;
          v58 = 2LL;
          v60 = 2LL;
          v62 = 2LL;
          v64 = 2LL;
          v66 = 2LL;
          v67 = v7;
          v68 = 2LL;
          v70 = 2LL;
          v72 = 2LL;
          v74 = 2LL;
          v22 = *((_WORD *)v7 + 4);
          v77 = &v22;
          v79 = &dword_1C018E890;
          v81 = (char *)&qword_1C018E8A0 + 4;
          v83 = &dword_1C018E8A8;
          v85 = &qword_1C018E8A0;
          v87 = (char *)(v12 + 104);
          v89 = (__int16 *)((char *)v6 + 988);
          v91 = (int *)(v8 + 12);
          v93 = v8 + 14;
          v95 = (unsigned int *)(v12 + 68);
          v76 = v13;
          v78 = 2LL;
          v80 = 4LL;
          v82 = 4LL;
          v84 = 4LL;
          v86 = 4LL;
          v88 = 4LL;
          v90 = 4LL;
          v92 = 2LL;
          v94 = 2LL;
          v96 = 4LL;
          v97 = v10;
          v98 = 8LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C0186860, &unk_1C016AF97, 0LL, v11, 0x27u, &pData);
        }
      }
    }
  }
}
