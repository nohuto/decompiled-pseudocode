/*
 * XREFs of ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x1800800C8
 * Callers:
 *     ??1?$shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAA@XZ @ 0x18004CB68 (--1-$shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAA@XZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180016F04 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x180017490 (-MemoryFree@@YAXPEAX@Z.c)
 *     ?wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x180046654 (-wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x1800733FC (-Destroy@-$DestroyThreadPoolTimer@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z.c)
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180081094 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 */

void __fastcall wil::details::FeatureStateManager::~FeatureStateManager(wil::details::FeatureStateManager *this)
{
  void *v2; // rcx
  __int64 v3; // rdi
  FARPROC ProcAddress; // rax
  HMODULE NtDllModuleHandle; // rax
  __int64 v6; // rdi
  HMODULE v7; // rax
  struct _TP_TIMER *v8; // rcx
  void *v9; // rcx

  *(_BYTE *)this = 0;
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
    (struct _TP_TIMER **)this + 10,
    0LL);
  v2 = (void *)*((_QWORD *)this + 17);
  if ( v2 )
    MemoryFree(v2);
  v3 = *((_QWORD *)this + 13);
  ProcAddress = (FARPROC)g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion;
  if ( v3 )
  {
    if ( g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion
      || (NtDllModuleHandle = wil_details_GetNtDllModuleHandle(),
          ProcAddress = GetProcAddress(NtDllModuleHandle, "RtlUnsubscribeWnfNotificationWaitForCompletion"),
          (g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion = (int (*)(struct __WIL__WNF_USER_SUBSCRIPTION *))ProcAddress) != 0LL) )
    {
      ((void (__fastcall *)(__int64))ProcAddress)(v3);
      ProcAddress = (FARPROC)g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion;
    }
  }
  v6 = *((_QWORD *)this + 12);
  if ( v6 )
  {
    if ( ProcAddress
      || (v7 = wil_details_GetNtDllModuleHandle(),
          ProcAddress = GetProcAddress(v7, "RtlUnsubscribeWnfNotificationWaitForCompletion"),
          (g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion = (int (*)(struct __WIL__WNF_USER_SUBSCRIPTION *))ProcAddress) != 0LL) )
    {
      ((void (__fastcall *)(__int64))ProcAddress)(v6);
    }
  }
  v8 = (struct _TP_TIMER *)*((_QWORD *)this + 10);
  if ( v8 )
    wil::details::DestroyThreadPoolTimer<0>::Destroy(v8);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 1);
  v9 = (void *)*((_QWORD *)this + 2);
  if ( v9 )
    wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Release(v9);
}
