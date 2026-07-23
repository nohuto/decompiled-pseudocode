/*
 * XREFs of RtlGetNtSystemRoot @ 0x140542E50
 * Callers:
 *     AslEnvVarQuery @ 0x140542624 (AslEnvVarQuery.c)
 *     MiDriverLoadSucceeded @ 0x140543B6C (MiDriverLoadSucceeded.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x1407544A4 (ExpGetSystemWriteConstraintInformation.c)
 *     WheapWriteTriageDump @ 0x140763B4C (WheapWriteTriageDump.c)
 *     SdbpGetProcessHistory @ 0x140770114 (SdbpGetProcessHistory.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140085190 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400D2E30 (PsGetCurrentServerSiloGlobals.c)
 */

PWSTR RtlGetNtSystemRoot(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return (PWSTR)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 138) + 30LL);
  else
    return (PWSTR)0xFFFFF78000000030LL;
}
