/*
 * XREFs of ?WilApiImpl_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x180022A60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall wil::details::WilApiImpl_UnsubscribeFeatureStateChangeNotification(
        wil::details *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *a2)
{
  if ( wil::details::g_featureStateManager && this )
  {
    EnterCriticalSection(&CriticalSection);
    AcquireSRWLockExclusive(&SRWLock);
    if ( (unsigned __int64)this - 1 < (*(&xmmword_18003B0C0 + 1) - xmmword_18003B0C0) >> 4 )
      *(_OWORD *)(xmmword_18003B0C0 + 16LL * ((_QWORD)this - 1)) = 0uLL;
    ReleaseSRWLockExclusive(&SRWLock);
    LeaveCriticalSection(&CriticalSection);
  }
}
