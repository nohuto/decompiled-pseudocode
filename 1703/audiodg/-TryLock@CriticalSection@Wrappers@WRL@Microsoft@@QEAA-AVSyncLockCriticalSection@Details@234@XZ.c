/*
 * XREFs of ?TryLock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x14005CEB8
 * Callers:
 *     ?CheckResourceLimits@CSpatialCrossProcessBaseEndpoint@@IEAAXI@Z @ 0x14005B588 (-CheckResourceLimits@CSpatialCrossProcessBaseEndpoint@@IEAAXI@Z.c)
 * Callees:
 *     ?TryLock@CriticalSection@Wrappers@WRL@Microsoft@@SA?AVSyncLockCriticalSection@Details@234@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x14005CED8 (-TryLock@CriticalSection@Wrappers@WRL@Microsoft@@SA-AVSyncLockCriticalSection@Details@234@PEAU_R.c)
 */

__int64 __fastcall Microsoft::WRL::Wrappers::CriticalSection::TryLock(__int64 a1, __int64 a2)
{
  Microsoft::WRL::Wrappers::CriticalSection::TryLock(a2, a1);
  return a2;
}
