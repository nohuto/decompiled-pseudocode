/*
 * XREFs of ?close_reset@?$resource_policy@PEAU__WIL__WNF_USER_SUBSCRIPTION@@P6AXPEAU1@@Z$1?UnsubscribeWilWnf@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@SAXPEAU__WIL__WNF_USER_SUBSCRIPTION@@@Z @ 0x18008151C
 * Callers:
 *     ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU__WIL__WNF_USER_SUBSCRIPTION@@P6AXPEAU1@@Z$1?UnsubscribeWilWnf@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@U__WIL__WNF_STATE_NAME@@PEAX@Z @ 0x180046518 (-EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAXAEAV-$unique_any_t@.c)
 * Callees:
 *     ?wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x180046654 (-wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::resource_policy<__WIL__WNF_USER_SUBSCRIPTION *,void (*)(__WIL__WNF_USER_SUBSCRIPTION *),&void wil::details::UnsubscribeWilWnf(__WIL__WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,__WIL__WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>::close_reset(
        __int64 a1)
{
  DWORD LastError; // ebx
  FARPROC ProcAddress; // rax
  HMODULE NtDllModuleHandle; // rax

  LastError = GetLastError();
  ProcAddress = (FARPROC)g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion;
  if ( g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion
    || (NtDllModuleHandle = wil_details_GetNtDllModuleHandle(),
        ProcAddress = GetProcAddress(NtDllModuleHandle, "RtlUnsubscribeWnfNotificationWaitForCompletion"),
        (g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion = (int (*)(struct __WIL__WNF_USER_SUBSCRIPTION *))ProcAddress) != 0LL) )
  {
    ((void (__fastcall *)(__int64))ProcAddress)(a1);
  }
  SetLastError(LastError);
}
