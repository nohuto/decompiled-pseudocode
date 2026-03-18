/*
 * XREFs of UsbhPublishBillboardDetails @ 0x1C00564CC
 * Callers:
 *     UsbhPdoPnp_DeviceEnumerated @ 0x1C0025E80 (UsbhPdoPnp_DeviceEnumerated.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     memset @ 0x1C00289C0 (memset.c)
 */

void __fastcall UsbhPublishBillboardDetails(PDEVICE_OBJECT Pdo)
{
  _DWORD *v2; // rbp
  __int64 v3; // rsi
  ULONG Size; // r15d
  _BYTE *PoolWithTag; // rax
  _BYTE *Data; // rbx
  __int64 i; // r10
  NTSTATUS updated; // eax
  int v9; // r8d
  struct _RTL_BITMAP BitMapHeader; // [rsp+40h] [rbp-28h] BYREF

  v2 = PdoExt((__int64)Pdo);
  v3 = *((_QWORD *)v2 + 300);
  Size = 8 * *(unsigned __int8 *)(v3 + 4) + 4;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x42554855u);
  Data = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, Size);
    *Data = *(_BYTE *)(v3 + 4);
    Data[1] = *(_BYTE *)(v3 + 5);
    RtlInitializeBitMap(&BitMapHeader, (PULONG)(v3 + 8), 0x20u);
    for ( i = 0LL; (unsigned int)i < *(unsigned __int8 *)(v3 + 4); i = (unsigned int)(i + 1) )
    {
      *(_WORD *)&Data[8 * i + 4] = *(_WORD *)(v3 + 4 * i + 44);
      Data[8 * i + 6] = *(_BYTE *)(v3 + 4 * i + 46);
      *(_DWORD *)&Data[8 * i + 8] = _bittest64((const signed __int64 *)BitMapHeader.Buffer, (unsigned int)(2 * i)) | (2 * _bittest64((const signed __int64 *)BitMapHeader.Buffer, (unsigned int)(2 * i + 1)));
    }
    updated = IoSetDevicePropertyData(Pdo, &DEVPKEY_Device_UsbBillboardInfo, 0, 0, 0x1003u, Size, Data);
    if ( updated >= 0 )
    {
      updated = ZwUpdateWnfStateData(&WNF_USB_BILLBOARD_CHANGE, 0LL, 0LL);
      if ( updated >= 0 )
      {
LABEL_9:
        ExFreePoolWithTag(Data, 0);
        return;
      }
      v9 = 1885626931;
    }
    else
    {
      v9 = 1885626930;
    }
    Log(*((_QWORD *)v2 + 147), 256, v9, updated, (__int64)Pdo);
    goto LABEL_9;
  }
  Log(*((_QWORD *)v2 + 147), 256, 1885496369, Size, (__int64)Pdo);
}
