/*
 * XREFs of PsTerminateServerSilo @ 0x1406DE560
 * Callers:
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 *     ExpSystemErrorHandler2 @ 0x14041B230 (ExpSystemErrorHandler2.c)
 *     PspInitializeServerSiloDeferred @ 0x1406DEF80 (PspInitializeServerSiloDeferred.c)
 *     PsShutdownSystem @ 0x1406E2814 (PsShutdownSystem.c)
 *     PspCatchCriticalBreak @ 0x1406E2BD8 (PspCatchCriticalBreak.c)
 * Callees:
 *     PspIsServerSilo @ 0x14011E800 (PspIsServerSilo.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1405617B4 (PspTerminateAllProcessesInJobHierarchy.c)
 */

void __fastcall PsTerminateServerSilo(__int64 a1)
{
  unsigned int v1; // edx
  volatile signed __int32 *v2; // rcx

  if ( a1 )
  {
    if ( PspIsServerSilo(a1) )
      PspTerminateAllProcessesInJobHierarchy(v2, v1, 0);
  }
}
