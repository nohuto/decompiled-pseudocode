/*
 * XREFs of ??1SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x18008A56C
 * Callers:
 *     _wil::details_abi::ProcessLocalStorageData_wil::details_abi::FeatureStateData_::_ProcessLocalStorageData_wil::details_abi::FeatureStateData__::_1_::dtor$4 @ 0x18008A364 (_wil--details_abi--ProcessLocalStorageData_wil--details_abi--FeatureStateData_--_Pr_ea_18008A364.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180028D50 (--3@YAXPEAX@Z.c)
 */

void __fastcall wil::details_abi::SubscriptionList::~SubscriptionList(struct _RTL_CRITICAL_SECTION *this)
{
  HANDLE LockSemaphore; // rcx

  LockSemaphore = this[1].LockSemaphore;
  if ( LockSemaphore )
    operator delete(LockSemaphore);
  DeleteCriticalSection(this);
}
