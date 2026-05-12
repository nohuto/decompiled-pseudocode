/*
 * XREFs of RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C002C6E4
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0005500 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaBuildHwFirmwareGetInfoBufferForMiniport @ 0x1C0011490 (RaBuildHwFirmwareGetInfoBufferForMiniport.c)
 *     memset @ 0x1C001F180 (memset.c)
 *     RaidAdapterHwFirmwareGetInfoFromMiniport @ 0x1C002C678 (RaidAdapterHwFirmwareGetInfoFromMiniport.c)
 *     RaTranslateMiniportFirmwareInfoToHwFirmwareInfo @ 0x1C003905C (RaTranslateMiniportFirmwareInfoToHwFirmwareInfo.c)
 */

__int64 __fastcall RaidAdapterHwFirmwareGetInfoIoctl(__int64 *a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  PVOID v3; // rsi
  unsigned int *MasterIrp; // r14
  signed int InfoFromMiniport; // edi
  unsigned __int64 Length; // rax
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF
  PVOID P; // [rsp+48h] [rbp+10h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0LL;
  v10 = 0;
  MasterIrp = (unsigned int *)a2->AssociatedIrp.MasterIrp;
  P = 0LL;
  if ( a1[66] && a1[67] )
  {
    if ( CurrentStackLocation->Parameters.Create.Options < 0x10 )
    {
      InfoFromMiniport = -1073741820;
LABEL_5:
      a2->IoStatus.Information = 0LL;
      return RaidCompleteRequestEx(a2, 0, InfoFromMiniport);
    }
    if ( CurrentStackLocation->Parameters.Read.Length < 0x38 )
    {
      InfoFromMiniport = -1073741789;
      goto LABEL_5;
    }
    RaBuildHwFirmwareGetInfoBufferForMiniport(a1[1], (__int64)a2, &P, &v10);
    v3 = P;
    if ( !P )
    {
      a2->IoStatus.Information = 0LL;
      InfoFromMiniport = -1073741801;
      return RaidCompleteRequestEx(a2, 0, InfoFromMiniport);
    }
    InfoFromMiniport = RaidAdapterHwFirmwareGetInfoFromMiniport((__int64)a1, a2, (__int64)P, v10);
    if ( InfoFromMiniport >= 0 )
    {
      memset(MasterIrp, 0, CurrentStackLocation->Parameters.Read.Length);
      InfoFromMiniport = RaTranslateMiniportFirmwareInfoToHwFirmwareInfo(a2, v3);
      Length = MasterIrp[1];
      if ( CurrentStackLocation->Parameters.Read.Length < (unsigned int)Length )
        Length = CurrentStackLocation->Parameters.Read.Length;
      a2->IoStatus.Information = Length;
    }
    else
    {
      a2->IoStatus.Information = 0LL;
    }
  }
  else
  {
    a2->IoStatus.Information = 0LL;
    InfoFromMiniport = -1073741823;
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72536152u);
  return RaidCompleteRequestEx(a2, 0, InfoFromMiniport);
}
