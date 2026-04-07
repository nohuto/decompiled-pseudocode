/*
 * XREFs of ??0FeatureStateManager@details@wil@@QEAA@XZ @ 0x1800400F0
 * Callers:
 *     ??0?$shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAA@XZ @ 0x18003F694 (--0-$shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAA@XZ.c)
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x180040284 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

wil::details::FeatureStateManager *__fastcall wil::details::FeatureStateManager::FeatureStateManager(
        wil::details::FeatureStateManager *this)
{
  wil::details::FeatureStateManager *result; // rax

  *(_BYTE *)this = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 1) = "WilStaging_02";
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_BYTE *)this + 48) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details::FeatureStateManager *)((char *)this + 80));
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details::FeatureStateManager *)((char *)this + 152));
  result = this;
  *(_BYTE *)this = 1;
  return result;
}
