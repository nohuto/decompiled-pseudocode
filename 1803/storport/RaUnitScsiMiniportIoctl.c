/*
 * XREFs of RaUnitScsiMiniportIoctl @ 0x1C00063D0
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0008110 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidUnitPoFxIdleComponent @ 0x1C0006468 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C0006534 (RaidUnitPoFxActivateComponent.c)
 *     RaidGetSrbIoctlFromIrp @ 0x1C0006A94 (RaidGetSrbIoctlFromIrp.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006F88 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidCompleteRequestEx @ 0x1C000C410 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaUnitScsiMiniportIoctl(__int64 a1, IRP *a2)
{
  unsigned int v4; // ebx
  __int64 v6; // [rsp+30h] [rbp-18h] BYREF
  char v7; // [rsp+60h] [rbp+18h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF

  if ( (int)RaidGetSrbIoctlFromIrp((_DWORD)a2, (unsigned int)&v6, (unsigned int)&v8, (unsigned int)&v7, 1) < 0 )
    return RaidCompleteRequestEx(a2);
  RaidUnitPoFxActivateComponent(a1, 0LL, 1LL, &v7);
  v4 = RaidAdapterScsiMiniportIoctlWithAddress(
         *(_QWORD *)(a1 + 24),
         a2,
         *(unsigned __int8 *)(a1 + 88),
         *(unsigned __int8 *)(a1 + 89),
         *(unsigned __int8 *)(a1 + 90),
         1);
  RaidUnitPoFxIdleComponent(a1, 0LL, 0LL, &v7);
  return v4;
}
