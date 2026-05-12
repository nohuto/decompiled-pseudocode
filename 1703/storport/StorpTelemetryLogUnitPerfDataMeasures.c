/*
 * XREFs of StorpTelemetryLogUnitPerfDataMeasures @ 0x1C0002748
 * Callers:
 *     StorpTelemetrySendUnitPerfData @ 0x1C00041F0 (StorpTelemetrySendUnitPerfData.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1C0002B58 (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x1C0002B94 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C0002BC8 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0002C68 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryLogUnitPerfDataMeasures(const struct _TlgProvider_t *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  const WCHAR *v6; // r9
  unsigned __int64 v7; // kr00_8
  unsigned __int64 v8; // kr08_8
  unsigned __int64 v9; // kr10_8
  __int64 v10; // rbx
  __int64 v11; // rcx
  unsigned __int64 v12; // kr18_8
  __int64 v13; // rcx
  __int64 v14; // r10
  LPCWSTR v15; // r11
  LPCGUID v16; // r8
  LPCGUID v17; // r9
  char v18; // [rsp+30h] [rbp-D0h] BYREF
  char v19; // [rsp+31h] [rbp-CFh] BYREF
  char v20; // [rsp+32h] [rbp-CEh] BYREF
  char v21; // [rsp+33h] [rbp-CDh] BYREF
  unsigned __int16 v22; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 v23; // [rsp+38h] [rbp-C8h] BYREF
  int v24; // [rsp+3Ch] [rbp-C4h] BYREF
  int v25; // [rsp+40h] [rbp-C0h] BYREF
  int v26; // [rsp+44h] [rbp-BCh] BYREF
  int v27; // [rsp+48h] [rbp-B8h] BYREF
  int v28; // [rsp+4Ch] [rbp-B4h] BYREF
  int v29; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+68h] [rbp-98h] BYREF
  __int64 v33; // [rsp+70h] [rbp-90h] BYREF
  __int64 v34; // [rsp+78h] [rbp-88h] BYREF
  __int64 v35; // [rsp+80h] [rbp-80h] BYREF
  __int64 v36; // [rsp+88h] [rbp-78h] BYREF
  struct _TlgProvider_t hProvider; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 *p_KeywordAll; // [rsp+D0h] [rbp-30h]
  __int64 v39; // [rsp+D8h] [rbp-28h]
  int *v40; // [rsp+E0h] [rbp-20h]
  __int64 v41; // [rsp+E8h] [rbp-18h]
  char *v42; // [rsp+F0h] [rbp-10h]
  __int64 v43; // [rsp+F8h] [rbp-8h]
  char *v44; // [rsp+100h] [rbp+0h]
  __int64 v45; // [rsp+108h] [rbp+8h]
  char *v46; // [rsp+110h] [rbp+10h]
  __int64 v47; // [rsp+118h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+140h] [rbp+40h] BYREF
  __int64 *v51; // [rsp+150h] [rbp+50h]
  __int64 v52; // [rsp+158h] [rbp+58h]
  char *v53; // [rsp+160h] [rbp+60h]
  __int64 v54; // [rsp+168h] [rbp+68h]
  __int64 *v55; // [rsp+170h] [rbp+70h]
  __int64 v56; // [rsp+178h] [rbp+78h]
  int *v57; // [rsp+180h] [rbp+80h]
  __int64 v58; // [rsp+188h] [rbp+88h]
  int *v59; // [rsp+190h] [rbp+90h]
  __int64 v60; // [rsp+198h] [rbp+98h]
  int *v61; // [rsp+1A0h] [rbp+A0h]
  __int64 v62; // [rsp+1A8h] [rbp+A8h]
  int *v63; // [rsp+1B0h] [rbp+B0h]
  __int64 v64; // [rsp+1B8h] [rbp+B8h]
  int *v65; // [rsp+1C0h] [rbp+C0h]
  __int64 v66; // [rsp+1C8h] [rbp+C8h]
  __int64 *v67; // [rsp+1D0h] [rbp+D0h]
  __int64 v68; // [rsp+1D8h] [rbp+D8h]
  __int64 *v69; // [rsp+1E0h] [rbp+E0h]
  __int64 v70; // [rsp+1E8h] [rbp+E8h]
  __int64 *v71; // [rsp+1F0h] [rbp+F0h]
  __int64 v72; // [rsp+1F8h] [rbp+F8h]
  __int64 *v73; // [rsp+200h] [rbp+100h]
  __int64 v74; // [rsp+208h] [rbp+108h]
  __int64 *v75; // [rsp+210h] [rbp+110h]
  __int64 v76; // [rsp+218h] [rbp+118h]
  struct _EVENT_DATA_DESCRIPTOR v77; // [rsp+220h] [rbp+120h] BYREF
  unsigned __int16 *v78; // [rsp+230h] [rbp+130h]
  __int64 v79; // [rsp+238h] [rbp+138h]
  __int64 v80; // [rsp+240h] [rbp+140h]
  int v81; // [rsp+248h] [rbp+148h]
  int v82; // [rsp+24Ch] [rbp+14Ch]
  struct _EVENT_DATA_DESCRIPTOR v83; // [rsp+250h] [rbp+150h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v84; // [rsp+260h] [rbp+160h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v85; // [rsp+270h] [rbp+170h] BYREF
  struct _TlgProvider_t *p_hProvider; // [rsp+280h] [rbp+180h]
  __int64 v87; // [rsp+288h] [rbp+188h]
  unsigned __int16 *v88; // [rsp+290h] [rbp+190h]
  __int64 v89; // [rsp+298h] [rbp+198h]
  __int64 v90; // [rsp+2A0h] [rbp+1A0h]
  int v91; // [rsp+2A8h] [rbp+1A8h]
  int v92; // [rsp+2ACh] [rbp+1ACh]

  if ( (unsigned int)dword_1C0055010 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x400000000000uLL) )
    {
      v5 = *(_QWORD *)(v4 + 24);
      v24 = *(_DWORD *)(v5 + 56);
      v18 = *(_BYTE *)(v4 + 88);
      v19 = *(_BYTE *)(v4 + 89);
      v20 = *(_BYTE *)(v4 + 90);
      v6 = *(const WCHAR **)(v5 + 4800);
      v30 = *(_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.Lock;
      v21 = *(_BYTE *)(a2 + 40);
      v31 = *(_QWORD *)(a2 + 96);
      v25 = *(_DWORD *)(v4 + 528);
      v26 = *(_DWORD *)(v4 + 532);
      v7 = *(_QWORD *)(a2 + 112);
      hProvider.AnnotationFunc = (void (*)(...))16;
      v27 = v7 / 0x2710;
      v8 = *(_QWORD *)(v4 + 1880);
      v39 = 16LL;
      v28 = v8 / 0x2710;
      v9 = *(_QWORD *)(v4 + 1888);
      v10 = *(_QWORD *)(a2 + 104);
      v32 = *(_QWORD *)(a2 + 56);
      v33 = *(_QWORD *)(a2 + 64);
      v34 = *(_QWORD *)(a2 + 72);
      v11 = *(_QWORD *)(a2 + 80);
      v29 = v9 / 0x2710;
      v12 = *(_QWORD *)(a2 + 32);
      v23 = dword_1C00553C0;
      hProvider.CallbackContext = (void *)(v5 + 5192);
      p_KeywordAll = &a1[26].KeywordAll;
      v40 = &v24;
      v35 = v11;
      v13 = *(_QWORD *)(a2 + 88);
      v42 = &v18;
      v36 = v13;
      v44 = &v19;
      v22 = HIWORD(TelemetryPerfContext);
      *(_QWORD *)&hProvider.LevelPlus1 = v12 / 0x2710;
      v46 = &v20;
      v41 = 4LL;
      v43 = 1LL;
      v45 = 1LL;
      v47 = 1LL;
      TlgCreateWsz(&pDesc, v6);
      TlgCreateSz(&v49, (LPCSTR)a2);
      TlgCreateSz(&v50, (LPCSTR)(a2 + 9));
      v52 = 8LL;
      v53 = &v21;
      v51 = &v30;
      v55 = &v31;
      v54 = 1LL;
      v57 = &v25;
      v56 = 8LL;
      v59 = &v26;
      v61 = &v27;
      v63 = &v28;
      v65 = &v29;
      v67 = &v32;
      v69 = &v33;
      v71 = &v34;
      v73 = &v35;
      v75 = &v36;
      v58 = 4LL;
      v60 = 4LL;
      v62 = 4LL;
      v64 = 4LL;
      v66 = 4LL;
      v68 = 8LL;
      v70 = 8LL;
      v72 = 8LL;
      v74 = 8LL;
      v76 = 8LL;
      TlgCreateWsz(&v77, L"Read, Write");
      v78 = &v22;
      v81 = 8 * v22;
      v79 = 2LL;
      v80 = v14;
      v82 = 0;
      TlgCreateWsz(&v83, v15);
      TlgCreateWsz(&v84, L"Flush, Unmap");
      TlgCreateWsz(&v85, L"64ms, 256ms, 1024ms, 5120ms, 5120+ms");
      v87 = 8LL;
      v88 = &v23;
      v91 = 8 * v23;
      p_hProvider = &hProvider;
      v89 = 2LL;
      v90 = v10;
      v92 = 0;
      TlgWrite(&hProvider, &unk_1C004DB6B, v16, v17, 0x21u, (EVENT_DATA_DESCRIPTOR *)&hProvider.KeywordAny);
    }
  }
}
