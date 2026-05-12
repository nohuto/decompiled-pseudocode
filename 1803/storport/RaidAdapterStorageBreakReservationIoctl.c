/*
 * XREFs of RaidAdapterStorageBreakReservationIoctl @ 0x1C002937C
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0007A30 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0006BF0 (RaidAdapterFindUnit.c)
 *     RaidCompleteRequestEx @ 0x1C000C410 (RaidCompleteRequestEx.c)
 *     StorLogIoError @ 0x1C0039ED4 (StorLogIoError.c)
 *     RaidUnitHierarchicalReset @ 0x1C003CCD0 (RaidUnitHierarchicalReset.c)
 */

__int64 __fastcall RaidAdapterStorageBreakReservationIoctl(__int64 a1, IRP *a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // r8d
  _IRP *MasterIrp; // rcx
  __int64 Unit; // rsi
  int v9; // eax
  unsigned int v11; // [rsp+38h] [rbp+10h]

  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options >= 8 )
  {
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    LOWORD(v11) = *(unsigned __int16 *)((char *)&MasterIrp->Size + 3);
    BYTE2(v11) = *((_BYTE *)&MasterIrp->Size + 5);
    Unit = RaidAdapterFindUnit(a1, v11, a3, a4);
    if ( Unit )
    {
      StorLogIoError(a1, v11, 2147745910LL, 4LL);
      ++*(_DWORD *)(*(_QWORD *)(Unit + 24) + 4784LL);
      v9 = RaidUnitHierarchicalReset(Unit);
    }
    else
    {
      v9 = -1073741810;
    }
    v6 = v9;
  }
  else
  {
    v6 = -1073741811;
  }
  return RaidCompleteRequestEx(a2, 0, v6);
}
