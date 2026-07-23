/*
 * XREFs of RtlGetNtSystemRoot @ 0x1404B12B0
 * Callers:
 *     MiDriverLoadSucceeded @ 0x1404B317C (MiDriverLoadSucceeded.c)
 *     AslEnvVarQuery @ 0x1405BBF44 (AslEnvVarQuery.c)
 *     WheapWriteTriageDump @ 0x140724084 (WheapWriteTriageDump.c)
 *     SdbpGetProcessHistory @ 0x14072CF3C (SdbpGetProcessHistory.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14000D920 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400F0FA0 (PsIsCurrentThreadInServerSilo.c)
 */

PWSTR RtlGetNtSystemRoot(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return (PWSTR)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 134) + 30LL);
  else
    return (PWSTR)0xFFFFF78000000030LL;
}
