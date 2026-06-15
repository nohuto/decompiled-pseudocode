/*
 * XREFs of ?OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z @ 0x18005DD70
 * Callers:
 *     ?FallbackTelemetryCallback@AudioSrvTelemetryProvider@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x18005DCB0 (-FallbackTelemetryCallback@AudioSrvTelemetryProvider@@SAX_NAEBUFailureInfo@wil@@@Z.c)
 * Callees:
 *     _TlgCreateSz @ 0x1800059B0 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180043DA4 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180043F18 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x18009BE14 (-ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
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
  LPCGUID v22; // r8
  LPCGUID v23; // r9
  TraceLoggingHProvider v24; // r11
  int v25; // [rsp+30h] [rbp-D0h] BYREF
  int v26; // [rsp+34h] [rbp-CCh] BYREF
  int v27; // [rsp+38h] [rbp-C8h] BYREF
  int v28; // [rsp+3Ch] [rbp-C4h] BYREF
  int v29; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  int *v31; // [rsp+70h] [rbp-90h]
  int v32; // [rsp+78h] [rbp-88h]
  int v33; // [rsp+7Ch] [rbp-84h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  __int64 v35; // [rsp+90h] [rbp-70h]
  int v36; // [rsp+98h] [rbp-68h]
  int v37; // [rsp+9Ch] [rbp-64h]
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+A0h] [rbp-60h] BYREF
  int *v39; // [rsp+B0h] [rbp-50h]
  int v40; // [rsp+B8h] [rbp-48h]
  int v41; // [rsp+BCh] [rbp-44h]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+C0h] [rbp-40h] BYREF
  int *v43; // [rsp+D0h] [rbp-30h]
  int v44; // [rsp+D8h] [rbp-28h]
  int v45; // [rsp+DCh] [rbp-24h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+E0h] [rbp-20h] BYREF
  int *v47; // [rsp+F0h] [rbp-10h]
  int v48; // [rsp+F8h] [rbp-8h]
  int v49; // [rsp+FCh] [rbp-4h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+110h] [rbp+10h] BYREF
  int *v52; // [rsp+120h] [rbp+20h]
  int v53; // [rsp+128h] [rbp+28h]
  int v54; // [rsp+12Ch] [rbp+2Ch]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+140h] [rbp+40h] BYREF

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
          v33 = 0;
          v25 = v4;
          v31 = &v25;
          v32 = 4;
          TlgCreateSz(&pDesc, v5);
          v7 = *(const CHAR **)(v6 + 120);
          v37 = 0;
          v35 = v6 + 56;
          v36 = 4;
          TlgCreateSz(&v38, v7);
          v9 = *v8;
          v10 = (const WCHAR *)*((_QWORD *)v8 + 2);
          v41 = 0;
          v26 = v9;
          v39 = &v26;
          v40 = 4;
          TlgCreateWsz(&v42, v10);
          v12 = *(_DWORD *)(v11 + 24);
          v13 = *(const CHAR **)(v11 + 64);
          v45 = 0;
          v27 = v12;
          v43 = &v27;
          v44 = 4;
          TlgCreateSz(&v46, v13);
          v15 = *(_DWORD *)(v14 + 72);
          v16 = *(const CHAR **)(v14 + 80);
          v49 = 0;
          v28 = v15;
          v47 = &v28;
          v48 = 4;
          TlgCreateSz(&v50, v16);
          TlgCreateWsz(&v51, *(LPCWSTR *)(v17 + 88));
          v19 = *(_DWORD *)(v18 + 96);
          v20 = *(const CHAR **)(v18 + 104);
          v54 = 0;
          v29 = v19;
          v52 = &v29;
          v53 = 4;
          TlgCreateSz(&v55, v20);
          TlgCreateWsz(&v56, *(LPCWSTR *)(v21 + 112));
          TlgWrite(v24, &unk_180144B4F, v22, v23, 0x10u, &pData);
        }
      }
    }
    else if ( *((_DWORD *)this + 5) == 2 )
    {
      wil::TraceLoggingProvider::ReportTraceLoggingFailure((wil::TraceLoggingProvider *)this, a3);
    }
  }
}
