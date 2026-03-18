/*
 * XREFs of PsTerminateServerSilo @ 0x140714A10
 * Callers:
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 *     ExpSystemErrorHandler2 @ 0x14043AD40 (ExpSystemErrorHandler2.c)
 *     PspInitializeServerSiloDeferred @ 0x1407153F0 (PspInitializeServerSiloDeferred.c)
 *     PsShutdownSystem @ 0x140718C64 (PsShutdownSystem.c)
 *     PspCatchCriticalBreak @ 0x140719040 (PspCatchCriticalBreak.c)
 * Callees:
 *     PsIsServerSilo @ 0x1400D4250 (PsIsServerSilo.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x140591C84 (PspTerminateAllProcessesInJobHierarchy.c)
 */

void __fastcall PsTerminateServerSilo(__int64 a1)
{
  unsigned int v1; // edx
  struct _KEVENT *v2; // rcx

  if ( a1 )
  {
    if ( PsIsServerSilo(a1) )
      PspTerminateAllProcessesInJobHierarchy(v2, v1, 0);
  }
}
