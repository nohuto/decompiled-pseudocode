/*
 * XREFs of TraceLoggingRegisterEx @ 0x18018F270
 * Callers:
 *     ?RegisterDwmGuidWithEtw@@YAXXZ @ 0x18018EF54 (-RegisterDwmGuidWithEtw@@YAXXZ.c)
 *     ??1Completer@?$static_lazy@VCompositorTracing@@@details@wil@@QEAA@XZ @ 0x1801BFA10 (--1Completer@-$static_lazy@VCompositorTracing@@@details@wil@@QEAA@XZ.c)
 *     ?DwmHolographicCompositionAdd_@CompositorTracing@@QEAAXXZ @ 0x1801C0038 (-DwmHolographicCompositionAdd_@CompositorTracing@@QEAAXXZ.c)
 *     ?DwmHolographicCompositionRemove_@CompositorTracing@@QEAAXXZ @ 0x1801C0140 (-DwmHolographicCompositionRemove_@CompositorTracing@@QEAAXXZ.c)
 *     ?DwmHolographicDisplayAdd_@CompositorTracing@@QEAAXII@Z @ 0x1801C0248 (-DwmHolographicDisplayAdd_@CompositorTracing@@QEAAXII@Z.c)
 *     ?DwmHolographicDisplayRemove_@CompositorTracing@@QEAAXI@Z @ 0x1801C0388 (-DwmHolographicDisplayRemove_@CompositorTracing@@QEAAXI@Z.c)
 *     ?DwmHolographicDisplayUpdate_@CompositorTracing@@QEAAXI@Z @ 0x1801C04B0 (-DwmHolographicDisplayUpdate_@CompositorTracing@@QEAAXI@Z.c)
 *     ?HolographicClientCreated_@CompositorTracing@@QEAAXXZ @ 0x1801C08F4 (-HolographicClientCreated_@CompositorTracing@@QEAAXXZ.c)
 *     ?HolographicInteropTargetCreated_@CompositorTracing@@QEAAXAEBU_LUID@@@Z @ 0x1801C09FC (-HolographicInteropTargetCreated_@CompositorTracing@@QEAAXAEBU_LUID@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1801CE648 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

TLG_STATUS __stdcall TraceLoggingRegisterEx(
        TraceLoggingHProvider hProvider,
        TLG_PENABLECALLBACK pEnableCallback,
        PVOID pCallbackContext)
{
  GUID v4; // xmm0
  signed int v5; // eax
  TLG_STATUS v6; // ebx
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(GUID *)(*((_QWORD *)hProvider + 1) - 16LL);
  *((_QWORD *)hProvider + 5) = 0LL;
  *((_QWORD *)hProvider + 6) = 0LL;
  ProviderId = v4;
  v5 = EventRegister(&ProviderId, TlgEnableCallback, hProvider, (PREGHANDLE)hProvider + 4);
  v6 = v5;
  if ( v5 )
  {
    if ( v5 > 0 )
      return (unsigned __int16)v5 | 0x80070000;
  }
  else
  {
    EventSetInformation(
      *((_QWORD *)hProvider + 4),
      2LL,
      *((_QWORD *)hProvider + 1),
      **((unsigned __int16 **)hProvider + 1));
  }
  return v6;
}
