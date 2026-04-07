/*
 * XREFs of ?EnsureSubscribedToStateChangesUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x18003FD70
 * Callers:
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x18003FDDC (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?WilApi_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x180068584 (-WilApi_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSC.c)
 */

void __fastcall wil::details::EnabledStateManager::EnsureSubscribedToStateChangesUnderLock(
        wil::details::EnabledStateManager *this)
{
  _QWORD *v1; // rdi
  void (*v2)(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **, void (*)(void *), void *); // rax

  v1 = (_QWORD *)((char *)this + 32);
  if ( !*((_QWORD *)this + 4) )
  {
    *v1 = 0LL;
    v2 = g_wil_details_internalSubscribeFeatureStateChangeNotification;
    if ( g_wil_details_internalSubscribeFeatureStateChangeNotification
      || (v2 = g_wil_details_apiSubscribeFeatureStateChangeNotification) != 0LL )
    {
      ((void (__fastcall *)(_QWORD *, __int64 (__fastcall *)(), wil::details::EnabledStateManager *))v2)(
        v1,
        lambda_42ed7cb8e6cd03c5242b9a63c40e80d6_::_lambda_invoker_cdecl_,
        this);
    }
  }
}
