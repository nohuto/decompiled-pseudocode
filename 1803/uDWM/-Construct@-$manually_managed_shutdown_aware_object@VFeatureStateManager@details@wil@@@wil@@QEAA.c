/*
 * XREFs of ?Construct@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x180048CAC
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001020 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x180042D88 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::Construct()
{
  struct _RTL_CRITICAL_SECTION *result; // rax

  qword_1800C9E88 = (__int64)"WilStaging_02";
  wil::details::g_featureStateManager = 0;
  word_1800C9EC0 = 0;
  qword_1800C9EC8 = 0LL;
  stru_1800C9EA0.Ptr = 0LL;
  qword_1800C9EA8 = 0LL;
  *(_OWORD *)&xmmword_1800C9E90 = 0LL;
  xmmword_1800C9EB0 = 0LL;
  xmmword_1800C9ED0 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList(&CriticalSection);
  result = wil::details_abi::SubscriptionList::SubscriptionList(&stru_1800C9F28);
  wil::details::g_featureStateManager = 1;
  xmmword_1800C9F70 = 0LL;
  xmmword_1800C9F80 = 0LL;
  return result;
}
