/*
 * XREFs of ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1800316F4
 * Callers:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x1800315B0 (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x180033F10 (-RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_detai.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::WilApi_RecordFeatureUsage(wil::details *this, __int64 a2, __int64 a3)
{
  void (*v3)(unsigned int, unsigned int, unsigned int, const char *); // rax

  v3 = g_wil_details_internalRecordFeatureUsage;
  if ( g_wil_details_internalRecordFeatureUsage || (v3 = g_wil_details_apiRecordFeatureUsage) != 0LL )
    ((void (__fastcall *)(wil::details *, __int64, __int64, _QWORD))v3)(this, a2, a3, 0LL);
}
