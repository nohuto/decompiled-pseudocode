/*
 * XREFs of RaidUnitSendPoFxIdleStateToMiniport @ 0x1C0036744
 * Callers:
 *     StorPortUnitIdleState @ 0x1C0036EB0 (StorPortUnitIdleState.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C0016E04 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C0016E8C (RaCallMiniportUnitControl.c)
 */

__int64 __fastcall RaidUnitSendPoFxIdleStateToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( RaidIsUnitControlSupported(a1, 7) )
    return (unsigned int)RaCallMiniportUnitControl(*(_QWORD *)(a1 + 24) + 296LL);
  return v2;
}
