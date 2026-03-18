/*
 * XREFs of TraceLoggingWriteMiracastSessionStart @ 0x1C0042B34
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x1C003EE7C (DxgkMiracastStartMiracastSession.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C01FF524 (DpiMiracastHandleStartSessionDone.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0007C84 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0007E1C (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C000904C (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 */

void TraceLoggingWriteMiracastSessionStart()
{
  _DWORD *v0; // r11
  __int64 v1; // r11
  __int64 v2; // r11
  __int64 v3; // r11
  __int64 v4; // r11
  int v5; // ecx
  const WCHAR *v6; // rdx
  __int64 v7; // r11
  __int64 v8; // r11
  __int64 v9; // r11
  int v10; // ecx
  unsigned int v11; // edx
  LPCGUID v12; // r9
  LPCGUID v13; // r10
  int v14; // [rsp+30h] [rbp-D0h] BYREF
  int v15; // [rsp+34h] [rbp-CCh] BYREF
  int v16; // [rsp+38h] [rbp-C8h] BYREF
  int v17; // [rsp+3Ch] [rbp-C4h] BYREF
  int v18; // [rsp+40h] [rbp-C0h] BYREF
  int v19; // [rsp+44h] [rbp-BCh] BYREF
  int v20; // [rsp+48h] [rbp-B8h] BYREF
  int v21; // [rsp+4Ch] [rbp-B4h] BYREF
  int v22; // [rsp+50h] [rbp-B0h] BYREF
  int v23; // [rsp+54h] [rbp-ACh] BYREF
  int v24; // [rsp+58h] [rbp-A8h] BYREF
  int v25; // [rsp+5Ch] [rbp-A4h] BYREF
  int v26; // [rsp+60h] [rbp-A0h] BYREF
  int v27; // [rsp+64h] [rbp-9Ch] BYREF
  int v28; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  _DWORD *v30; // [rsp+90h] [rbp-70h]
  __int64 v31; // [rsp+98h] [rbp-68h]
  int *v32; // [rsp+A0h] [rbp-60h]
  __int64 v33; // [rsp+A8h] [rbp-58h]
  int *v34; // [rsp+B0h] [rbp-50h]
  __int64 v35; // [rsp+B8h] [rbp-48h]
  _DWORD *v36; // [rsp+C0h] [rbp-40h]
  __int64 v37; // [rsp+C8h] [rbp-38h]
  int *v38; // [rsp+D0h] [rbp-30h]
  __int64 v39; // [rsp+D8h] [rbp-28h]
  int *v40; // [rsp+E0h] [rbp-20h]
  __int64 v41; // [rsp+E8h] [rbp-18h]
  int *v42; // [rsp+F0h] [rbp-10h]
  __int64 v43; // [rsp+F8h] [rbp-8h]
  int *v44; // [rsp+100h] [rbp+0h]
  __int64 v45; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+140h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+150h] [rbp+50h] BYREF
  int *v51; // [rsp+160h] [rbp+60h]
  __int64 v52; // [rsp+168h] [rbp+68h]
  int *v53; // [rsp+170h] [rbp+70h]
  __int64 v54; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+180h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+190h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+1A0h] [rbp+A0h] BYREF
  int *v58; // [rsp+1B0h] [rbp+B0h]
  __int64 v59; // [rsp+1B8h] [rbp+B8h]
  int *v60; // [rsp+1C0h] [rbp+C0h]
  __int64 v61; // [rsp+1C8h] [rbp+C8h]
  int *v62; // [rsp+1D0h] [rbp+D0h]
  __int64 v63; // [rsp+1D8h] [rbp+D8h]
  int *v64; // [rsp+1E0h] [rbp+E0h]
  __int64 v65; // [rsp+1E8h] [rbp+E8h]
  __int64 v66; // [rsp+1F0h] [rbp+F0h]
  __int64 v67; // [rsp+1F8h] [rbp+F8h]
  int *v68; // [rsp+200h] [rbp+100h]
  __int64 v69; // [rsp+208h] [rbp+108h]
  int *v70; // [rsp+210h] [rbp+110h]
  __int64 v71; // [rsp+218h] [rbp+118h]
  int *v72; // [rsp+220h] [rbp+120h]
  __int64 v73; // [rsp+228h] [rbp+128h]

  if ( dword_1C0079090 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0079090, 0x800000000002uLL) )
    {
      v14 = v0[197];
      v30 = v0 + 28;
      v32 = &v14;
      v15 = v0[163];
      v34 = &v15;
      v36 = v0 + 176;
      v16 = v0[104];
      v38 = &v16;
      v17 = v0[196];
      v40 = &v17;
      v18 = v0[175];
      v42 = &v18;
      v19 = v0[195];
      v44 = &v19;
      v31 = 16LL;
      v33 = 4LL;
      v35 = 4LL;
      v37 = 4LL;
      v39 = 4LL;
      v41 = 4LL;
      v43 = 4LL;
      v45 = 4LL;
      TlgCreateWsz(&pDesc, &pwsz);
      TlgCreateWsz(&v47, *(LPCWSTR *)(v1 + 336));
      TlgCreateWsz(&v48, *(LPCWSTR *)(v2 + 344));
      TlgCreateWsz(&v49, *(LPCWSTR *)(v3 + 360));
      TlgCreateWsz(&v50, &pwsz);
      v5 = *(_DWORD *)(v4 + 192);
      v6 = *(const WCHAR **)(v4 + 376);
      v51 = &v20;
      v21 = *(_DWORD *)(v4 + 196);
      v20 = v5;
      v53 = &v21;
      v52 = 4LL;
      v54 = 4LL;
      TlgCreateWsz(&v55, v6);
      TlgCreateWsz(&v56, *(LPCWSTR *)(v7 + 384));
      TlgCreateWsz(&v57, (LPCWSTR)(v8 + 708));
      v10 = *(_DWORD *)(v9 + 776);
      v58 = &v22;
      v23 = *(_QWORD *)(v9 + 608) >> 16;
      v60 = &v23;
      v22 = v10;
      v59 = 4LL;
      v61 = 4LL;
      v24 = *(_QWORD *)(v9 + 616) >> 16;
      v62 = &v24;
      v25 = *(_QWORD *)(v9 + 624) >> 16;
      v64 = &v25;
      v11 = *(_DWORD *)(v9 + 600);
      v66 = v9 + 600;
      v63 = 4LL;
      v26 = v11 & 1;
      v68 = &v26;
      v27 = (v11 >> 1) & 1;
      v65 = 4LL;
      v70 = &v27;
      v72 = &v28;
      v67 = 4LL;
      v69 = 4LL;
      v71 = 4LL;
      v28 = (v11 >> 2) & 1;
      v73 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C0079090, &unk_1C00595D4, v13, v12, 0x1Cu, &pData);
    }
  }
}
