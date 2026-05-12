/*
 * XREFs of RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C0034E68
 * Callers:
 *     StorPortAdapterPowerNotRequiredStep1 @ 0x1C0036840 (StorPortAdapterPowerNotRequiredStep1.c)
 *     StorPortAdapterPowerRequiredStep1 @ 0x1C00369E0 (StorPortAdapterPowerRequiredStep1.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C000EDD4 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C0014F3C (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall RaidAdapterSendPoFxPowerRequiredToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 7) )
    return (unsigned int)RaCallMiniportAdapterControl(a1 + 296);
  return v2;
}
