/*
 * XREFs of PsGetProcessSessionId @ 0x1400AE9F0
 * Callers:
 *     EtwpInitStateChangeInfo @ 0x1404DD67C (EtwpInitStateChangeInfo.c)
 *     EtwpWriteProcessStarted @ 0x1404FDFA0 (EtwpWriteProcessStarted.c)
 *     ExpWnfGetCurrentScopeInstance @ 0x1405032EC (ExpWnfGetCurrentScopeInstance.c)
 *     PspEstablishJobHierarchy @ 0x14050C5C4 (PspEstablishJobHierarchy.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140573710 (EtwQueryProcessTelemetryInfo.c)
 *     MiLogReserveVaFailed @ 0x1406E0BD0 (MiLogReserveVaFailed.c)
 *     MiLogCommitRequestFailed @ 0x1406E35C4 (MiLogCommitRequestFailed.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x140715CA8 (PspTerminateSiloSubsystemProcesses.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 */

__int64 __fastcall PsGetProcessSessionId(__int64 a1)
{
  __int64 result; // rax

  result = MmGetSessionIdEx(a1);
  if ( (_DWORD)result == -1 )
    return 0LL;
  return result;
}
