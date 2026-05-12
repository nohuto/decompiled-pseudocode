/*
 * XREFs of StorpTelemetryLogUnitErrorDataMeasures @ 0x1C0003D9C
 * Callers:
 *     StorpTelemetrySendUnitErrorData @ 0x1C0005978 (StorpTelemetrySendUnitErrorData.c)
 * Callees:
 *     _TlgCreateSz @ 0x1C00015D8 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C0001610 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C00016B0 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1C00016F0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryLogUnitErrorDataMeasures(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // r10d
  int v7; // r11d
  const WCHAR *v8; // rdx
  __int16 v9; // r10
  __int16 v10; // r11
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  char v13; // [rsp+30h] [rbp-D0h] BYREF
  char v14; // [rsp+31h] [rbp-CFh] BYREF
  char v15; // [rsp+32h] [rbp-CEh] BYREF
  char v16; // [rsp+33h] [rbp-CDh] BYREF
  int v17; // [rsp+34h] [rbp-CCh] BYREF
  int v18; // [rsp+38h] [rbp-C8h] BYREF
  int v19; // [rsp+3Ch] [rbp-C4h] BYREF
  int v20; // [rsp+40h] [rbp-C0h] BYREF
  int v21; // [rsp+44h] [rbp-BCh] BYREF
  int v22; // [rsp+48h] [rbp-B8h] BYREF
  int v23; // [rsp+4Ch] [rbp-B4h] BYREF
  int v24; // [rsp+50h] [rbp-B0h] BYREF
  struct _TlgProvider_t hProvider; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+98h] [rbp-68h]
  __int64 v27; // [rsp+A0h] [rbp-60h]
  __int64 v28; // [rsp+A8h] [rbp-58h]
  int *v29; // [rsp+B0h] [rbp-50h]
  __int64 v30; // [rsp+B8h] [rbp-48h]
  char *v31; // [rsp+C0h] [rbp-40h]
  __int64 v32; // [rsp+C8h] [rbp-38h]
  char *v33; // [rsp+D0h] [rbp-30h]
  __int64 v34; // [rsp+D8h] [rbp-28h]
  char *v35; // [rsp+E0h] [rbp-20h]
  __int64 v36; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F0h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+110h] [rbp+10h] BYREF
  struct _TlgProvider_t *p_hProvider; // [rsp+120h] [rbp+20h]
  __int64 v41; // [rsp+128h] [rbp+28h]
  int *v42; // [rsp+130h] [rbp+30h]
  __int64 v43; // [rsp+138h] [rbp+38h]
  int *v44; // [rsp+140h] [rbp+40h]
  __int64 v45; // [rsp+148h] [rbp+48h]
  int *v46; // [rsp+150h] [rbp+50h]
  __int64 v47; // [rsp+158h] [rbp+58h]
  int *v48; // [rsp+160h] [rbp+60h]
  __int64 v49; // [rsp+168h] [rbp+68h]
  int *v50; // [rsp+170h] [rbp+70h]
  __int64 v51; // [rsp+178h] [rbp+78h]
  int *v52; // [rsp+180h] [rbp+80h]
  __int64 v53; // [rsp+188h] [rbp+88h]
  int *v54; // [rsp+190h] [rbp+90h]
  __int64 v55; // [rsp+198h] [rbp+98h]
  _QWORD *v56; // [rsp+1A0h] [rbp+A0h]
  __int64 v57; // [rsp+1A8h] [rbp+A8h]
  __int64 v58; // [rsp+1B0h] [rbp+B0h]
  _QWORD v59[4]; // [rsp+1B8h] [rbp+B8h] BYREF
  _DWORD v60[2]; // [rsp+1D8h] [rbp+D8h] BYREF
  _DWORD *v61; // [rsp+1E0h] [rbp+E0h]
  __int64 v62; // [rsp+1E8h] [rbp+E8h]
  __int64 v63; // [rsp+1F0h] [rbp+F0h]
  _DWORD v64[2]; // [rsp+1F8h] [rbp+F8h] BYREF

  if ( (unsigned int)dword_1C0056060 > 5 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)a1, 0x400000000000uLL) )
    {
      v5 = *(_QWORD *)(v4 + 24);
      v6 = *(unsigned __int16 *)(a2 + 26);
      v7 = *(unsigned __int16 *)(a2 + 28);
      v13 = 3;
      v17 = *(_DWORD *)(v5 + 56);
      v14 = *(_BYTE *)(a1 + 88);
      v15 = *(_BYTE *)(a1 + 89);
      v16 = *(_BYTE *)(a1 + 90);
      v8 = *(const WCHAR **)(v5 + 4800);
      *(_QWORD *)&hProvider.LevelPlus1 = *((_QWORD *)&WPP_MAIN_CB.Reserved + 1);
      v18 = *(_DWORD *)(a1 + 1936);
      v19 = *(_DWORD *)(a1 + 1940);
      v20 = *(_DWORD *)(a1 + 1944);
      v21 = *(_DWORD *)(a1 + 1948);
      v22 = *(_DWORD *)(a1 + 1856);
      hProvider.EnableCallback = (void (__fastcall *)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *))&v13;
      hProvider.AnnotationFunc = (void (*)(...))(v5 + 5192);
      v23 = v6;
      v27 = a1 + 1720;
      v29 = &v17;
      v31 = &v14;
      v33 = &v15;
      v35 = &v16;
      v24 = v7;
      hProvider.CallbackContext = (void *)1;
      v26 = 16LL;
      v28 = 16LL;
      v30 = 4LL;
      v32 = 1LL;
      v34 = 1LL;
      v36 = 1LL;
      TlgCreateWsz(&pDesc, v8);
      TlgCreateSz(&v38, (LPCSTR)a2);
      TlgCreateSz(&v39, (LPCSTR)(a2 + 9));
      v41 = 8LL;
      v42 = &v18;
      p_hProvider = &hProvider;
      v44 = &v19;
      v46 = &v20;
      v48 = &v21;
      v50 = &v22;
      v52 = &v23;
      v54 = &v24;
      v43 = 4LL;
      v45 = 4LL;
      v47 = 4LL;
      v49 = 4LL;
      v51 = 4LL;
      v53 = 4LL;
      v55 = 4LL;
      v56 = v59;
      v58 = a1 + 1952;
      v59[1] = v60;
      v59[3] = a1 + 1992;
      v57 = 2LL;
      v60[0] = (unsigned __int16)(40 * v9);
      v61 = v64;
      v63 = a1 + 2392;
      v59[0] = 40LL;
      v64[0] = (unsigned __int16)(40 * v10);
      v59[2] = 2LL;
      v60[1] = 0;
      v62 = 2LL;
      v64[1] = 0;
      TlgWrite(&hProvider, &unk_1C004D8C2, v11, v12, 0x1Au, (EVENT_DATA_DESCRIPTOR *)&hProvider.ProviderMetadataPtr);
    }
  }
}
