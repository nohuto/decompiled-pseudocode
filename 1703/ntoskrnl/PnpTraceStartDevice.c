/*
 * XREFs of PnpTraceStartDevice @ 0x14003362C
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x140080E60 (PnpDeviceCompletionRoutine.c)
 *     PnpStartDeviceNode @ 0x1404A7788 (PnpStartDeviceNode.c)
 * Callees:
 *     PnpDiagnosticTraceDeviceOperation @ 0x140033680 (PnpDiagnosticTraceDeviceOperation.c)
 *     RtlImageNtHeader @ 0x14008BA00 (RtlImageNtHeader.c)
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
