/*
 * XREFs of ?DragTabComplete@DragComplete@AppViewManagerTabTelemetry@@QEAAXPEAUIApplicationView@@AEBU_GUID@@@Z @ 0x1801201E8
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

void __fastcall AppViewManagerTabTelemetry::DragComplete::DragTabComplete(
        AppViewManagerTabTelemetry::DragComplete *this,
        struct IApplicationView *a2,
        const struct _GUID *a3)
{
  __int64 v6; // rax
  const struct _TlgProvider_t *v7; // rbx
  LPCWSTR *AppNameFromView; // rax
  LPVOID pv[2]; // [rsp+30h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-48h] BYREF
  const struct _GUID *v12; // [rsp+70h] [rbp-38h]
  int v13; // [rsp+78h] [rbp-30h]
  int v14; // [rsp+7Ch] [rbp-2Ch]

  v6 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
         this,
         lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  v7 = *(const struct _TlgProvider_t **)(v6 + 8);
  if ( *(_DWORD *)v7 > 5u && TlgKeywordOn(*(TraceLoggingHProvider *)(v6 + 8), 0x400000000000uLL) )
  {
    AppNameFromView = (LPCWSTR *)AppViewManagerTabTelemetry::GetAppNameFromView(pv, a2);
    TlgCreateWsz(&pDesc, *AppNameFromView);
    v14 = 0;
    v12 = a3;
    v13 = 16;
    TlgWrite(v7, &unk_180387887, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &pData);
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
  }
}
