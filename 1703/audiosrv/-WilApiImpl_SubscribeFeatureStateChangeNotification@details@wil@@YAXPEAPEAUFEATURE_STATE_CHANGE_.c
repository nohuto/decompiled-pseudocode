/*
 * XREFs of ?WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x1800453A0
 * Callers:
 *     ?EnsureSubscribedToStateChangesUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x180028B80 (-EnsureSubscribedToStateChangesUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::WilApiImpl_SubscribeFeatureStateChangeNotification(
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **a2,
        void (*a3)(void *),
        void *a4)
{
  wil::details::FeatureStateManager::SubscribeToEnabledStateChanges(
    (wil::details::FeatureStateManager *)&wil::details::g_featureStateManager,
    this,
    (void (*)(void *))a2,
    a3);
}
