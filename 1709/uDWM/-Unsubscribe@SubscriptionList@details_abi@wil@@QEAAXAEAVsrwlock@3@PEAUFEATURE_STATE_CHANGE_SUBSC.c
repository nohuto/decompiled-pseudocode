/*
 * XREFs of ?Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x180068450
 * Callers:
 *     ?EnsureSubscribedToProcessWideUsageFlushUnderLock@FeatureStateManager@details@wil@@AEAAXXZ @ 0x18003FF40 (-EnsureSubscribedToProcessWideUsageFlushUnderLock@FeatureStateManager@details@wil@@AEAAXXZ.c)
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x180067B9C (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 *     ?WilApiImpl_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x180068530 (-WilApiImpl_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_S.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details_abi::SubscriptionList::Unsubscribe(
        LPCRITICAL_SECTION lpCriticalSection,
        PSRWLOCK SRWLock,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *a3)
{
  if ( a3 )
  {
    EnterCriticalSection(lpCriticalSection);
    AcquireSRWLockExclusive(SRWLock);
    if ( (unsigned __int64)a3 - 1 < (*(_QWORD *)&lpCriticalSection[1].LockCount
                                   - (unsigned __int64)lpCriticalSection[1].DebugInfo) >> 4 )
      *((_OWORD *)&lpCriticalSection[1].DebugInfo->Type + (unsigned __int64)a3 - 1) = 0uLL;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
  }
}
