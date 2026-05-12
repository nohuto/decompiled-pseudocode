/*
 * XREFs of RaUnitDeleteDeviceIrp @ 0x1C003A164
 * Callers:
 *     RaUnitRemoveDeviceIrp @ 0x1C003A840 (RaUnitRemoveDeviceIrp.c)
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C00054E4 (RaUnitReleaseRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C0009A90 (RaidCompleteRequestEx.c)
 *     RaUnitWaitForRemoveLock @ 0x1C0013028 (RaUnitWaitForRemoveLock.c)
 *     RaidDeleteUnit @ 0x1C0013250 (RaidDeleteUnit.c)
 *     RaidAdapterRemoveUnit @ 0x1C0014790 (RaidAdapterRemoveUnit.c)
 *     RaidIsUnitControlSupported @ 0x1C0016E04 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C0016E8C (RaCallMiniportUnitControl.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 *     RaidAdapterRemoveZombieUnit @ 0x1C002CF2C (RaidAdapterRemoveZombieUnit.c)
 *     RaidUnitUnRegisterInterfaces @ 0x1C003F5FC (RaidUnitUnRegisterInterfaces.c)
 */

__int64 __fastcall RaUnitDeleteDeviceIrp(__int64 a1, IRP *a2)
{
  int v3; // eax
  unsigned int v5; // eax
  __int64 v6; // rsi
  unsigned int v7; // ebp
  char v8; // bl
  struct _DEVICE_OBJECT *v9; // rcx

  v3 = *(_DWORD *)(a1 + 40) - 5;
  *(_DWORD *)(a1 + 40) = 6;
  if ( (v3 & 0xFFFFFFFD) != 0 )
    RaidUnitUnRegisterInterfaces();
  RaUnitReleaseRemoveLock((struct _KEVENT *)a1);
  v5 = RaUnitWaitForRemoveLock(a1);
  v6 = *(_QWORD *)(a1 + 24);
  v7 = v5;
  if ( *(_DWORD *)(v6 + 88) != 5 )
  {
    if ( RaidIsUnitControlSupported(a1, 9) )
      RaCallMiniportUnitControl(v6 + 296);
    if ( (*(_BYTE *)(a1 + 152) & 0x20) != 0 )
      RaidAdapterRemoveZombieUnit(v6, a1);
    else
      RaidAdapterRemoveUnit(v6, a1);
  }
  v8 = *(_BYTE *)(a1 + 152);
  RaidDeleteUnit(a1);
  if ( (v8 & 0x40) != 0 )
  {
    v9 = *(struct _DEVICE_OBJECT **)(v6 + 32);
    *(_BYTE *)(v6 + 106) = 1;
    IoInvalidateDeviceRelations(v9, BusRelations);
  }
  return RaidCompleteRequestEx(a2, 0, v7);
}
