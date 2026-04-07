/*
 * XREFs of ?EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z @ 0x18003FCDC
 * Callers:
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x180033F10 (-RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_detai.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?WilApi_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x180068584 (-WilApi_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSC.c)
 */

void __fastcall wil::details::EnabledStateManager::EnsureSubscribedToUsageFlush(RTL_SRWLOCK *this, void (*a2)(void *))
{
  RTL_SRWLOCK *v4; // rsi
  wil::details *Ptr; // rbp
  void (*v6)(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **, void (*)(void *), void *); // rax
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
      v6 = g_wil_details_internalSubscribeFeatureStateChangeNotification;
      if ( g_wil_details_internalSubscribeFeatureStateChangeNotification
        || (v6 = g_wil_details_apiSubscribeFeatureStateChangeNotification) != 0LL )
      {
        ((void (__fastcall *)(RTL_SRWLOCK *, void (*)(void *), __int64))v6)(&this[5], a2, -1LL);
      }
    }
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
}
