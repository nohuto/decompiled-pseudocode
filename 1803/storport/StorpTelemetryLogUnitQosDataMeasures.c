/*
 * XREFs of StorpTelemetryLogUnitQosDataMeasures @ 0x1C004502C
 * Callers:
 *     StorpTelemetrySendUnitQos @ 0x1C0046C64 (StorpTelemetrySendUnitQos.c)
 * Callees:
 *     _TlgCreateSz @ 0x1C00015D8 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C0001610 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C00016B0 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1C00016F0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryLogUnitQosDataMeasures(const struct _TlgProvider_t *a1)
{
  __int64 v1; // rcx
  __int64 v2; // r9
  __int64 v3; // r10
  __int64 v4; // rcx
  const WCHAR *v5; // rdx
  bool v6; // al
  LPCSTR v7; // r10
  __int64 v8; // r10
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  char v11; // [rsp+30h] [rbp-D0h] BYREF
  char v12; // [rsp+31h] [rbp-CFh] BYREF
  char v13; // [rsp+32h] [rbp-CEh] BYREF
  bool v14; // [rsp+33h] [rbp-CDh] BYREF
  char v15; // [rsp+34h] [rbp-CCh] BYREF
  int v16; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE hProvider[68]; // [rsp+3Ch] [rbp-C4h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  __int64 v19; // [rsp+A0h] [rbp-60h]
  __int64 v20; // [rsp+A8h] [rbp-58h]
  __int64 v21; // [rsp+B0h] [rbp-50h]
  __int64 v22; // [rsp+B8h] [rbp-48h]
  int *v23; // [rsp+C0h] [rbp-40h]
  __int64 v24; // [rsp+C8h] [rbp-38h]
  char *v25; // [rsp+D0h] [rbp-30h]
  __int64 v26; // [rsp+D8h] [rbp-28h]
  char *v27; // [rsp+E0h] [rbp-20h]
  __int64 v28; // [rsp+E8h] [rbp-18h]
  char *v29; // [rsp+F0h] [rbp-10h]
  __int64 v30; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+120h] [rbp+20h] BYREF
  _BYTE *v34; // [rsp+130h] [rbp+30h]
  __int64 v35; // [rsp+138h] [rbp+38h]
  _BYTE *v36; // [rsp+140h] [rbp+40h]
  __int64 v37; // [rsp+148h] [rbp+48h]
  _BYTE *v38; // [rsp+150h] [rbp+50h]
  __int64 v39; // [rsp+158h] [rbp+58h]
  _BYTE *v40; // [rsp+160h] [rbp+60h]
  __int64 v41; // [rsp+168h] [rbp+68h]
  _BYTE *v42; // [rsp+170h] [rbp+70h]
  __int64 v43; // [rsp+178h] [rbp+78h]
  _BYTE *v44; // [rsp+180h] [rbp+80h]
  __int64 v45; // [rsp+188h] [rbp+88h]
  bool *v46; // [rsp+190h] [rbp+90h]
  __int64 v47; // [rsp+198h] [rbp+98h]
  _BYTE *v48; // [rsp+1A0h] [rbp+A0h]
  __int64 v49; // [rsp+1A8h] [rbp+A8h]
  _BYTE *v50; // [rsp+1B0h] [rbp+B0h]
  __int64 v51; // [rsp+1B8h] [rbp+B8h]
  char *v52; // [rsp+1C0h] [rbp+C0h]
  __int64 v53; // [rsp+1C8h] [rbp+C8h]
  _BYTE *v54; // [rsp+1D0h] [rbp+D0h]
  __int64 v55; // [rsp+1D8h] [rbp+D8h]
  _BYTE *v56; // [rsp+1E0h] [rbp+E0h]
  __int64 v57; // [rsp+1E8h] [rbp+E8h]
  _BYTE *v58; // [rsp+1F0h] [rbp+F0h]
  __int64 v59; // [rsp+1F8h] [rbp+F8h]
  _BYTE *v60; // [rsp+200h] [rbp+100h]
  __int64 v61; // [rsp+208h] [rbp+108h]
  _BYTE *v62; // [rsp+210h] [rbp+110h]
  __int64 v63; // [rsp+218h] [rbp+118h]

  if ( (unsigned int)dword_1C0056060 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x400000000000uLL) )
    {
      v4 = *(_QWORD *)(v1 + 24);
      v16 = *(_DWORD *)(v4 + 56);
      v11 = *(_BYTE *)(v2 + 88);
      v12 = *(_BYTE *)(v2 + 89);
      v13 = *(_BYTE *)(v2 + 90);
      v5 = *(const WCHAR **)(v4 + 4800);
      *(_DWORD *)hProvider = *(_DWORD *)(v2 + 2628);
      *(_DWORD *)&hProvider[4] = *(_DWORD *)(v2 + 2632);
      *(_QWORD *)&hProvider[8] = *(_QWORD *)(v2 + 2636);
      *(_QWORD *)&hProvider[16] = *(_QWORD *)(v2 + 2644);
      v6 = (*(_BYTE *)(v2 + 154) & 2) != 0;
      v20 = 16LL;
      v14 = v6;
      *(_OWORD *)&hProvider[36] = *(_OWORD *)(v2 + 1824);
      v15 = *(_BYTE *)(v3 + 32);
      *(_OWORD *)&hProvider[52] = *(_OWORD *)(v2 + 1840);
      *(_DWORD *)&hProvider[24] = *(_DWORD *)(v2 + 1856);
      *(_DWORD *)&hProvider[28] = *(_DWORD *)(v2 + 1860);
      *(_DWORD *)&hProvider[32] = *(_DWORD *)(v3 + 28);
      v19 = v4 + 5192;
      v22 = 16LL;
      v21 = v2 + 1720;
      v23 = &v16;
      v25 = &v11;
      v27 = &v12;
      v29 = &v13;
      v24 = 4LL;
      v26 = 1LL;
      v28 = 1LL;
      v30 = 1LL;
      TlgCreateWsz(&pDesc, v5);
      TlgCreateSz(&v32, v7);
      TlgCreateSz(&v33, (LPCSTR)(v8 + 9));
      v35 = 4LL;
      v36 = &hProvider[4];
      v34 = hProvider;
      v38 = &hProvider[8];
      v40 = &hProvider[12];
      v37 = 4LL;
      v39 = 4LL;
      v41 = 4LL;
      v43 = 4LL;
      v42 = &hProvider[16];
      v44 = &hProvider[20];
      v46 = &v14;
      v48 = &hProvider[36];
      v50 = &hProvider[44];
      v52 = &v15;
      v54 = &hProvider[52];
      v56 = &hProvider[60];
      v58 = &hProvider[24];
      v60 = &hProvider[28];
      v62 = &hProvider[32];
      v45 = 4LL;
      v47 = 1LL;
      v49 = 8LL;
      v51 = 8LL;
      v53 = 1LL;
      v55 = 8LL;
      v57 = 8LL;
      v59 = 4LL;
      v61 = 4LL;
      v63 = 4LL;
      TlgWrite((TraceLoggingHProvider)hProvider, &unk_1C004D0B9, v9, v10, 0x1Au, &pData);
    }
  }
}
