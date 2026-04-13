/*
 * XREFs of ??1SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x18000A3A4
 * Callers:
 *     _wil::details_abi::ProcessLocalStorageData_wil::details_abi::FeatureStateData_::Release_::_1_::dtor$5 @ 0x1800B56A2 (_wil--details_abi--ProcessLocalStorageData_wil--details_abi--FeatureStateData_--Rel_ea_1800B56A2.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details_abi::SubscriptionList::~SubscriptionList(struct _RTL_CRITICAL_SECTION *this)
{
  HANDLE LockSemaphore; // rdi
  HANDLE ProcessHeap; // rax

  LockSemaphore = this[1].LockSemaphore;
  if ( LockSemaphore )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, LockSemaphore);
  }
  DeleteCriticalSection(this);
}
