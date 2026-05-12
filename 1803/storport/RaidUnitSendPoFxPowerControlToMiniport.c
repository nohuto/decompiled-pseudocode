/*
 * XREFs of RaidUnitSendPoFxPowerControlToMiniport @ 0x1C0035FA0
 * Callers:
 *     StorPortUnitPowerControl @ 0x1C0037060 (StorPortUnitPowerControl.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C0006A0C (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C0014B5C (RaCallMiniportUnitControl.c)
 *     memset @ 0x1C0018140 (memset.c)
 */

__int64 __fastcall RaidUnitSendPoFxPowerControlToMiniport(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  unsigned int v11; // ebx
  __int64 v12; // rcx
  _QWORD v14[8]; // [rsp+20h] [rbp-48h] BYREF

  v11 = -1073741637;
  if ( RaidIsUnitControlSupported(a1, 8) )
  {
    memset(v14, 0, sizeof(v14));
    v12 = *(_QWORD *)(a1 + 24);
    v14[1] = a1 + 80;
    v14[6] = a5;
    v14[4] = a6;
    v14[7] = a7;
    v14[0] = 0x4000000001LL;
    v14[2] = a2;
    v14[5] = a3;
    v14[3] = a4;
    return (unsigned int)RaCallMiniportUnitControl(v12 + 296);
  }
  else if ( a7 )
  {
    *a7 = 0LL;
  }
  return v11;
}
