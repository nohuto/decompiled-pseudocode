/*
 * XREFs of ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x18001788C
 * Callers:
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x1800178F8 (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_.c)
 * Callees:
 *     ?GetShared@?$ProcessLocalStorage@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAVFeatureStateData@23@XZ @ 0x180018BF4 (-GetShared@-$ProcessLocalStorage@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAVFe.c)
 */

bool __fastcall wil::details::FeatureStateManager::EnsureStateData(RTL_SRWLOCK *this)
{
  __int64 Shared; // rbp

  if ( !this[3].Ptr )
  {
    Shared = wil::details_abi::ProcessLocalStorage<wil::details_abi::FeatureStateData>::GetShared(&this[1]);
    AcquireSRWLockExclusive(this + 4);
    if ( !this[3].Ptr )
      this[3].Ptr = (PVOID)Shared;
    if ( this != (RTL_SRWLOCK *)-32LL )
      ReleaseSRWLockExclusive(this + 4);
  }
  return this[3].Ptr != 0LL;
}
