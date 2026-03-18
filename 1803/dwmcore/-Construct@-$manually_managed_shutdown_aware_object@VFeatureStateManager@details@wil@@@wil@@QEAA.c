/*
 * XREFs of ?Construct@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x1800DA6A4
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001020 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x1800BB89C (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::Construct()
{
  struct _RTL_CRITICAL_SECTION *result; // rax

  qword_1802D6A08 = (__int64)"WilStaging_02";
  wil::details::g_featureStateManager = 0;
  unk_1802D6A40 = 0;
  qword_1802D6A48 = 0LL;
  stru_1802D6A20.Ptr = 0LL;
  qword_1802D6A28 = 0LL;
  *(_OWORD *)&xmmword_1802D6A10 = 0LL;
  xmmword_1802D6A30 = 0LL;
  xmmword_1802D6A50 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList(&stru_1802D6A60);
  result = wil::details_abi::SubscriptionList::SubscriptionList(&stru_1802D6AA8);
  wil::details::g_featureStateManager = 1;
  xmmword_1802D6AF0 = 0LL;
  xmmword_1802D6B00 = 0LL;
  return result;
}
