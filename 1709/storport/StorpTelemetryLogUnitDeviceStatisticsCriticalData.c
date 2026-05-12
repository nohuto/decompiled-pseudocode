/*
 * XREFs of StorpTelemetryLogUnitDeviceStatisticsCriticalData @ 0x1C0043FEC
 * Callers:
 *     StorpTelemetrySendUnitDeviceStatistics @ 0x1C0003454 (StorpTelemetrySendUnitDeviceStatistics.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0002C98 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0002CCC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0003A20 (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x1C0003A5C (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryLogUnitDeviceStatisticsCriticalData(const struct _TlgProvider_t *a1)
{
  __int64 v1; // rcx
  _BYTE *v2; // r9
  __int64 v3; // r10
  __int64 v4; // rcx
  _BYTE *v5; // r8
  _QWORD *v6; // rbx
  void (*v7)(...); // rdx
  const WCHAR *v8; // r9
  _WORD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r14
  unsigned __int16 v17; // r13
  __int64 v18; // rax
  _QWORD *v19; // r11
  unsigned __int16 v20; // r12
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rsi
  unsigned __int16 v25; // r15
  __int64 v26; // rax
  LPCSTR v27; // r10
  __int64 v28; // r10
  __int64 v29; // r11
  LPCGUID v30; // r8
  char v31; // [rsp+30h] [rbp-D0h] BYREF
  char v32; // [rsp+31h] [rbp-CFh] BYREF
  char v33; // [rsp+32h] [rbp-CEh] BYREF
  char v34; // [rsp+33h] [rbp-CDh] BYREF
  char v35; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v36; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 v37; // [rsp+3Ch] [rbp-C4h]
  unsigned __int16 v38; // [rsp+3Eh] [rbp-C2h]
  unsigned __int16 v39; // [rsp+40h] [rbp-C0h]
  unsigned __int16 v40; // [rsp+42h] [rbp-BEh]
  int v41; // [rsp+44h] [rbp-BCh] BYREF
  int v42; // [rsp+48h] [rbp-B8h] BYREF
  int v43; // [rsp+4Ch] [rbp-B4h] BYREF
  int v44; // [rsp+50h] [rbp-B0h] BYREF
  int v45; // [rsp+54h] [rbp-ACh] BYREF
  int v46; // [rsp+58h] [rbp-A8h] BYREF
  int v47; // [rsp+5Ch] [rbp-A4h] BYREF
  int v48; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v49; // [rsp+68h] [rbp-98h] BYREF
  LPCWSTR pwsz; // [rsp+70h] [rbp-90h]
  struct _TlgProvider_t hProvider; // [rsp+78h] [rbp-88h] BYREF
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
  __int64 *v78; // [rsp+1A0h] [rbp+A0h]
  __int64 v79; // [rsp+1A8h] [rbp+A8h]
  _DWORD *v80; // [rsp+1B0h] [rbp+B0h]
  __int64 v81; // [rsp+1B8h] [rbp+B8h]
  const unsigned __int16 *ProviderMetadataPtr; // [rsp+1C0h] [rbp+C0h]
  _DWORD v83[2]; // [rsp+1C8h] [rbp+C8h] BYREF
  _DWORD *v84; // [rsp+1D0h] [rbp+D0h]
  __int64 v85; // [rsp+1D8h] [rbp+D8h]
  unsigned __int64 KeywordAny; // [rsp+1E0h] [rbp+E0h]
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

  ++g_StorpTraceLoggingCriticalEventsLogged;
  if ( (unsigned int)dword_1C0056060 > 5 && TlgKeywordOn(a1, 0x800000000000uLL) )
  {
    v4 = *(_QWORD *)(v1 + 24);
    v5 = v2 + 1720;
    v6 = *(_QWORD **)(v3 + 40);
    v7 = (void (*)(...))(v4 + 5192);
    v48 = *(_DWORD *)(v4 + 56);
    v33 = v2[88];
    v34 = v2[89];
    v35 = v2[90];
    v8 = *(const WCHAR **)(v4 + 4800);
    *(_QWORD *)&hProvider.LevelPlus1 = WPP_MAIN_CB.SecurityDescriptor;
    v9 = *(_WORD **)(v3 + 32);
    pwsz = v8;
    LOWORD(v4) = *v9;
    v37 = *(_WORD *)(v3 + 96);
    v36 = v4;
    v10 = v6[1];
    if ( v10 >= 0 || (v41 = v6[1], (v10 & 0x4000000000000000LL) == 0) )
      v41 = -1;
    v11 = v6[2];
    if ( v11 >= 0 || (v42 = v6[2], (v11 & 0x4000000000000000LL) == 0) )
      v42 = -1;
    v12 = v6[9];
    if ( v12 < 0 && (v12 & 0x4000000000000000LL) != 0 )
      v49 = (unsigned __int16)v12;
    else
      v49 = -1LL;
    v13 = *(_QWORD *)(v3 + 64);
    hProvider.ProviderMetadataPtr = *(const unsigned __int16 **)(v3 + 48);
    v38 = *(_WORD *)(v3 + 98);
    hProvider.KeywordAny = *(_QWORD *)(v3 + 56);
    v39 = *(_WORD *)(v3 + 100);
    v40 = *(_WORD *)(v3 + 102);
    v14 = *(_QWORD *)(v13 + 8);
    if ( v14 >= 0 || (v43 = *(_QWORD *)(v13 + 8), (v14 & 0x4000000000000000LL) == 0) )
      v43 = -1;
    v15 = *(_QWORD *)(v13 + 16);
    if ( v15 >= 0 || (v44 = *(_QWORD *)(v13 + 16), (v15 & 0x4000000000000000LL) == 0) )
      v44 = -1;
    v16 = *(_QWORD *)(v3 + 72);
    v17 = *(_WORD *)(v3 + 104);
    v18 = *(_QWORD *)(v16 + 8);
    if ( v18 >= 0 || (v31 = *(_QWORD *)(v16 + 8), (v18 & 0x4000000000000000LL) == 0) )
      v31 = -1;
    v19 = *(_QWORD **)(v3 + 80);
    v20 = *(_WORD *)(v3 + 106);
    v21 = v19[1];
    if ( v21 < 0 && (v21 & 0x4000000000000000LL) != 0 )
      v45 = (unsigned __int8)v21;
    else
      v45 = -1;
    v22 = v19[2];
    if ( v22 >= 0 || (v46 = v19[2], (v22 & 0x4000000000000000LL) == 0) )
      v46 = -1;
    v23 = v19[3];
    if ( v23 >= 0 || (v47 = v19[3], (v23 & 0x4000000000000000LL) == 0) )
      v47 = -1;
    v24 = *(_QWORD *)(v3 + 88);
    v25 = *(_WORD *)(v3 + 108);
    v26 = *(_QWORD *)(v24 + 8);
    if ( v26 >= 0 || (v32 = *(_QWORD *)(v24 + 8), v8 = pwsz, (v26 & 0x4000000000000000LL) == 0) )
      v32 = -1;
    hProvider.AnnotationFunc = v7;
    v55 = &v48;
    v52 = 16LL;
    v57 = &v33;
    v53 = v5;
    v59 = &v34;
    v61 = &v35;
    v54 = 16LL;
    v56 = 4LL;
    v58 = 1LL;
    v60 = 1LL;
    v62 = 1LL;
    TlgCreateWsz(&pDesc, v8);
    TlgCreateSz(&v64, v27);
    TlgCreateSz(&v65, (LPCSTR)(v28 + 9));
    v67 = 8LL;
    v69 = 2LL;
    v68 = &v36;
    p_hProvider = &hProvider;
    v70 = v73;
    v73[0] = v37;
    v74 = &v41;
    v76 = &v42;
    v78 = &v49;
    v80 = v83;
    ProviderMetadataPtr = hProvider.ProviderMetadataPtr;
    v83[0] = v38;
    v84 = v87;
    KeywordAny = hProvider.KeywordAny;
    v87[0] = v39;
    v88 = v91;
    v91[0] = v40;
    v92 = &v43;
    v94 = &v44;
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
    v98 = v16;
    v99[0] = v17;
    v100 = &v31;
    v102 = v105;
    v105[0] = v20;
    v106 = &v45;
    v108 = &v46;
    v110 = &v47;
    v112 = v115;
    v115[0] = v25;
    v116 = &v32;
    v99[1] = 0;
    v101 = 1LL;
    v103 = 2LL;
    v104 = v29;
    v105[1] = 0;
    v107 = 4LL;
    v109 = 4LL;
    v111 = 4LL;
    v113 = 2LL;
    v114 = v24;
    v115[1] = 0;
    v117 = 1LL;
    TlgWrite(&hProvider, &unk_1C004DD20, v30, 0LL, 0x25u, (EVENT_DATA_DESCRIPTOR *)&hProvider.KeywordAll);
  }
}
