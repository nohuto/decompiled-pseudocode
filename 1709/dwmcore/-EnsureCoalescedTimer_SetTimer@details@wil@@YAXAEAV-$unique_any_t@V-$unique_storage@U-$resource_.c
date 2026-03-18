/*
 * XREFs of ?EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@AEA_N@Z @ 0x1800C058C
 * Callers:
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePropertyCache@@@Z @ 0x180079A78 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePro.c)
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x180079BD4 (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::EnsureCoalescedTimer_SetTimer(struct _TP_TIMER **a1, _BYTE *a2)
{
  struct _TP_TIMER *v2; // rcx
  _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( v2 )
  {
    pftDueTime = (_FILETIME)-3000000000LL;
    SetThreadpoolTimer(v2, &pftDueTime, 0, 0x124F8u);
    *a2 = 1;
  }
}
