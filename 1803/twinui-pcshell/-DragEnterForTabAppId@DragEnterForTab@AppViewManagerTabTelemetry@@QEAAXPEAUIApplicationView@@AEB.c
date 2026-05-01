/*
 * XREFs of ?DragEnterForTabAppId@DragEnterForTab@AppViewManagerTabTelemetry@@QEAAXPEAUIApplicationView@@AEBU_GUID@@1I@Z @ 0x18011FA50
 * Callers:
 *     ?DragEnterForTab@CAppViewManager@@UEAAJAEBU_GUID@@0UtagPOINT@@@Z @ 0x18011F660 (-DragEnterForTab@CAppViewManager@@UEAAJAEBU_GUID@@0UtagPOINT@@@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?GetAppNameFromView@AppViewManagerTabTelemetry@@CA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x180120448 (-GetAppNameFromView@AppViewManagerTabTelemetry@@CA-AV-$unique_any_t@V-$unique_storage@U-$resourc.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x180128104 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 */

void __fastcall AppViewManagerTabTelemetry::DragEnterForTab::DragEnterForTabAppId(
        AppViewManagerTabTelemetry::DragEnterForTab *this,
        struct IApplicationView *a2,
        const struct _GUID *a3,
        const struct _GUID *a4,
        char a5)
{
  __int64 v9; // rax
  const struct _TlgProvider_t *v10; // rbx
  LPCWSTR *AppNameFromView; // rax
  LPVOID pv[2]; // [rsp+30h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-21h] BYREF
  const struct _GUID *v15; // [rsp+70h] [rbp-11h]
  int v16; // [rsp+78h] [rbp-9h]
  int v17; // [rsp+7Ch] [rbp-5h]
  const struct _GUID *v18; // [rsp+80h] [rbp-1h]
  int v19; // [rsp+88h] [rbp+7h]
  int v20; // [rsp+8Ch] [rbp+Bh]
  char *v21; // [rsp+90h] [rbp+Fh]
  int v22; // [rsp+98h] [rbp+17h]
  int v23; // [rsp+9Ch] [rbp+1Bh]

  v9 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
         this,
         lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  v10 = *(const struct _TlgProvider_t **)(v9 + 8);
  if ( *(_DWORD *)v10 > 5u && TlgKeywordOn(*(TraceLoggingHProvider *)(v9 + 8), 0x400000000000uLL) )
  {
    AppNameFromView = (LPCWSTR *)AppViewManagerTabTelemetry::GetAppNameFromView(pv, a2);
    TlgCreateWsz(&pDesc, *AppNameFromView);
    v17 = 0;
    v20 = 0;
    v23 = 0;
    v16 = 16;
    v19 = 16;
    v21 = &a5;
    v15 = a3;
    v18 = a4;
    v22 = 4;
    TlgWrite(v10, &unk_180387B5B, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 6u, &pData);
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
  }
}
