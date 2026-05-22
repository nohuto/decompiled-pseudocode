/*
 * XREFs of ??_GFeatureStateManager@details@wil@@QEAAPEAXI@Z @ 0x180011464
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x1800D2750 (wil--details--_dynamic_atexit_destructor_for__g_featureStateManager__.c)
 * Callees:
 *     ?Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x18000D4FC (-Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSC.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800112EC (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x1800119B8 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

wil::details::FeatureStateManager *__fastcall wil::details::FeatureStateManager::`scalar deleting destructor'(
        wil::details::FeatureStateManager *this)
{
  void *v2; // rsi
  HANDLE ProcessHeap; // rax
  void *v4; // rsi
  HANDLE v5; // rax
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v6; // r8
  __int64 v7; // rdi
  int (*ProcAddress)(struct __WIL__WNF_USER_SUBSCRIPTION *); // rax
  HMODULE ModuleHandleW; // rax
  __int64 v10; // rdi
  HMODULE v11; // rax
  struct _TP_TIMER *v12; // rdi
  void *v13; // rcx

  *(_BYTE *)this = 0;
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
    (struct _TP_TIMER **)this + 5,
    0LL);
  v2 = (void *)*((_QWORD *)this + 27);
  if ( v2 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 152));
  v4 = (void *)*((_QWORD *)this + 18);
  if ( v4 )
  {
    v5 = GetProcessHeap();
    HeapFree(v5, 0, v4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 2);
  v6 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)*((_QWORD *)this + 9);
  if ( v6 && qword_18010D658 )
    wil::details_abi::SubscriptionList::Unsubscribe((LPCRITICAL_SECTION)&qword_18010D658[25], qword_18010D658, v6);
  v7 = *((_QWORD *)this + 8);
  ProcAddress = g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion;
  if ( v7 )
  {
    if ( g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion )
      goto LABEL_13;
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
LABEL_13:
      ((void (__fastcall *)(__int64))ProcAddress)(v7);
      ProcAddress = g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion;
    }
  }
  v10 = *((_QWORD *)this + 7);
  if ( v10 )
  {
    if ( ProcAddress )
      goto LABEL_19;
    v11 = g_wil_details_ntdllModuleHandle;
    if ( !g_wil_details_ntdllModuleHandle )
    {
      v11 = GetModuleHandleW(L"ntdll.dll");
      g_wil_details_ntdllModuleHandle = v11;
    }
    ProcAddress = (int (*)(struct __WIL__WNF_USER_SUBSCRIPTION *))GetProcAddress(
                                                                    v11,
                                                                    "RtlUnsubscribeWnfNotificationWaitForCompletion");
    g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion = ProcAddress;
    if ( ProcAddress )
LABEL_19:
      ((void (__fastcall *)(__int64))ProcAddress)(v10);
  }
  v12 = (struct _TP_TIMER *)*((_QWORD *)this + 5);
  if ( v12 )
  {
    SetThreadpoolTimer(*((PTP_TIMER *)this + 5), 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(v12, 1);
    CloseThreadpoolTimer(v12);
  }
  v13 = (void *)*((_QWORD *)this + 2);
  if ( v13 )
    wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Release(v13);
  return this;
}
