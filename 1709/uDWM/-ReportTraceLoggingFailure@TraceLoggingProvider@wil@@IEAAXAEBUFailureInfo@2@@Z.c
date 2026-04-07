/*
 * XREFs of ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x1800740F0
 * Callers:
 *     ?OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z @ 0x180073F30 (-OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1800364F4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x180074CA8 (_TlgCreateSz.c)
 *     _TlgCreateWsz @ 0x180074CD4 (_TlgCreateWsz.c)
 */

void __fastcall wil::TraceLoggingProvider::ReportTraceLoggingFailure(
        wil::TraceLoggingProvider *this,
        const struct wil::FailureInfo *a2)
{
  int v2; // eax
  const CHAR *v3; // rdx
  __int64 v4; // r10
  const CHAR *v5; // rdx
  int *v6; // r10
  int v7; // ecx
  const WCHAR *v8; // rdx
  __int64 v9; // r10
  int v10; // ecx
  const CHAR *v11; // rdx
  __int64 v12; // r10
  int v13; // ecx
  const CHAR *v14; // rdx
  __int64 v15; // r10
  __int64 v16; // r10
  int v17; // ecx
  const CHAR *v18; // rdx
  __int64 v19; // r10
  __int64 v20; // r10
  int v21; // ecx
  const CHAR *v22; // rdx
  TraceLoggingHProvider v23; // r11
  int v24; // [rsp+30h] [rbp-D0h] BYREF
  int v25; // [rsp+34h] [rbp-CCh] BYREF
  int v26; // [rsp+38h] [rbp-C8h] BYREF
  int v27; // [rsp+3Ch] [rbp-C4h] BYREF
  int v28; // [rsp+40h] [rbp-C0h] BYREF
  int v29; // [rsp+44h] [rbp-BCh] BYREF
  int v30; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  int *v32; // [rsp+70h] [rbp-90h]
  int v33; // [rsp+78h] [rbp-88h]
  int v34; // [rsp+7Ch] [rbp-84h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  __int64 v36; // [rsp+90h] [rbp-70h]
  int v37; // [rsp+98h] [rbp-68h]
  int v38; // [rsp+9Ch] [rbp-64h]
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+A0h] [rbp-60h] BYREF
  int *v40; // [rsp+B0h] [rbp-50h]
  int v41; // [rsp+B8h] [rbp-48h]
  int v42; // [rsp+BCh] [rbp-44h]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+C0h] [rbp-40h] BYREF
  int *v44; // [rsp+D0h] [rbp-30h]
  int v45; // [rsp+D8h] [rbp-28h]
  int v46; // [rsp+DCh] [rbp-24h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+E0h] [rbp-20h] BYREF
  int *v48; // [rsp+F0h] [rbp-10h]
  int v49; // [rsp+F8h] [rbp-8h]
  int v50; // [rsp+FCh] [rbp-4h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+110h] [rbp+10h] BYREF
  int *v53; // [rsp+120h] [rbp+20h]
  int v54; // [rsp+128h] [rbp+28h]
  int v55; // [rsp+12Ch] [rbp+2Ch]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+140h] [rbp+40h] BYREF
  int *v58; // [rsp+150h] [rbp+50h]
  int v59; // [rsp+158h] [rbp+58h]
  int v60; // [rsp+15Ch] [rbp+5Ch]
  int *v61; // [rsp+160h] [rbp+60h]
  int v62; // [rsp+168h] [rbp+68h]
  int v63; // [rsp+16Ch] [rbp+6Ch]
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+170h] [rbp+70h] BYREF

  if ( **((_DWORD **)this + 1) > 5u )
  {
    v2 = *((_DWORD *)a2 + 1);
    v3 = (const CHAR *)*((_QWORD *)a2 + 6);
    v34 = 0;
    v24 = v2;
    v32 = &v24;
    v33 = 4;
    TlgCreateSz(&pDesc, v3);
    v5 = *(const CHAR **)(v4 + 120);
    v38 = 0;
    v36 = v4 + 56;
    v37 = 4;
    TlgCreateSz(&v39, v5);
    v7 = *v6;
    v8 = (const WCHAR *)*((_QWORD *)v6 + 2);
    v42 = 0;
    v25 = v7;
    v40 = &v25;
    v41 = 4;
    TlgCreateWsz(&v43, v8);
    v10 = *(_DWORD *)(v9 + 24);
    v11 = *(const CHAR **)(v9 + 64);
    v46 = 0;
    v26 = v10;
    v44 = &v26;
    v45 = 4;
    TlgCreateSz(&v47, v11);
    v13 = *(_DWORD *)(v12 + 72);
    v14 = *(const CHAR **)(v12 + 80);
    v50 = 0;
    v27 = v13;
    v48 = &v27;
    v49 = 4;
    TlgCreateSz(&v51, v14);
    TlgCreateWsz(&v52, *(LPCWSTR *)(v15 + 88));
    v17 = *(_DWORD *)(v16 + 96);
    v18 = *(const CHAR **)(v16 + 104);
    v55 = 0;
    v28 = v17;
    v53 = &v28;
    v54 = 4;
    TlgCreateSz(&v56, v18);
    TlgCreateWsz(&v57, *(LPCWSTR *)(v19 + 112));
    v21 = *(_DWORD *)(v20 + 8);
    v60 = 0;
    v63 = 0;
    v22 = *(const CHAR **)(v20 + 40);
    v58 = &v29;
    v30 = *(_DWORD *)(v20 + 60);
    v29 = v21;
    v61 = &v30;
    v59 = 4;
    v62 = 4;
    TlgCreateSz(&v64, v22);
    TlgWrite(v23, &unk_1800ADD14, 0LL, 0LL, 0x13u, &pData);
  }
}
