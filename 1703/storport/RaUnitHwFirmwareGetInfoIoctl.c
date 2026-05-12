/*
 * XREFs of RaUnitHwFirmwareGetInfoIoctl @ 0x1C0011024
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0005164 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009A90 (RaidCompleteRequestEx.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C00111D4 (RaidUnitSendSrbIoControlSynchronously.c)
 *     RaBuildHwFirmwareGetInfoBufferForMiniport @ 0x1C0011490 (RaBuildHwFirmwareGetInfoBufferForMiniport.c)
 *     memset @ 0x1C001F180 (memset.c)
 *     RaTranslateMiniportFirmwareInfoToHwFirmwareInfo @ 0x1C003905C (RaTranslateMiniportFirmwareInfoToHwFirmwareInfo.c)
 */

NTSTATUS __fastcall RaUnitHwFirmwareGetInfoIoctl(_QWORD *a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r15
  _IRP *MasterIrp; // rsi
  __int64 v5; // rbx
  bool v7; // cf
  unsigned int Length; // ecx
  __int64 v9; // rdx
  signed int InfoBufferForMiniport; // ebx
  int v11; // eax
  unsigned __int64 v12; // rax
  int v14; // [rsp+70h] [rbp+8h] BYREF
  PVOID P; // [rsp+78h] [rbp+10h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v5 = a1[12];
  P = 0LL;
  v7 = CurrentStackLocation->Parameters.Create.Options < 0x10;
  v14 = 0;
  if ( v7 )
  {
    InfoBufferForMiniport = -1073741820;
LABEL_25:
    a2->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(a2, 0, InfoBufferForMiniport);
  }
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( Length < 0x38 )
  {
    InfoBufferForMiniport = -1073741789;
    goto LABEL_25;
  }
  if ( ((__int64)MasterIrp->MdlAddress & 1) == 0 )
  {
    memset(MasterIrp, 0, Length);
    LOBYTE(MasterIrp->MdlAddress) |= 1u;
    *(_DWORD *)&MasterIrp->Type = 56;
    *(_DWORD *)(&MasterIrp->Size + 1) = 56;
    *(_DWORD *)((char *)&MasterIrp->MdlAddress + 1) = 16711681;
    MasterIrp->Flags = 4096;
    *(&MasterIrp->Flags + 1) = 0x10000;
    BYTE1(MasterIrp->ThreadListEntry.Flink) &= ~1u;
    MasterIrp->AssociatedIrp.IrpCount = 32;
    HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer) = 32;
    LOBYTE(MasterIrp->ThreadListEntry.Flink) = 0;
    if ( a1[18] )
    {
      *(_OWORD *)&MasterIrp->ThreadListEntry.Blink = *(_OWORD *)(a1[18] + 90LL);
    }
    else if ( a1[17] && (*(_DWORD *)(*(_QWORD *)(a1[3] + 528LL) + 184LL) & 0x40) != 0 )
    {
      MasterIrp->ThreadListEntry.Blink = *(_LIST_ENTRY **)(a1[17] + 41LL);
    }
    else
    {
      LODWORD(MasterIrp->ThreadListEntry.Blink) = *(_DWORD *)(v5 + 32);
    }
    InfoBufferForMiniport = RaBuildHwFirmwareGetInfoBufferForMiniport(a1[1], v9, &P, &v14);
    if ( InfoBufferForMiniport >= 0 && P )
    {
      v11 = RaidUnitSendSrbIoControlSynchronously(
              (_DWORD)a1,
              (_DWORD)a2,
              (_DWORD)P,
              v14,
              (__int64)PortSrbTranslateFirmwareIoctlStatusToNtStatus);
      InfoBufferForMiniport = v11;
      if ( v11 >= 0 )
      {
        InfoBufferForMiniport = RaTranslateMiniportFirmwareInfoToHwFirmwareInfo(a2, P);
LABEL_13:
        if ( InfoBufferForMiniport != -1073741801 && InfoBufferForMiniport != -1073741670 )
        {
          v12 = *(unsigned int *)(&MasterIrp->Size + 1);
          if ( CurrentStackLocation->Parameters.Read.Length < (unsigned int)v12 )
            v12 = CurrentStackLocation->Parameters.Read.Length;
          a2->IoStatus.Information = v12;
        }
        goto LABEL_18;
      }
      if ( v11 != -1073741801 )
      {
        if ( v11 != -1073741670 )
          InfoBufferForMiniport = 0;
        goto LABEL_13;
      }
    }
    else
    {
      a2->IoStatus.Information = 0LL;
    }
LABEL_18:
    if ( P )
      ExFreePoolWithTag(P, 0x72536152u);
    return RaidCompleteRequestEx(a2, 0, InfoBufferForMiniport);
  }
  ++a2->CurrentLocation;
  a2->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
  return IofCallDriver(*(PDEVICE_OBJECT *)(a1[3] + 8LL), a2);
}
