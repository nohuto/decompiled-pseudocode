/*
 * XREFs of wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1401787F0
 * Callers:
 *     CmpHandlePageFileOpenNotification @ 0x1406329A0 (CmpHandlePageFileOpenNotification.c)
 *     PopQueryPowerButtonBugcheckEnabled @ 0x14076BCFC (PopQueryPowerButtonBugcheckEnabled.c)
 *     KiInitializeVelocity @ 0x1408B2700 (KiInitializeVelocity.c)
 * Callees:
 *     wil_details_FeaturePropertyCache_ReportUsageToServiceDirect @ 0x140178894 (wil_details_FeaturePropertyCache_ReportUsageToServiceDirect.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall wil_details_FeaturePropertyCache_ReportUsageToService(
        int a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        int a5)
{
  _UNKNOWN **result; // rax
  int v8; // r9d
  unsigned int v10; // ebx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  v8 = a5;
  if ( a5 )
  {
    switch ( a5 )
    {
      case 1:
        v10 = a4 == 0 ? 4 : 0;
        break;
      case 2:
        v10 = a4 != 0 ? 1 : 5;
        break;
      case 3:
        v10 = a4 != 0 ? 2 : 6;
        break;
      case 4:
        v10 = a4 != 0 ? 3 : 7;
        break;
      case 5:
        v10 = a4 != 0 ? 8 : 10;
        break;
      case 6:
        v10 = a4 != 0 ? 9 : 11;
        break;
      default:
        if ( (unsigned __int8)(a5 - 100) > 0x31u )
        {
          v10 = 255;
        }
        else
        {
          LOBYTE(v8) = a5 - 100;
          v10 = (unsigned __int8)(a5 - 100) + (a4 != 0 ? 100 : 150);
        }
        break;
    }
    if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(a1, a2, v10, v8, 1)
      && g_wil_details_pfnFeatureLoggingHook )
    {
      g_wil_details_pfnFeatureLoggingHook(a2, a3, 0LL, a4, &a5, 0LL, 0, 1LL);
    }
    result = (_UNKNOWN **)g_wil_details_queueBackgroundSRUMUsageReporting;
    if ( g_wil_details_queueBackgroundSRUMUsageReporting && (!v10 || v10 - 100 <= 0x31) )
      return (_UNKNOWN **)g_wil_details_queueBackgroundSRUMUsageReporting(a2, v10, 1LL);
  }
  return result;
}
