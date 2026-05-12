/*
 * XREFs of StorpTelemetryMiniportEventUnit @ 0x1C001D3F4
 * Callers:
 *     StorpTelemetryMiniportEvent @ 0x1C001D374 (StorpTelemetryMiniportEvent.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0002C98 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0002CCC (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C0003A5C (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 */

char __fastcall StorpTelemetryMiniportEventUnit(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  const unsigned __int16 **p_ProviderMetadataPtr; // rbx
  __int64 v4; // rdi
  int *v5; // r9
  __int64 v6; // r10
  __int64 v7; // r11
  __int64 v8; // rdi
  _BYTE *v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r9
  unsigned __int16 v16; // r11
  __int64 v17; // r10
  __int64 v18; // r9
  __int64 v19; // r9
  __int64 v20; // r9
  __int64 v21; // r9
  __int64 v22; // r9
  __int64 v23; // r9
  __int64 v24; // r9
  LPCGUID v25; // r8
  LPCGUID v26; // r9
  __int16 v28; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v29; // [rsp+3Ch] [rbp-CCh] BYREF
  __int16 v30; // [rsp+40h] [rbp-C8h] BYREF
  int v31; // [rsp+44h] [rbp-C4h] BYREF
  int v32; // [rsp+48h] [rbp-C0h] BYREF
  int v33; // [rsp+4Ch] [rbp-BCh] BYREF
  int v34; // [rsp+50h] [rbp-B8h] BYREF
  int v35; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v36; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+70h] [rbp-98h] BYREF
  __int64 v40; // [rsp+78h] [rbp-90h] BYREF
  __int64 v41; // [rsp+80h] [rbp-88h] BYREF
  __int64 v42; // [rsp+88h] [rbp-80h] BYREF
  __int64 v43; // [rsp+90h] [rbp-78h] BYREF
  struct _TlgProvider_t hProvider; // [rsp+98h] [rbp-70h] BYREF
  __int64 v45; // [rsp+D8h] [rbp-30h]
  int v46; // [rsp+E0h] [rbp-28h]
  int v47; // [rsp+E4h] [rbp-24h]
  const unsigned __int16 **v48; // [rsp+E8h] [rbp-20h]
  __int64 v49; // [rsp+F0h] [rbp-18h]
  __int128 *v50; // [rsp+F8h] [rbp-10h]
  int v51; // [rsp+100h] [rbp-8h]
  int v52; // [rsp+104h] [rbp-4h]
  __int64 *v53; // [rsp+108h] [rbp+0h]
  int v54; // [rsp+110h] [rbp+8h]
  int v55; // [rsp+114h] [rbp+Ch]
  __int128 *v56; // [rsp+118h] [rbp+10h]
  int v57; // [rsp+120h] [rbp+18h]
  int v58; // [rsp+124h] [rbp+1Ch]
  int *v59; // [rsp+128h] [rbp+20h]
  int v60; // [rsp+130h] [rbp+28h]
  int v61; // [rsp+134h] [rbp+2Ch]
  __int16 *v62; // [rsp+138h] [rbp+30h]
  __int64 v63; // [rsp+140h] [rbp+38h]
  __int16 *v64; // [rsp+148h] [rbp+40h]
  __int64 v65; // [rsp+150h] [rbp+48h]
  __int16 *v66; // [rsp+158h] [rbp+50h]
  __int64 v67; // [rsp+160h] [rbp+58h]
  int *v68; // [rsp+168h] [rbp+60h]
  __int64 v69; // [rsp+170h] [rbp+68h]
  int *v70; // [rsp+178h] [rbp+70h]
  __int64 v71; // [rsp+180h] [rbp+78h]
  int *v72; // [rsp+188h] [rbp+80h]
  int v73; // [rsp+190h] [rbp+88h]
  int v74; // [rsp+194h] [rbp+8Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+198h] [rbp+90h] BYREF
  int *v76; // [rsp+1A8h] [rbp+A0h]
  int v77; // [rsp+1B0h] [rbp+A8h]
  int v78; // [rsp+1B4h] [rbp+ACh]
  int *v79; // [rsp+1B8h] [rbp+B0h]
  int v80; // [rsp+1C0h] [rbp+B8h]
  int v81; // [rsp+1C4h] [rbp+BCh]
  __int64 *v82; // [rsp+1C8h] [rbp+C0h]
  __int64 v83; // [rsp+1D0h] [rbp+C8h]
  _DWORD *v84; // [rsp+1D8h] [rbp+D0h]
  __int64 v85; // [rsp+1E0h] [rbp+D8h]
  __int64 v86; // [rsp+1E8h] [rbp+E0h]
  _DWORD v87[2]; // [rsp+1F0h] [rbp+E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v88; // [rsp+1F8h] [rbp+F0h] BYREF
  __int64 *v89; // [rsp+208h] [rbp+100h]
  __int64 v90; // [rsp+210h] [rbp+108h]
  struct _EVENT_DATA_DESCRIPTOR v91; // [rsp+218h] [rbp+110h] BYREF
  __int64 *v92; // [rsp+228h] [rbp+120h]
  __int64 v93; // [rsp+230h] [rbp+128h]
  struct _EVENT_DATA_DESCRIPTOR v94; // [rsp+238h] [rbp+130h] BYREF
  __int64 *v95; // [rsp+248h] [rbp+140h]
  __int64 v96; // [rsp+250h] [rbp+148h]
  struct _EVENT_DATA_DESCRIPTOR v97; // [rsp+258h] [rbp+150h] BYREF
  __int64 *v98; // [rsp+268h] [rbp+160h]
  __int64 v99; // [rsp+270h] [rbp+168h]
  struct _EVENT_DATA_DESCRIPTOR v100; // [rsp+278h] [rbp+170h] BYREF
  __int64 *v101; // [rsp+288h] [rbp+180h]
  __int64 v102; // [rsp+290h] [rbp+188h]
  struct _EVENT_DATA_DESCRIPTOR v103; // [rsp+298h] [rbp+190h] BYREF
  __int64 *v104; // [rsp+2A8h] [rbp+1A0h]
  __int64 v105; // [rsp+2B0h] [rbp+1A8h]
  struct _EVENT_DATA_DESCRIPTOR v106; // [rsp+2B8h] [rbp+1B0h] BYREF
  __int64 *v107; // [rsp+2C8h] [rbp+1C0h]
  __int64 v108; // [rsp+2D0h] [rbp+1C8h]
  struct _EVENT_DATA_DESCRIPTOR v109; // [rsp+2D8h] [rbp+1D0h] BYREF
  struct _TlgProvider_t *p_hProvider; // [rsp+2E8h] [rbp+1E0h]
  __int64 v111; // [rsp+2F0h] [rbp+1E8h]
  int v112; // [rsp+2F8h] [rbp+1F0h] BYREF
  char v113; // [rsp+2FCh] [rbp+1F4h]
  __int64 v114; // [rsp+300h] [rbp+1F8h] BYREF
  char v115; // [rsp+308h] [rbp+200h]
  __int128 v116; // [rsp+310h] [rbp+208h] BYREF
  char v117; // [rsp+320h] [rbp+218h]
  __int128 v118; // [rsp+328h] [rbp+220h] BYREF
  char v119; // [rsp+338h] [rbp+230h]

  LOBYTE(v2) = 0;
  p_ProviderMetadataPtr = &hProvider.ProviderMetadataPtr;
  v116 = 0uLL;
  v117 = 0;
  v4 = a1;
  v114 = 0LL;
  v115 = 0;
  v118 = 0uLL;
  v119 = 0;
  v112 = 0;
  v113 = 0;
  hProvider.ProviderMetadataPtr = 0LL;
  hProvider.KeywordAny = 0LL;
  if ( a2 )
  {
    v2 = *(_QWORD *)(a2 + 144);
    if ( v2 )
      v116 = *(_OWORD *)(v2 + 90);
    a1 = *(_QWORD *)(a2 + 96);
    if ( a1 )
    {
      p_ProviderMetadataPtr = (const unsigned __int16 **)(a2 + 1720);
      v114 = *(_QWORD *)(a1 + 8);
      v118 = *(_OWORD *)(a1 + 16);
      LODWORD(v2) = *(_DWORD *)(a1 + 32);
      v112 = v2;
    }
  }
  if ( (unsigned int)dword_1C0056060 > 5 )
  {
    LOBYTE(v2) = TlgKeywordOn((TraceLoggingHProvider)a1, 0x200000000000uLL);
    if ( (_BYTE)v2 )
    {
      v8 = v4 + 5192;
      if ( v7 && (v9 = *(_BYTE **)(v7 + 96)) != 0LL )
        LOBYTE(v28) = *v9 & 0x1F;
      else
        LOBYTE(v28) = 31;
      if ( v6 )
        v29 = *(_WORD *)(v6 + 2);
      else
        v29 = -1;
      if ( v6 )
        v30 = *(unsigned __int8 *)(v6 + 8);
      else
        v30 = -1;
      if ( v6 )
        LOWORD(v31) = *(unsigned __int8 *)(v6 + 9);
      else
        LOWORD(v31) = -1;
      if ( v6 )
        LOWORD(v32) = *(unsigned __int8 *)(v6 + 10);
      else
        LOWORD(v32) = -1;
      v10 = *v5;
      v47 = 0;
      v33 = v10;
      v34 = v5[1];
      v35 = v5[10];
      LODWORD(v36) = v5[11];
      v37 = *((_QWORD *)v5 + 12);
      v38 = *((_QWORD *)v5 + 17);
      v39 = *((_QWORD *)v5 + 22);
      v40 = *((_QWORD *)v5 + 27);
      v41 = *((_QWORD *)v5 + 32);
      v42 = *((_QWORD *)v5 + 37);
      v43 = *((_QWORD *)v5 + 42);
      *(_QWORD *)&hProvider.LevelPlus1 = *((_QWORD *)v5 + 47);
      v48 = p_ProviderMetadataPtr;
      v11 = -1LL;
      v46 = 16;
      v49 = 16LL;
      v12 = -1LL;
      v45 = v8;
      do
        ++v12;
      while ( *((_BYTE *)&v116 + v12) );
      v52 = 0;
      v50 = &v116;
      v51 = v12 + 1;
      v13 = -1LL;
      do
        ++v13;
      while ( *((_BYTE *)&v114 + v13) );
      v55 = 0;
      v53 = &v114;
      v54 = v13 + 1;
      v14 = -1LL;
      do
        ++v14;
      while ( *((_BYTE *)&v118 + v14) );
      v58 = 0;
      v57 = v14 + 1;
      v56 = &v118;
      do
        ++v11;
      while ( *((_BYTE *)&v112 + v11) );
      v74 = 0;
      v59 = &v112;
      v60 = v11 + 1;
      v61 = 0;
      v62 = &v28;
      v63 = 1LL;
      v64 = &v29;
      v66 = &v30;
      v68 = &v31;
      v70 = &v32;
      v72 = &v33;
      v65 = 2LL;
      v67 = 2LL;
      v69 = 2LL;
      v71 = 2LL;
      v73 = 4;
      TlgCreateSz(&pDesc, (LPCSTR)v5 + 8);
      v78 = 0;
      v81 = 0;
      v79 = &v35;
      v77 = 4;
      v82 = &v36;
      v84 = v87;
      v80 = 4;
      v83 = 4LL;
      v76 = &v34;
      v87[0] = v16;
      v85 = 2LL;
      v86 = v17;
      v87[1] = 0;
      TlgCreateSz(&v88, (LPCSTR)(v15 + 64));
      v90 = 8LL;
      v89 = &v37;
      TlgCreateSz(&v91, (LPCSTR)(v18 + 104));
      v93 = 8LL;
      v92 = &v38;
      TlgCreateSz(&v94, (LPCSTR)(v19 + 144));
      v96 = 8LL;
      v95 = &v39;
      TlgCreateSz(&v97, (LPCSTR)(v20 + 184));
      v99 = 8LL;
      v98 = &v40;
      TlgCreateSz(&v100, (LPCSTR)(v21 + 224));
      v102 = 8LL;
      v101 = &v41;
      TlgCreateSz(&v103, (LPCSTR)(v22 + 264));
      v104 = &v42;
      v105 = 8LL;
      TlgCreateSz(&v106, (LPCSTR)(v23 + 304));
      v108 = 8LL;
      v107 = &v43;
      TlgCreateSz(&v109, (LPCSTR)(v24 + 344));
      v111 = 8LL;
      p_hProvider = &hProvider;
      LOBYTE(v2) = TlgWrite(&hProvider, &unk_1C004D16F, v25, v26, 0x24u, (EVENT_DATA_DESCRIPTOR *)&hProvider.RegHandle);
    }
  }
  return v2;
}
