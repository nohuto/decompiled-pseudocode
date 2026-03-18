/*
 * XREFs of TraceLoggingWriteMiracastSessionStart @ 0x1C00340B0
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x1C0030D64 (DxgkMiracastStartMiracastSession.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C01E1B64 (DpiMiracastHandleStartSessionDone.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C000A1C0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C000D3F4 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C000D494 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 */

void TraceLoggingWriteMiracastSessionStart()
{
  __int64 v0; // r11
  __int64 v1; // r11
  __int64 v2; // r11
  __int64 v3; // r11
  __int64 v4; // r11
  __int64 v5; // r11
  int v6; // ecx
  const WCHAR *v7; // rdx
  __int64 v8; // r11
  __int64 v9; // r11
  __int64 v10; // r11
  int v11; // ecx
  unsigned int v12; // edx
  LPCGUID v13; // r9
  LPCGUID v14; // r10
  int v15; // [rsp+30h] [rbp-D0h] BYREF
  int v16; // [rsp+34h] [rbp-CCh] BYREF
  int v17; // [rsp+38h] [rbp-C8h] BYREF
  int v18; // [rsp+3Ch] [rbp-C4h] BYREF
  int v19; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+44h] [rbp-BCh] BYREF
  int v21; // [rsp+48h] [rbp-B8h] BYREF
  int v22; // [rsp+4Ch] [rbp-B4h] BYREF
  int v23; // [rsp+50h] [rbp-B0h] BYREF
  int v24; // [rsp+54h] [rbp-ACh] BYREF
  int v25; // [rsp+58h] [rbp-A8h] BYREF
  int v26; // [rsp+5Ch] [rbp-A4h] BYREF
  int v27; // [rsp+60h] [rbp-A0h] BYREF
  int v28; // [rsp+64h] [rbp-9Ch] BYREF
  int v29; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  __int64 v31; // [rsp+90h] [rbp-70h]
  __int64 v32; // [rsp+98h] [rbp-68h]
  int *v33; // [rsp+A0h] [rbp-60h]
  __int64 v34; // [rsp+A8h] [rbp-58h]
  int *v35; // [rsp+B0h] [rbp-50h]
  __int64 v36; // [rsp+B8h] [rbp-48h]
  __int64 v37; // [rsp+C0h] [rbp-40h]
  __int64 v38; // [rsp+C8h] [rbp-38h]
  int *v39; // [rsp+D0h] [rbp-30h]
  __int64 v40; // [rsp+D8h] [rbp-28h]
  int *v41; // [rsp+E0h] [rbp-20h]
  __int64 v42; // [rsp+E8h] [rbp-18h]
  int *v43; // [rsp+F0h] [rbp-10h]
  __int64 v44; // [rsp+F8h] [rbp-8h]
  int *v45; // [rsp+100h] [rbp+0h]
  __int64 v46; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+140h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+150h] [rbp+50h] BYREF
  int *v52; // [rsp+160h] [rbp+60h]
  __int64 v53; // [rsp+168h] [rbp+68h]
  int *v54; // [rsp+170h] [rbp+70h]
  __int64 v55; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+180h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+190h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+1A0h] [rbp+A0h] BYREF
  int *v59; // [rsp+1B0h] [rbp+B0h]
  __int64 v60; // [rsp+1B8h] [rbp+B8h]
  int *v61; // [rsp+1C0h] [rbp+C0h]
  __int64 v62; // [rsp+1C8h] [rbp+C8h]
  int *v63; // [rsp+1D0h] [rbp+D0h]
  __int64 v64; // [rsp+1D8h] [rbp+D8h]
  int *v65; // [rsp+1E0h] [rbp+E0h]
  __int64 v66; // [rsp+1E8h] [rbp+E8h]
  __int64 v67; // [rsp+1F0h] [rbp+F0h]
  __int64 v68; // [rsp+1F8h] [rbp+F8h]
  int *v69; // [rsp+200h] [rbp+100h]
  __int64 v70; // [rsp+208h] [rbp+108h]
  int *v71; // [rsp+210h] [rbp+110h]
  __int64 v72; // [rsp+218h] [rbp+118h]
  int *v73; // [rsp+220h] [rbp+120h]
  __int64 v74; // [rsp+228h] [rbp+128h]

  if ( dword_1C005F810 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C005F810, 0x800000000002uLL) )
    {
      v15 = *(_DWORD *)(v0 + 788);
      v31 = v0 + 112;
      v33 = &v15;
      v16 = *(_DWORD *)(v0 + 652);
      v35 = &v16;
      v37 = v0 + 704;
      v17 = *(_DWORD *)(v0 + 416);
      v39 = &v17;
      v18 = *(_DWORD *)(v0 + 784);
      v41 = &v18;
      v19 = *(_DWORD *)(v0 + 700);
      v43 = &v19;
      v20 = *(_DWORD *)(v0 + 780);
      v45 = &v20;
      v32 = 16LL;
      v34 = 4LL;
      v36 = 4LL;
      v38 = 4LL;
      v40 = 4LL;
      v42 = 4LL;
      v44 = 4LL;
      v46 = 4LL;
      TlgCreateWsz(&pDesc, (LPCWSTR)(v0 + 204));
      TlgCreateWsz(&v48, *(LPCWSTR *)(v1 + 336));
      TlgCreateWsz(&v49, *(LPCWSTR *)(v2 + 344));
      TlgCreateWsz(&v50, *(LPCWSTR *)(v3 + 360));
      TlgCreateWsz(&v51, *(LPCWSTR *)(v4 + 368));
      v6 = *(_DWORD *)(v5 + 192);
      v7 = *(const WCHAR **)(v5 + 376);
      v52 = &v21;
      v22 = *(_DWORD *)(v5 + 196);
      v21 = v6;
      v54 = &v22;
      v53 = 4LL;
      v55 = 4LL;
      TlgCreateWsz(&v56, v7);
      TlgCreateWsz(&v57, *(LPCWSTR *)(v8 + 384));
      TlgCreateWsz(&v58, (LPCWSTR)(v9 + 708));
      v11 = *(_DWORD *)(v10 + 776);
      v59 = &v23;
      v24 = *(_QWORD *)(v10 + 608) >> 16;
      v61 = &v24;
      v23 = v11;
      v60 = 4LL;
      v62 = 4LL;
      v25 = *(_QWORD *)(v10 + 616) >> 16;
      v63 = &v25;
      v26 = *(_QWORD *)(v10 + 624) >> 16;
      v65 = &v26;
      v12 = *(_DWORD *)(v10 + 600);
      v67 = v10 + 600;
      v64 = 4LL;
      v27 = v12 & 1;
      v69 = &v27;
      v28 = (v12 >> 1) & 1;
      v66 = 4LL;
      v71 = &v28;
      v73 = &v29;
      v68 = 4LL;
      v70 = 4LL;
      v72 = 4LL;
      v29 = (v12 >> 2) & 1;
      v74 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C005F810, &unk_1C0041489, v14, v13, 0x1Cu, &pData);
    }
  }
}
