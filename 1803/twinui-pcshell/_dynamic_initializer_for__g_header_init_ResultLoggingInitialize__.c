/*
 * XREFs of _dynamic_initializer_for__g_header_init_ResultLoggingInitialize__ @ 0x1800012D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void (*dynamic_initializer_for__g_header_init_ResultLoggingInitialize__())(bool, const struct wil::FailureInfo *)
{
  void (*result)(bool, const struct wil::FailureInfo *); // rax

  result = wil::details::g_pfnTelemetryCallback;
  if ( wil::details::g_pfnTelemetryCallback
    && (char *)wil::details::g_pfnTelemetryCallback != (char *)wil::ErrorHandlingHelpers::FallbackTelemetryCallback )
  {
    __fastfail(7u);
  }
  wil::details::g_pfnTelemetryCallback = (void (*)(bool, const struct wil::FailureInfo *))wil::ErrorHandlingHelpers::FallbackTelemetryCallback;
  return result;
}
