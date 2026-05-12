/*
 * XREFs of StorpTelemetryLogUnitErrorDataCriticalData @ 0x1C0044910
 * Callers:
 *     StorpTelemetrySendUnitErrorData @ 0x1C0005978 (StorpTelemetrySendUnitErrorData.c)
 * Callees:
 *     _TlgCreateSz @ 0x1C00015D8 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C0001610 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C00016B0 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1C00016F0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryLogUnitErrorDataCriticalData(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  void *v5; // r9
  __int64 v6; // rcx
  int v7; // r10d
  int v8; // r11d
  const WCHAR *v9; // rdx
  __int16 v10; // r10
  __int16 v11; // r11
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  char v14; // [rsp+30h] [rbp-D0h] BYREF
  char v15; // [rsp+31h] [rbp-CFh] BYREF
  char v16; // [rsp+32h] [rbp-CEh] BYREF
  char v17; // [rsp+33h] [rbp-CDh] BYREF
  int v18; // [rsp+34h] [rbp-CCh] BYREF
  int v19; // [rsp+38h] [rbp-C8h] BYREF
  int v20; // [rsp+3Ch] [rbp-C4h] BYREF
  int v21; // [rsp+40h] [rbp-C0h] BYREF
  int v22; // [rsp+44h] [rbp-BCh] BYREF
  int v23; // [rsp+48h] [rbp-B8h] BYREF
  int v24; // [rsp+4Ch] [rbp-B4h] BYREF
  int v25; // [rsp+50h] [rbp-B0h] BYREF
  struct _TlgProvider_t hProvider; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+98h] [rbp-68h]
  __int64 v28; // [rsp+A0h] [rbp-60h]
  __int64 v29; // [rsp+A8h] [rbp-58h]
  int *v30; // [rsp+B0h] [rbp-50h]
  __int64 v31; // [rsp+B8h] [rbp-48h]
  char *v32; // [rsp+C0h] [rbp-40h]
  void *v33; // [rsp+C8h] [rbp-38h]
  char *v34; // [rsp+D0h] [rbp-30h]
  void *v35; // [rsp+D8h] [rbp-28h]
  char *v36; // [rsp+E0h] [rbp-20h]
  void *v37; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F0h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+110h] [rbp+10h] BYREF
  struct _TlgProvider_t *p_hProvider; // [rsp+120h] [rbp+20h]
  __int64 v42; // [rsp+128h] [rbp+28h]
  int *v43; // [rsp+130h] [rbp+30h]
  __int64 v44; // [rsp+138h] [rbp+38h]
  int *v45; // [rsp+140h] [rbp+40h]
  __int64 v46; // [rsp+148h] [rbp+48h]
  int *v47; // [rsp+150h] [rbp+50h]
  __int64 v48; // [rsp+158h] [rbp+58h]
  int *v49; // [rsp+160h] [rbp+60h]
  __int64 v50; // [rsp+168h] [rbp+68h]
  int *v51; // [rsp+170h] [rbp+70h]
  __int64 v52; // [rsp+178h] [rbp+78h]
  int *v53; // [rsp+180h] [rbp+80h]
  __int64 v54; // [rsp+188h] [rbp+88h]
  int *v55; // [rsp+190h] [rbp+90h]
  __int64 v56; // [rsp+198h] [rbp+98h]
  _QWORD *v57; // [rsp+1A0h] [rbp+A0h]
  __int64 v58; // [rsp+1A8h] [rbp+A8h]
  __int64 v59; // [rsp+1B0h] [rbp+B0h]
  _QWORD v60[4]; // [rsp+1B8h] [rbp+B8h] BYREF
  _DWORD v61[2]; // [rsp+1D8h] [rbp+D8h] BYREF
  _DWORD *v62; // [rsp+1E0h] [rbp+E0h]
  __int64 v63; // [rsp+1E8h] [rbp+E8h]
  __int64 v64; // [rsp+1F0h] [rbp+F0h]
  _DWORD v65[2]; // [rsp+1F8h] [rbp+F8h] BYREF

  ++g_StorpTraceLoggingCriticalEventsLogged;
  if ( (unsigned int)dword_1C0056060 > 5 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)a1, 0x800000000000uLL) )
    {
      v6 = *(_QWORD *)(v4 + 24);
      v7 = *(unsigned __int16 *)(a2 + 26);
      v8 = *(unsigned __int16 *)(a2 + 28);
      v14 = 3;
      v18 = *(_DWORD *)(v6 + 56);
      v15 = *(_BYTE *)(a1 + 88);
      v16 = *(_BYTE *)(a1 + 89);
      v17 = *(_BYTE *)(a1 + 90);
      v9 = *(const WCHAR **)(v6 + 4800);
      *(_QWORD *)&hProvider.LevelPlus1 = *((_QWORD *)&WPP_MAIN_CB.Reserved + 1);
      v19 = *(_DWORD *)(a1 + 1936);
      v20 = *(_DWORD *)(a1 + 1940);
      v21 = *(_DWORD *)(a1 + 1944);
      v22 = *(_DWORD *)(a1 + 1948);
      v23 = *(_DWORD *)(a1 + 1856);
      hProvider.EnableCallback = (void (__fastcall *)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *))&v14;
      hProvider.AnnotationFunc = (void (*)(...))(v6 + 5192);
      v24 = v7;
      v28 = a1 + 1720;
      v30 = &v18;
      v32 = &v15;
      v34 = &v16;
      v36 = &v17;
      v25 = v8;
      hProvider.CallbackContext = v5;
      v27 = 16LL;
      v29 = 16LL;
      v31 = 4LL;
      v33 = v5;
      v35 = v5;
      v37 = v5;
      TlgCreateWsz(&pDesc, v9);
      TlgCreateSz(&v39, (LPCSTR)a2);
      TlgCreateSz(&v40, (LPCSTR)(a2 + 9));
      v42 = 8LL;
      v43 = &v19;
      p_hProvider = &hProvider;
      v45 = &v20;
      v47 = &v21;
      v49 = &v22;
      v51 = &v23;
      v53 = &v24;
      v55 = &v25;
      v44 = 4LL;
      v46 = 4LL;
      v48 = 4LL;
      v50 = 4LL;
      v52 = 4LL;
      v54 = 4LL;
      v56 = 4LL;
      v57 = v60;
      v59 = a1 + 1952;
      v60[1] = v61;
      v60[3] = a1 + 1992;
      v58 = 2LL;
      v61[0] = (unsigned __int16)(40 * v10);
      v62 = v65;
      v64 = a1 + 2392;
      v60[0] = 40LL;
      v65[0] = (unsigned __int16)(40 * v11);
      v60[2] = 2LL;
      v61[1] = 0;
      v63 = 2LL;
      v65[1] = 0;
      TlgWrite(&hProvider, &unk_1C004D478, v12, v13, 0x1Au, (EVENT_DATA_DESCRIPTOR *)&hProvider.ProviderMetadataPtr);
    }
  }
}
