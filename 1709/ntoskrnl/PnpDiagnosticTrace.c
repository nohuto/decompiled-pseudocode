/*
 * XREFs of PnpDiagnosticTrace @ 0x1400FCD14
 * Callers:
 *     PnpDiagnosticTraceDeviceOperation @ 0x1400FCC30 (PnpDiagnosticTraceDeviceOperation.c)
 *     PnpDiagnosticTraceDriverFullInfo @ 0x1400FE678 (PnpDiagnosticTraceDriverFullInfo.c)
 *     PnpCompleteSystemStartProcess @ 0x1401518F0 (PnpCompleteSystemStartProcess.c)
 *     PnpDiagnosticTraceAppVeto @ 0x1401FFB3C (PnpDiagnosticTraceAppVeto.c)
 *     PiProcessStartSystemDevices @ 0x1405F1CAC (PiProcessStartSystemDevices.c)
 *     IopInitializePlugPlayServices @ 0x14083F81C (IopInitializePlugPlayServices.c)
 *     IopInitializeSystemDrivers @ 0x140845AEC (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x140845EE8 (IopInitializeBootDrivers.c)
 *     IopCallBootDriverReinitializationRoutines @ 0x1408539E8 (IopCallBootDriverReinitializationRoutines.c)
 * Callees:
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 */

NTSTATUS __fastcall PnpDiagnosticTrace(
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  REGHANDLE v3; // rbx

  v3 = PnpEtwHandle;
  if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, EventDescriptor) )
    return EtwWriteEx(v3, EventDescriptor, 0LL, 0, 0LL, 0LL, UserDataCount, UserData);
  else
    return 0;
}
