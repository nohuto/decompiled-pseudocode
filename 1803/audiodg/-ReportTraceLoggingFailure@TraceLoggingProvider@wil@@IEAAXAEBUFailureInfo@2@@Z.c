/*
 * XREFs of ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x14003464C
 * Callers:
 *     ?OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z @ 0x140034140 (-OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x14001AAB8 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x140034D80 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x140034DB0 (_TlgWrite.c)
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
  LPCGUID v23; // r9
  TraceLoggingHProvider v24; // r11
  int v25; // [rsp+30h] [rbp-D0h] BYREF
  int v26; // [rsp+34h] [rbp-CCh] BYREF
  int v27; // [rsp+38h] [rbp-C8h] BYREF
  int v28; // [rsp+3Ch] [rbp-C4h] BYREF
  int v29; // [rsp+40h] [rbp-C0h] BYREF
  int v30; // [rsp+44h] [rbp-BCh] BYREF
  int v31; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  int *v33; // [rsp+70h] [rbp-90h]
  int v34; // [rsp+78h] [rbp-88h]
  int v35; // [rsp+7Ch] [rbp-84h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  __int64 v37; // [rsp+90h] [rbp-70h]
  int v38; // [rsp+98h] [rbp-68h]
  int v39; // [rsp+9Ch] [rbp-64h]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+A0h] [rbp-60h] BYREF
  int *v41; // [rsp+B0h] [rbp-50h]
  int v42; // [rsp+B8h] [rbp-48h]
  int v43; // [rsp+BCh] [rbp-44h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+C0h] [rbp-40h] BYREF
  int *v45; // [rsp+D0h] [rbp-30h]
  int v46; // [rsp+D8h] [rbp-28h]
  int v47; // [rsp+DCh] [rbp-24h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+E0h] [rbp-20h] BYREF
  int *v49; // [rsp+F0h] [rbp-10h]
  int v50; // [rsp+F8h] [rbp-8h]
  int v51; // [rsp+FCh] [rbp-4h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+110h] [rbp+10h] BYREF
  int *v54; // [rsp+120h] [rbp+20h]
  int v55; // [rsp+128h] [rbp+28h]
  int v56; // [rsp+12Ch] [rbp+2Ch]
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+140h] [rbp+40h] BYREF
  int *v59; // [rsp+150h] [rbp+50h]
  int v60; // [rsp+158h] [rbp+58h]
  int v61; // [rsp+15Ch] [rbp+5Ch]
  int *v62; // [rsp+160h] [rbp+60h]
  int v63; // [rsp+168h] [rbp+68h]
  int v64; // [rsp+16Ch] [rbp+6Ch]
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+170h] [rbp+70h] BYREF

  if ( **((_DWORD **)this + 1) > 5u )
  {
    v2 = *((_DWORD *)a2 + 1);
    v3 = (const CHAR *)*((_QWORD *)a2 + 6);
    v35 = 0;
    v25 = v2;
    v33 = &v25;
    v34 = 4;
    TlgCreateSz(&pDesc, v3);
    v5 = *(const CHAR **)(v4 + 120);
    v39 = 0;
    v37 = v4 + 56;
    v38 = 4;
    TlgCreateSz(&v40, v5);
    v7 = *v6;
    v8 = (const WCHAR *)*((_QWORD *)v6 + 2);
    v43 = 0;
    v26 = v7;
    v41 = &v26;
    v42 = 4;
    TlgCreateWsz(&v44, v8);
    v10 = *(_DWORD *)(v9 + 24);
    v11 = *(const CHAR **)(v9 + 64);
    v47 = 0;
    v27 = v10;
    v45 = &v27;
    v46 = 4;
    TlgCreateSz(&v48, v11);
    v13 = *(_DWORD *)(v12 + 72);
    v14 = *(const CHAR **)(v12 + 80);
    v51 = 0;
    v28 = v13;
    v49 = &v28;
    v50 = 4;
    TlgCreateSz(&v52, v14);
    TlgCreateWsz(&v53, *(LPCWSTR *)(v15 + 88));
    v17 = *(_DWORD *)(v16 + 96);
    v18 = *(const CHAR **)(v16 + 104);
    v56 = 0;
    v29 = v17;
    v54 = &v29;
    v55 = 4;
    TlgCreateSz(&v57, v18);
    TlgCreateWsz(&v58, *(LPCWSTR *)(v19 + 112));
    v21 = *(_DWORD *)(v20 + 8);
    v61 = 0;
    v64 = 0;
    v22 = *(const CHAR **)(v20 + 40);
    v59 = &v30;
    v31 = *(_DWORD *)(v20 + 60);
    v30 = v21;
    v62 = &v31;
    v60 = 4;
    v63 = 4;
    TlgCreateSz(&v65, v22);
    TlgWrite(v24, &unk_14006FB28, 0LL, v23, 0x13u, &pData);
  }
}
