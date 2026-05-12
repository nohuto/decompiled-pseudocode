/*
 * XREFs of RaidUnitSendPoFxActiveToMiniport @ 0x1C000E198
 * Callers:
 *     StorPortUnitActiveConditionStep1 @ 0x1C0004820 (StorPortUnitActiveConditionStep1.c)
 *     StorPortUnitIdleCondition @ 0x1C0004970 (StorPortUnitIdleCondition.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C0016E04 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C0016E8C (RaCallMiniportUnitControl.c)
 */

__int64 __fastcall RaidUnitSendPoFxActiveToMiniport(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rcx
  _DWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+30h] [rbp-18h]
  int v11; // [rsp+34h] [rbp-14h]

  v5 = -1073741637;
  if ( (unsigned __int8)RaidIsUnitControlSupported(a1, 6LL) )
  {
    v6 = *(_QWORD *)(a1 + 24);
    v8[0] = 1;
    v10 = 0;
    v9 = a1 + 80;
    v8[1] = 24;
    v11 = a3;
    return (unsigned int)RaCallMiniportUnitControl(v6 + 296, 6LL, v8);
  }
  return v5;
}
