/*
 * XREFs of ??_GFeatureStateManager@details@wil@@QEAAPEAXI@Z @ 0x180029C60
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x1801A5BB0 (wil--details--_dynamic_atexit_destructor_for__g_featureStateManager__.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001DA88 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x18002A0A8 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

wil::details::FeatureStateManager *__fastcall wil::details::FeatureStateManager::`scalar deleting destructor'(
        wil::details::FeatureStateManager *this)
{
  void *v2; // rdi
  HANDLE ProcessHeap; // rax
  __int64 v4; // rdi
  int (*ProcAddress)(struct __WIL__WNF_USER_SUBSCRIPTION *); // rax
  HMODULE ModuleHandleW; // rax
  __int64 v7; // rdi
  HMODULE v8; // rax
  struct _TP_TIMER *v9; // rdi
  void *v10; // rcx

  *(_BYTE *)this = 0;
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
    (struct _TP_TIMER **)this + 10,
    0LL);
  v2 = (void *)*((_QWORD *)this + 17);
  if ( v2 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v2);
  }
  v4 = *((_QWORD *)this + 13);
  ProcAddress = g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion;
  if ( v4 )
  {
    if ( g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion )
      goto LABEL_8;
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
    {
LABEL_8:
      ((void (__fastcall *)(__int64))ProcAddress)(v4);
      ProcAddress = g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion;
    }
  }
  v7 = *((_QWORD *)this + 12);
  if ( v7 )
  {
    if ( ProcAddress )
      goto LABEL_14;
    v8 = g_wil_details_ntdllModuleHandle;
    if ( !g_wil_details_ntdllModuleHandle )
    {
      v8 = GetModuleHandleW(L"ntdll.dll");
      g_wil_details_ntdllModuleHandle = v8;
    }
    ProcAddress = (int (*)(struct __WIL__WNF_USER_SUBSCRIPTION *))GetProcAddress(
                                                                    v8,
                                                                    "RtlUnsubscribeWnfNotificationWaitForCompletion");
    g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion = ProcAddress;
    if ( ProcAddress )
LABEL_14:
      ((void (__fastcall *)(__int64))ProcAddress)(v7);
  }
  v9 = (struct _TP_TIMER *)*((_QWORD *)this + 10);
  if ( v9 )
  {
    SetThreadpoolTimer(*((PTP_TIMER *)this + 10), 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(v9, 1);
    CloseThreadpoolTimer(v9);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 1);
  v10 = (void *)*((_QWORD *)this + 2);
  if ( v10 )
    wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Release(v10);
  return this;
}
