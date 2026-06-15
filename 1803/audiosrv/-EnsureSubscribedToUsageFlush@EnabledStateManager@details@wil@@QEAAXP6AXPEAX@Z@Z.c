/*
 * XREFs of ?EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z @ 0x180015BE0
 * Callers:
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x180015A20 (-RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_detai.c)
 * Callees:
 *     ?WilApi_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x180057F08 (-WilApi_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBS.c)
 */

void __fastcall wil::details::EnabledStateManager::EnsureSubscribedToUsageFlush(
        RTL_SRWLOCK *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **a2)
{
  RTL_SRWLOCK *v4; // rbx
  void *v5; // r9
  wil::details *v6; // rcx

  if ( LOBYTE(this->Ptr) )
  {
    v4 = this + 1;
    AcquireSRWLockExclusive(this + 1);
    v6 = (wil::details *)&this[5];
    if ( !this[5].Ptr )
    {
      *(_QWORD *)v6 = 0LL;
      wil::details::WilApi_SubscribeFeatureStateChangeNotification(v6, a2, (void (*)(void *))0xFFFFFFFFFFFFFFFFLL, v5);
    }
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
}
