/*
 * XREFs of PnpTraceStartDevice @ 0x1400FCBDC
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x1400FB8B0 (PnpDeviceCompletionRoutine.c)
 *     PnpStartDeviceNode @ 0x140552F08 (PnpStartDeviceNode.c)
 * Callees:
 *     RtlImageNtHeader @ 0x1400AE3B0 (RtlImageNtHeader.c)
 *     PnpDiagnosticTraceDeviceOperation @ 0x1400FCC30 (PnpDiagnosticTraceDeviceOperation.c)
 */

__int64 __fastcall PnpTraceStartDevice(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 MinorImageVersion; // ax

  LOBYTE(MinorImageVersion) = 0;
  if ( a3 )
    MinorImageVersion = RtlImageNtHeader(*(PVOID *)(a3 + 24))->OptionalHeader.MinorImageVersion;
  PnpDiagnosticTraceDeviceOperation(&KMPnPEvt_DeviceStart_Stop, MinorImageVersion);
  return 0LL;
}
