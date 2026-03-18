/*
 * XREFs of PsGetEffectiveServerSilo @ 0x1400D4220
 * Callers:
 *     PsIsCurrentThreadInServerSilo @ 0x140085190 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400D2E30 (PsGetCurrentServerSiloGlobals.c)
 *     PspIsSiloInServerSilo @ 0x14024DAFC (PspIsSiloInServerSilo.c)
 *     PsGetJobServerSilo @ 0x14024E400 (PsGetJobServerSilo.c)
 *     NtSetInformationThread @ 0x1404CD4F0 (NtSetInformationThread.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x14050BF40 (PspValidateJobAssignmentSiloPolicy.c)
 *     PspImplicitAssignProcessToJob @ 0x14050CBD0 (PspImplicitAssignProcessToJob.c)
 *     PspGetMemoryPartitionImplicit @ 0x14050D130 (PspGetMemoryPartitionImplicit.c)
 *     PspEstimateNewProcessServerSilo @ 0x14053A85C (PspEstimateNewProcessServerSilo.c)
 *     ObpSetSiloDeviceMap @ 0x1405B2624 (ObpSetSiloDeviceMap.c)
 *     IopGetThreadActiveConsoleId @ 0x1406B805C (IopGetThreadActiveConsoleId.c)
 * Callees:
 *     PsIsServerSilo @ 0x1400D4250 (PsIsServerSilo.c)
 */

__int64 __fastcall PsGetEffectiveServerSilo(__int64 a1)
{
  __int64 v2; // rcx

  if ( !a1 )
    return 0LL;
  while ( !(unsigned __int8)PsIsServerSilo() )
    ;
  return v2;
}
