/*
 * XREFs of ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x18009BE14
 * Callers:
 *     ?OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z @ 0x18005DD70 (-OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     _TlgCreateSz @ 0x1800059B0 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180043DA4 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
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
  LPCGUID v23; // r8
  LPCGUID v24; // r9
  TraceLoggingHProvider v25; // r11
  int v26; // [rsp+30h] [rbp-D0h] BYREF
  int v27; // [rsp+34h] [rbp-CCh] BYREF
  int v28; // [rsp+38h] [rbp-C8h] BYREF
  int v29; // [rsp+3Ch] [rbp-C4h] BYREF
  int v30; // [rsp+40h] [rbp-C0h] BYREF
  int v31; // [rsp+44h] [rbp-BCh] BYREF
  int v32; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  int *v34; // [rsp+70h] [rbp-90h]
  int v35; // [rsp+78h] [rbp-88h]
  int v36; // [rsp+7Ch] [rbp-84h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  __int64 v38; // [rsp+90h] [rbp-70h]
  int v39; // [rsp+98h] [rbp-68h]
  int v40; // [rsp+9Ch] [rbp-64h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+A0h] [rbp-60h] BYREF
  int *v42; // [rsp+B0h] [rbp-50h]
  int v43; // [rsp+B8h] [rbp-48h]
  int v44; // [rsp+BCh] [rbp-44h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+C0h] [rbp-40h] BYREF
  int *v46; // [rsp+D0h] [rbp-30h]
  int v47; // [rsp+D8h] [rbp-28h]
  int v48; // [rsp+DCh] [rbp-24h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+E0h] [rbp-20h] BYREF
  int *v50; // [rsp+F0h] [rbp-10h]
  int v51; // [rsp+F8h] [rbp-8h]
  int v52; // [rsp+FCh] [rbp-4h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+110h] [rbp+10h] BYREF
  int *v55; // [rsp+120h] [rbp+20h]
  int v56; // [rsp+128h] [rbp+28h]
  int v57; // [rsp+12Ch] [rbp+2Ch]
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+140h] [rbp+40h] BYREF
  int *v60; // [rsp+150h] [rbp+50h]
  int v61; // [rsp+158h] [rbp+58h]
  int v62; // [rsp+15Ch] [rbp+5Ch]
  int *v63; // [rsp+160h] [rbp+60h]
  int v64; // [rsp+168h] [rbp+68h]
  int v65; // [rsp+16Ch] [rbp+6Ch]
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+170h] [rbp+70h] BYREF

  if ( **((_DWORD **)this + 1) > 5u )
  {
    v2 = *((_DWORD *)a2 + 1);
    v3 = (const CHAR *)*((_QWORD *)a2 + 6);
    v36 = 0;
    v26 = v2;
    v34 = &v26;
    v35 = 4;
    TlgCreateSz(&pDesc, v3);
    v5 = *(const CHAR **)(v4 + 120);
    v40 = 0;
    v38 = v4 + 56;
    v39 = 4;
    TlgCreateSz(&v41, v5);
    v7 = *v6;
    v8 = (const WCHAR *)*((_QWORD *)v6 + 2);
    v44 = 0;
    v27 = v7;
    v42 = &v27;
    v43 = 4;
    TlgCreateWsz(&v45, v8);
    v10 = *(_DWORD *)(v9 + 24);
    v11 = *(const CHAR **)(v9 + 64);
    v48 = 0;
    v28 = v10;
    v46 = &v28;
    v47 = 4;
    TlgCreateSz(&v49, v11);
    v13 = *(_DWORD *)(v12 + 72);
    v14 = *(const CHAR **)(v12 + 80);
    v52 = 0;
    v29 = v13;
    v50 = &v29;
    v51 = 4;
    TlgCreateSz(&v53, v14);
    TlgCreateWsz(&v54, *(LPCWSTR *)(v15 + 88));
    v17 = *(_DWORD *)(v16 + 96);
    v18 = *(const CHAR **)(v16 + 104);
    v57 = 0;
    v30 = v17;
    v55 = &v30;
    v56 = 4;
    TlgCreateSz(&v58, v18);
    TlgCreateWsz(&v59, *(LPCWSTR *)(v19 + 112));
    v21 = *(_DWORD *)(v20 + 8);
    v62 = 0;
    v65 = 0;
    v22 = *(const CHAR **)(v20 + 40);
    v60 = &v31;
    v32 = *(_DWORD *)(v20 + 60);
    v31 = v21;
    v63 = &v32;
    v61 = 4;
    v64 = 4;
    TlgCreateSz(&v66, v22);
    TlgWrite(v25, &unk_180144C52, v23, v24, 0x13u, &pData);
  }
}
