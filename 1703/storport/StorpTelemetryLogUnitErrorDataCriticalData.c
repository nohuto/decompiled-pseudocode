/*
 * XREFs of StorpTelemetryLogUnitErrorDataCriticalData @ 0x1C0043E64
 * Callers:
 *     StorpTelemetrySendUnitErrorData @ 0x1C000342C (StorpTelemetrySendUnitErrorData.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1C0002B58 (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x1C0002B94 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C0002BC8 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0002C68 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryLogUnitErrorDataCriticalData(const struct _TlgProvider_t *a1, __int64 a2)
{
  __int64 v4; // rcx
  void *v5; // r9
  __int64 v6; // rdx
  const WCHAR *v7; // r8
  int v8; // eax
  int v9; // ecx
  unsigned __int16 v10; // r10
  unsigned __int16 v11; // r11
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
  unsigned __int64 *p_KeywordAll; // [rsp+A0h] [rbp-60h]
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
  const struct _TlgProvider_t *v59; // [rsp+1B0h] [rbp+B0h]
  _QWORD v60[4]; // [rsp+1B8h] [rbp+B8h] BYREF
  _DWORD v61[2]; // [rsp+1D8h] [rbp+D8h] BYREF
  _DWORD *v62; // [rsp+1E0h] [rbp+E0h]
  __int64 v63; // [rsp+1E8h] [rbp+E8h]
  void (**p_AnnotationFunc)(...); // [rsp+1F0h] [rbp+F0h]
  _DWORD v65[6]; // [rsp+1F8h] [rbp+F8h] BYREF

  ++g_StorpTraceLoggingCriticalEventsLogged;
  if ( (unsigned int)dword_1C0055010 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x800000000000uLL) )
    {
      v6 = *(_QWORD *)(v4 + 24);
      v14 = 3;
      v18 = *(_DWORD *)(v6 + 56);
      v15 = *(_BYTE *)(v4 + 88);
      v16 = *(_BYTE *)(v4 + 89);
      v17 = *(_BYTE *)(v4 + 90);
      v7 = *(const WCHAR **)(v6 + 4800);
      *(_QWORD *)&hProvider.LevelPlus1 = *(_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.Lock;
      v19 = *(_DWORD *)(v4 + 1904);
      v20 = *(_DWORD *)(v4 + 1908);
      v21 = *(_DWORD *)(v4 + 1912);
      v22 = *(_DWORD *)(v4 + 1916);
      v8 = *(_DWORD *)(v4 + 1824);
      v9 = *(unsigned __int16 *)(a2 + 28);
      v23 = v8;
      v24 = *(unsigned __int16 *)(a2 + 26);
      v25 = v9;
      hProvider.EnableCallback = (void (__fastcall *)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *))&v14;
      hProvider.AnnotationFunc = (void (*)(...))(v6 + 5192);
      p_KeywordAll = &a1[26].KeywordAll;
      hProvider.CallbackContext = v5;
      v30 = &v18;
      v32 = &v15;
      v34 = &v16;
      v36 = &v17;
      v27 = 16LL;
      v29 = 16LL;
      v31 = 4LL;
      v33 = v5;
      v35 = v5;
      v37 = v5;
      TlgCreateWsz(&pDesc, v7);
      TlgCreateSz(&v39, (LPCSTR)a2);
      TlgCreateSz(&v40, (LPCSTR)(a2 + 9));
      v42 = 8LL;
      v43 = &v19;
      p_hProvider = &hProvider;
      v45 = &v20;
      v47 = &v21;
      v49 = &v22;
      v44 = 4LL;
      v46 = 4LL;
      v48 = 4LL;
      v50 = 4LL;
      v51 = &v23;
      v53 = &v24;
      v55 = &v25;
      v57 = v60;
      v59 = a1 + 30;
      v60[1] = v61;
      v60[3] = (char *)a1 + 1960;
      v61[0] = v10;
      v62 = v65;
      p_AnnotationFunc = &a1[36].AnnotationFunc;
      v65[0] = v11;
      v52 = 4LL;
      v54 = 4LL;
      v56 = 4LL;
      v58 = 2LL;
      v60[0] = 40LL;
      v60[2] = 2LL;
      v61[1] = 0;
      v63 = 2LL;
      v65[1] = 0;
      TlgWrite(&hProvider, &unk_1C004C932, v12, v13, 0x1Au, (EVENT_DATA_DESCRIPTOR *)&hProvider.ProviderMetadataPtr);
    }
  }
}
