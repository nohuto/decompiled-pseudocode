/*
 * XREFs of ContentDeliveryManager::Background::_dynamic_initializer_for__g_header_init_SetFallbackTraceLoggingProvider__ @ 0x1800014A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void (*ContentDeliveryManager::Background::_dynamic_initializer_for__g_header_init_SetFallbackTraceLoggingProvider__())(bool, const struct wil::FailureInfo *)
{
  void (*result)(bool, const struct wil::FailureInfo *); // rax

  result = wil::details::g_pfnTelemetryCallback;
  if ( wil::details::g_pfnTelemetryCallback
    && (char *)wil::details::g_pfnTelemetryCallback != (char *)ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::FallbackTelemetryCallback )
  {
    __fastfail(7u);
  }
  wil::details::g_pfnTelemetryCallback = (void (*)(bool, const struct wil::FailureInfo *))ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::FallbackTelemetryCallback;
  return result;
}
