/*
 * XREFs of ?WasAlreadyReportedToTelemetry@IconicBitmapReceived@WindowFrameLoggingTelemetry@@MEAA_NJ@Z @ 0x18007B350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall WindowFrameLoggingTelemetry::IconicBitmapReceived::WasAlreadyReportedToTelemetry(
        WindowFrameLoggingTelemetry::IconicBitmapReceived *this,
        int a2)
{
  bool v2; // zf

  v2 = `wil::TraceLoggingProvider::WasAlreadyReportedToTelemetry'::`2'::s_lastFailureSeen == a2;
  `wil::TraceLoggingProvider::WasAlreadyReportedToTelemetry'::`2'::s_lastFailureSeen = a2;
  return v2;
}
