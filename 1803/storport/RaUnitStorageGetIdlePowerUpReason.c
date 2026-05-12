/*
 * XREFs of RaUnitStorageGetIdlePowerUpReason @ 0x1C0066F54
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0008110 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000C410 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaUnitStorageGetIdlePowerUpReason(__int64 a1, IRP *a2)
{
  unsigned int v3; // eax
  _IRP *MasterIrp; // rdx

  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length >= 8 )
  {
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    if ( (char *)&MasterIrp->MdlAddress + 4 <= (char *)MasterIrp + *(unsigned int *)(&MasterIrp->Size + 1)
      && *(_DWORD *)&MasterIrp->Type )
    {
      LODWORD(MasterIrp->MdlAddress) = *(_DWORD *)(a1 + 584);
      v3 = 0;
      a2->IoStatus.Information = 12LL;
    }
    else
    {
      a2->IoStatus.Information = 0LL;
      v3 = -1073741811;
    }
  }
  else
  {
    a2->IoStatus.Information = 0LL;
    v3 = -1073741789;
  }
  return RaidCompleteRequestEx(a2, 0, v3);
}
