/*
 * XREFs of RaidUnitSendPoFxActiveToMiniport @ 0x1C0035E7C
 * Callers:
 *     StorPortUnitIdleCondition @ 0x1C0006790 (StorPortUnitIdleCondition.c)
 *     StorPortUnitActiveConditionStep1 @ 0x1C0006880 (StorPortUnitActiveConditionStep1.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C0006A0C (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C0014B5C (RaCallMiniportUnitControl.c)
 */

__int64 __fastcall RaidUnitSendPoFxActiveToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( RaidIsUnitControlSupported(a1, 6) )
    return (unsigned int)RaCallMiniportUnitControl(*(_QWORD *)(a1 + 24) + 296LL);
  return v2;
}
