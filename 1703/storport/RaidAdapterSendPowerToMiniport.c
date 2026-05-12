/*
 * XREFs of RaidAdapterSendPowerToMiniport @ 0x1C001DE68
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0011690 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidAdapterStopOnPowerdown @ 0x1C0012100 (RaidAdapterStopOnPowerdown.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C00124FC (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C0012E88 (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall RaidAdapterSendPowerToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 6) )
    return (unsigned int)RaCallMiniportAdapterControl(a1 + 296);
  return v2;
}
