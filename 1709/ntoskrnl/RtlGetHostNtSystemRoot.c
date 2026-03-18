/*
 * XREFs of RtlGetHostNtSystemRoot @ 0x1405F2E80
 * Callers:
 *     IoConfigureCrashDump @ 0x14014F6E4 (IoConfigureCrashDump.c)
 *     InitBootProcessor @ 0x14082FD94 (InitBootProcessor.c)
 * Callees:
 *     PsGetHostSilo @ 0x140004290 (PsGetHostSilo.c)
 *     PsGetServerSiloGlobals @ 0x140089394 (PsGetServerSiloGlobals.c)
 */

char *RtlGetHostNtSystemRoot()
{
  __int64 HostSilo; // rax

  HostSilo = PsGetHostSilo();
  return (char *)PsGetServerSiloGlobals(HostSilo) + 1048;
}
