/*
 * XREFs of UsbhIoctlCyclePort @ 0x1C0048750
 * Callers:
 *     UsbhFdoDeviceControl @ 0x1C003B620 (UsbhFdoDeviceControl.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C00036E4 (Usb_Disconnected.c)
 *     UsbhLatchPdo @ 0x1C000A448 (UsbhLatchPdo.c)
 *     UsbhDecHubBusy @ 0x1C000B930 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C0013140 (UsbhIncHubBusy.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhUpdateUxdSettings @ 0x1C001E070 (UsbhUpdateUxdSettings.c)
 *     UsbhUnlatchPdo @ 0x1C00248C0 (UsbhUnlatchPdo.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     UsbhCycleDevicePort @ 0x1C00436A0 (UsbhCycleDevicePort.c)
 *     UsbhAcquireApiLock @ 0x1C0048250 (UsbhAcquireApiLock.c)
 *     UsbhIoctlTraceOutput @ 0x1C004B06C (UsbhIoctlTraceOutput.c)
 *     UsbhIoctlValidateParameters @ 0x1C004B244 (UsbhIoctlValidateParameters.c)
 *     UsbhReleaseApiLock @ 0x1C004B580 (UsbhReleaseApiLock.c)
 *     UsbhVerifyCallerIsAdmin @ 0x1C004B5E0 (UsbhVerifyCallerIsAdmin.c)
 *     UsbhException @ 0x1C004FE34 (UsbhException.c)
 */

__int64 __fastcall UsbhIoctlCyclePort(__int64 a1, PIRP Irp)
{
  int v4; // ebp
  _IRP *MasterIrp; // r15
  _DWORD *v6; // rax
  _QWORD *v7; // r12
  int v8; // ebx
  struct _DEVICE_OBJECT *v9; // r14
  char IsAdmin; // bl
  int v11; // eax
  __int64 v12; // rdx
  __int64 v14; // [rsp+28h] [rbp-70h]
  int v15; // [rsp+48h] [rbp-50h]
  int v16; // [rsp+50h] [rbp-48h] BYREF
  int v17; // [rsp+54h] [rbp-44h] BYREF
  char v18; // [rsp+A8h] [rbp+10h] BYREF
  char v19; // [rsp+B8h] [rbp+20h] BYREF

  v19 = 0;
  v16 = 0;
  v18 = 0;
  v4 = 0;
  Log(a1, 32, 1768898097, (__int64)Irp, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0xFu,
      (__int64)&WPP_71ec4cc7b02c3748b3a59ce77a672e2e_Traceguids);
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v17 = 7;
  Log(a1, 32, 1768898098, (__int64)Irp, (__int64)MasterIrp);
  v6 = FdoExt(a1);
  v7 = (_QWORD *)UsbhIncHubBusy(a1, (__int64)(v6 + 434), (__int64)Irp, 1430414185, 1);
  if ( v7 )
  {
    v8 = UsbhAcquireApiLock(a1, 0xF00D0002, &v19);
    if ( (v8 & 0xC0000000) != 0xC0000000 )
    {
      v8 = UsbhIoctlValidateParameters(a1, 4, 8);
      if ( (v8 & 0xC0000000) != 0xC0000000 )
      {
        v9 = (struct _DEVICE_OBJECT *)UsbhLatchPdo(a1, MasterIrp->Type, (__int64)Irp, 0x496F3034u);
        if ( v9 )
        {
          IsAdmin = UsbhVerifyCallerIsAdmin();
          UsbhUpdateUxdSettings(a1, v9, 1, &v18);
          if ( LODWORD(WPP_MAIN_CB.Dpc.ProcessorHistory) || v18 || IsAdmin )
          {
            v11 = UsbhCycleDevicePort(a1, (__int64)v9, &v16);
            v4 = v16;
            v8 = v11;
          }
          else
          {
            v8 = -1073741637;
          }
          UsbhUnlatchPdo(a1, (__int64)v9, (__int64)Irp, 0x496F3034u);
        }
        else
        {
          Log(a1, 32, 1733845872, *(unsigned int *)&MasterIrp->Type, (__int64)MasterIrp);
          v8 = -1073741667;
          v4 = -1073713152;
        }
        Irp->IoStatus.Information = 8LL;
        *(_DWORD *)(&MasterIrp->Size + 1) = v4;
      }
    }
  }
  else
  {
    v8 = -1073741670;
  }
  Log(a1, 32, 1768897586, (__int64)Irp, v8);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v14) = v8;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x10u,
      (__int64)&WPP_71ec4cc7b02c3748b3a59ce77a672e2e_Traceguids,
      v14);
  }
  if ( (v8 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v8) )
  {
    LOBYTE(v15) = 0;
    UsbhException(a1, 0, 91, (int)&v17, 4, v8, 0, usbfile_ioctl_c, 384, v15);
  }
  if ( v19 )
    UsbhReleaseApiLock(a1, 4027383810LL);
  UsbhIoctlTraceOutput(a1, Irp);
  FdoExt(a1);
  UsbhDecHubBusy(a1, v12, v7);
  Irp->IoStatus.Status = v8;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v8;
}
