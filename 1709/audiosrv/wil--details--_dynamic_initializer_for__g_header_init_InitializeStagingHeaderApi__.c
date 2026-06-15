/*
 * XREFs of wil::details::_dynamic_initializer_for__g_header_init_InitializeStagingHeaderApi__ @ 0x180001400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void (__stdcall *wil::details::_dynamic_initializer_for__g_header_init_InitializeStagingHeaderApi__())(FEATURE_STATE_CHANGE_SUBSCRIPTION subscription)
{
  void (__stdcall *result)(FEATURE_STATE_CHANGE_SUBSCRIPTION); // rax

  g_wil_details_apiGetFeatureEnabledState = GetFeatureEnabledState;
  g_wil_details_apiRecordFeatureUsage = RecordFeatureUsage;
  g_wil_details_apiSubscribeFeatureStateChangeNotification = SubscribeFeatureStateChangeNotification;
  result = UnsubscribeFeatureStateChangeNotification;
  g_wil_details_apiUnsubscribeFeatureStateChangeNotification = UnsubscribeFeatureStateChangeNotification;
  return result;
}
