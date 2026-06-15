/*
 * XREFs of ?EnsureSubscribedToStateChangesUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x180028B80
 * Callers:
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x180028C00 (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 * Callees:
 *     ?WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x1800453A0 (-WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?WilApi_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x1800AD678 (-WilApi_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSC.c)
 */

void __fastcall wil::details::EnabledStateManager::EnsureSubscribedToStateChangesUnderLock(
        wil::details::EnabledStateManager *this,
        __int64 a2,
        __int64 a3,
        void *a4)
{
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **v4; // rdi
  void (*v6)(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **, void (*)(void *), void *); // rax
  wil::details::EnabledStateManager *v7; // r8
  char *v8; // rcx

  v4 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **)((char *)this + 32);
  if ( !*((_QWORD *)this + 4) )
  {
    *v4 = 0LL;
    v6 = g_wil_details_internalSubscribeFeatureStateChangeNotification;
    if ( g_wil_details_internalSubscribeFeatureStateChangeNotification )
    {
      v7 = this;
      v8 = (char *)this + 32;
      if ( (char *)g_wil_details_internalSubscribeFeatureStateChangeNotification == (char *)wil::details::WilApiImpl_SubscribeFeatureStateChangeNotification )
      {
        wil::details::WilApiImpl_SubscribeFeatureStateChangeNotification(
          v4,
          (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **)lambda_42ed7cb8e6cd03c5242b9a63c40e80d6_::_lambda_invoker_cdecl_,
          (void (*)(void *))this,
          a4);
        return;
      }
    }
    else
    {
      v6 = g_wil_details_apiSubscribeFeatureStateChangeNotification;
      if ( !g_wil_details_apiSubscribeFeatureStateChangeNotification )
        return;
      v7 = this;
      v8 = (char *)this + 32;
    }
    ((void (__fastcall *)(char *, __int64 (__fastcall *)(), wil::details::EnabledStateManager *))v6)(
      v8,
      lambda_42ed7cb8e6cd03c5242b9a63c40e80d6_::_lambda_invoker_cdecl_,
      v7);
  }
}
