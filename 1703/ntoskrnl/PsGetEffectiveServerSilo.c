/*
 * XREFs of PsGetEffectiveServerSilo @ 0x1400949B0
 * Callers:
 *     PsGetCurrentServerSiloGlobals @ 0x14000D920 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x140094960 (PsGetCurrentServerSilo.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400F0FA0 (PsIsCurrentThreadInServerSilo.c)
 *     PspIsSiloInServerSilo @ 0x140238A1C (PspIsSiloInServerSilo.c)
 *     PsGetJobServerSilo @ 0x140239460 (PsGetJobServerSilo.c)
 *     NtSetInformationThread @ 0x14047D650 (NtSetInformationThread.c)
 *     PspEstimateNewProcessServerSilo @ 0x1404EDB0C (PspEstimateNewProcessServerSilo.c)
 *     PspGetMemoryPartitionImplicit @ 0x140545DE4 (PspGetMemoryPartitionImplicit.c)
 *     PspImplicitAssignProcessToJob @ 0x140546C9C (PspImplicitAssignProcessToJob.c)
 *     PspAssignProcessToJob @ 0x14054B358 (PspAssignProcessToJob.c)
 *     ObpSetSiloDeviceMap @ 0x1405A2F04 (ObpSetSiloDeviceMap.c)
 * Callees:
 *     PspIsServerSilo @ 0x14011E800 (PspIsServerSilo.c)
 */

__int64 __fastcall PsGetEffectiveServerSilo(__int64 a1)
{
  __int64 v2; // rcx

  if ( !a1 )
    return 0LL;
  while ( !(unsigned __int8)PspIsServerSilo() )
    ;
  return v2;
}
