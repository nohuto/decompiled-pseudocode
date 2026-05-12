/*
 * XREFs of RaUnitStorageQueryDevicePowerPropertyIoctl @ 0x1C0062238
 * Callers:
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C005D0E0 (RaUnitStorageQueryPropertyIoctl.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0004AE0 (RaidUnitCheckAndAcquirePoFx.c)
 */

__int64 __fastcall RaUnitStorageQueryDevicePowerPropertyIoctl(__int64 a1, IRP *a2)
{
  _IRP *MasterIrp; // rbx
  int v5; // ecx
  unsigned int Length; // edx
  unsigned int v7; // r8d

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v5 = *(_DWORD *)(&MasterIrp->Size + 1);
  Length = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
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
    if ( Length < 8 )
    {
      a2->IoStatus.Information = 0LL;
      v7 = -1073741789;
      return RaidCompleteRequestEx(a2, 0, v7);
    }
    if ( Length >= 0x14 )
    {
      *(_QWORD *)&MasterIrp->Type = 0LL;
      MasterIrp->MdlAddress = 0LL;
      MasterIrp->Flags = 0;
      *(_DWORD *)&MasterIrp->Type = 20;
      *(_DWORD *)(&MasterIrp->Size + 1) = 20;
      LOBYTE(MasterIrp->MdlAddress) = (*(_BYTE *)(a1 + 1536) & 2) != 0;
      BYTE1(MasterIrp->MdlAddress) = (*(_BYTE *)(a1 + 1536) & 4) != 0;
      if ( RaidUnitCheckAndAcquirePoFx(a1) )
      {
        BYTE2(MasterIrp->MdlAddress) = 1;
        BYTE3(MasterIrp->MdlAddress) = (*(_BYTE *)(a1 + 153) & 4) != 0;
        MasterIrp->Flags = *(_DWORD *)(*(_QWORD *)(a1 + 1456) + 20LL);
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448));
      }
      else
      {
        WORD1(MasterIrp->MdlAddress) = 0;
        MasterIrp->Flags = 0;
      }
      BYTE4(MasterIrp->MdlAddress) = (*(_BYTE *)(a1 + 153) & 2) != 0;
      a2->IoStatus.Information = 20LL;
    }
    else
    {
      *(_DWORD *)&MasterIrp->Type = 20;
      *(_DWORD *)(&MasterIrp->Size + 1) = 20;
      a2->IoStatus.Information = 8LL;
    }
  }
  v7 = 0;
  return RaidCompleteRequestEx(a2, 0, v7);
}
