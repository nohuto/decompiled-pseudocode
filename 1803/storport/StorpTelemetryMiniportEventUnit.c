/*
 * XREFs of StorpTelemetryMiniportEventUnit @ 0x1C0045E20
 * Callers:
 *     StorpTelemetryMiniportEvent @ 0x1C0045A94 (StorpTelemetryMiniportEvent.c)
 * Callees:
 *     _TlgCreateSz @ 0x1C00015D8 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C0001610 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00016F0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 */

char __fastcall StorpTelemetryMiniportEventUnit(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  __int64 v4; // rax
  const unsigned __int16 **p_ProviderMetadataPtr; // rdi
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // r11
  _BYTE *v10; // rax
  char v11; // al
  __int16 v12; // ax
  __int16 v13; // cx
  __int16 v14; // cx
  __int16 v15; // cx
  __int64 v16; // rax
  __int64 v17; // r9
  int v18; // r10d
  LPCGUID v19; // r8
  LPCGUID v20; // r9
  char v22; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v23; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v24; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v25; // [rsp+3Ch] [rbp-C4h] BYREF
  __int16 v26; // [rsp+40h] [rbp-C0h] BYREF
  int v27; // [rsp+44h] [rbp-BCh] BYREF
  int v28; // [rsp+48h] [rbp-B8h] BYREF
  int v29; // [rsp+4Ch] [rbp-B4h] BYREF
  int v30; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+68h] [rbp-98h] BYREF
  __int64 v34; // [rsp+70h] [rbp-90h] BYREF
  __int64 v35; // [rsp+78h] [rbp-88h] BYREF
  __int64 v36; // [rsp+80h] [rbp-80h] BYREF
  __int64 v37; // [rsp+88h] [rbp-78h] BYREF
  struct _TlgProvider_t hProvider; // [rsp+90h] [rbp-70h] BYREF
  __int64 v39; // [rsp+D0h] [rbp-30h]
  __int64 v40; // [rsp+D8h] [rbp-28h]
  const unsigned __int16 **v41; // [rsp+E0h] [rbp-20h]
  __int64 v42; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F0h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+120h] [rbp+20h] BYREF
  char *v47; // [rsp+130h] [rbp+30h]
  __int64 v48; // [rsp+138h] [rbp+38h]
  __int16 *v49; // [rsp+140h] [rbp+40h]
  __int64 v50; // [rsp+148h] [rbp+48h]
  __int16 *v51; // [rsp+150h] [rbp+50h]
  __int64 v52; // [rsp+158h] [rbp+58h]
  __int16 *v53; // [rsp+160h] [rbp+60h]
  __int64 v54; // [rsp+168h] [rbp+68h]
  __int16 *v55; // [rsp+170h] [rbp+70h]
  __int64 v56; // [rsp+178h] [rbp+78h]
  int *v57; // [rsp+180h] [rbp+80h]
  __int64 v58; // [rsp+188h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+190h] [rbp+90h] BYREF
  int *v60; // [rsp+1A0h] [rbp+A0h]
  __int64 v61; // [rsp+1A8h] [rbp+A8h]
  int *v62; // [rsp+1B0h] [rbp+B0h]
  __int64 v63; // [rsp+1B8h] [rbp+B8h]
  int *v64; // [rsp+1C0h] [rbp+C0h]
  __int64 v65; // [rsp+1C8h] [rbp+C8h]
  _DWORD *v66; // [rsp+1D0h] [rbp+D0h]
  __int64 v67; // [rsp+1D8h] [rbp+D8h]
  __int64 v68; // [rsp+1E0h] [rbp+E0h]
  _DWORD v69[2]; // [rsp+1E8h] [rbp+E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 *v71; // [rsp+200h] [rbp+100h]
  __int64 v72; // [rsp+208h] [rbp+108h]
  struct _EVENT_DATA_DESCRIPTOR v73; // [rsp+210h] [rbp+110h] BYREF
  __int64 *v74; // [rsp+220h] [rbp+120h]
  __int64 v75; // [rsp+228h] [rbp+128h]
  struct _EVENT_DATA_DESCRIPTOR v76; // [rsp+230h] [rbp+130h] BYREF
  __int64 *v77; // [rsp+240h] [rbp+140h]
  __int64 v78; // [rsp+248h] [rbp+148h]
  struct _EVENT_DATA_DESCRIPTOR v79; // [rsp+250h] [rbp+150h] BYREF
  __int64 *v80; // [rsp+260h] [rbp+160h]
  __int64 v81; // [rsp+268h] [rbp+168h]
  struct _EVENT_DATA_DESCRIPTOR v82; // [rsp+270h] [rbp+170h] BYREF
  __int64 *v83; // [rsp+280h] [rbp+180h]
  __int64 v84; // [rsp+288h] [rbp+188h]
  struct _EVENT_DATA_DESCRIPTOR v85; // [rsp+290h] [rbp+190h] BYREF
  __int64 *v86; // [rsp+2A0h] [rbp+1A0h]
  __int64 v87; // [rsp+2A8h] [rbp+1A8h]
  struct _EVENT_DATA_DESCRIPTOR v88; // [rsp+2B0h] [rbp+1B0h] BYREF
  __int64 *v89; // [rsp+2C0h] [rbp+1C0h]
  __int64 v90; // [rsp+2C8h] [rbp+1C8h]
  struct _EVENT_DATA_DESCRIPTOR v91; // [rsp+2D0h] [rbp+1D0h] BYREF
  struct _TlgProvider_t *p_hProvider; // [rsp+2E0h] [rbp+1E0h]
  __int64 v93; // [rsp+2E8h] [rbp+1E8h]
  CHAR v94[4]; // [rsp+2F0h] [rbp+1F0h] BYREF
  char v95; // [rsp+2F4h] [rbp+1F4h]
  CHAR v96[8]; // [rsp+2F8h] [rbp+1F8h] BYREF
  char v97; // [rsp+300h] [rbp+200h]
  CHAR psz[16]; // [rsp+308h] [rbp+208h] BYREF
  char v99; // [rsp+318h] [rbp+218h]
  CHAR v100[16]; // [rsp+320h] [rbp+220h] BYREF
  char v101; // [rsp+330h] [rbp+230h]

  LOBYTE(v4) = 0;
  p_ProviderMetadataPtr = &hProvider.ProviderMetadataPtr;
  memset(psz, 0, sizeof(psz));
  v99 = 0;
  *(_QWORD *)v96 = 0LL;
  v97 = 0;
  memset(v100, 0, sizeof(v100));
  v101 = 0;
  *(_DWORD *)v94 = 0;
  v95 = 0;
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
      p_ProviderMetadataPtr = (const unsigned __int16 **)(a2 + 1720);
      *(_QWORD *)v96 = *(_QWORD *)(a1 + 8);
      *(_OWORD *)v100 = *(_OWORD *)(a1 + 16);
      LODWORD(v4) = *(_DWORD *)(a1 + 32);
      *(_DWORD *)v94 = v4;
    }
  }
  if ( (unsigned int)dword_1C0056060 > 5 )
  {
    LOBYTE(v4) = TlgKeywordOn((TraceLoggingHProvider)a1, 0x200000000000uLL);
    if ( (_BYTE)v4 )
    {
      if ( v9 && (v10 = *(_BYTE **)(v9 + 96)) != 0LL )
        v11 = *v10 & 0x1F;
      else
        v11 = 31;
      v22 = v11;
      v12 = -1;
      if ( v8 )
        v13 = *(_WORD *)(v8 + 2);
      else
        v13 = -1;
      v23 = v13;
      if ( v8 )
        v14 = *(unsigned __int8 *)(v8 + 8);
      else
        v14 = -1;
      v24 = v14;
      if ( v8 )
        v15 = *(unsigned __int8 *)(v8 + 9);
      else
        v15 = -1;
      v25 = v15;
      if ( v8 )
        v12 = *(unsigned __int8 *)(v8 + 10);
      v26 = v12;
      v27 = *a4;
      v28 = a4[1];
      v29 = a4[10];
      v30 = a4[11];
      v31 = *((_QWORD *)a4 + 12);
      v32 = *((_QWORD *)a4 + 17);
      v33 = *((_QWORD *)a4 + 22);
      v34 = *((_QWORD *)a4 + 27);
      v35 = *((_QWORD *)a4 + 32);
      v36 = *((_QWORD *)a4 + 37);
      v37 = *((_QWORD *)a4 + 42);
      v16 = *((_QWORD *)a4 + 47);
      v39 = v7 + 5192;
      *(_QWORD *)&hProvider.LevelPlus1 = v16;
      v40 = 16LL;
      v41 = p_ProviderMetadataPtr;
      v42 = 16LL;
      TlgCreateSz(&pDesc, psz);
      TlgCreateSz(&v44, v96);
      TlgCreateSz(&v45, v100);
      TlgCreateSz(&v46, v94);
      v48 = 1LL;
      v49 = &v23;
      v47 = &v22;
      v51 = &v24;
      v50 = 2LL;
      v53 = &v25;
      v52 = 2LL;
      v55 = &v26;
      v57 = &v27;
      v54 = 2LL;
      v56 = 2LL;
      v58 = 4LL;
      TlgCreateSz(&v59, (LPCSTR)a4 + 8);
      v61 = 4LL;
      v62 = &v29;
      v60 = &v28;
      v64 = &v30;
      v63 = 4LL;
      v66 = v69;
      v65 = 4LL;
      v67 = 2LL;
      v68 = v17;
      v69[0] = v18;
      v69[1] = 0;
      TlgCreateSz(&v70, (LPCSTR)a4 + 64);
      v72 = 8LL;
      v71 = &v31;
      TlgCreateSz(&v73, (LPCSTR)a4 + 104);
      v75 = 8LL;
      v74 = &v32;
      TlgCreateSz(&v76, (LPCSTR)a4 + 144);
      v78 = 8LL;
      v77 = &v33;
      TlgCreateSz(&v79, (LPCSTR)a4 + 184);
      v81 = 8LL;
      v80 = &v34;
      TlgCreateSz(&v82, (LPCSTR)a4 + 224);
      v84 = 8LL;
      v83 = &v35;
      TlgCreateSz(&v85, (LPCSTR)a4 + 264);
      v87 = 8LL;
      v86 = &v36;
      TlgCreateSz(&v88, (LPCSTR)a4 + 304);
      v90 = 8LL;
      v89 = &v37;
      TlgCreateSz(&v91, (LPCSTR)a4 + 344);
      v93 = 8LL;
      p_hProvider = &hProvider;
      LOBYTE(v4) = TlgWrite(&hProvider, &unk_1C004DA30, v19, v20, 0x24u, (EVENT_DATA_DESCRIPTOR *)&hProvider.RegHandle);
    }
  }
  return v4;
}
