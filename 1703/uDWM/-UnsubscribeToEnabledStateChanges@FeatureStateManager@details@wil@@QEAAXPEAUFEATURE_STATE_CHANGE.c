/*
 * XREFs of ?UnsubscribeToEnabledStateChanges@FeatureStateManager@details@wil@@QEAAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x180081310
 * Callers:
 *     ?WilApiImpl_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x1800814B0 (-WilApiImpl_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_S.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::FeatureStateManager::UnsubscribeToEnabledStateChanges(
        wil::details::FeatureStateManager *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi

  if ( *(_BYTE *)this && a2 )
  {
    v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 40);
    EnterCriticalSection((LPCRITICAL_SECTION)this + 1);
    AcquireSRWLockExclusive((PSRWLOCK)this + 4);
    if ( (unsigned __int64)a2 - 1 < (*((_QWORD *)this + 15) - *((_QWORD *)this + 14)) >> 4 )
      *(_OWORD *)(*((_QWORD *)this + 14) + 16LL * ((_QWORD)a2 - 1)) = 0uLL;
    if ( this != (wil::details::FeatureStateManager *)-32LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 4);
    if ( v4 )
      LeaveCriticalSection(v4);
  }
}
