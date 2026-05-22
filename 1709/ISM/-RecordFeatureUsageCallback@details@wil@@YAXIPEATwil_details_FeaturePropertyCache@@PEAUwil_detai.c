/*
 * XREFs of ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x18000E900
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePropertyCache@@@Z @ 0x18000E254 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePro.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::RecordFeatureUsageCallback(
        wil::details *this,
        union wil_details_FeaturePropertyCache *a2,
        union wil_details_FeaturePropertyCache *a3,
        struct wil_details_RecordUsageResult *a4)
{
  unsigned int v5; // edi
  __int64 v6; // r8
  void (*v7)(unsigned int, unsigned int, unsigned int, const char *); // rax
  void (*v8)(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **, void (*)(void *), void *); // rax
  void (*v9)(unsigned int, unsigned int, unsigned int, const char *); // rax

  v5 = (unsigned int)this;
  if ( a2 )
  {
    if ( *(_DWORD *)a3 )
      wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
        (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
        (int)this,
        a2);
    v6 = *((unsigned int *)a3 + 1);
    if ( (_DWORD)v6 )
    {
      v7 = g_wil_details_internalRecordFeatureUsage;
      if ( g_wil_details_internalRecordFeatureUsage || (v7 = g_wil_details_apiRecordFeatureUsage) != 0LL )
        ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))v7)(v5, *((unsigned int *)a3 + 2), v6, 0LL);
    }
    if ( !*((_DWORD *)a3 + 4) && wil::details::g_enabledStateManager )
    {
      AcquireSRWLockExclusive(&stru_18010E458);
      if ( !qword_18010E478 )
      {
        qword_18010E478 = 0LL;
        v8 = g_wil_details_internalSubscribeFeatureStateChangeNotification;
        if ( g_wil_details_internalSubscribeFeatureStateChangeNotification
          || (v8 = g_wil_details_apiSubscribeFeatureStateChangeNotification) != 0LL )
        {
          ((void (__fastcall *)(__int64 *, __int64 (__fastcall *)(), __int64))v8)(
            &qword_18010E478,
            lambda_87c8d85798ea78242f0953b15d7cc197_::_lambda_invoker_cdecl_,
            -1LL);
        }
      }
      ReleaseSRWLockExclusive(&stru_18010E458);
    }
  }
  else
  {
    v9 = g_wil_details_internalRecordFeatureUsage;
    if ( g_wil_details_internalRecordFeatureUsage || (v9 = g_wil_details_apiRecordFeatureUsage) != 0LL )
      ((void (__fastcall *)(wil::details *, _QWORD, _QWORD, _QWORD))v9)(this, *((unsigned int *)a3 + 2), 0LL, 0LL);
  }
}
