/*
 * XREFs of wil::details::_dynamic_initializer_for__g_header_init_InitializeStagingHeader__ @ 0x180001190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void (__fastcall *wil::details::_dynamic_initializer_for__g_header_init_InitializeStagingHeader__())(wil::details *__hidden this, union wil_details_FeaturePropertyCache *, union wil_details_FeaturePropertyCache *, struct wil_details_RecordUsageResult *)
{
  void (__fastcall *result)(wil::details *__hidden, union wil_details_FeaturePropertyCache *, union wil_details_FeaturePropertyCache *, struct wil_details_RecordUsageResult *); // rax

  result = wil::details::RecordFeatureUsageCallback;
  g_wil_details_recordFeatureUsage = (void (*)(unsigned int, union wil_details_FeaturePropertyCache *, struct wil_details_RecordUsageResult *))wil::details::RecordFeatureUsageCallback;
  return result;
}
