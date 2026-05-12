/*
 * XREFs of RaUnitGetQOSIoctl @ 0x1C003A494
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0005164 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     memset @ 0x1C001F180 (memset.c)
 *     WPP_SF_q @ 0x1C00303C8 (WPP_SF_q.c)
 */

__int64 __fastcall RaUnitGetQOSIoctl(__int64 a1, IRP *a2)
{
  _IRP *MasterIrp; // rbx
  unsigned int v5; // r8d
  int v6; // eax
  int v7; // eax

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length >= 0x24 )
  {
    memset(MasterIrp, 0, 0x24uLL);
    *(_DWORD *)&MasterIrp->Type = 36;
    *(_DWORD *)(&MasterIrp->Size + 1) = 36;
    LOBYTE(MasterIrp->MdlAddress) = *(_BYTE *)(a1 + 2576);
    LODWORD(MasterIrp->ThreadListEntry.Flink) = *(_DWORD *)(a1 + 2588);
    HIDWORD(MasterIrp->MdlAddress) = *(_DWORD *)(a1 + 2580);
    *(&MasterIrp->Flags + 1) = 1000 * *(_DWORD *)(a1 + 2592);
    v6 = *(_DWORD *)(a1 + 2584);
    if ( v6 == -1 )
      HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer) = -1;
    else
      HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer) = 500 * v6;
    v7 = *(_DWORD *)(a1 + 2600);
    if ( v7 == -1 )
      MasterIrp->Flags = -1;
    else
      MasterIrp->Flags = 500 * v7;
    v5 = 0;
    MasterIrp->AssociatedIrp.IrpCount = 1000 * *(_DWORD *)(a1 + 2596);
    a2->IoStatus.Information = 36LL;
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x2Cu,
        (__int64)&WPP_95124dee8acf35750318326cda357b29_Traceguids,
        a1);
    }
    a2->IoStatus.Information = 0LL;
    v5 = -1073741789;
  }
  return RaidCompleteRequestEx(a2, 0, v5);
}
