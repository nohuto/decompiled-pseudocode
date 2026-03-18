/*
 * XREFs of UsbhIoctlGetHubCaps @ 0x1C00491D4
 * Callers:
 *     UsbhFdoDeviceControl @ 0x1C003B620 (UsbhFdoDeviceControl.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C00036E4 (Usb_Disconnected.c)
 *     UsbhDecHubBusy @ 0x1C000B930 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C0013140 (UsbhIncHubBusy.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     UsbhAcquireApiLock @ 0x1C0048250 (UsbhAcquireApiLock.c)
 *     UsbhIoctlTraceOutput @ 0x1C004B06C (UsbhIoctlTraceOutput.c)
 *     UsbhIoctlValidateParameters @ 0x1C004B244 (UsbhIoctlValidateParameters.c)
 *     UsbhReleaseApiLock @ 0x1C004B580 (UsbhReleaseApiLock.c)
 *     UsbhException @ 0x1C004FE34 (UsbhException.c)
 */

__int64 __fastcall UsbhIoctlGetHubCaps(__int64 a1, PIRP Irp)
{
  _DWORD *v4; // rax
  _IRP *MasterIrp; // rbp
  _DWORD *v6; // r15
  _DWORD *v7; // rax
  _QWORD *v8; // r12
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v12; // [rsp+28h] [rbp-60h]
  int v13; // [rsp+48h] [rbp-40h]
  char v14; // [rsp+98h] [rbp+10h] BYREF
  int v15; // [rsp+A8h] [rbp+20h] BYREF

  v14 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x13u,
      (__int64)&WPP_71ec4cc7b02c3748b3a59ce77a672e2e_Traceguids);
  v15 = 271;
  v4 = FdoExt(a1);
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v6 = v4;
  Log(a1, 32, 1768898098, (__int64)Irp, (__int64)MasterIrp);
  v7 = FdoExt(a1);
  v8 = (_QWORD *)UsbhIncHubBusy(a1, (__int64)(v7 + 434), (__int64)Irp, 1430414185, 1);
  if ( v8 )
  {
    v9 = UsbhAcquireApiLock(a1, 0xF00D0002, &v14);
    if ( (v9 & 0xC0000000) != 0xC0000000 )
    {
      v9 = UsbhIoctlValidateParameters(a1, 0, 4);
      if ( (v9 & 0xC0000000) != 0xC0000000 )
      {
        if ( (v6[640] & 0x8000) != 0 )
          *(_DWORD *)&MasterIrp->Type |= 1u;
        else
          *(_DWORD *)&MasterIrp->Type &= ~1u;
      }
    }
  }
  else
  {
    v9 = -1073741670;
  }
  Log(a1, 32, 1768897586, (__int64)Irp, v9);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v12) = v9;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x14u,
      (__int64)&WPP_71ec4cc7b02c3748b3a59ce77a672e2e_Traceguids,
      v12);
  }
  if ( (v9 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v9) )
  {
    LOBYTE(v13) = 0;
    UsbhException(a1, 0, 91, (int)&v15, 4, v9, 0, usbfile_ioctl_c, 573, v13);
  }
  if ( v14 )
    UsbhReleaseApiLock(a1, 4027383810LL);
  UsbhIoctlTraceOutput(a1, Irp);
  FdoExt(a1);
  UsbhDecHubBusy(a1, v10, v8);
  Irp->IoStatus.Status = v9;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v9;
}
