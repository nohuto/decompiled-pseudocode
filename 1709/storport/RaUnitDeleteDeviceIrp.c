/*
 * XREFs of RaUnitDeleteDeviceIrp @ 0x1C003BEB4
 * Callers:
 *     RaUnitRemoveDeviceIrp @ 0x1C003C584 (RaUnitRemoveDeviceIrp.c)
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C0005880 (RaUnitReleaseRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C000B4A0 (RaidCompleteRequestEx.c)
 *     RaUnitWaitForRemoveLock @ 0x1C0012990 (RaUnitWaitForRemoveLock.c)
 *     RaidAdapterRemoveUnit @ 0x1C0014BE0 (RaidAdapterRemoveUnit.c)
 *     RaidIsUnitControlSupported @ 0x1C001666C (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C00166F4 (RaCallMiniportUnitControl.c)
 *     RaidDeleteUnit @ 0x1C001842C (RaidDeleteUnit.c)
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 *     RaidAdapterRemoveZombieUnit @ 0x1C002DEB8 (RaidAdapterRemoveZombieUnit.c)
 *     RaidUnitUnRegisterInterfaces @ 0x1C003FE40 (RaidUnitUnRegisterInterfaces.c)
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
  RaUnitReleaseRemoveLock(a1);
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
