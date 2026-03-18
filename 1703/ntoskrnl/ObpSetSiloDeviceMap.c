/*
 * XREFs of ObpSetSiloDeviceMap @ 0x1405A2F04
 * Callers:
 *     ObpCreateDosDevicesDirectory @ 0x1405A2CF4 (ObpCreateDosDevicesDirectory.c)
 * Callees:
 *     PsGetHostSilo @ 0x14001ED90 (PsGetHostSilo.c)
 *     PsGetEffectiveServerSilo @ 0x1400949B0 (PsGetEffectiveServerSilo.c)
 *     ObpSetDeviceMap @ 0x140458C1C (ObpSetDeviceMap.c)
 */

NTSTATUS __fastcall ObpSetSiloDeviceMap(__int64 a1, void *a2)
{
  void *HostSilo; // rax
  PEPROCESS v5; // rdx
  char v6; // di

  HostSilo = (void *)PsGetHostSilo();
  if ( (void *)a1 == HostSilo )
  {
    v5 = PsInitialSystemProcess;
    v6 = 3;
  }
  else
  {
    v6 = 4;
    HostSilo = (void *)PsGetEffectiveServerSilo(a1);
    v5 = 0LL;
  }
  return ObpSetDeviceMap(HostSilo, (__int64)v5, a2, 0, v6, 0LL);
}
