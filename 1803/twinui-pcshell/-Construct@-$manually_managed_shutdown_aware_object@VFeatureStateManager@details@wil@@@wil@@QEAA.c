/*
 * XREFs of ?Construct@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x180097640
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001060 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x180086688 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::Construct()
{
  struct _RTL_CRITICAL_SECTION *result; // rax

  qword_180438098 = (__int64)"WilStaging_02";
  wil::details::g_featureStateManager = 0;
  word_1804380D0 = 0;
  qword_1804380D8 = 0LL;
  stru_1804380B0.Ptr = 0LL;
  qword_1804380B8 = 0LL;
  *(_OWORD *)&xmmword_1804380A0 = 0LL;
  xmmword_1804380C0 = 0LL;
  xmmword_1804380E0 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList(&stru_1804380F0);
  result = wil::details_abi::SubscriptionList::SubscriptionList(&stru_180438138);
  wil::details::g_featureStateManager = 1;
  xmmword_180438180 = 0LL;
  xmmword_180438190 = 0LL;
  return result;
}
