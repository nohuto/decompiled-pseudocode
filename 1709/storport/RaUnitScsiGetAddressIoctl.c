/*
 * XREFs of RaUnitScsiGetAddressIoctl @ 0x1C006453C
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0005984 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000B4A0 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaUnitScsiGetAddressIoctl(__int64 a1, IRP *a2)
{
  _IRP *MasterIrp; // rdx
  unsigned int v4; // r8d

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length < 8 )
  {
    v4 = -1073741789;
  }
  else
  {
    *(_DWORD *)&MasterIrp->Type = 8;
    *((_BYTE *)&MasterIrp->Size + 2) = *(_BYTE *)(*(_QWORD *)(a1 + 24) + 56LL);
    *((_BYTE *)&MasterIrp->Size + 3) = *(_BYTE *)(a1 + 88);
    *((_BYTE *)&MasterIrp->Size + 4) = *(_BYTE *)(a1 + 89);
    v4 = 0;
    *((_BYTE *)&MasterIrp->Size + 5) = *(_BYTE *)(a1 + 90);
    a2->IoStatus.Information = 8LL;
  }
  return RaidCompleteRequestEx(a2, 0, v4);
}
