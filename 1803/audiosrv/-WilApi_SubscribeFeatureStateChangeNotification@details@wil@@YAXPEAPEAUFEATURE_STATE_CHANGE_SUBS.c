/*
 * XREFs of ?WilApi_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x180057F08
 * Callers:
 *     ?EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z @ 0x180015BE0 (-EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z.c)
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x180015C44 (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 * Callees:
 *     ?WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x180057F40 (-WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_.c)
 */

void __fastcall wil::details::WilApi_SubscribeFeatureStateChangeNotification(
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **a2,
        void (*a3)(void *),
        void *a4)
{
  void (*v4)(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **, void (*)(void *), void *); // rax

  v4 = g_wil_details_internalSubscribeFeatureStateChangeNotification;
  if ( g_wil_details_internalSubscribeFeatureStateChangeNotification )
  {
    if ( (char *)g_wil_details_internalSubscribeFeatureStateChangeNotification == (char *)wil::details::WilApiImpl_SubscribeFeatureStateChangeNotification )
    {
      wil::details::WilApiImpl_SubscribeFeatureStateChangeNotification(
        this,
        a2,
        a3,
        wil::details::WilApiImpl_SubscribeFeatureStateChangeNotification);
      return;
    }
LABEL_5:
    ((void (__fastcall *)(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **, struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **, void (*)(void *)))v4)(
      this,
      a2,
      a3);
    return;
  }
  v4 = g_wil_details_apiSubscribeFeatureStateChangeNotification;
  if ( g_wil_details_apiSubscribeFeatureStateChangeNotification )
    goto LABEL_5;
}
