/*
 * XREFs of UsbhIoctlGetHubCapsEx @ 0x1C0049424
 * Callers:
 *     UsbhFdoDeviceControl @ 0x1C003B620 (UsbhFdoDeviceControl.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C00036E4 (Usb_Disconnected.c)
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

__int64 __fastcall UsbhIoctlGetHubCapsEx(__int64 a1, PIRP Irp)
{
  _DWORD *v4; // rax
  _IRP *MasterIrp; // rbx
  _DWORD *v6; // r14
  unsigned int v7; // esi
  unsigned int v8; // r15d
  int v9; // ecx
  __int64 v11; // [rsp+28h] [rbp-60h]
  int v12; // [rsp+48h] [rbp-40h]
  char v13; // [rsp+98h] [rbp+10h] BYREF
  int v14; // [rsp+A8h] [rbp+20h] BYREF

  v13 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x15u,
      (__int64)&WPP_71ec4cc7b02c3748b3a59ce77a672e2e_Traceguids);
  v14 = 276;
  v4 = FdoExt(a1);
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v6 = v4;
  Log(a1, 32, 1768898098, (__int64)Irp, (__int64)MasterIrp);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x16u,
      (__int64)&WPP_71ec4cc7b02c3748b3a59ce77a672e2e_Traceguids);
  v7 = UsbhAcquireApiLock(a1, 0xF00D0012, &v13);
  v8 = v7 >> 30;
  if ( v7 >> 30 != 3 )
  {
    v7 = UsbhIoctlValidateParameters(a1, 0, 4);
    v8 = v7 >> 30;
    if ( v7 >> 30 != 3 )
    {
      *(_DWORD *)&MasterIrp->Type = 0;
      *(_DWORD *)&MasterIrp->Type = (v6[640] & 0x8000) != 0;
      if ( (v6[640] & 0x80u) != 0 )
        *(_DWORD *)&MasterIrp->Type |= 8u;
      if ( (v6[640] & 0x10000) != 0 )
        *(_DWORD *)&MasterIrp->Type |= 4u;
      v9 = v6[640];
      if ( (v9 & 0x8001) == 0x8001 || (v9 & 0x40) != 0 )
        *(_DWORD *)&MasterIrp->Type |= 2u;
      if ( (v6[640] & 0x80000) != 0 )
        *(_DWORD *)&MasterIrp->Type |= 0x20u;
      if ( (v6[640] & 1) != 0 )
        *(_DWORD *)&MasterIrp->Type |= 0x10u;
      Irp->IoStatus.Information = 4LL;
    }
  }
  Log(a1, 32, 1768897586, (__int64)Irp, (int)v7);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v11) = v7;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x17u,
      (__int64)&WPP_71ec4cc7b02c3748b3a59ce77a672e2e_Traceguids,
      v11);
  }
  if ( v8 == 3 && !Usb_Disconnected(v7) )
  {
    LOBYTE(v12) = 0;
    UsbhException(a1, 0, 91, (int)&v14, 4, v7, 0, usbfile_ioctl_c, 700, v12);
  }
  if ( v13 )
    UsbhReleaseApiLock(a1, 4027383826LL);
  UsbhIoctlTraceOutput(a1, Irp);
  Irp->IoStatus.Status = v7;
  IofCompleteRequest(Irp, 0);
  return v7;
}
