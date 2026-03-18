/*
 * XREFs of wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1402348EC
 * Callers:
 *     PopQueryPowerButtonBugcheckEnabled @ 0x1406D0004 (PopQueryPowerButtonBugcheckEnabled.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToServiceDirect @ 0x140234964 (wil_details_FeaturePropertyCache_ReportUsageToServiceDirect.c)
 *     wil_details_MapReportingKind @ 0x140234A28 (wil_details_MapReportingKind.c)
 */

__int64 (__fastcall *__fastcall wil_details_FeaturePropertyCache_ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  char v9; // [rsp+30h] [rbp-28h]
  int v10; // [rsp+68h] [rbp+10h] BYREF

  v10 = 3;
  v5 = wil_details_MapReportingKind(3LL, a4);
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
                                                                                                     v7,
                                                                                                     v6,
                                                                                                     v5);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
    {
      v9 = 0;
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))g_wil_details_pfnFeatureLoggingHook(9304334LL, &Feature_PowerButtonBugcheck_logged_traits, 0LL, a4, &v10, 0LL, v9, 1LL);
    }
  }
  return result;
}
