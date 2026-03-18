/*
 * XREFs of ObpSetSiloDeviceMap @ 0x14061D1CC
 * Callers:
 *     ObpCreateDosDevicesDirectory @ 0x14061CFBC (ObpCreateDosDevicesDirectory.c)
 * Callees:
 *     PsGetHostSilo @ 0x14006CDB0 (PsGetHostSilo.c)
 *     PsGetEffectiveServerSilo @ 0x14008A8E0 (PsGetEffectiveServerSilo.c)
 *     ObpSetDeviceMap @ 0x14057D9B8 (ObpSetDeviceMap.c)
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
