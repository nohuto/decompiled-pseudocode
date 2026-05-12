/*
 * XREFs of StorpTelemetryLogUnitDeviceStatisticsCriticalData @ 0x1C0043EB8
 * Callers:
 *     StorpTelemetrySendUnitDeviceStatistics @ 0x1C0002D70 (StorpTelemetrySendUnitDeviceStatistics.c)
 * Callees:
 *     _TlgCreateSz @ 0x1C00015D8 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C0001610 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C00016B0 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1C00016F0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryLogUnitDeviceStatisticsCriticalData(const struct _TlgProvider_t *a1)
{
  __int64 v1; // rcx
  _BYTE *v2; // r9
  __int64 v3; // r10
  __int64 v4; // rcx
  _BYTE *v5; // r8
  _QWORD *v6; // rbx
  __int64 v7; // rdx
  const WCHAR *v8; // r9
  _WORD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r15
  unsigned __int16 v18; // r13
  __int64 v19; // rax
  _QWORD *v20; // r11
  unsigned __int16 v21; // r12
  __int64 v22; // rax
  int v23; // ecx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdi
  unsigned __int16 v27; // r14
  __int64 v28; // rax
  LPCSTR v29; // r10
  __int64 v30; // r10
  __int64 v31; // r11
  LPCGUID v32; // r8
  char v33; // [rsp+30h] [rbp-D0h] BYREF
  char v34; // [rsp+31h] [rbp-CFh] BYREF
  char v35; // [rsp+32h] [rbp-CEh] BYREF
  char v36; // [rsp+33h] [rbp-CDh] BYREF
  char v37; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v38; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 v39; // [rsp+3Ch] [rbp-C4h]
  unsigned __int16 v40; // [rsp+3Eh] [rbp-C2h]
  unsigned __int16 v41; // [rsp+40h] [rbp-C0h]
  unsigned __int16 v42; // [rsp+42h] [rbp-BEh]
  int v43; // [rsp+44h] [rbp-BCh] BYREF
  int v44; // [rsp+48h] [rbp-B8h] BYREF
  int v45; // [rsp+4Ch] [rbp-B4h] BYREF
  int v46; // [rsp+50h] [rbp-B0h] BYREF
  int v47; // [rsp+54h] [rbp-ACh] BYREF
  int v48; // [rsp+58h] [rbp-A8h] BYREF
  int v49; // [rsp+5Ch] [rbp-A4h] BYREF
  int v50; // [rsp+60h] [rbp-A0h] BYREF
  LPCWSTR pwsz; // [rsp+68h] [rbp-98h]
  struct _TlgProvider_t hProvider; // [rsp+70h] [rbp-90h] BYREF
  __int64 v53; // [rsp+B0h] [rbp-50h]
  __int64 v54; // [rsp+B8h] [rbp-48h]
  _BYTE *v55; // [rsp+C0h] [rbp-40h]
  __int64 v56; // [rsp+C8h] [rbp-38h]
  int *v57; // [rsp+D0h] [rbp-30h]
  __int64 v58; // [rsp+D8h] [rbp-28h]
  char *v59; // [rsp+E0h] [rbp-20h]
  __int64 v60; // [rsp+E8h] [rbp-18h]
  char *v61; // [rsp+F0h] [rbp-10h]
  __int64 v62; // [rsp+F8h] [rbp-8h]
  char *v63; // [rsp+100h] [rbp+0h]
  __int64 v64; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+130h] [rbp+30h] BYREF
  struct _TlgProvider_t *p_hProvider; // [rsp+140h] [rbp+40h]
  __int64 v69; // [rsp+148h] [rbp+48h]
  __int16 *v70; // [rsp+150h] [rbp+50h]
  __int64 v71; // [rsp+158h] [rbp+58h]
  _DWORD *v72; // [rsp+160h] [rbp+60h]
  __int64 v73; // [rsp+168h] [rbp+68h]
  _QWORD *v74; // [rsp+170h] [rbp+70h]
  _DWORD v75[2]; // [rsp+178h] [rbp+78h] BYREF
  int *v76; // [rsp+180h] [rbp+80h]
  __int64 v77; // [rsp+188h] [rbp+88h]
  int *v78; // [rsp+190h] [rbp+90h]
  __int64 v79; // [rsp+198h] [rbp+98h]
  const unsigned __int16 **p_ProviderMetadataPtr; // [rsp+1A0h] [rbp+A0h]
  __int64 v81; // [rsp+1A8h] [rbp+A8h]
  _DWORD *v82; // [rsp+1B0h] [rbp+B0h]
  __int64 v83; // [rsp+1B8h] [rbp+B8h]
  unsigned __int64 KeywordAny; // [rsp+1C0h] [rbp+C0h]
  _DWORD v85[2]; // [rsp+1C8h] [rbp+C8h] BYREF
  _DWORD *v86; // [rsp+1D0h] [rbp+D0h]
  __int64 v87; // [rsp+1D8h] [rbp+D8h]
  unsigned __int64 KeywordAll; // [rsp+1E0h] [rbp+E0h]
  _DWORD v89[2]; // [rsp+1E8h] [rbp+E8h] BYREF
  _DWORD *v90; // [rsp+1F0h] [rbp+F0h]
  __int64 v91; // [rsp+1F8h] [rbp+F8h]
  __int64 v92; // [rsp+200h] [rbp+100h]
  _DWORD v93[2]; // [rsp+208h] [rbp+108h] BYREF
  int *v94; // [rsp+210h] [rbp+110h]
  __int64 v95; // [rsp+218h] [rbp+118h]
  int *v96; // [rsp+220h] [rbp+120h]
  __int64 v97; // [rsp+228h] [rbp+128h]
  _DWORD *v98; // [rsp+230h] [rbp+130h]
  __int64 v99; // [rsp+238h] [rbp+138h]
  __int64 v100; // [rsp+240h] [rbp+140h]
  _DWORD v101[2]; // [rsp+248h] [rbp+148h] BYREF
  char *v102; // [rsp+250h] [rbp+150h]
  __int64 v103; // [rsp+258h] [rbp+158h]
  _DWORD *v104; // [rsp+260h] [rbp+160h]
  __int64 v105; // [rsp+268h] [rbp+168h]
  __int64 v106; // [rsp+270h] [rbp+170h]
  _DWORD v107[2]; // [rsp+278h] [rbp+178h] BYREF
  int *v108; // [rsp+280h] [rbp+180h]
  __int64 v109; // [rsp+288h] [rbp+188h]
  int *v110; // [rsp+290h] [rbp+190h]
  __int64 v111; // [rsp+298h] [rbp+198h]
  int *v112; // [rsp+2A0h] [rbp+1A0h]
  __int64 v113; // [rsp+2A8h] [rbp+1A8h]
  _DWORD *v114; // [rsp+2B0h] [rbp+1B0h]
  __int64 v115; // [rsp+2B8h] [rbp+1B8h]
  __int64 v116; // [rsp+2C0h] [rbp+1C0h]
  _DWORD v117[2]; // [rsp+2C8h] [rbp+1C8h] BYREF
  char *v118; // [rsp+2D0h] [rbp+1D0h]
  __int64 v119; // [rsp+2D8h] [rbp+1D8h]

  ++g_StorpTraceLoggingCriticalEventsLogged;
  if ( (unsigned int)dword_1C0056060 > 5 && TlgKeywordOn(a1, 0x800000000000uLL) )
  {
    v4 = *(_QWORD *)(v1 + 24);
    v5 = v2 + 1720;
    v6 = *(_QWORD **)(v3 + 40);
    v7 = v4 + 5192;
    v43 = *(_DWORD *)(v4 + 56);
    v33 = v2[88];
    v34 = v2[89];
    v35 = v2[90];
    v8 = *(const WCHAR **)(v4 + 4800);
    *(_QWORD *)&hProvider.LevelPlus1 = *((_QWORD *)&WPP_MAIN_CB.Reserved + 1);
    v9 = *(_WORD **)(v3 + 32);
    pwsz = v8;
    LOWORD(v4) = *v9;
    v39 = *(_WORD *)(v3 + 96);
    v38 = v4;
    v10 = v6[1];
    if ( v10 >= 0 || (v10 & 0x4000000000000000LL) == 0 )
      LODWORD(v10) = -1;
    v44 = v10;
    v11 = v6[2];
    if ( v11 >= 0 || (v11 & 0x4000000000000000LL) == 0 )
      LODWORD(v11) = -1;
    v45 = v11;
    v12 = v6[9];
    if ( v12 < 0 && (v12 & 0x4000000000000000LL) != 0 )
      v13 = (unsigned __int16)v12;
    else
      v13 = -1LL;
    v14 = *(_QWORD *)(v3 + 64);
    hProvider.KeywordAny = *(_QWORD *)(v3 + 48);
    v40 = *(_WORD *)(v3 + 98);
    hProvider.KeywordAll = *(_QWORD *)(v3 + 56);
    v41 = *(_WORD *)(v3 + 100);
    v42 = *(_WORD *)(v3 + 102);
    hProvider.ProviderMetadataPtr = (const unsigned __int16 *)v13;
    v15 = *(_QWORD *)(v14 + 8);
    if ( v15 >= 0 || (v15 & 0x4000000000000000LL) == 0 )
      LODWORD(v15) = -1;
    v46 = v15;
    v16 = *(_QWORD *)(v14 + 16);
    if ( v16 >= 0 || (v16 & 0x4000000000000000LL) == 0 )
      LODWORD(v16) = -1;
    v17 = *(_QWORD *)(v3 + 72);
    v18 = *(_WORD *)(v3 + 104);
    v47 = v16;
    v19 = *(_QWORD *)(v17 + 8);
    if ( v19 >= 0 || (v19 & 0x4000000000000000LL) == 0 )
      LOBYTE(v19) = -1;
    v20 = *(_QWORD **)(v3 + 80);
    v21 = *(_WORD *)(v3 + 106);
    v36 = v19;
    v22 = v20[1];
    if ( v22 >= 0 || (v23 = (unsigned __int8)v22, (v22 & 0x4000000000000000LL) == 0) )
      v23 = -1;
    v48 = v23;
    v24 = v20[2];
    if ( v24 >= 0 || (v24 & 0x4000000000000000LL) == 0 )
      LODWORD(v24) = -1;
    v49 = v24;
    v25 = v20[3];
    if ( v25 >= 0 || (v25 & 0x4000000000000000LL) == 0 )
      LODWORD(v25) = -1;
    v26 = *(_QWORD *)(v3 + 88);
    v27 = *(_WORD *)(v3 + 108);
    v50 = v25;
    v28 = *(_QWORD *)(v26 + 8);
    if ( v28 >= 0 || (v8 = pwsz, (v28 & 0x4000000000000000LL) == 0) )
      LOBYTE(v28) = -1;
    v37 = v28;
    v53 = v7;
    v57 = &v43;
    v54 = 16LL;
    v59 = &v33;
    v61 = &v34;
    v63 = &v35;
    v55 = v5;
    v56 = 16LL;
    v58 = 4LL;
    v60 = 1LL;
    v62 = 1LL;
    v64 = 1LL;
    TlgCreateWsz(&pDesc, v8);
    TlgCreateSz(&v66, v29);
    TlgCreateSz(&v67, (LPCSTR)(v30 + 9));
    v69 = 8LL;
    v71 = 2LL;
    v70 = &v38;
    p_hProvider = &hProvider;
    v72 = v75;
    v75[0] = v39;
    v76 = &v44;
    v78 = &v45;
    p_ProviderMetadataPtr = &hProvider.ProviderMetadataPtr;
    v82 = v85;
    KeywordAny = hProvider.KeywordAny;
    v85[0] = v40;
    v86 = v89;
    KeywordAll = hProvider.KeywordAll;
    v89[0] = v41;
    v90 = v93;
    v93[0] = v42;
    v94 = &v46;
    v96 = &v47;
    v98 = v101;
    v73 = 2LL;
    v74 = v6;
    v75[1] = 0;
    v77 = 4LL;
    v79 = 4LL;
    v81 = 8LL;
    v83 = 2LL;
    v85[1] = 0;
    v87 = 2LL;
    v89[1] = 0;
    v91 = 2LL;
    v92 = v14;
    v93[1] = 0;
    v95 = 4LL;
    v97 = 4LL;
    v99 = 2LL;
    v101[0] = v18;
    v102 = &v36;
    v104 = v107;
    v107[0] = v21;
    v108 = &v48;
    v110 = &v49;
    v112 = &v50;
    v114 = v117;
    v117[0] = v27;
    v118 = &v37;
    v100 = v17;
    v101[1] = 0;
    v103 = 1LL;
    v105 = 2LL;
    v106 = v31;
    v107[1] = 0;
    v109 = 4LL;
    v111 = 4LL;
    v113 = 4LL;
    v115 = 2LL;
    v116 = v26;
    v117[1] = 0;
    v119 = 1LL;
    TlgWrite(&hProvider, &unk_1C004E623, v32, 0LL, 0x25u, (EVENT_DATA_DESCRIPTOR *)&hProvider.RegHandle);
  }
}
