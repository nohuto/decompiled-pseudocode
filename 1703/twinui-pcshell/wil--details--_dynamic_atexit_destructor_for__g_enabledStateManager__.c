/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__ @ 0x1801A5A60
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001DA88 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x18001DD3C (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__()
{
  int v0; // eax
  void *v1; // rbx
  HANDLE ProcessHeap; // rax
  void *v3; // rbx
  HANDLE v4; // rax
  void (*v5)(void); // rax
  struct _TP_TIMER *v6; // rbx

  if ( wil::details::g_processShutdownInProgress )
    goto LABEL_15;
  v0 = (int)wil::details::g_pfnRtlDllShutdownInProgress;
  if ( wil::details::g_pfnRtlDllShutdownInProgress )
    v0 = wil::details::g_pfnRtlDllShutdownInProgress();
  if ( v0 )
  {
LABEL_15:
    wil::details::g_enabledStateManager = 0;
    wil::details::EnabledStateManager::RecordCachedUsageUnderLock((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
  }
  else
  {
    wil::details::g_enabledStateManager = 0;
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
      &qword_1802439E0,
      0LL);
    wil::details::g_enabledStateManager = 0;
    wil::details::EnabledStateManager::RecordCachedUsageUnderLock((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
    v1 = lpMem;
    if ( lpMem )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v1);
    }
    v3 = qword_180243A10;
    if ( qword_180243A10 )
    {
      v4 = GetProcessHeap();
      HeapFree(v4, 0, v3);
    }
    if ( qword_1802439F0 )
    {
      v5 = (void (*)(void))g_wil_details_internalUnsubscribeFeatureStateChangeNotification;
      if ( g_wil_details_internalUnsubscribeFeatureStateChangeNotification
        || (v5 = (void (*)(void))g_wil_details_apiUnsubscribeFeatureStateChangeNotification) != 0LL )
      {
        v5();
      }
    }
    v6 = qword_1802439E0;
    if ( qword_1802439E0 )
    {
      SetThreadpoolTimer(qword_1802439E0, 0LL, 0, 0);
      WaitForThreadpoolTimerCallbacks(v6, 1);
      CloseThreadpoolTimer(v6);
    }
  }
}
