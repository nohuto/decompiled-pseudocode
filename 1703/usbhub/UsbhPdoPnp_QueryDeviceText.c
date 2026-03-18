/*
 * XREFs of UsbhPdoPnp_QueryDeviceText @ 0x1C001B4B0
 * Callers:
 *     <none>
 * Callees:
 *     Usb_Disconnected @ 0x1C0003AA4 (Usb_Disconnected.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     memmove @ 0x1C0028680 (memmove.c)
 *     memset @ 0x1C00289C0 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C003C2E0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_S @ 0x1C00454FC (WPP_RECORDER_SF_S.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 *     UsbhGetProductIdString @ 0x1C0052E10 (UsbhGetProductIdString.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C00568C8 (WPP_RECORDER_SF_qDD.c)
 */

__int64 __fastcall UsbhPdoPnp_QueryDeviceText(__int64 a1, IRP *a2)
{
  _DWORD *v3; // rsi
  _DWORD *v5; // rax
  int v6; // r8d
  int v7; // r9d
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _DWORD *v9; // rdi
  unsigned int Length; // ebp
  unsigned __int16 Size; // r14
  PDEVICE_OBJECT v12; // rcx
  int Status; // ebx
  PVOID PoolWithTag; // rax
  void *v15; // rdi
  unsigned int v16; // eax
  const void *v17; // rdx
  int v18; // r8d
  int v20; // [rsp+20h] [rbp-58h]
  int v21; // [rsp+48h] [rbp-30h]

  v3 = 0LL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      1,
      17,
      (__int64)&WPP_eedbca65ee47349068ca6cb62991bd41_Traceguids,
      a1);
  v5 = PdoExt(a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v9 = v5;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Size = CurrentStackLocation->Parameters.QueryInterface.Size;
  v12 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_qDD(WPP_GLOBAL_Control->DeviceExtension, Size, v6, v7, v20, a1, Length, Size);
    v12 = WPP_GLOBAL_Control;
  }
  if ( !Size )
    Size = 1033;
  Status = a2->IoStatus.Status;
  if ( Length )
  {
    if ( Length == 1 )
    {
      if ( LOWORD(v12->DeviceType) )
      {
        WPP_RECORDER_SF_(v12->DeviceExtension, 0, 1, 19, (__int64)&WPP_eedbca65ee47349068ca6cb62991bd41_Traceguids);
        v12 = WPP_GLOBAL_Control;
      }
      if ( !v9[555] )
      {
        Status = -1073741637;
        goto LABEL_26;
      }
      v3 = v9 + 554;
      goto LABEL_13;
    }
  }
  else
  {
    if ( LOWORD(v12->DeviceType) )
    {
      WPP_RECORDER_SF_(v12->DeviceExtension, 0, 1, 20, (__int64)&WPP_eedbca65ee47349068ca6cb62991bd41_Traceguids);
      v12 = WPP_GLOBAL_Control;
    }
    if ( !*((_BYTE *)v9 + 1407) || (v9[356] & 0x800) != 0 )
    {
      if ( v9[547] )
      {
        v3 = v9 + 546;
LABEL_13:
        Status = 0;
        goto LABEL_14;
      }
      Status = -1073741637;
    }
    else
    {
      v3 = v9 + 538;
      Status = UsbhGetProductIdString(*((_QWORD *)v9 + 147));
      if ( Status == -1073741637 && Size != 1033 )
        Status = UsbhGetProductIdString(*((_QWORD *)v9 + 147));
      if ( (Status & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(Status) )
      {
        LOBYTE(v21) = 0;
        UsbhException(
          *((_QWORD *)v9 + 147),
          *((unsigned __int16 *)v9 + 710),
          58,
          0,
          0,
          Status,
          0,
          usbfile_pdo_c,
          2351,
          v21);
      }
      v12 = WPP_GLOBAL_Control;
    }
  }
  if ( Status < 0 )
    goto LABEL_26;
LABEL_14:
  if ( !v3 )
    goto LABEL_26;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v3[1], 0x42554855u);
  v15 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, (unsigned int)v3[1]);
    v16 = v3[1];
    if ( v16 )
    {
      v17 = (const void *)*((_QWORD *)v3 + 1);
      if ( v17 )
      {
        memmove(v15, v17, v16);
        a2->IoStatus.Information = (unsigned __int64)v15;
        if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
          goto LABEL_19;
        WPP_RECORDER_SF_S(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          v18,
          21,
          (__int64)&WPP_eedbca65ee47349068ca6cb62991bd41_Traceguids,
          (__int64)v15);
        goto LABEL_42;
      }
    }
    ExFreePoolWithTag(v15, 0);
  }
  Status = -1073741670;
LABEL_42:
  v12 = WPP_GLOBAL_Control;
LABEL_26:
  if ( LOWORD(v12->DeviceType) )
    WPP_RECORDER_SF_d(v12->DeviceExtension, 0, 1, 22, (__int64)&WPP_eedbca65ee47349068ca6cb62991bd41_Traceguids, Status);
LABEL_19:
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  return (unsigned int)Status;
}
