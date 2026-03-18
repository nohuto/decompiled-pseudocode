/*
 * XREFs of PnpDiagnosticTrace @ 0x140033764
 * Callers:
 *     PnpDiagnosticTraceDriverFullInfo @ 0x140033544 (PnpDiagnosticTraceDriverFullInfo.c)
 *     PnpDiagnosticTraceDeviceOperation @ 0x140033680 (PnpDiagnosticTraceDeviceOperation.c)
 *     PnpCompleteSystemStartProcess @ 0x140162DE4 (PnpCompleteSystemStartProcess.c)
 *     PnpDiagnosticTraceAppVeto @ 0x1401F9DCC (PnpDiagnosticTraceAppVeto.c)
 *     PiProcessStartSystemDevices @ 0x1405D5704 (PiProcessStartSystemDevices.c)
 *     IopInitializeSystemDrivers @ 0x1407F8D84 (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x1407F91C4 (IopInitializeBootDrivers.c)
 *     IopInitializePlugPlayServices @ 0x1407FAEC0 (IopInitializePlugPlayServices.c)
 *     IopCallBootDriverReinitializationRoutines @ 0x1408224BC (IopCallBootDriverReinitializationRoutines.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
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
