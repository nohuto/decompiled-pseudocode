/*
 * XREFs of ??_GEnabledStateManager@details@wil@@QEAAPEAXI@Z @ 0x180014D0C
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__ @ 0x1800BDD30 (wil--details--_dynamic_atexit_destructor_for__g_enabledStateManager__.c)
 * Callees:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x18000B460 (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

wil::details::EnabledStateManager *__fastcall wil::details::EnabledStateManager::`scalar deleting destructor'(
        wil::details::EnabledStateManager *this)
{
  struct _TP_TIMER *v2; // rsi
  DWORD LastError; // ebx
  void *v4; // rbx
  HANDLE ProcessHeap; // rax
  void *v6; // rbx
  HANDLE v7; // rax
  __int64 v8; // rcx
  void (*v9)(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *); // rdx
  void (*v10)(void); // rax
  struct _TP_TIMER *v11; // rbx

  *(_BYTE *)this = 0;
  v2 = (struct _TP_TIMER *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    LastError = GetLastError();
    SetThreadpoolTimer(v2, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(v2, 1);
    CloseThreadpoolTimer(v2);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 2) = 0LL;
  *(_BYTE *)this = 0;
  wil::details::EnabledStateManager::RecordCachedUsageUnderLock(this);
  v4 = (void *)*((_QWORD *)this + 13);
  if ( v4 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v4);
  }
  v6 = (void *)*((_QWORD *)this + 9);
  if ( v6 )
  {
    v7 = GetProcessHeap();
    HeapFree(v7, 0, v6);
  }
  v8 = *((_QWORD *)this + 5);
  v9 = g_wil_details_internalUnsubscribeFeatureStateChangeNotification;
  if ( v8 )
  {
    if ( g_wil_details_internalUnsubscribeFeatureStateChangeNotification )
    {
      ((void (__fastcall *)(__int64, void (*)(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)))g_wil_details_internalUnsubscribeFeatureStateChangeNotification)(
        v8,
        g_wil_details_internalUnsubscribeFeatureStateChangeNotification);
    }
    else
    {
      v10 = (void (*)(void))g_wil_details_apiUnsubscribeFeatureStateChangeNotification;
      if ( !g_wil_details_apiUnsubscribeFeatureStateChangeNotification )
        goto LABEL_14;
      ((void (__fastcall *)(__int64, _QWORD))g_wil_details_apiUnsubscribeFeatureStateChangeNotification)(v8, 0LL);
    }
    v9 = g_wil_details_internalUnsubscribeFeatureStateChangeNotification;
  }
  v10 = (void (*)(void))g_wil_details_apiUnsubscribeFeatureStateChangeNotification;
LABEL_14:
  if ( !*((_QWORD *)this + 4) )
    goto LABEL_19;
  if ( v9 )
  {
    v10 = (void (*)(void))v9;
  }
  else if ( !v10 )
  {
    goto LABEL_19;
  }
  v10();
LABEL_19:
  v11 = (struct _TP_TIMER *)*((_QWORD *)this + 2);
  if ( v11 )
  {
    SetThreadpoolTimer(*((PTP_TIMER *)this + 2), 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(v11, 1);
    CloseThreadpoolTimer(v11);
  }
  return this;
}
