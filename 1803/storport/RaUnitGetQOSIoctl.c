/*
 * XREFs of RaUnitGetQOSIoctl @ 0x1C003A92C
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0008110 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000C410 (RaidCompleteRequestEx.c)
 *     memset @ 0x1C0018140 (memset.c)
 *     WPP_SF_q @ 0x1C002C118 (WPP_SF_q.c)
 */

__int64 __fastcall RaUnitGetQOSIoctl(__int64 a1, IRP *a2)
{
  _IRP *MasterIrp; // rbx
  __int64 v5; // rax
  unsigned int v6; // r8d
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length >= 0x24 )
  {
    memset(MasterIrp, 0, 0x24uLL);
    *(_DWORD *)&MasterIrp->Type = 36;
    *(_DWORD *)(&MasterIrp->Size + 1) = 36;
    LOBYTE(MasterIrp->MdlAddress) = *(_BYTE *)(a1 + 2624);
    LODWORD(MasterIrp->ThreadListEntry.Flink) = *(_DWORD *)(a1 + 2636);
    HIDWORD(MasterIrp->MdlAddress) = *(_DWORD *)(a1 + 2628);
    *(&MasterIrp->Flags + 1) = 1000 * *(_DWORD *)(a1 + 2640);
    v7 = -1;
    v8 = *(_DWORD *)(a1 + 2632);
    if ( v8 == -1 )
      v9 = -1;
    else
      v9 = 500 * v8;
    HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer) = v9;
    v10 = *(_DWORD *)(a1 + 2648);
    if ( v10 != -1 )
      v7 = 500 * v10;
    MasterIrp->Flags = v7;
    MasterIrp->AssociatedIrp.IrpCount = 1000 * *(_DWORD *)(a1 + 2644);
    v6 = 0;
    v5 = 36LL;
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x2Au,
        (__int64)&WPP_b61d05cf262d3423cd62436c925d288c_Traceguids,
        a1);
    }
    v5 = 0LL;
    v6 = -1073741789;
  }
  a2->IoStatus.Information = v5;
  return RaidCompleteRequestEx(a2, 0, v6);
}
