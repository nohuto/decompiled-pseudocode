/*
 * XREFs of StorpTelemetryLogUnitDeviceStatisticsMeasures @ 0x1C00443EC
 * Callers:
 *     StorpTelemetrySendUnitDeviceStatistics @ 0x1C0002D70 (StorpTelemetrySendUnitDeviceStatistics.c)
 * Callees:
 *     _TlgCreateSz @ 0x1C00015D8 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C0001610 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C00016B0 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1C00016F0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryLogUnitDeviceStatisticsMeasures(const struct _TlgProvider_t *a1)
{
  __int64 v1; // rcx
  _BYTE *v2; // r9
  __int64 v3; // r10
  __int64 v4; // rcx
  _BYTE *v5; // r8
  _QWORD *v6; // rbx
  __int64 v7; // rdx
  const WCHAR *v8; // r9
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r14
  unsigned __int16 v17; // r13
  __int64 v18; // rax
  _QWORD *v19; // r11
  unsigned __int16 v20; // r12
  __int64 v21; // rax
  int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdi
  unsigned __int16 v26; // r15
  __int64 v27; // rax
  LPCSTR v28; // r10
  __int64 v29; // r10
  __int64 v30; // r11
  LPCGUID v31; // r8
  char v32; // [rsp+30h] [rbp-D0h] BYREF
  char v33; // [rsp+31h] [rbp-CFh] BYREF
  char v34; // [rsp+32h] [rbp-CEh] BYREF
  char v35; // [rsp+33h] [rbp-CDh] BYREF
  char v36; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v37; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 v38; // [rsp+3Ch] [rbp-C4h]
  unsigned __int16 v39; // [rsp+3Eh] [rbp-C2h]
  unsigned __int16 v40; // [rsp+40h] [rbp-C0h]
  unsigned __int16 v41; // [rsp+42h] [rbp-BEh]
  int v42; // [rsp+44h] [rbp-BCh] BYREF
  int v43; // [rsp+48h] [rbp-B8h] BYREF
  int v44; // [rsp+4Ch] [rbp-B4h] BYREF
  int v45; // [rsp+50h] [rbp-B0h] BYREF
  int v46; // [rsp+54h] [rbp-ACh] BYREF
  int v47; // [rsp+58h] [rbp-A8h] BYREF
  int v48; // [rsp+5Ch] [rbp-A4h] BYREF
  int v49; // [rsp+60h] [rbp-A0h] BYREF
  struct _TlgProvider_t hProvider; // [rsp+68h] [rbp-98h] BYREF
  __int64 v51; // [rsp+B0h] [rbp-50h]
  __int64 v52; // [rsp+B8h] [rbp-48h]
  _BYTE *v53; // [rsp+C0h] [rbp-40h]
  __int64 v54; // [rsp+C8h] [rbp-38h]
  int *v55; // [rsp+D0h] [rbp-30h]
  __int64 v56; // [rsp+D8h] [rbp-28h]
  char *v57; // [rsp+E0h] [rbp-20h]
  __int64 v58; // [rsp+E8h] [rbp-18h]
  char *v59; // [rsp+F0h] [rbp-10h]
  __int64 v60; // [rsp+F8h] [rbp-8h]
  char *v61; // [rsp+100h] [rbp+0h]
  __int64 v62; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+130h] [rbp+30h] BYREF
  struct _TlgProvider_t *p_hProvider; // [rsp+140h] [rbp+40h]
  __int64 v67; // [rsp+148h] [rbp+48h]
  __int16 *v68; // [rsp+150h] [rbp+50h]
  __int64 v69; // [rsp+158h] [rbp+58h]
  _DWORD *v70; // [rsp+160h] [rbp+60h]
  __int64 v71; // [rsp+168h] [rbp+68h]
  _QWORD *v72; // [rsp+170h] [rbp+70h]
  _DWORD v73[2]; // [rsp+178h] [rbp+78h] BYREF
  int *v74; // [rsp+180h] [rbp+80h]
  __int64 v75; // [rsp+188h] [rbp+88h]
  int *v76; // [rsp+190h] [rbp+90h]
  __int64 v77; // [rsp+198h] [rbp+98h]
  const unsigned __int16 **p_ProviderMetadataPtr; // [rsp+1A0h] [rbp+A0h]
  __int64 v79; // [rsp+1A8h] [rbp+A8h]
  _DWORD *v80; // [rsp+1B0h] [rbp+B0h]
  __int64 v81; // [rsp+1B8h] [rbp+B8h]
  unsigned __int64 KeywordAny; // [rsp+1C0h] [rbp+C0h]
  _DWORD v83[2]; // [rsp+1C8h] [rbp+C8h] BYREF
  _DWORD *v84; // [rsp+1D0h] [rbp+D0h]
  __int64 v85; // [rsp+1D8h] [rbp+D8h]
  unsigned __int64 KeywordAll; // [rsp+1E0h] [rbp+E0h]
  _DWORD v87[2]; // [rsp+1E8h] [rbp+E8h] BYREF
  _DWORD *v88; // [rsp+1F0h] [rbp+F0h]
  __int64 v89; // [rsp+1F8h] [rbp+F8h]
  __int64 v90; // [rsp+200h] [rbp+100h]
  _DWORD v91[2]; // [rsp+208h] [rbp+108h] BYREF
  int *v92; // [rsp+210h] [rbp+110h]
  __int64 v93; // [rsp+218h] [rbp+118h]
  int *v94; // [rsp+220h] [rbp+120h]
  __int64 v95; // [rsp+228h] [rbp+128h]
  _DWORD *v96; // [rsp+230h] [rbp+130h]
  __int64 v97; // [rsp+238h] [rbp+138h]
  __int64 v98; // [rsp+240h] [rbp+140h]
  _DWORD v99[2]; // [rsp+248h] [rbp+148h] BYREF
  char *v100; // [rsp+250h] [rbp+150h]
  __int64 v101; // [rsp+258h] [rbp+158h]
  _DWORD *v102; // [rsp+260h] [rbp+160h]
  __int64 v103; // [rsp+268h] [rbp+168h]
  __int64 v104; // [rsp+270h] [rbp+170h]
  _DWORD v105[2]; // [rsp+278h] [rbp+178h] BYREF
  int *v106; // [rsp+280h] [rbp+180h]
  __int64 v107; // [rsp+288h] [rbp+188h]
  int *v108; // [rsp+290h] [rbp+190h]
  __int64 v109; // [rsp+298h] [rbp+198h]
  int *v110; // [rsp+2A0h] [rbp+1A0h]
  __int64 v111; // [rsp+2A8h] [rbp+1A8h]
  _DWORD *v112; // [rsp+2B0h] [rbp+1B0h]
  __int64 v113; // [rsp+2B8h] [rbp+1B8h]
  __int64 v114; // [rsp+2C0h] [rbp+1C0h]
  _DWORD v115[2]; // [rsp+2C8h] [rbp+1C8h] BYREF
  char *v116; // [rsp+2D0h] [rbp+1D0h]
  __int64 v117; // [rsp+2D8h] [rbp+1D8h]

  if ( (unsigned int)dword_1C0056060 > 5 && TlgKeywordOn(a1, 0x400000000000uLL) )
  {
    v4 = *(_QWORD *)(v1 + 24);
    v5 = v2 + 1720;
    v6 = *(_QWORD **)(v3 + 40);
    v7 = v4 + 5192;
    v42 = *(_DWORD *)(v4 + 56);
    v32 = v2[88];
    v33 = v2[89];
    v34 = v2[90];
    v8 = *(const WCHAR **)(v4 + 4800);
    *(_QWORD *)&hProvider.LevelPlus1 = *((_QWORD *)&WPP_MAIN_CB.Reserved + 1);
    LOWORD(v4) = **(_WORD **)(v3 + 32);
    v38 = *(_WORD *)(v3 + 96);
    v37 = v4;
    v9 = v6[1];
    if ( v9 >= 0 || (v9 & 0x4000000000000000LL) == 0 )
      LODWORD(v9) = -1;
    v43 = v9;
    v10 = v6[2];
    if ( v10 >= 0 || (v10 & 0x4000000000000000LL) == 0 )
      LODWORD(v10) = -1;
    v44 = v10;
    v11 = v6[9];
    if ( v11 < 0 && (v11 & 0x4000000000000000LL) != 0 )
      v12 = (unsigned __int16)v11;
    else
      v12 = -1LL;
    v13 = *(_QWORD *)(v3 + 64);
    hProvider.KeywordAny = *(_QWORD *)(v3 + 48);
    v39 = *(_WORD *)(v3 + 98);
    hProvider.KeywordAll = *(_QWORD *)(v3 + 56);
    v40 = *(_WORD *)(v3 + 100);
    v41 = *(_WORD *)(v3 + 102);
    hProvider.ProviderMetadataPtr = (const unsigned __int16 *)v12;
    v14 = *(_QWORD *)(v13 + 8);
    if ( v14 >= 0 || (v14 & 0x4000000000000000LL) == 0 )
      LODWORD(v14) = -1;
    v45 = v14;
    v15 = *(_QWORD *)(v13 + 16);
    if ( v15 >= 0 || (v15 & 0x4000000000000000LL) == 0 )
      LODWORD(v15) = -1;
    v16 = *(_QWORD *)(v3 + 72);
    v17 = *(_WORD *)(v3 + 104);
    v46 = v15;
    v18 = *(_QWORD *)(v16 + 8);
    if ( v18 >= 0 || (v18 & 0x4000000000000000LL) == 0 )
      LOBYTE(v18) = -1;
    v19 = *(_QWORD **)(v3 + 80);
    v20 = *(_WORD *)(v3 + 106);
    v35 = v18;
    v21 = v19[1];
    if ( v21 >= 0 || (v22 = (unsigned __int8)v21, (v21 & 0x4000000000000000LL) == 0) )
      v22 = -1;
    v47 = v22;
    v23 = v19[2];
    if ( v23 >= 0 || (v23 & 0x4000000000000000LL) == 0 )
      LODWORD(v23) = -1;
    v48 = v23;
    v24 = v19[3];
    if ( v24 >= 0 || (v24 & 0x4000000000000000LL) == 0 )
      LODWORD(v24) = -1;
    v25 = *(_QWORD *)(v3 + 88);
    v26 = *(_WORD *)(v3 + 108);
    v49 = v24;
    v27 = *(_QWORD *)(v25 + 8);
    if ( v27 >= 0 || (v27 & 0x4000000000000000LL) == 0 )
      LOBYTE(v27) = -1;
    v36 = v27;
    v51 = v7;
    v55 = &v42;
    v52 = 16LL;
    v57 = &v32;
    v59 = &v33;
    v61 = &v34;
    v53 = v5;
    v54 = 16LL;
    v56 = 4LL;
    v58 = 1LL;
    v60 = 1LL;
    v62 = 1LL;
    TlgCreateWsz(&pDesc, v8);
    TlgCreateSz(&v64, v28);
    TlgCreateSz(&v65, (LPCSTR)(v29 + 9));
    v67 = 8LL;
    v69 = 2LL;
    v68 = &v37;
    p_hProvider = &hProvider;
    v70 = v73;
    v73[0] = v38;
    v74 = &v43;
    v76 = &v44;
    p_ProviderMetadataPtr = &hProvider.ProviderMetadataPtr;
    v80 = v83;
    KeywordAny = hProvider.KeywordAny;
    v83[0] = v39;
    v84 = v87;
    KeywordAll = hProvider.KeywordAll;
    v87[0] = v40;
    v88 = v91;
    v91[0] = v41;
    v92 = &v45;
    v94 = &v46;
    v96 = v99;
    v71 = 2LL;
    v72 = v6;
    v73[1] = 0;
    v75 = 4LL;
    v77 = 4LL;
    v79 = 8LL;
    v81 = 2LL;
    v83[1] = 0;
    v85 = 2LL;
    v87[1] = 0;
    v89 = 2LL;
    v90 = v13;
    v91[1] = 0;
    v93 = 4LL;
    v95 = 4LL;
    v97 = 2LL;
    v99[0] = v17;
    v100 = &v35;
    v102 = v105;
    v105[0] = v20;
    v106 = &v47;
    v108 = &v48;
    v110 = &v49;
    v112 = v115;
    v115[0] = v26;
    v116 = &v36;
    v98 = v16;
    v99[1] = 0;
    v101 = 1LL;
    v103 = 2LL;
    v104 = v30;
    v105[1] = 0;
    v107 = 4LL;
    v109 = 4LL;
    v111 = 4LL;
    v113 = 2LL;
    v114 = v25;
    v115[1] = 0;
    v117 = 1LL;
    TlgWrite(&hProvider, &unk_1C004EA9C, v31, 0LL, 0x25u, (EVENT_DATA_DESCRIPTOR *)&hProvider.EnableCallback);
  }
}
