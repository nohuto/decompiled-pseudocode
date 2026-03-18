/*
 * XREFs of PsTerminateServerSilo @ 0x140778C00
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 *     ExpSystemErrorHandler2 @ 0x140487900 (ExpSystemErrorHandler2.c)
 *     PspInitializeServerSiloDeferred @ 0x140779580 (PspInitializeServerSiloDeferred.c)
 *     PsShutdownSystem @ 0x14077CC34 (PsShutdownSystem.c)
 *     PspCatchCriticalBreak @ 0x14077D014 (PspCatchCriticalBreak.c)
 * Callees:
 *     PsIsServerSilo @ 0x14008A910 (PsIsServerSilo.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1405798A0 (PspTerminateAllProcessesInJobHierarchy.c)
 */

void __fastcall PsTerminateServerSilo(__int64 a1)
{
  unsigned int v1; // edx
  volatile signed __int32 *v2; // rcx

  if ( a1 )
  {
    if ( PsIsServerSilo(a1) )
      PspTerminateAllProcessesInJobHierarchy(v2, v1, 0);
  }
}
