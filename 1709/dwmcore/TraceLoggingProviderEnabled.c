/*
 * XREFs of TraceLoggingProviderEnabled @ 0x1800016A0
 * Callers:
 *     ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x180076FCC (-LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z.c)
 *     ?TelemetrySetPosition@CInteractionTracker@@AEAAXXZ @ 0x18016EB1C (-TelemetrySetPosition@CInteractionTracker@@AEAAXXZ.c)
 *     ??$DwmHolographicCompositionAdd@$$V@CompositorTracing@@SAXXZ @ 0x1801BF14C (--$DwmHolographicCompositionAdd@$$V@CompositorTracing@@SAXXZ.c)
 *     ??$DwmHolographicCompositionRemove@$$V@CompositorTracing@@SAXXZ @ 0x1801BF244 (--$DwmHolographicCompositionRemove@$$V@CompositorTracing@@SAXXZ.c)
 *     ??$DwmHolographicDisplayAdd@AEAIAEAI@CompositorTracing@@SAXAEAI0@Z @ 0x1801BF33C (--$DwmHolographicDisplayAdd@AEAIAEAI@CompositorTracing@@SAXAEAI0@Z.c)
 *     ??$DwmHolographicDisplayRemove@I@CompositorTracing@@SAX$$QEAI@Z @ 0x1801BF448 (--$DwmHolographicDisplayRemove@I@CompositorTracing@@SAX$$QEAI@Z.c)
 *     ??$DwmHolographicDisplayUpdate@I@CompositorTracing@@SAX$$QEAI@Z @ 0x1801BF540 (--$DwmHolographicDisplayUpdate@I@CompositorTracing@@SAX$$QEAI@Z.c)
 *     ??$HolographicClientCreated@$$V@CompositorTracing@@SAXXZ @ 0x1801BF638 (--$HolographicClientCreated@$$V@CompositorTracing@@SAXXZ.c)
 *     ??$HolographicInteropTargetCreated@AEAU_LUID@@@CompositorTracing@@SAXAEAU_LUID@@@Z @ 0x1801BF730 (--$HolographicInteropTargetCreated@AEAU_LUID@@@CompositorTracing@@SAXAEAU_LUID@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1801CE648 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 */

BOOLEAN __stdcall TraceLoggingProviderEnabled(
        TraceLoggingHProvider hProvider,
        UCHAR eventLevel,
        ULONGLONG eventKeyword)
{
  BOOLEAN v3; // r9

  v3 = 0;
  if ( (unsigned int)eventLevel < *(_DWORD *)hProvider )
    return TlgKeywordOn(hProvider, eventKeyword) != 0;
  return v3;
}
