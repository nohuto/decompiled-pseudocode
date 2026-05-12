/*
 * XREFs of RaUnitStorageQueryDevicePropertyIoctl @ 0x1C005E3F4
 * Callers:
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C005E7D8 (RaUnitStorageQueryPropertyIoctl.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000C410 (RaidCompleteRequestEx.c)
 *     RaGetUnitStorageDeviceProperty @ 0x1C005E458 (RaGetUnitStorageDeviceProperty.c)
 */

__int64 __fastcall RaUnitStorageQueryDevicePropertyIoctl(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IRP *MasterIrp; // r9
  int v5; // edx
  signed int UnitStorageDeviceProperty; // eax
  unsigned int Length; // [rsp+38h] [rbp+10h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v5 = *(_DWORD *)(&MasterIrp->Size + 1);
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( v5 )
  {
    if ( v5 == 1 )
      UnitStorageDeviceProperty = 0;
    else
      UnitStorageDeviceProperty = -1073741637;
  }
  else
  {
    UnitStorageDeviceProperty = RaGetUnitStorageDeviceProperty(a1, MasterIrp, &Length);
    if ( UnitStorageDeviceProperty < 0 )
      a2->IoStatus.Information = 0LL;
    else
      a2->IoStatus.Information = Length;
  }
  return RaidCompleteRequestEx(a2, 0, UnitStorageDeviceProperty);
}
