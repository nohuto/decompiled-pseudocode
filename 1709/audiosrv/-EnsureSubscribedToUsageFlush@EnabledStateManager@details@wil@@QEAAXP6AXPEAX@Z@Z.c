/*
 * XREFs of ?EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z @ 0x18000707C
 * Callers:
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x180005FB0 (-RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_detai.c)
 * Callees:
 *     ?WilApi_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x18008D034 (-WilApi_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBS.c)
 *     ?WilApi_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x18008D05C (-WilApi_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSC.c)
 */

void __fastcall wil::details::EnabledStateManager::EnsureSubscribedToUsageFlush(
        RTL_SRWLOCK *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **a2)
{
  RTL_SRWLOCK *v4; // rdi
  void *v5; // r9
  wil::details *Ptr; // rbp
  DWORD LastError; // ebx
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v8; // rdx

  if ( LOBYTE(this->Ptr) )
  {
    v4 = this + 1;
    AcquireSRWLockExclusive(this + 1);
    if ( !this[5].Ptr )
    {
      Ptr = (wil::details *)this[5].Ptr;
      if ( Ptr )
      {
        LastError = GetLastError();
        wil::details::WilApi_UnsubscribeFeatureStateChangeNotification(Ptr, v8);
        SetLastError(LastError);
      }
      this[5].Ptr = 0LL;
      wil::details::WilApi_SubscribeFeatureStateChangeNotification(
        (wil::details *)&this[5],
        a2,
        (void (*)(void *))0xFFFFFFFFFFFFFFFFLL,
        v5);
    }
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
}
