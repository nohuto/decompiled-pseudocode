/*
 * XREFs of ObpSetSiloDeviceMap @ 0x1405B2624
 * Callers:
 *     ObpCreateDosDevicesDirectory @ 0x1405B2414 (ObpCreateDosDevicesDirectory.c)
 * Callees:
 *     PsGetHostSilo @ 0x140004290 (PsGetHostSilo.c)
 *     PsGetEffectiveServerSilo @ 0x1400D4220 (PsGetEffectiveServerSilo.c)
 *     ObpSetDeviceMap @ 0x1405B2684 (ObpSetDeviceMap.c)
 */

__int64 __fastcall ObpSetSiloDeviceMap(__int64 a1)
{
  void *HostSilo; // rax
  char v3; // di

  HostSilo = (void *)PsGetHostSilo();
  if ( (void *)a1 == HostSilo )
  {
    v3 = 3;
  }
  else
  {
    v3 = 4;
    HostSilo = (void *)PsGetEffectiveServerSilo(a1);
  }
  return ObpSetDeviceMap(HostSilo, v3, 0LL);
}
