/*
 * XREFs of StorpTelemetryMiniportEventAdapter @ 0x1C0044FE8
 * Callers:
 *     StorpTelemetryMiniportEvent @ 0x1C001C454 (StorpTelemetryMiniportEvent.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1C0002B58 (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x1C0002B94 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C0002BC8 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0002C68 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryMiniportEventAdapter(const struct _TlgProvider_t *a1, int *a2)
{
  __int64 v3; // rcx
  const WCHAR *v4; // rdx
  __int64 v5; // r10
  int v6; // r11d
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+34h] [rbp-CCh] BYREF
  int v11; // [rsp+38h] [rbp-C8h] BYREF
  int v12; // [rsp+3Ch] [rbp-C4h] BYREF
  int v13; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+68h] [rbp-98h] BYREF
  __int64 v19; // [rsp+70h] [rbp-90h] BYREF
  __int64 v20; // [rsp+78h] [rbp-88h] BYREF
  struct _TlgProvider_t hProvider; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C0h] [rbp-40h] BYREF
  int *v23; // [rsp+D0h] [rbp-30h]
  __int64 v24; // [rsp+D8h] [rbp-28h]
  int *v25; // [rsp+E0h] [rbp-20h]
  __int64 v26; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+F0h] [rbp-10h] BYREF
  int *v28; // [rsp+100h] [rbp+0h]
  __int64 v29; // [rsp+108h] [rbp+8h]
  int *v30; // [rsp+110h] [rbp+10h]
  __int64 v31; // [rsp+118h] [rbp+18h]
  int *v32; // [rsp+120h] [rbp+20h]
  __int64 v33; // [rsp+128h] [rbp+28h]
  _DWORD *v34; // [rsp+130h] [rbp+30h]
  __int64 v35; // [rsp+138h] [rbp+38h]
  __int64 v36; // [rsp+140h] [rbp+40h]
  _DWORD v37[2]; // [rsp+148h] [rbp+48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+150h] [rbp+50h] BYREF
  __int64 *v39; // [rsp+160h] [rbp+60h]
  __int64 v40; // [rsp+168h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+170h] [rbp+70h] BYREF
  __int64 *v42; // [rsp+180h] [rbp+80h]
  __int64 v43; // [rsp+188h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+190h] [rbp+90h] BYREF
  __int64 *v45; // [rsp+1A0h] [rbp+A0h]
  __int64 v46; // [rsp+1A8h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 *v48; // [rsp+1C0h] [rbp+C0h]
  __int64 v49; // [rsp+1C8h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 *v51; // [rsp+1E0h] [rbp+E0h]
  __int64 v52; // [rsp+1E8h] [rbp+E8h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 *v54; // [rsp+200h] [rbp+100h]
  __int64 v55; // [rsp+208h] [rbp+108h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+210h] [rbp+110h] BYREF
  __int64 *v57; // [rsp+220h] [rbp+120h]
  __int64 v58; // [rsp+228h] [rbp+128h]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+230h] [rbp+130h] BYREF
  struct _TlgProvider_t *p_hProvider; // [rsp+240h] [rbp+140h]
  __int64 v61; // [rsp+248h] [rbp+148h]

  if ( (unsigned int)dword_1C0055010 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x200000000000uLL) )
    {
      v4 = *(const WCHAR **)(v3 + 4800);
      v9 = *(_DWORD *)(v3 + 4356);
      v10 = *a2;
      v11 = a2[1];
      v12 = a2[10];
      v13 = a2[11];
      v14 = *((_QWORD *)a2 + 12);
      v15 = *((_QWORD *)a2 + 17);
      v16 = *((_QWORD *)a2 + 22);
      v17 = *((_QWORD *)a2 + 27);
      v18 = *((_QWORD *)a2 + 32);
      v19 = *((_QWORD *)a2 + 37);
      v20 = *((_QWORD *)a2 + 42);
      *(_QWORD *)&hProvider.LevelPlus1 = *((_QWORD *)a2 + 47);
      hProvider.CallbackContext = (void *)(v3 + 5192);
      hProvider.AnnotationFunc = (void (*)(...))16;
      TlgCreateWsz(&pDesc, v4);
      v24 = 4LL;
      v23 = &v9;
      v25 = &v10;
      v26 = 4LL;
      TlgCreateSz(&v27, (LPCSTR)a2 + 8);
      v29 = 4LL;
      v30 = &v12;
      v28 = &v11;
      v32 = &v13;
      v31 = 4LL;
      v34 = v37;
      v33 = 4LL;
      v35 = 2LL;
      v36 = v5;
      v37[0] = v6;
      v37[1] = 0;
      TlgCreateSz(&v38, (LPCSTR)a2 + 64);
      v40 = 8LL;
      v39 = &v14;
      TlgCreateSz(&v41, (LPCSTR)a2 + 104);
      v43 = 8LL;
      v42 = &v15;
      TlgCreateSz(&v44, (LPCSTR)a2 + 144);
      v46 = 8LL;
      v45 = &v16;
      TlgCreateSz(&v47, (LPCSTR)a2 + 184);
      v48 = &v17;
      v49 = 8LL;
      TlgCreateSz(&v50, (LPCSTR)a2 + 224);
      v52 = 8LL;
      v51 = &v18;
      TlgCreateSz(&v53, (LPCSTR)a2 + 264);
      v55 = 8LL;
      v54 = &v19;
      TlgCreateSz(&v56, (LPCSTR)a2 + 304);
      v58 = 8LL;
      v57 = &v20;
      TlgCreateSz(&v59, (LPCSTR)a2 + 344);
      v61 = 8LL;
      p_hProvider = &hProvider;
      TlgWrite(&hProvider, &unk_1C004C0F1, v7, v8, 0x1Cu, (EVENT_DATA_DESCRIPTOR *)&hProvider.KeywordAny);
    }
  }
}
