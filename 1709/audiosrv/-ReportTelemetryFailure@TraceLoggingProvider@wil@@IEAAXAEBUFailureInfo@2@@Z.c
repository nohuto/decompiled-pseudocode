/*
 * XREFs of ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x18005FD94
 * Callers:
 *     ?OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z @ 0x18005FCA0 (-OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18002C198 (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x1800312F4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 */

void __fastcall wil::TraceLoggingProvider::ReportTelemetryFailure(
        TraceLoggingHProvider *this,
        const struct wil::FailureInfo *a2)
{
  __int64 v2; // r11
  int v3; // eax
  const CHAR *v4; // rdx
  __int64 v5; // r11
  const CHAR *v6; // rdx
  int *v7; // r11
  int v8; // edx
  const WCHAR *v9; // rdx
  __int64 v10; // r11
  int v11; // ecx
  const CHAR *v12; // rdx
  __int64 v13; // r11
  int v14; // edx
  const CHAR *v15; // rdx
  __int64 v16; // r11
  __int64 v17; // r11
  int v18; // ecx
  const CHAR *v19; // rdx
  __int64 v20; // r11
  LPCGUID v21; // r8
  LPCGUID v22; // r9
  TraceLoggingHProvider v23; // r10
  int v24; // [rsp+30h] [rbp-D0h] BYREF
  int v25; // [rsp+34h] [rbp-CCh] BYREF
  int v26; // [rsp+38h] [rbp-C8h] BYREF
  int v27; // [rsp+3Ch] [rbp-C4h] BYREF
  int v28; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  int *v30; // [rsp+70h] [rbp-90h]
  int v31; // [rsp+78h] [rbp-88h]
  int v32; // [rsp+7Ch] [rbp-84h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  __int64 v34; // [rsp+90h] [rbp-70h]
  int v35; // [rsp+98h] [rbp-68h]
  int v36; // [rsp+9Ch] [rbp-64h]
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+A0h] [rbp-60h] BYREF
  int *v38; // [rsp+B0h] [rbp-50h]
  int v39; // [rsp+B8h] [rbp-48h]
  int v40; // [rsp+BCh] [rbp-44h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+C0h] [rbp-40h] BYREF
  int *v42; // [rsp+D0h] [rbp-30h]
  int v43; // [rsp+D8h] [rbp-28h]
  int v44; // [rsp+DCh] [rbp-24h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+E0h] [rbp-20h] BYREF
  int *v46; // [rsp+F0h] [rbp-10h]
  int v47; // [rsp+F8h] [rbp-8h]
  int v48; // [rsp+FCh] [rbp-4h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+110h] [rbp+10h] BYREF
  int *v51; // [rsp+120h] [rbp+20h]
  int v52; // [rsp+128h] [rbp+28h]
  int v53; // [rsp+12Ch] [rbp+2Ch]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+140h] [rbp+40h] BYREF

  if ( *(_DWORD *)this[1] > 5u )
  {
    if ( TlgKeywordOn(this[1], 0x200000000000uLL) )
    {
      v3 = *(_DWORD *)(v2 + 4);
      v4 = *(const CHAR **)(v2 + 48);
      v32 = 0;
      v24 = v3;
      v30 = &v24;
      v31 = 4;
      TlgCreateSz(&pDesc, v4);
      v36 = 0;
      v34 = v5 + 56;
      v6 = *(const CHAR **)(v5 + 120);
      v35 = 4;
      TlgCreateSz(&v37, v6);
      v8 = *v7;
      v40 = 0;
      v25 = v8;
      v9 = (const WCHAR *)*((_QWORD *)v7 + 2);
      v38 = &v25;
      v39 = 4;
      TlgCreateWsz(&v41, v9);
      v11 = *(_DWORD *)(v10 + 24);
      v12 = *(const CHAR **)(v10 + 64);
      v44 = 0;
      v26 = v11;
      v42 = &v26;
      v43 = 4;
      TlgCreateSz(&v45, v12);
      v14 = *(_DWORD *)(v13 + 72);
      v48 = 0;
      v27 = v14;
      v15 = *(const CHAR **)(v13 + 80);
      v46 = &v27;
      v47 = 4;
      TlgCreateSz(&v49, v15);
      TlgCreateWsz(&v50, *(LPCWSTR *)(v16 + 88));
      v18 = *(_DWORD *)(v17 + 96);
      v19 = *(const CHAR **)(v17 + 104);
      v53 = 0;
      v28 = v18;
      v51 = &v28;
      v52 = 4;
      TlgCreateSz(&v54, v19);
      TlgCreateWsz(&v55, *(LPCWSTR *)(v20 + 112));
      TlgWrite(v23, &unk_18010E8A5, v21, v22, 0x10u, &pData);
    }
  }
}
