/*
 * XREFs of PsGetEffectiveServerSilo @ 0x14008A8E0
 * Callers:
 *     PsIsCurrentThreadInServerSilo @ 0x14006E2C0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400A5690 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetThreadServerSilo @ 0x1400E1718 (PsGetThreadServerSilo.c)
 *     EtwTraceContextSwap @ 0x140172870 (EtwTraceContextSwap.c)
 *     PspIsSiloInServerSilo @ 0x140283EDC (PspIsSiloInServerSilo.c)
 *     PsGetJobServerSilo @ 0x140284790 (PsGetJobServerSilo.c)
 *     PspGetMemoryPartitionImplicit @ 0x1404F0EAC (PspGetMemoryPartitionImplicit.c)
 *     PspEstimateNewProcessServerSilo @ 0x1404F4784 (PspEstimateNewProcessServerSilo.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x1405305E0 (PspValidateJobAssignmentSiloPolicy.c)
 *     PspImplicitAssignProcessToJob @ 0x140531810 (PspImplicitAssignProcessToJob.c)
 *     NtSetInformationThread @ 0x14059B270 (NtSetInformationThread.c)
 *     ObpSetSiloDeviceMap @ 0x14061D1CC (ObpSetSiloDeviceMap.c)
 * Callees:
 *     PsIsServerSilo @ 0x14008A910 (PsIsServerSilo.c)
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
