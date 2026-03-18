/*
 * XREFs of wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C0011DE8
 * Callers:
 *     HUBPDO_EvtDeviceCleanup @ 0x1C0016110 (HUBPDO_EvtDeviceCleanup.c)
 *     HUBPDO_EvtWorkItemDripsWatchDogCallback @ 0x1C006CA40 (HUBPDO_EvtWorkItemDripsWatchDogCallback.c)
 * Callees:
 *     wil_details_FeaturePropertyCache_ReportUsageToServiceDirect @ 0x1C0011B68 (wil_details_FeaturePropertyCache_ReportUsageToServiceDirect.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall wil_details_FeaturePropertyCache_ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4))(_QWORD, _QWORD, _QWORD)
{
  unsigned int v4; // edi
  unsigned int v5; // ebx
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD); // rax
  int v7; // [rsp+68h] [rbp+10h] BYREF

  v7 = a2;
  v4 = a1;
  switch ( (_DWORD)a2 )
  {
    case 0:
      goto LABEL_16;
    case 1:
      v5 = (_DWORD)a1 == 0 ? 4 : 0;
      goto LABEL_17;
    case 2:
      v5 = (_DWORD)a1 != 0 ? 1 : 5;
      goto LABEL_17;
    case 3:
      v5 = (_DWORD)a1 != 0 ? 2 : 6;
      goto LABEL_17;
    case 4:
      v5 = (_DWORD)a1 != 0 ? 3 : 7;
      goto LABEL_17;
    case 5:
      v5 = (_DWORD)a1 != 0 ? 8 : 10;
      goto LABEL_17;
    case 6:
      v5 = (_DWORD)a1 != 0 ? 9 : 11;
      goto LABEL_17;
  }
  if ( (unsigned __int8)(a2 - 100) > 0x31u )
  {
LABEL_16:
    v5 = 255;
    goto LABEL_17;
  }
  LOBYTE(a2) = a2 - 100;
  v5 = (unsigned __int8)a2 + ((_DWORD)a1 != 0 ? 100 : 150);
LABEL_17:
  if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(a1, a2, v5, a4, 1u)
    && g_wil_details_pfnFeatureLoggingHook )
  {
    g_wil_details_pfnFeatureLoggingHook(
      15299626LL,
      &Feature_UsbHubDripsWatchdogSurpriseRemove_logged_traits,
      0LL,
      v4,
      &v7,
      0LL,
      0,
      1LL);
  }
  result = g_wil_details_queueBackgroundSRUMUsageReporting;
  if ( g_wil_details_queueBackgroundSRUMUsageReporting && (!v5 || v5 - 100 <= 0x31) )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))g_wil_details_queueBackgroundSRUMUsageReporting(
                                                             15299626LL,
                                                             v5,
                                                             1LL);
  return result;
}
