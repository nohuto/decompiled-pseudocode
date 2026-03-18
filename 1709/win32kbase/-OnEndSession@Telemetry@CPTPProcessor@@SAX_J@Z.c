/*
 * XREFs of ?OnEndSession@Telemetry@CPTPProcessor@@SAX_J@Z @ 0x1C012ACBC
 * Callers:
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1C012B0F0 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     ApiSetHandlePTPTelemetry @ 0x1C013C36C (ApiSetHandlePTPTelemetry.c)
 */

void __fastcall CPTPProcessor::Telemetry::OnEndSession(__int64 a1)
{
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx

  if ( qword_1C018EC18 > 0 )
  {
    if ( qword_1C018EC20 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    }
    else
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      qword_1C018EC20 = PerformanceCounter.QuadPart;
    }
    qword_1C018EC30 = PerformanceCounter.QuadPart;
  }
  v3 = 1000 * a1 % gliQpcFreq.QuadPart;
  v4 = 1000 * a1 / gliQpcFreq.QuadPart;
  if ( (unsigned __int64)(v4 - gmsLastTelemetrySentTime) > 0xEA60 )
  {
    ApiSetHandlePTPTelemetry(v4 - gmsLastTelemetrySentTime, v3);
    gmsLastTelemetrySentTime = v4;
  }
}
