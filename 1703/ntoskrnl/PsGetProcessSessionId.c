/*
 * XREFs of PsGetProcessSessionId @ 0x140021FE0
 * Callers:
 *     EtwQueryProcessTelemetryInfo @ 0x14043D4E8 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpInitStateChangeInfo @ 0x14043D804 (EtwpInitStateChangeInfo.c)
 *     EtwpWriteProcessStarted @ 0x140451038 (EtwpWriteProcessStarted.c)
 *     ExpWnfGetCurrentScopeInstance @ 0x1404F07DC (ExpWnfGetCurrentScopeInstance.c)
 *     PspEstablishJobHierarchy @ 0x14054BD84 (PspEstablishJobHierarchy.c)
 *     MiLogReserveVaFailed @ 0x1406B4BC8 (MiLogReserveVaFailed.c)
 *     MiLogCommitRequestFailed @ 0x1406B6AB0 (MiLogCommitRequestFailed.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x1406DF834 (PspTerminateSiloSubsystemProcesses.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 */

__int64 __fastcall PsGetProcessSessionId(__int64 a1)
{
  __int64 result; // rax

  result = MmGetSessionIdEx(a1);
  if ( (_DWORD)result == -1 )
    return 0LL;
  return result;
}
