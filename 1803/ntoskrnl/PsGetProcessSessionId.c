/*
 * XREFs of PsGetProcessSessionId @ 0x14006CE20
 * Callers:
 *     ExpWnfGetCurrentScopeInstance @ 0x1404F6B44 (ExpWnfGetCurrentScopeInstance.c)
 *     EtwpInitStateChangeInfo @ 0x1404F7B30 (EtwpInitStateChangeInfo.c)
 *     EtwpWriteProcessStarted @ 0x140510620 (EtwpWriteProcessStarted.c)
 *     PspEstablishJobHierarchy @ 0x140530FA8 (PspEstablishJobHierarchy.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140561188 (EtwQueryProcessTelemetryInfo.c)
 *     MiLogReserveVaFailed @ 0x14074BB00 (MiLogReserveVaFailed.c)
 *     MiLogCommitRequestFailed @ 0x140753DB0 (MiLogCommitRequestFailed.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x140779E3C (PspTerminateSiloSubsystemProcesses.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 */

__int64 __fastcall PsGetProcessSessionId(__int64 a1)
{
  unsigned int SessionId; // ecx
  __int64 result; // rax

  SessionId = MmGetSessionIdEx(a1);
  result = 0LL;
  if ( SessionId != -1 )
    return SessionId;
  return result;
}
