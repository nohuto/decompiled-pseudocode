/*
 * XREFs of ?SetResultTelemetryFallback@wil@@YAXP6AX_NAEBUFailureInfo@1@@Z@Z @ 0x180048BB8
 * Callers:
 *     DllMain @ 0x18004B160 (DllMain.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::SetResultTelemetryFallback(wil *this, void (*a2)(bool, const struct wil::FailureInfo *))
{
  if ( wil::details::g_pfnTelemetryCallback
    && (char *)wil::details::g_pfnTelemetryCallback != (char *)WindowFrameLoggingTelemetry::FallbackTelemetryCallback )
  {
    __fastfail(7u);
  }
  wil::details::g_pfnTelemetryCallback = (void (*)(bool, const struct wil::FailureInfo *))WindowFrameLoggingTelemetry::FallbackTelemetryCallback;
}
