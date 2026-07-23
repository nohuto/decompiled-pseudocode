/*
 * XREFs of RtlGetNtSystemRoot @ 0x14057EB70
 * Callers:
 *     MiDriverLoadSucceeded @ 0x1405FA544 (MiDriverLoadSucceeded.c)
 *     AslEnvVarQuery @ 0x14061F0D4 (AslEnvVarQuery.c)
 *     WheapWriteTriageDump @ 0x1407CB834 (WheapWriteTriageDump.c)
 *     SdbpGetProcessHistory @ 0x1407D73D8 (SdbpGetProcessHistory.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x14006E2C0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400A5690 (PsGetCurrentServerSiloGlobals.c)
 */

PWSTR RtlGetNtSystemRoot(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return (PWSTR)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 138) + 30LL);
  else
    return (PWSTR)0xFFFFF78000000030LL;
}
