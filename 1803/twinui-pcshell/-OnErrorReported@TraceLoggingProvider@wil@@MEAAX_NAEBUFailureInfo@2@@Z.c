/*
 * XREFs of ?OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z @ 0x1800755A0
 * Callers:
 *     ?FallbackTelemetryCallback@ErrorHandlingHelpers@wil@@SAX_NAEBUFailureInfo@2@@Z @ 0x180086940 (-FallbackTelemetryCallback@ErrorHandlingHelpers@wil@@SAX_NAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x180058D78 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x18009CCF4 (-ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 */

void __fastcall wil::TraceLoggingProvider::OnErrorReported(
        TraceLoggingHProvider *this,
        char a2,
        const struct wil::FailureInfo *a3)
{
  __int64 v3; // r10
  int v4; // eax
  const CHAR *v5; // rdx
  __int64 v6; // r10
  const CHAR *v7; // rdx
  int *v8; // r10
  int v9; // ecx
  const WCHAR *v10; // rdx
  __int64 v11; // r10
  int v12; // ecx
  const CHAR *v13; // rdx
  __int64 v14; // r10
  int v15; // ecx
  const CHAR *v16; // rdx
  __int64 v17; // r10
  __int64 v18; // r10
  int v19; // ecx
  const CHAR *v20; // rdx
  __int64 v21; // r10
  TraceLoggingHProvider v22; // r11
  int v23; // [rsp+30h] [rbp-D0h] BYREF
  int v24; // [rsp+34h] [rbp-CCh] BYREF
  int v25; // [rsp+38h] [rbp-C8h] BYREF
  int v26; // [rsp+3Ch] [rbp-C4h] BYREF
  int v27; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  int *v29; // [rsp+70h] [rbp-90h]
  int v30; // [rsp+78h] [rbp-88h]
  int v31; // [rsp+7Ch] [rbp-84h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  __int64 v33; // [rsp+90h] [rbp-70h]
  int v34; // [rsp+98h] [rbp-68h]
  int v35; // [rsp+9Ch] [rbp-64h]
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+A0h] [rbp-60h] BYREF
  int *v37; // [rsp+B0h] [rbp-50h]
  int v38; // [rsp+B8h] [rbp-48h]
  int v39; // [rsp+BCh] [rbp-44h]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+C0h] [rbp-40h] BYREF
  int *v41; // [rsp+D0h] [rbp-30h]
  int v42; // [rsp+D8h] [rbp-28h]
  int v43; // [rsp+DCh] [rbp-24h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+E0h] [rbp-20h] BYREF
  int *v45; // [rsp+F0h] [rbp-10h]
  int v46; // [rsp+F8h] [rbp-8h]
  int v47; // [rsp+FCh] [rbp-4h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+110h] [rbp+10h] BYREF
  int *v50; // [rsp+120h] [rbp+20h]
  int v51; // [rsp+128h] [rbp+28h]
  int v52; // [rsp+12Ch] [rbp+2Ch]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+140h] [rbp+40h] BYREF

  if ( !a2 )
  {
    if ( *((_DWORD *)this + 5) == 1 )
    {
      if ( *(_DWORD *)this[1] > 5u )
      {
        if ( TlgKeywordOn(this[1], 0x200000000000uLL) )
        {
          v4 = *(_DWORD *)(v3 + 4);
          v5 = *(const CHAR **)(v3 + 48);
          v31 = 0;
          v23 = v4;
          v29 = &v23;
          v30 = 4;
          TlgCreateSz(&pDesc, v5);
          v7 = *(const CHAR **)(v6 + 120);
          v35 = 0;
          v33 = v6 + 56;
          v34 = 4;
          TlgCreateSz(&v36, v7);
          v9 = *v8;
          v10 = (const WCHAR *)*((_QWORD *)v8 + 2);
          v39 = 0;
          v24 = v9;
          v37 = &v24;
          v38 = 4;
          TlgCreateWsz(&v40, v10);
          v12 = *(_DWORD *)(v11 + 24);
          v13 = *(const CHAR **)(v11 + 64);
          v43 = 0;
          v25 = v12;
          v41 = &v25;
          v42 = 4;
          TlgCreateSz(&v44, v13);
          v15 = *(_DWORD *)(v14 + 72);
          v16 = *(const CHAR **)(v14 + 80);
          v47 = 0;
          v26 = v15;
          v45 = &v26;
          v46 = 4;
          TlgCreateSz(&v48, v16);
          TlgCreateWsz(&v49, *(LPCWSTR *)(v17 + 88));
          v19 = *(_DWORD *)(v18 + 96);
          v20 = *(const CHAR **)(v18 + 104);
          v52 = 0;
          v27 = v19;
          v50 = &v27;
          v51 = 4;
          TlgCreateSz(&v53, v20);
          TlgCreateWsz(&v54, *(LPCWSTR *)(v21 + 112));
          TlgWrite(v22, &unk_180385B6D, 0LL, 0LL, 0x10u, &pData);
        }
      }
    }
    else if ( *((_DWORD *)this + 5) == 2 )
    {
      wil::TraceLoggingProvider::ReportTraceLoggingFailure((wil::TraceLoggingProvider *)this, a3);
    }
  }
}
