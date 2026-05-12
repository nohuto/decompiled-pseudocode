/*
 * XREFs of RaidAdapterStopOnPowerdown @ 0x1C0012100
 * Callers:
 *     RaidAdapterPowerDownDevice @ 0x1C0011E30 (RaidAdapterPowerDownDevice.c)
 * Callees:
 *     RaidPowerPassToMiniPort @ 0x1C000EB28 (RaidPowerPassToMiniPort.c)
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C0011F10 (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidIsAdapterControlSupported @ 0x1C0012E88 (RaidIsAdapterControlSupported.c)
 *     RaidAdapterSendPowerToMiniport @ 0x1C001DE68 (RaidAdapterSendPowerToMiniport.c)
 */

int __fastcall RaidAdapterStopOnPowerdown(__int64 a1, IRP *a2)
{
  __int64 v2; // rbx
  int result; // eax

  v2 = *(_QWORD *)(a1 + 64);
  if ( (unsigned int)RaidIsAdapterControlSupported(v2, 6LL) )
  {
    RaidAdapterSendPowerToMiniport(v2, a2);
    return RaidAdapterDevicePowerstopAdapter(a2, v2);
  }
  *(_BYTE *)(v2 + 4641) = 1;
  result = RaidPowerPassToMiniPort(a1, (__int64)a2, (__int64)RaidAdapterDevicePowerDownSrbComplete);
  if ( result < 0 )
    return RaidAdapterDevicePowerstopAdapter(a2, v2);
  return result;
}
