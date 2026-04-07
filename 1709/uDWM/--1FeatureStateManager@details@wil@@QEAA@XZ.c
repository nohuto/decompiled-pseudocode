/*
 * XREFs of ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x180067B9C
 * Callers:
 *     ??1?$shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAA@XZ @ 0x180045140 (--1-$shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAA@XZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800367B0 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x180036B40 (-MemoryFree@@YAXPEAX@Z.c)
 *     ?wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x180040330 (-wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x180067F04 (-Destroy@-$DestroyThreadPoolTimer@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z.c)
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x1800683D8 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 *     ?Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x180068450 (-Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSC.c)
 */

void __fastcall wil::details::FeatureStateManager::~FeatureStateManager(wil::details::FeatureStateManager *this)
{
  void *v2; // rcx
  void *v3; // rcx
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v4; // r8
  __int64 v5; // rdi
  FARPROC ProcAddress; // rax
  HMODULE NtDllModuleHandle; // rax
  __int64 v8; // rdi
  HMODULE v9; // rax
  struct _TP_TIMER *v10; // rcx
  void *v11; // rcx

  *(_BYTE *)this = 0;
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
    (struct _TP_TIMER **)this + 5,
    0LL);
  v2 = (void *)*((_QWORD *)this + 27);
  if ( v2 )
    MemoryFree(v2);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 152));
  v3 = (void *)*((_QWORD *)this + 18);
  if ( v3 )
    MemoryFree(v3);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 2);
  v4 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)*((_QWORD *)this + 9);
  if ( v4 && SRWLock )
    wil::details_abi::SubscriptionList::Unsubscribe((LPCRITICAL_SECTION)&SRWLock[25], SRWLock, v4);
  v5 = *((_QWORD *)this + 8);
  ProcAddress = (FARPROC)g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion;
  if ( v5 )
  {
    if ( g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion
      || (NtDllModuleHandle = wil_details_GetNtDllModuleHandle(),
          ProcAddress = GetProcAddress(NtDllModuleHandle, "RtlUnsubscribeWnfNotificationWaitForCompletion"),
          (g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion = (int (*)(struct __WIL__WNF_USER_SUBSCRIPTION *))ProcAddress) != 0LL) )
    {
      ((void (__fastcall *)(__int64))ProcAddress)(v5);
      ProcAddress = (FARPROC)g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion;
    }
  }
  v8 = *((_QWORD *)this + 7);
  if ( v8 )
  {
    if ( ProcAddress
      || (v9 = wil_details_GetNtDllModuleHandle(),
          ProcAddress = GetProcAddress(v9, "RtlUnsubscribeWnfNotificationWaitForCompletion"),
          (g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion = (int (*)(struct __WIL__WNF_USER_SUBSCRIPTION *))ProcAddress) != 0LL) )
    {
      ((void (__fastcall *)(__int64))ProcAddress)(v8);
    }
  }
  v10 = (struct _TP_TIMER *)*((_QWORD *)this + 5);
  if ( v10 )
    wil::details::DestroyThreadPoolTimer<0>::Destroy(v10);
  v11 = (void *)*((_QWORD *)this + 2);
  if ( v11 )
    wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Release(v11);
}
