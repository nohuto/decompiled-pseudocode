/*
 * XREFs of RtlGetHostNtSystemRoot @ 0x1405D64E4
 * Callers:
 *     IoConfigureCrashDump @ 0x140159F78 (IoConfigureCrashDump.c)
 *     InitBootProcessor @ 0x140809FC8 (InitBootProcessor.c)
 * Callees:
 *     PsGetHostSilo @ 0x14001ED90 (PsGetHostSilo.c)
 *     PsGetServerSiloGlobals @ 0x140085368 (PsGetServerSiloGlobals.c)
 */

char *RtlGetHostNtSystemRoot()
{
  __int64 HostSilo; // rax

  HostSilo = PsGetHostSilo();
  return (char *)PsGetServerSiloGlobals(HostSilo) + 1016;
}
