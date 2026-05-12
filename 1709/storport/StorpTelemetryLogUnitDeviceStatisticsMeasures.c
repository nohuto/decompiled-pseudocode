/*
 * XREFs of StorpTelemetryLogUnitDeviceStatisticsMeasures @ 0x1C0044538
 * Callers:
 *     StorpTelemetrySendUnitDeviceStatistics @ 0x1C0003454 (StorpTelemetrySendUnitDeviceStatistics.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0002C98 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0002CCC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0003A20 (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x1C0003A5C (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryLogUnitDeviceStatisticsMeasures(const struct _TlgProvider_t *a1)
{
  __int64 v1; // rcx
  _BYTE *v2; // r9
  __int64 v3; // r10
  __int64 v4; // rcx
  _BYTE *v5; // r8
  _QWORD *v6; // rbx
  const WCHAR *v7; // r9
  unsigned __int16 v8; // ax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r14
  unsigned __int16 v16; // r13
  __int64 v17; // rax
  _QWORD *v18; // r11
  unsigned __int16 v19; // r12
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rsi
  unsigned __int16 v24; // r15
  __int64 v25; // rax
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
  struct _TlgProvider_t hProvider; // [rsp+70h] [rbp-90h] BYREF
  __int64 v50; // [rsp+B0h] [rbp-50h]
  int v51; // [rsp+B8h] [rbp-48h]
  int v52; // [rsp+BCh] [rbp-44h]
  _BYTE *v53; // [rsp+C0h] [rbp-40h]
  int v54; // [rsp+C8h] [rbp-38h]
  int v55; // [rsp+CCh] [rbp-34h]
  int *v56; // [rsp+D0h] [rbp-30h]
  int v57; // [rsp+D8h] [rbp-28h]
  int v58; // [rsp+DCh] [rbp-24h]
  char *v59; // [rsp+E0h] [rbp-20h]
  int v60; // [rsp+E8h] [rbp-18h]
  int v61; // [rsp+ECh] [rbp-14h]
  char *v62; // [rsp+F0h] [rbp-10h]
  int v63; // [rsp+F8h] [rbp-8h]
  int v64; // [rsp+FCh] [rbp-4h]
  char *v65; // [rsp+100h] [rbp+0h]
  int v66; // [rsp+108h] [rbp+8h]
  int v67; // [rsp+10Ch] [rbp+Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+130h] [rbp+30h] BYREF
  struct _TlgProvider_t *p_hProvider; // [rsp+140h] [rbp+40h]
  __int64 v72; // [rsp+148h] [rbp+48h]
  __int16 *v73; // [rsp+150h] [rbp+50h]
  __int64 v74; // [rsp+158h] [rbp+58h]
  _DWORD *v75; // [rsp+160h] [rbp+60h]
  __int64 v76; // [rsp+168h] [rbp+68h]
  _QWORD *v77; // [rsp+170h] [rbp+70h]
  _DWORD v78[2]; // [rsp+178h] [rbp+78h] BYREF
  int *v79; // [rsp+180h] [rbp+80h]
  __int64 v80; // [rsp+188h] [rbp+88h]
  int *v81; // [rsp+190h] [rbp+90h]
  __int64 v82; // [rsp+198h] [rbp+98h]
  __int64 *v83; // [rsp+1A0h] [rbp+A0h]
  __int64 v84; // [rsp+1A8h] [rbp+A8h]
  _DWORD *v85; // [rsp+1B0h] [rbp+B0h]
  __int64 v86; // [rsp+1B8h] [rbp+B8h]
  const unsigned __int16 *ProviderMetadataPtr; // [rsp+1C0h] [rbp+C0h]
  _DWORD v88[2]; // [rsp+1C8h] [rbp+C8h] BYREF
  _DWORD *v89; // [rsp+1D0h] [rbp+D0h]
  __int64 v90; // [rsp+1D8h] [rbp+D8h]
  unsigned __int64 KeywordAny; // [rsp+1E0h] [rbp+E0h]
  _DWORD v92[2]; // [rsp+1E8h] [rbp+E8h] BYREF
  _DWORD *v93; // [rsp+1F0h] [rbp+F0h]
  __int64 v94; // [rsp+1F8h] [rbp+F8h]
  __int64 v95; // [rsp+200h] [rbp+100h]
  _DWORD v96[2]; // [rsp+208h] [rbp+108h] BYREF
  int *v97; // [rsp+210h] [rbp+110h]
  __int64 v98; // [rsp+218h] [rbp+118h]
  int *v99; // [rsp+220h] [rbp+120h]
  __int64 v100; // [rsp+228h] [rbp+128h]
  _DWORD *v101; // [rsp+230h] [rbp+130h]
  __int64 v102; // [rsp+238h] [rbp+138h]
  __int64 v103; // [rsp+240h] [rbp+140h]
  _DWORD v104[2]; // [rsp+248h] [rbp+148h] BYREF
  char *v105; // [rsp+250h] [rbp+150h]
  __int64 v106; // [rsp+258h] [rbp+158h]
  _DWORD *v107; // [rsp+260h] [rbp+160h]
  __int64 v108; // [rsp+268h] [rbp+168h]
  __int64 v109; // [rsp+270h] [rbp+170h]
  _DWORD v110[2]; // [rsp+278h] [rbp+178h] BYREF
  int *v111; // [rsp+280h] [rbp+180h]
  __int64 v112; // [rsp+288h] [rbp+188h]
  int *v113; // [rsp+290h] [rbp+190h]
  __int64 v114; // [rsp+298h] [rbp+198h]
  int *v115; // [rsp+2A0h] [rbp+1A0h]
  __int64 v116; // [rsp+2A8h] [rbp+1A8h]
  _DWORD *v117; // [rsp+2B0h] [rbp+1B0h]
  __int64 v118; // [rsp+2B8h] [rbp+1B8h]
  __int64 v119; // [rsp+2C0h] [rbp+1C0h]
  _DWORD v120[2]; // [rsp+2C8h] [rbp+1C8h] BYREF
  char *v121; // [rsp+2D0h] [rbp+1D0h]
  __int64 v122; // [rsp+2D8h] [rbp+1D8h]

  if ( (unsigned int)dword_1C0056060 > 5 && TlgKeywordOn(a1, 0x400000000000uLL) )
  {
    v4 = *(_QWORD *)(v1 + 24);
    v5 = v2 + 1720;
    v6 = *(_QWORD **)(v3 + 40);
    v47 = *(_DWORD *)(v4 + 56);
    v32 = v2[88];
    v33 = v2[89];
    v34 = v2[90];
    v7 = *(const WCHAR **)(v4 + 4800);
    *(_QWORD *)&hProvider.LevelPlus1 = WPP_MAIN_CB.SecurityDescriptor;
    v8 = *(_WORD *)(v3 + 96);
    v35 = **(_WORD **)(v3 + 32);
    v36 = v8;
    v9 = v6[1];
    if ( v9 >= 0 || (v40 = v6[1], (v9 & 0x4000000000000000LL) == 0) )
      v40 = -1;
    v10 = v6[2];
    if ( v10 >= 0 || (v41 = v6[2], (v10 & 0x4000000000000000LL) == 0) )
      v41 = -1;
    v11 = v6[9];
    if ( v11 < 0 && (v11 & 0x4000000000000000LL) != 0 )
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
    if ( v13 >= 0 || (v42 = *(_QWORD *)(v12 + 8), (v13 & 0x4000000000000000LL) == 0) )
      v42 = -1;
    v14 = *(_QWORD *)(v12 + 16);
    if ( v14 >= 0 || (v43 = *(_QWORD *)(v12 + 16), (v14 & 0x4000000000000000LL) == 0) )
      v43 = -1;
    v15 = *(_QWORD *)(v3 + 72);
    v16 = *(_WORD *)(v3 + 104);
    v17 = *(_QWORD *)(v15 + 8);
    if ( v17 >= 0 || (v30 = *(_QWORD *)(v15 + 8), (v17 & 0x4000000000000000LL) == 0) )
      v30 = -1;
    v18 = *(_QWORD **)(v3 + 80);
    v19 = *(_WORD *)(v3 + 106);
    v20 = v18[1];
    if ( v20 < 0 && (v20 & 0x4000000000000000LL) != 0 )
      v44 = (unsigned __int8)v20;
    else
      v44 = -1;
    v21 = v18[2];
    if ( v21 >= 0 || (v45 = v18[2], (v21 & 0x4000000000000000LL) == 0) )
      v45 = -1;
    v22 = v18[3];
    if ( v22 >= 0 || (v46 = v18[3], (v22 & 0x4000000000000000LL) == 0) )
      v46 = -1;
    v23 = *(_QWORD *)(v3 + 88);
    v24 = *(_WORD *)(v3 + 108);
    v25 = *(_QWORD *)(v23 + 8);
    if ( v25 >= 0 || (v31 = *(_QWORD *)(v23 + 8), (v25 & 0x4000000000000000LL) == 0) )
      v31 = -1;
    v52 = 0;
    v55 = 0;
    v58 = 0;
    v61 = 0;
    v64 = 0;
    v67 = 0;
    v51 = 16;
    v54 = 16;
    v56 = &v47;
    v59 = &v32;
    v62 = &v33;
    v50 = v4 + 5192;
    v60 = 1;
    v63 = 1;
    v66 = 1;
    v65 = &v34;
    v53 = v5;
    v57 = 4;
    TlgCreateWsz(&pDesc, v7);
    TlgCreateSz(&v69, v26);
    TlgCreateSz(&v70, (LPCSTR)(v27 + 9));
    v72 = 8LL;
    v74 = 2LL;
    v73 = &v35;
    p_hProvider = &hProvider;
    v75 = v78;
    v78[0] = v36;
    v79 = &v40;
    v81 = &v41;
    v83 = &v48;
    v85 = v88;
    ProviderMetadataPtr = hProvider.ProviderMetadataPtr;
    v88[0] = v37;
    v89 = v92;
    KeywordAny = hProvider.KeywordAny;
    v92[0] = v38;
    v93 = v96;
    v96[0] = v39;
    v97 = &v42;
    v76 = 2LL;
    v77 = v6;
    v78[1] = 0;
    v80 = 4LL;
    v82 = 4LL;
    v84 = 8LL;
    v86 = 2LL;
    v88[1] = 0;
    v90 = 2LL;
    v92[1] = 0;
    v94 = 2LL;
    v95 = v12;
    v96[1] = 0;
    v98 = 4LL;
    v99 = &v43;
    v101 = v104;
    v104[0] = v16;
    v105 = &v30;
    v107 = v110;
    v110[0] = v19;
    v111 = &v44;
    v113 = &v45;
    v115 = &v46;
    v117 = v120;
    v120[0] = v24;
    v121 = &v31;
    v100 = 4LL;
    v102 = 2LL;
    v103 = v15;
    v104[1] = 0;
    v106 = 1LL;
    v108 = 2LL;
    v109 = v28;
    v110[1] = 0;
    v112 = 4LL;
    v114 = 4LL;
    v116 = 4LL;
    v118 = 2LL;
    v119 = v23;
    v120[1] = 0;
    v122 = 1LL;
    TlgWrite(&hProvider, &unk_1C004E199, v29, 0LL, 0x25u, (EVENT_DATA_DESCRIPTOR *)&hProvider.RegHandle);
  }
}
