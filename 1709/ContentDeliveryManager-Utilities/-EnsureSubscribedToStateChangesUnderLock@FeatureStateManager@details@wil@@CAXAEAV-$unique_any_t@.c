/*
 * XREFs of ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU__WIL__WNF_USER_SUBSCRIPTION@@P6AXPEAU1@@Z$1?UnsubscribeWilWnf@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@U__WIL__WNF_STATE_NAME@@PEAX@Z @ 0x18000A7A0
 * Callers:
 *     ?WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x18000AE20 (-WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_.c)
 * Callees:
 *     ?wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAKPEAX3@Z @ 0x180007310 (-wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAK.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::FeatureStateManager::EnsureSubscribedToStateChangesUnderLock(
        __int64 *a1,
        const struct __WIL__WNF_TYPE_ID *a2,
        const void *a3)
{
  __int64 v5; // rbx
  DWORD LastError; // esi
  int (*ProcAddress)(struct __WIL__WNF_USER_SUBSCRIPTION *); // rax
  HMODULE ModuleHandleW; // rax
  int (__high *v9)(struct __WIL__WNF_USER_SUBSCRIPTION **, struct __WIL__WNF_STATE_NAME, unsigned int, int (__high *)(struct __WIL__WNF_STATE_NAME, unsigned int, struct __WIL__WNF_TYPE_ID *, void *, const void *, unsigned int), void *, struct __WIL__WNF_TYPE_ID *, unsigned int, unsigned int); // rax
  unsigned int v10; // esi
  const struct __WIL__WNF_TYPE_ID *v11; // rbx
  HMODULE v12; // rax
  unsigned int v13; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v14; // [rsp+54h] [rbp-34h] BYREF
  const struct __WIL__WNF_TYPE_ID *v15; // [rsp+58h] [rbp-30h] BYREF

  v15 = a2;
  if ( !*a1 )
  {
    v13 = 0;
    v14 = 0;
    wil_details_NtQueryWnfStateData((const struct __WIL__WNF_STATE_NAME *)&v15, a2, a3, &v13, 0LL, &v14);
    v5 = *a1;
    if ( *a1 )
    {
      LastError = GetLastError();
      ProcAddress = g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion;
      if ( g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion )
        goto LABEL_7;
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
LABEL_7:
        ((void (__fastcall *)(__int64))ProcAddress)(v5);
      SetLastError(LastError);
    }
    *a1 = 0LL;
    v9 = g_wil_details_pfnRtlSubscribeWnfStateChangeNotification;
    v10 = v13;
    v11 = v15;
    if ( g_wil_details_pfnRtlSubscribeWnfStateChangeNotification )
      goto LABEL_13;
    v12 = g_wil_details_ntdllModuleHandle;
    if ( !g_wil_details_ntdllModuleHandle )
    {
      v12 = GetModuleHandleW(L"ntdll.dll");
      g_wil_details_ntdllModuleHandle = v12;
    }
    v9 = (int (__high *)(struct __WIL__WNF_USER_SUBSCRIPTION **, struct __WIL__WNF_STATE_NAME, unsigned int, int (__high *)(struct __WIL__WNF_STATE_NAME, unsigned int, struct __WIL__WNF_TYPE_ID *, void *, const void *, unsigned int), void *, struct __WIL__WNF_TYPE_ID *, unsigned int, unsigned int))GetProcAddress(v12, "RtlSubscribeWnfStateChangeNotification");
    g_wil_details_pfnRtlSubscribeWnfStateChangeNotification = v9;
    if ( v9 )
LABEL_13:
      ((void (__fastcall *)(__int64 *, const struct __WIL__WNF_TYPE_ID *, _QWORD, __int64 (__fastcall *)(), const void *, _QWORD, _DWORD, _DWORD))v9)(
        a1,
        v11,
        v10,
        lambda_74900582371bb26b135d7f7a3ba0da76_::_lambda_invoker_cdecl_,
        a3,
        0LL,
        0,
        0);
  }
}
