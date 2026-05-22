/*
 * XREFs of ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x180013220
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePropertyCache@@@Z @ 0x180012BA4 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePro.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
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
  __int64 v10; // rdx

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
      AcquireSRWLockExclusive(&stru_180136868);
      if ( !*((_QWORD *)&xmmword_180136880 + 1) )
      {
        *((_QWORD *)&xmmword_180136880 + 1) = 0LL;
        v8 = g_wil_details_internalSubscribeFeatureStateChangeNotification;
        if ( g_wil_details_internalSubscribeFeatureStateChangeNotification
          || (v8 = g_wil_details_apiSubscribeFeatureStateChangeNotification) != 0LL )
        {
          ((void (__fastcall *)(char *, __int64 (__fastcall *)(), __int64))v8)(
            (char *)&xmmword_180136880 + 8,
            lambda_87c8d85798ea78242f0953b15d7cc197_::_lambda_invoker_cdecl_,
            -1LL);
        }
      }
      ReleaseSRWLockExclusive(&stru_180136868);
    }
  }
  else
  {
    v10 = *((unsigned int *)a3 + 2);
    v9 = g_wil_details_internalRecordFeatureUsage;
    LODWORD(v10) = v10 | 0x80000000;
    if ( !*((_DWORD *)a3 + 5) )
      v10 = *((unsigned int *)a3 + 2);
    if ( g_wil_details_internalRecordFeatureUsage || (v9 = g_wil_details_apiRecordFeatureUsage) != 0LL )
      ((void (__fastcall *)(wil::details *, __int64, _QWORD, _QWORD))v9)(this, v10, 0LL, 0LL);
  }
}
