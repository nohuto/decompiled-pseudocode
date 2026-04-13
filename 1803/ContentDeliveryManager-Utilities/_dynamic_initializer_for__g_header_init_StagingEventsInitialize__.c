/*
 * XREFs of _dynamic_initializer_for__g_header_init_StagingEventsInitialize__ @ 0x180001510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void (__fastcall *dynamic_initializer_for__g_header_init_StagingEventsInitialize__())(wil::details *__hidden this, unsigned int, const struct FEATURE_LOGGED_TRAITS *, const struct FEATURE_ERROR *, __int64, const enum wil_ReportingKind *, const enum wil_VariantReportingKind *, char, unsigned __int64)
{
  void (__fastcall *result)(wil::details *__hidden, unsigned int, const struct FEATURE_LOGGED_TRAITS *, const struct FEATURE_ERROR *, __int64, const enum wil_ReportingKind *, const enum wil_VariantReportingKind *, char, unsigned __int64); // rax

  result = wil::details::FeatureLoggingHook;
  g_wil_details_pfnFeatureLoggingHook = (void (*)(unsigned int, const struct FEATURE_LOGGED_TRAITS *, const struct FEATURE_ERROR *, int, const enum wil_ReportingKind *, const enum wil_VariantReportingKind *, unsigned __int8, unsigned __int64))wil::details::FeatureLoggingHook;
  return result;
}
