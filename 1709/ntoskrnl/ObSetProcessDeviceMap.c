/*
 * XREFs of ObSetProcessDeviceMap @ 0x1406F23DC
 * Callers:
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x1400893E0 (PsGetProcessServerSilo.c)
 *     ObpSetDeviceMap @ 0x1405B2684 (ObpSetDeviceMap.c)
 */

NTSTATUS __fastcall ObSetProcessDeviceMap(__int64 a1, void *a2, KPROCESSOR_MODE a3)
{
  void *ProcessServerSilo; // rax

  ProcessServerSilo = (void *)PsGetProcessServerSilo(a1);
  return ObpSetDeviceMap(ProcessServerSilo, a1, a2, a3, 2, 0LL);
}
