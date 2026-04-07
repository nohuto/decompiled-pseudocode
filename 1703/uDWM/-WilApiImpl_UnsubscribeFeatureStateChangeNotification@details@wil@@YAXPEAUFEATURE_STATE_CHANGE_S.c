/*
 * XREFs of ?WilApiImpl_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x1800814B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall wil::details::WilApiImpl_UnsubscribeFeatureStateChangeNotification(
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *a2)
{
  wil::details::FeatureStateManager::UnsubscribeToEnabledStateChanges(
    (wil::details::FeatureStateManager *)&wil::details::g_featureStateManager,
    this);
}
