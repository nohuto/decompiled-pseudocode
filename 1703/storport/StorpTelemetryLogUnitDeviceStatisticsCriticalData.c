/*
 * XREFs of StorpTelemetryLogUnitDeviceStatisticsCriticalData @ 0x1C00433C8
 * Callers:
 *     StorpTelemetrySendUnitDeviceStatistics @ 0x1C000243C (StorpTelemetrySendUnitDeviceStatistics.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1C0002B58 (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x1C0002B94 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C0002BC8 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0002C68 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryLogUnitDeviceStatisticsCriticalData(const struct _TlgProvider_t *a1)
{
  __int64 v1; // rcx
  _BYTE *v2; // r9
  __int64 v3; // r10
  __int64 v4; // rcx
  _BYTE *v5; // r8
  _QWORD *v6; // rbx
  const WCHAR *v7; // r9
  unsigned __int16 v8; // ax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // r14
  unsigned __int16 v16; // r13
  unsigned __int64 v17; // rax
  _QWORD *v18; // r11
  unsigned __int16 v19; // r12
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rsi
  unsigned __int16 v24; // r15
  unsigned __int64 v25; // rax
  LPCSTR v26; // r10
  __int64 v27; // r10
  __int64 v28; // r11
  LPCGUID v29; // r8
  char v30; // [rsp+30h] [rbp-D0h] BYREF
  char v31; // [rsp+31h] [rbp-CFh] BYREF
  char v32; // [rsp+32h] [rbp-CEh] BYREF
  char v33; // [rsp+33h] [rbp-CDh] BYREF
  char v34; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v35; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 v36; // [rsp+3Ch] [rbp-C4h]
  unsigned __int16 v37; // [rsp+3Eh] [rbp-C2h]
  unsigned __int16 v38; // [rsp+40h] [rbp-C0h]
  unsigned __int16 v39; // [rsp+42h] [rbp-BEh]
  int v40; // [rsp+44h] [rbp-BCh] BYREF
  int v41; // [rsp+48h] [rbp-B8h] BYREF
  int v42; // [rsp+4Ch] [rbp-B4h] BYREF
  int v43; // [rsp+50h] [rbp-B0h] BYREF
  int v44; // [rsp+54h] [rbp-ACh] BYREF
  int v45; // [rsp+58h] [rbp-A8h] BYREF
  int v46; // [rsp+5Ch] [rbp-A4h] BYREF
  int v47; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v48; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v49; // [rsp+70h] [rbp-90h]
  struct _TlgProvider_t hProvider; // [rsp+78h] [rbp-88h] BYREF
  __int64 v51; // [rsp+B8h] [rbp-48h]
  _BYTE *v52; // [rsp+C0h] [rbp-40h]
  __int64 v53; // [rsp+C8h] [rbp-38h]
  int *v54; // [rsp+D0h] [rbp-30h]
  __int64 v55; // [rsp+D8h] [rbp-28h]
  char *v56; // [rsp+E0h] [rbp-20h]
  __int64 v57; // [rsp+E8h] [rbp-18h]
  char *v58; // [rsp+F0h] [rbp-10h]
  __int64 v59; // [rsp+F8h] [rbp-8h]
  char *v60; // [rsp+100h] [rbp+0h]
  __int64 v61; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+130h] [rbp+30h] BYREF
  struct _TlgProvider_t *p_hProvider; // [rsp+140h] [rbp+40h]
  __int64 v66; // [rsp+148h] [rbp+48h]
  __int16 *v67; // [rsp+150h] [rbp+50h]
  __int64 v68; // [rsp+158h] [rbp+58h]
  _DWORD *v69; // [rsp+160h] [rbp+60h]
  __int64 v70; // [rsp+168h] [rbp+68h]
  _QWORD *v71; // [rsp+170h] [rbp+70h]
  _DWORD v72[2]; // [rsp+178h] [rbp+78h] BYREF
  int *v73; // [rsp+180h] [rbp+80h]
  __int64 v74; // [rsp+188h] [rbp+88h]
  int *v75; // [rsp+190h] [rbp+90h]
  __int64 v76; // [rsp+198h] [rbp+98h]
  __int64 *v77; // [rsp+1A0h] [rbp+A0h]
  __int64 v78; // [rsp+1A8h] [rbp+A8h]
  _DWORD *v79; // [rsp+1B0h] [rbp+B0h]
  __int64 v80; // [rsp+1B8h] [rbp+B8h]
  const unsigned __int16 *ProviderMetadataPtr; // [rsp+1C0h] [rbp+C0h]
  _DWORD v82[2]; // [rsp+1C8h] [rbp+C8h] BYREF
  _DWORD *v83; // [rsp+1D0h] [rbp+D0h]
  __int64 v84; // [rsp+1D8h] [rbp+D8h]
  unsigned __int64 KeywordAny; // [rsp+1E0h] [rbp+E0h]
  _DWORD v86[2]; // [rsp+1E8h] [rbp+E8h] BYREF
  _DWORD *v87; // [rsp+1F0h] [rbp+F0h]
  __int64 v88; // [rsp+1F8h] [rbp+F8h]
  __int64 v89; // [rsp+200h] [rbp+100h]
  _DWORD v90[2]; // [rsp+208h] [rbp+108h] BYREF
  int *v91; // [rsp+210h] [rbp+110h]
  __int64 v92; // [rsp+218h] [rbp+118h]
  int *v93; // [rsp+220h] [rbp+120h]
  __int64 v94; // [rsp+228h] [rbp+128h]
  _DWORD *v95; // [rsp+230h] [rbp+130h]
  __int64 v96; // [rsp+238h] [rbp+138h]
  __int64 v97; // [rsp+240h] [rbp+140h]
  _DWORD v98[2]; // [rsp+248h] [rbp+148h] BYREF
  char *v99; // [rsp+250h] [rbp+150h]
  __int64 v100; // [rsp+258h] [rbp+158h]
  _DWORD *v101; // [rsp+260h] [rbp+160h]
  __int64 v102; // [rsp+268h] [rbp+168h]
  __int64 v103; // [rsp+270h] [rbp+170h]
  _DWORD v104[2]; // [rsp+278h] [rbp+178h] BYREF
  int *v105; // [rsp+280h] [rbp+180h]
  __int64 v106; // [rsp+288h] [rbp+188h]
  int *v107; // [rsp+290h] [rbp+190h]
  __int64 v108; // [rsp+298h] [rbp+198h]
  int *v109; // [rsp+2A0h] [rbp+1A0h]
  __int64 v110; // [rsp+2A8h] [rbp+1A8h]
  _DWORD *v111; // [rsp+2B0h] [rbp+1B0h]
  __int64 v112; // [rsp+2B8h] [rbp+1B8h]
  __int64 v113; // [rsp+2C0h] [rbp+1C0h]
  _DWORD v114[2]; // [rsp+2C8h] [rbp+1C8h] BYREF
  char *v115; // [rsp+2D0h] [rbp+1D0h]
  __int64 v116; // [rsp+2D8h] [rbp+1D8h]

  ++g_StorpTraceLoggingCriticalEventsLogged;
  if ( (unsigned int)dword_1C0055010 > 5 && TlgKeywordOn(a1, 0x800000000000uLL) )
  {
    v4 = *(_QWORD *)(v1 + 24);
    v5 = v2 + 1688;
    v6 = *(_QWORD **)(v3 + 40);
    v49 = 0x8000000000000000uLL;
    v47 = *(_DWORD *)(v4 + 56);
    v32 = v2[88];
    v33 = v2[89];
    v34 = v2[90];
    v7 = *(const WCHAR **)(v4 + 4800);
    *(_QWORD *)&hProvider.LevelPlus1 = *(_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.Lock;
    v8 = *(_WORD *)(v3 + 96);
    v35 = **(_WORD **)(v3 + 32);
    v36 = v8;
    v9 = v6[1];
    if ( v9 < 0x8000000000000000uLL || (v40 = v6[1], (v9 & 0x4000000000000000LL) == 0) )
      v40 = -1;
    v10 = v6[2];
    if ( v10 < 0x8000000000000000uLL || (v41 = v6[2], (v10 & 0x4000000000000000LL) == 0) )
      v41 = -1;
    v11 = v6[9];
    if ( v11 >= 0x8000000000000000uLL && (v11 & 0x4000000000000000LL) != 0 )
      v48 = (unsigned __int16)v11;
    else
      v48 = -1LL;
    v12 = *(_QWORD *)(v3 + 64);
    hProvider.ProviderMetadataPtr = *(const unsigned __int16 **)(v3 + 48);
    v37 = *(_WORD *)(v3 + 98);
    hProvider.KeywordAny = *(_QWORD *)(v3 + 56);
    v38 = *(_WORD *)(v3 + 100);
    v39 = *(_WORD *)(v3 + 102);
    v13 = *(_QWORD *)(v12 + 8);
    if ( v13 < 0x8000000000000000uLL || (v42 = *(_QWORD *)(v12 + 8), (v13 & 0x4000000000000000LL) == 0) )
      v42 = -1;
    v14 = *(_QWORD *)(v12 + 16);
    if ( v14 < 0x8000000000000000uLL || (v43 = *(_QWORD *)(v12 + 16), (v14 & 0x4000000000000000LL) == 0) )
      v43 = -1;
    v15 = *(_QWORD *)(v3 + 72);
    v16 = *(_WORD *)(v3 + 104);
    v17 = *(_QWORD *)(v15 + 8);
    if ( v17 < 0x8000000000000000uLL || (v30 = *(_QWORD *)(v15 + 8), (v17 & 0x4000000000000000LL) == 0) )
      v30 = -1;
    v18 = *(_QWORD **)(v3 + 80);
    v19 = *(_WORD *)(v3 + 106);
    v20 = v18[1];
    if ( v20 >= 0x8000000000000000uLL && (v20 & 0x4000000000000000LL) != 0 )
      v44 = (unsigned __int8)v20;
    else
      v44 = -1;
    v21 = v18[2];
    if ( v21 < 0x8000000000000000uLL || (v45 = v18[2], (v21 & 0x4000000000000000LL) == 0) )
      v45 = -1;
    v22 = v18[3];
    if ( v22 < 0x8000000000000000uLL || (v46 = v18[3], (v22 & 0x4000000000000000LL) == 0) )
      v46 = -1;
    v23 = *(_QWORD *)(v3 + 88);
    v24 = *(_WORD *)(v3 + 108);
    v25 = *(_QWORD *)(v23 + 8);
    if ( v25 < v49 || (v31 = *(_QWORD *)(v23 + 8), (v25 & 0x4000000000000000LL) == 0) )
      v31 = -1;
    hProvider.AnnotationFunc = (void (*)(...))(v4 + 5192);
    v54 = &v47;
    v51 = 16LL;
    v56 = &v32;
    v52 = v5;
    v58 = &v33;
    v60 = &v34;
    v53 = 16LL;
    v55 = 4LL;
    v57 = 1LL;
    v59 = 1LL;
    v61 = 1LL;
    TlgCreateWsz(&pDesc, v7);
    TlgCreateSz(&v63, v26);
    TlgCreateSz(&v64, (LPCSTR)(v27 + 9));
    v66 = 8LL;
    v68 = 2LL;
    v67 = &v35;
    p_hProvider = &hProvider;
    v69 = v72;
    v72[0] = v36;
    v73 = &v40;
    v75 = &v41;
    v77 = &v48;
    v79 = v82;
    ProviderMetadataPtr = hProvider.ProviderMetadataPtr;
    v82[0] = v37;
    v83 = v86;
    KeywordAny = hProvider.KeywordAny;
    v86[0] = v38;
    v87 = v90;
    v90[0] = v39;
    v91 = &v42;
    v93 = &v43;
    v95 = v98;
    v70 = 2LL;
    v71 = v6;
    v72[1] = 0;
    v74 = 4LL;
    v76 = 4LL;
    v78 = 8LL;
    v80 = 2LL;
    v82[1] = 0;
    v84 = 2LL;
    v86[1] = 0;
    v88 = 2LL;
    v89 = v12;
    v90[1] = 0;
    v92 = 4LL;
    v94 = 4LL;
    v96 = 2LL;
    v97 = v15;
    v98[0] = v16;
    v99 = &v30;
    v101 = v104;
    v104[0] = v19;
    v105 = &v44;
    v107 = &v45;
    v109 = &v46;
    v111 = v114;
    v114[0] = v24;
    v115 = &v31;
    v98[1] = 0;
    v100 = 1LL;
    v102 = 2LL;
    v103 = v28;
    v104[1] = 0;
    v106 = 4LL;
    v108 = 4LL;
    v110 = 4LL;
    v112 = 2LL;
    v113 = v23;
    v114[1] = 0;
    v116 = 1LL;
    TlgWrite(&hProvider, &unk_1C004D90C, v29, 0LL, 0x25u, (EVENT_DATA_DESCRIPTOR *)&hProvider.KeywordAll);
  }
}
