/*
 * XREFs of RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl @ 0x1C0061288
 * Callers:
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C005E7D8 (RaUnitStorageQueryPropertyIoctl.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000C410 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl(__int64 a1, IRP *a2)
{
  _IRP *MasterIrp; // r8
  int v5; // edx
  unsigned int Length; // ecx
  unsigned int v7; // r8d
  __int64 v9; // rax

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v5 = *(_DWORD *)(&MasterIrp->Size + 1);
  if ( v5 )
  {
    if ( v5 != 1 )
    {
      v7 = -1073741637;
      return RaidCompleteRequestEx(a2, 0, v7);
    }
  }
  else
  {
    Length = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
    if ( Length < 8 )
    {
      a2->IoStatus.Information = 0LL;
      v7 = -1073741789;
      return RaidCompleteRequestEx(a2, 0, v7);
    }
    if ( Length >= 0x10 )
    {
      *(_QWORD *)&MasterIrp->Type = 0LL;
      MasterIrp->MdlAddress = 0LL;
      *(_DWORD *)&MasterIrp->Type = 16;
      *(_DWORD *)(&MasterIrp->Size + 1) = 16;
      v9 = *(_QWORD *)(a1 + 24);
      if ( v9 )
      {
        LODWORD(MasterIrp->MdlAddress) = *(_DWORD *)(v9 + 512);
        HIDWORD(MasterIrp->MdlAddress) = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 508LL);
      }
      a2->IoStatus.Information = 16LL;
    }
    else
    {
      *(_DWORD *)&MasterIrp->Type = 16;
      *(_DWORD *)(&MasterIrp->Size + 1) = 16;
      a2->IoStatus.Information = 8LL;
    }
  }
  v7 = 0;
  return RaidCompleteRequestEx(a2, 0, v7);
}
