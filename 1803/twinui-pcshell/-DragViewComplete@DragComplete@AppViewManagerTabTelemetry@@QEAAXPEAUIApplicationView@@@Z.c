/*
 * XREFs of ?DragViewComplete@DragComplete@AppViewManagerTabTelemetry@@QEAAXPEAUIApplicationView@@@Z @ 0x1801202C8
 * Callers:
 *     ?DragComplete@CAppViewManager@@UEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x18011F150 (-DragComplete@CAppViewManager@@UEAAJAEBU_GUID@@UtagPOINT@@@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?GetAppNameFromView@AppViewManagerTabTelemetry@@CA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x180120448 (-GetAppNameFromView@AppViewManagerTabTelemetry@@CA-AV-$unique_any_t@V-$unique_storage@U-$resourc.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x180128104 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 */

void __fastcall AppViewManagerTabTelemetry::DragComplete::DragViewComplete(
        AppViewManagerTabTelemetry::DragComplete *this,
        struct IApplicationView *a2)
{
  __int64 v4; // rax
  const struct _TlgProvider_t *v5; // rbx
  LPCWSTR *AppNameFromView; // rax
  LPVOID pv; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+58h] [rbp-20h] BYREF

  v4 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
         this,
         lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  v5 = *(const struct _TlgProvider_t **)(v4 + 8);
  if ( *(_DWORD *)v5 > 5u && TlgKeywordOn(*(TraceLoggingHProvider *)(v4 + 8), 0x400000000000uLL) )
  {
    AppNameFromView = (LPCWSTR *)AppViewManagerTabTelemetry::GetAppNameFromView(&pv, a2);
    TlgCreateWsz(&pDesc, *AppNameFromView);
    TlgWrite(v5, &unk_1803878B6, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 3u, &pData);
    if ( pv )
      CoTaskMemFree(pv);
  }
}
