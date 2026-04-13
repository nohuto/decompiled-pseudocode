/*
 * XREFs of ??_GFeatureStateManager@details@wil@@QEAAPEAXI@Z @ 0x180014E48
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x1800BDCD0 (wil--details--_dynamic_atexit_destructor_for__g_featureStateManager__.c)
 * Callees:
 *     ?Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x180009F20 (-Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSC.c)
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x1800153F8 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

wil::details::FeatureStateManager *__fastcall wil::details::FeatureStateManager::`scalar deleting destructor'(
        wil::details::FeatureStateManager *this)
{
  struct _TP_TIMER *v2; // rsi
  DWORD LastError; // ebx
  void *v4; // rsi
  HANDLE ProcessHeap; // rax
  void *v6; // rsi
  HANDLE v7; // rax
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v8; // r8
  __int64 v9; // rbx
  int (*ProcAddress)(struct __WIL__WNF_USER_SUBSCRIPTION *); // rax
  HMODULE ModuleHandleW; // rax
  __int64 v12; // rbx
  HMODULE v13; // rax
  struct _TP_TIMER *v14; // rbx
  void *v15; // rcx

  *(_BYTE *)this = 0;
  v2 = (struct _TP_TIMER *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    LastError = GetLastError();
    SetThreadpoolTimer(v2, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(v2, 1);
    CloseThreadpoolTimer(v2);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 5) = 0LL;
  v4 = (void *)*((_QWORD *)this + 27);
  if ( v4 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 152));
  v6 = (void *)*((_QWORD *)this + 18);
  if ( v6 )
  {
    v7 = GetProcessHeap();
    HeapFree(v7, 0, v6);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 2);
  v8 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)*((_QWORD *)this + 9);
  if ( v8 && qword_18015C178 )
    wil::details_abi::SubscriptionList::Unsubscribe((LPCRITICAL_SECTION)&qword_18015C178[25], qword_18015C178, v8);
  v9 = *((_QWORD *)this + 8);
  ProcAddress = g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion;
  if ( v9 )
  {
    if ( g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion )
      goto LABEL_15;
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
LABEL_15:
      ((void (__fastcall *)(__int64))ProcAddress)(v9);
      ProcAddress = g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion;
    }
  }
  v12 = *((_QWORD *)this + 7);
  if ( v12 )
  {
    if ( ProcAddress )
      goto LABEL_21;
    v13 = g_wil_details_ntdllModuleHandle;
    if ( !g_wil_details_ntdllModuleHandle )
    {
      v13 = GetModuleHandleW(L"ntdll.dll");
      g_wil_details_ntdllModuleHandle = v13;
    }
    ProcAddress = (int (*)(struct __WIL__WNF_USER_SUBSCRIPTION *))GetProcAddress(
                                                                    v13,
                                                                    "RtlUnsubscribeWnfNotificationWaitForCompletion");
    g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion = ProcAddress;
    if ( ProcAddress )
LABEL_21:
      ((void (__fastcall *)(__int64))ProcAddress)(v12);
  }
  v14 = (struct _TP_TIMER *)*((_QWORD *)this + 5);
  if ( v14 )
  {
    SetThreadpoolTimer(*((PTP_TIMER *)this + 5), 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(v14, 1);
    CloseThreadpoolTimer(v14);
  }
  v15 = (void *)*((_QWORD *)this + 2);
  if ( v15 )
    wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Release(v15);
  return this;
}
