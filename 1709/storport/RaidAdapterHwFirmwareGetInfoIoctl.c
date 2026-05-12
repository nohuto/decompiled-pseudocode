/*
 * XREFs of RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C002D664
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0005D18 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000B4A0 (RaidCompleteRequestEx.c)
 *     RaBuildHwFirmwareGetInfoBufferForMiniport @ 0x1C001ACB8 (RaBuildHwFirmwareGetInfoBufferForMiniport.c)
 *     memset @ 0x1C001F680 (memset.c)
 *     RaidAdapterHwFirmwareGetInfoFromMiniport @ 0x1C002D5F8 (RaidAdapterHwFirmwareGetInfoFromMiniport.c)
 *     RaTranslateMiniportFirmwareInfoToHwFirmwareInfo @ 0x1C003AB58 (RaTranslateMiniportFirmwareInfoToHwFirmwareInfo.c)
 */

__int64 __fastcall RaidAdapterHwFirmwareGetInfoIoctl(__int64 *a1, IRP *a2)
{
  unsigned int *MasterIrp; // r14
  PVOID v3; // rsi
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  signed int InfoFromMiniport; // edi
  signed int v8; // eax
  unsigned int Length; // ecx
  unsigned __int64 v10; // rax
  ULONG v12; // [rsp+40h] [rbp+8h] BYREF
  PVOID P; // [rsp+48h] [rbp+10h] BYREF

  MasterIrp = (unsigned int *)a2->AssociatedIrp.MasterIrp;
  v3 = 0LL;
  v12 = 0;
  P = 0LL;
  if ( a1[66] && a1[67] )
  {
    CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
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
    RaBuildHwFirmwareGetInfoBufferForMiniport(a1[1], (__int64)a2, &P, &v12);
    v3 = P;
    if ( !P )
    {
      a2->IoStatus.Information = 0LL;
      InfoFromMiniport = -1073741801;
      return RaidCompleteRequestEx(a2, 0, InfoFromMiniport);
    }
    InfoFromMiniport = RaidAdapterHwFirmwareGetInfoFromMiniport((__int64)a1, a2, (unsigned int *)P, v12);
    if ( InfoFromMiniport >= 0 )
    {
      memset(MasterIrp, 0, CurrentStackLocation->Parameters.Read.Length);
      v8 = RaTranslateMiniportFirmwareInfoToHwFirmwareInfo(a2, v3);
      Length = CurrentStackLocation->Parameters.Read.Length;
      InfoFromMiniport = v8;
      v10 = MasterIrp[1];
      if ( Length < (unsigned int)v10 )
        v10 = Length;
      a2->IoStatus.Information = v10;
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
