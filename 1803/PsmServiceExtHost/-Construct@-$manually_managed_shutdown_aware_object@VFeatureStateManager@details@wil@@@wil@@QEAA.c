/*
 * XREFs of ?Construct@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18003E2DC
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001040 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x18002F2AC (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::Construct()
{
  struct _RTL_CRITICAL_SECTION *result; // rax

  qword_180093618 = (__int64)"WilStaging_02";
  wil::details::g_featureStateManager = 0;
  word_180093650 = 0;
  qword_180093658 = 0LL;
  SRWLock.Ptr = 0LL;
  qword_180093638 = 0LL;
  *(_OWORD *)&xmmword_180093620 = 0LL;
  xmmword_180093640 = 0LL;
  xmmword_180093660 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList(&CriticalSection);
  result = wil::details_abi::SubscriptionList::SubscriptionList(&stru_1800936B8);
  wil::details::g_featureStateManager = 1;
  xmmword_180093700 = 0LL;
  xmmword_180093710 = 0LL;
  return result;
}
