/*
 * XREFs of ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x1800179B0
 * Callers:
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x1800178F8 (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePropertyCache@@@Z @ 0x180046314 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePro.c)
 *     ??1?$shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAA@XZ @ 0x18004CB68 (--1-$shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAA@XZ @ 0x18004CD68 (--1-$shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180071CEC (-Release@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180081094 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?RtlDllShutdownInProgress@details@wil@@YAEXZ @ 0x180017A00 (-RtlDllShutdownInProgress@details@wil@@YAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall wil::ProcessShutdownInProgress(wil *this)
{
  char v1; // bl
  int v2; // eax

  v1 = 0;
  if ( wil::details::g_processShutdownInProgress )
    return 1;
  if ( wil::details::g_pfnRtlDllShutdownInProgress )
  {
    LOBYTE(v2) = (char *)wil::details::g_pfnRtlDllShutdownInProgress == (char *)wil::details::RtlDllShutdownInProgress
               ? wil::details::RtlDllShutdownInProgress((wil::details *)wil::details::RtlDllShutdownInProgress)
               : wil::details::g_pfnRtlDllShutdownInProgress();
    v2 = (unsigned __int8)v2;
  }
  else
  {
    v2 = 0;
  }
  if ( v2 )
    return 1;
  return v1;
}
