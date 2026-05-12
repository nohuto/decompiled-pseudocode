/*
 * XREFs of RaidAdapterSendPoFxActiveToMiniport @ 0x1C0034D44
 * Callers:
 *     StorPortAdapterActiveCondition @ 0x1C0036380 (StorPortAdapterActiveCondition.c)
 *     StorPortAdapterIdleCondition @ 0x1C0036470 (StorPortAdapterIdleCondition.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C000EDD4 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C0014F3C (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall RaidAdapterSendPoFxActiveToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 8) )
    return (unsigned int)RaCallMiniportAdapterControl(a1 + 296);
  return v2;
}
