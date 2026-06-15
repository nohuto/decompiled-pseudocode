/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU__WIL__WNF_USER_SUBSCRIPTION@@P6AXPEAU1@@Z$1?UnsubscribeWilWnf@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180006040
 * Callers:
 *     ??_GFeatureStateManager@details@wil@@QEAAPEAXI@Z @ 0x180007A9C (--_GFeatureStateManager@details@wil@@QEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<__WIL__WNF_USER_SUBSCRIPTION *,void (*)(__WIL__WNF_USER_SUBSCRIPTION *),&void wil::details::UnsubscribeWilWnf(__WIL__WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,__WIL__WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<__WIL__WNF_USER_SUBSCRIPTION *,void (*)(__WIL__WNF_USER_SUBSCRIPTION *),&void wil::details::UnsubscribeWilWnf(__WIL__WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,__WIL__WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>>(
        __int64 *a1)
{
  __int64 v1; // rbx
  int (*ProcAddress)(struct __WIL__WNF_USER_SUBSCRIPTION *); // rax
  HMODULE ModuleHandleW; // rax

  v1 = *a1;
  if ( *a1 )
  {
    ProcAddress = g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion;
    if ( g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion )
      goto LABEL_6;
    ModuleHandleW = g_wil_details_ntdllModuleHandle;
    if ( !g_wil_details_ntdllModuleHandle )
    {
      ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
      g_wil_details_ntdllModuleHandle = ModuleHandleW;
    }
    ProcAddress = (int (*)(struct __WIL__WNF_USER_SUBSCRIPTION *))GetProcAddress(
                                                                    ModuleHandleW,
                                                                    "RtlUnsubscribeWnfNotificationWaitForCompletion");
    g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion = ProcAddress;
    if ( ProcAddress )
LABEL_6:
      ((void (__fastcall *)(__int64))ProcAddress)(v1);
  }
}
