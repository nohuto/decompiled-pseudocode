/*
 * XREFs of RaidAdapterSendPowerToMiniport @ 0x1C001E9A0
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C000FE30 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidAdapterStopOnPowerdown @ 0x1C0011E30 (RaidAdapterStopOnPowerdown.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C0011DF0 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C00127FC (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall RaidAdapterSendPowerToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 6) )
    return (unsigned int)RaCallMiniportAdapterControl(a1 + 296);
  return v2;
}
