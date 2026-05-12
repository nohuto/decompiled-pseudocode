/*
 * XREFs of StorpTelemetryMiniportEventUnit @ 0x1C001C4D4
 * Callers:
 *     StorpTelemetryMiniportEvent @ 0x1C001C454 (StorpTelemetryMiniportEvent.c)
 * Callees:
 *     _TlgCreateSz @ 0x1C0002B94 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C0002BC8 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0002C68 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 */

char __fastcall StorpTelemetryMiniportEventUnit(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  __int64 v4; // rax
  const unsigned __int16 **p_ProviderMetadataPtr; // rdi
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // r11
  _BYTE *v10; // rax
  __int64 v11; // rax
  __int64 v12; // r9
  int v13; // r10d
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  char v17; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v18; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v19; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v20; // [rsp+3Ch] [rbp-C4h] BYREF
  __int16 v21; // [rsp+40h] [rbp-C0h] BYREF
  int v22; // [rsp+44h] [rbp-BCh] BYREF
  int v23; // [rsp+48h] [rbp-B8h] BYREF
  int v24; // [rsp+4Ch] [rbp-B4h] BYREF
  int v25; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+68h] [rbp-98h] BYREF
  __int64 v29; // [rsp+70h] [rbp-90h] BYREF
  __int64 v30; // [rsp+78h] [rbp-88h] BYREF
  __int64 v31; // [rsp+80h] [rbp-80h] BYREF
  __int64 v32; // [rsp+88h] [rbp-78h] BYREF
  struct _TlgProvider_t hProvider; // [rsp+90h] [rbp-70h] BYREF
  __int64 v34; // [rsp+D0h] [rbp-30h]
  __int64 v35; // [rsp+D8h] [rbp-28h]
  const unsigned __int16 **v36; // [rsp+E0h] [rbp-20h]
  __int64 v37; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F0h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+120h] [rbp+20h] BYREF
  char *v42; // [rsp+130h] [rbp+30h]
  __int64 v43; // [rsp+138h] [rbp+38h]
  __int16 *v44; // [rsp+140h] [rbp+40h]
  __int64 v45; // [rsp+148h] [rbp+48h]
  __int16 *v46; // [rsp+150h] [rbp+50h]
  __int64 v47; // [rsp+158h] [rbp+58h]
  __int16 *v48; // [rsp+160h] [rbp+60h]
  __int64 v49; // [rsp+168h] [rbp+68h]
  __int16 *v50; // [rsp+170h] [rbp+70h]
  __int64 v51; // [rsp+178h] [rbp+78h]
  int *v52; // [rsp+180h] [rbp+80h]
  __int64 v53; // [rsp+188h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+190h] [rbp+90h] BYREF
  int *v55; // [rsp+1A0h] [rbp+A0h]
  __int64 v56; // [rsp+1A8h] [rbp+A8h]
  int *v57; // [rsp+1B0h] [rbp+B0h]
  __int64 v58; // [rsp+1B8h] [rbp+B8h]
  int *v59; // [rsp+1C0h] [rbp+C0h]
  __int64 v60; // [rsp+1C8h] [rbp+C8h]
  _DWORD *v61; // [rsp+1D0h] [rbp+D0h]
  __int64 v62; // [rsp+1D8h] [rbp+D8h]
  __int64 v63; // [rsp+1E0h] [rbp+E0h]
  _DWORD v64[2]; // [rsp+1E8h] [rbp+E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 *v66; // [rsp+200h] [rbp+100h]
  __int64 v67; // [rsp+208h] [rbp+108h]
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+210h] [rbp+110h] BYREF
  __int64 *v69; // [rsp+220h] [rbp+120h]
  __int64 v70; // [rsp+228h] [rbp+128h]
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+230h] [rbp+130h] BYREF
  __int64 *v72; // [rsp+240h] [rbp+140h]
  __int64 v73; // [rsp+248h] [rbp+148h]
  struct _EVENT_DATA_DESCRIPTOR v74; // [rsp+250h] [rbp+150h] BYREF
  __int64 *v75; // [rsp+260h] [rbp+160h]
  __int64 v76; // [rsp+268h] [rbp+168h]
  struct _EVENT_DATA_DESCRIPTOR v77; // [rsp+270h] [rbp+170h] BYREF
  __int64 *v78; // [rsp+280h] [rbp+180h]
  __int64 v79; // [rsp+288h] [rbp+188h]
  struct _EVENT_DATA_DESCRIPTOR v80; // [rsp+290h] [rbp+190h] BYREF
  __int64 *v81; // [rsp+2A0h] [rbp+1A0h]
  __int64 v82; // [rsp+2A8h] [rbp+1A8h]
  struct _EVENT_DATA_DESCRIPTOR v83; // [rsp+2B0h] [rbp+1B0h] BYREF
  __int64 *v84; // [rsp+2C0h] [rbp+1C0h]
  __int64 v85; // [rsp+2C8h] [rbp+1C8h]
  struct _EVENT_DATA_DESCRIPTOR v86; // [rsp+2D0h] [rbp+1D0h] BYREF
  struct _TlgProvider_t *p_hProvider; // [rsp+2E0h] [rbp+1E0h]
  __int64 v88; // [rsp+2E8h] [rbp+1E8h]
  CHAR v89[4]; // [rsp+300h] [rbp+200h] BYREF
  char v90; // [rsp+304h] [rbp+204h]
  CHAR v91[8]; // [rsp+308h] [rbp+208h] BYREF
  char v92; // [rsp+310h] [rbp+210h]
  CHAR psz[16]; // [rsp+318h] [rbp+218h] BYREF
  char v94; // [rsp+328h] [rbp+228h]
  CHAR v95[16]; // [rsp+330h] [rbp+230h] BYREF
  char v96; // [rsp+340h] [rbp+240h]

  LOBYTE(v4) = 0;
  p_ProviderMetadataPtr = &hProvider.ProviderMetadataPtr;
  memset(psz, 0, sizeof(psz));
  v94 = 0;
  *(_QWORD *)v91 = 0LL;
  v92 = 0;
  memset(v95, 0, sizeof(v95));
  v96 = 0;
  *(_DWORD *)v89 = 0;
  v90 = 0;
  hProvider.ProviderMetadataPtr = 0LL;
  hProvider.KeywordAny = 0LL;
  if ( a2 )
  {
    v4 = *(_QWORD *)(a2 + 144);
    if ( v4 )
      *(_OWORD *)psz = *(_OWORD *)(v4 + 90);
    a1 = *(_QWORD *)(a2 + 96);
    if ( a1 )
    {
      p_ProviderMetadataPtr = (const unsigned __int16 **)(a2 + 1688);
      *(_QWORD *)v91 = *(_QWORD *)(a1 + 8);
      *(_OWORD *)v95 = *(_OWORD *)(a1 + 16);
      LODWORD(v4) = *(_DWORD *)(a1 + 32);
      *(_DWORD *)v89 = v4;
    }
  }
  if ( (unsigned int)dword_1C0055010 > 5 )
  {
    LOBYTE(v4) = TlgKeywordOn((TraceLoggingHProvider)a1, 0x200000000000uLL);
    if ( (_BYTE)v4 )
    {
      if ( v9 && (v10 = *(_BYTE **)(v9 + 96)) != 0LL )
        v17 = *v10 & 0x1F;
      else
        v17 = 31;
      if ( v8 )
        v18 = *(_WORD *)(v8 + 2);
      else
        v18 = -1;
      if ( v8 )
        v19 = *(unsigned __int8 *)(v8 + 8);
      else
        v19 = -1;
      if ( v8 )
        v20 = *(unsigned __int8 *)(v8 + 9);
      else
        v20 = -1;
      if ( v8 )
        v21 = *(unsigned __int8 *)(v8 + 10);
      else
        v21 = -1;
      v22 = *a4;
      v23 = a4[1];
      v24 = a4[10];
      v25 = a4[11];
      v26 = *((_QWORD *)a4 + 12);
      v27 = *((_QWORD *)a4 + 17);
      v28 = *((_QWORD *)a4 + 22);
      v29 = *((_QWORD *)a4 + 27);
      v30 = *((_QWORD *)a4 + 32);
      v31 = *((_QWORD *)a4 + 37);
      v32 = *((_QWORD *)a4 + 42);
      v11 = *((_QWORD *)a4 + 47);
      v34 = v7 + 5192;
      *(_QWORD *)&hProvider.LevelPlus1 = v11;
      v35 = 16LL;
      v36 = p_ProviderMetadataPtr;
      v37 = 16LL;
      TlgCreateSz(&pDesc, psz);
      TlgCreateSz(&v39, v91);
      TlgCreateSz(&v40, v95);
      TlgCreateSz(&v41, v89);
      v43 = 1LL;
      v44 = &v18;
      v42 = &v17;
      v46 = &v19;
      v45 = 2LL;
      v48 = &v20;
      v47 = 2LL;
      v50 = &v21;
      v52 = &v22;
      v49 = 2LL;
      v51 = 2LL;
      v53 = 4LL;
      TlgCreateSz(&v54, (LPCSTR)a4 + 8);
      v56 = 4LL;
      v57 = &v24;
      v55 = &v23;
      v59 = &v25;
      v58 = 4LL;
      v61 = v64;
      v60 = 4LL;
      v62 = 2LL;
      v63 = v12;
      v64[0] = v13;
      v64[1] = 0;
      TlgCreateSz(&v65, (LPCSTR)a4 + 64);
      v67 = 8LL;
      v66 = &v26;
      TlgCreateSz(&v68, (LPCSTR)a4 + 104);
      v70 = 8LL;
      v69 = &v27;
      TlgCreateSz(&v71, (LPCSTR)a4 + 144);
      v73 = 8LL;
      v72 = &v28;
      TlgCreateSz(&v74, (LPCSTR)a4 + 184);
      v76 = 8LL;
      v75 = &v29;
      TlgCreateSz(&v77, (LPCSTR)a4 + 224);
      v79 = 8LL;
      v78 = &v30;
      TlgCreateSz(&v80, (LPCSTR)a4 + 264);
      v82 = 8LL;
      v81 = &v31;
      TlgCreateSz(&v83, (LPCSTR)a4 + 304);
      v85 = 8LL;
      v84 = &v32;
      TlgCreateSz(&v86, (LPCSTR)a4 + 344);
      v88 = 8LL;
      p_hProvider = &hProvider;
      LOBYTE(v4) = TlgWrite(&hProvider, &unk_1C004CEEA, v14, v15, 0x24u, (EVENT_DATA_DESCRIPTOR *)&hProvider.RegHandle);
    }
  }
  return v4;
}
