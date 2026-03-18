/*
 * XREFs of UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C0049480
 * Callers:
 *     UsbhFdoDeviceControl @ 0x1C003A160 (UsbhFdoDeviceControl.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C0003AA4 (Usb_Disconnected.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhGetPortData @ 0x1C0016C70 (UsbhGetPortData.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhLatchPdo @ 0x1C001A5DC (UsbhLatchPdo.c)
 *     UsbhUnlatchPdo @ 0x1C00245B0 (UsbhUnlatchPdo.c)
 *     memset @ 0x1C00289C0 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     UsbhAcquireApiLock @ 0x1C00473C8 (UsbhAcquireApiLock.c)
 *     UsbhIoctlTraceOutput @ 0x1C004A1DC (UsbhIoctlTraceOutput.c)
 *     UsbhIoctlValidateParameters @ 0x1C004A3B4 (UsbhIoctlValidateParameters.c)
 *     UsbhReleaseApiLock @ 0x1C004A710 (UsbhReleaseApiLock.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 */

__int64 __fastcall UsbhIoctlGetNodeConnectionInfoExV2(__int64 a1, PIRP Irp, __int64 a3)
{
  _DWORD *v6; // rax
  _IRP *MasterIrp; // r14
  size_t v8; // r12
  _DWORD *v9; // r13
  int v10; // edi
  int Type; // r15d
  int MdlAddress; // ebx
  __int64 v13; // rax
  __int64 v14; // rbx
  int v15; // r10d
  __int64 v17; // [rsp+28h] [rbp-60h]
  int v18; // [rsp+48h] [rbp-40h]
  char v19; // [rsp+98h] [rbp+10h] BYREF
  int v20; // [rsp+A0h] [rbp+18h] BYREF

  v19 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x1Eu,
      (__int64)&WPP_71ec4cc7b02c3748b3a59ce77a672e2e_Traceguids);
  v20 = 279;
  v6 = FdoExt(a1);
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v8 = *(unsigned int *)(a3 + 8);
  v9 = v6;
  Log(a1, 32, 1768898147, (__int64)Irp, (__int64)MasterIrp);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x1Fu,
      (__int64)&WPP_71ec4cc7b02c3748b3a59ce77a672e2e_Traceguids);
  v10 = UsbhAcquireApiLock(a1, 0xF00D0015, &v19);
  if ( (v10 & 0xC0000000) != 0xC0000000 )
  {
    v10 = UsbhIoctlValidateParameters(a1, 16, 16);
    if ( (v10 & 0xC0000000) != 0xC0000000 )
    {
      if ( *(_DWORD *)(&MasterIrp->Size + 1) >= 0x10u )
      {
        Type = (unsigned __int16)MasterIrp->Type;
        MdlAddress = (int)MasterIrp->MdlAddress;
        memset(MasterIrp, 0, v8);
        *(_DWORD *)&MasterIrp->Type = Type;
        if ( (MdlAddress & 4) != 0 && (*(_DWORD *)&MasterIrp->Type = Type, UsbhGetPortData(a1, Type)) )
        {
          *(_DWORD *)(&MasterIrp->Size + 1) = 16;
          Irp->IoStatus.Information = 16LL;
          LODWORD(MasterIrp->MdlAddress) |= 1u;
          if ( (v9[640] & 0x8000) != 0 )
            LODWORD(MasterIrp->MdlAddress) |= 2u;
          v13 = UsbhLatchPdo(a1, Type, (__int64)Irp, 0x496F3063u);
          v14 = v13;
          if ( v13 )
          {
            if ( (PdoExt(v13)[353] & 0x80000) != 0 )
              HIDWORD(MasterIrp->MdlAddress) |= 2u;
            UsbhUnlatchPdo(a1, v14, (__int64)Irp, 0x496F3063u);
          }
        }
        else
        {
          v10 = -1073741811;
        }
      }
      else
      {
        v10 = -1073741811;
      }
    }
  }
  Log(a1, 32, 1768897635, (__int64)Irp, v10);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v17) = v10;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      v15 - 30,
      v15,
      (__int64)&WPP_71ec4cc7b02c3748b3a59ce77a672e2e_Traceguids,
      v17);
  }
  if ( (v10 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v10) )
  {
    LOBYTE(v18) = 0;
    UsbhException(a1, 0, 91, (int)&v20, 4, v10, 0, usbfile_ioctl_c, 1062, v18);
  }
  if ( v19 )
    UsbhReleaseApiLock(a1, 4027383829LL);
  UsbhIoctlTraceOutput(a1, Irp);
  Irp->IoStatus.Status = v10;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v10;
}
