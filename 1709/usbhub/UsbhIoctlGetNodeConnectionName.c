/*
 * XREFs of UsbhIoctlGetNodeConnectionName @ 0x1C004A5EC
 * Callers:
 *     UsbhFdoDeviceControl @ 0x1C003B620 (UsbhFdoDeviceControl.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C00036E4 (Usb_Disconnected.c)
 *     UsbhLatchPdo @ 0x1C000A448 (UsbhLatchPdo.c)
 *     UsbhDecHubBusy @ 0x1C000B930 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C0013140 (UsbhIncHubBusy.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhUnlatchPdo @ 0x1C00248C0 (UsbhUnlatchPdo.c)
 *     memset @ 0x1C0029840 (memset.c)
 *     UsbhGetHubPdoName @ 0x1C003C3AC (UsbhGetHubPdoName.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D59C (WPP_RECORDER_SF_q.c)
 *     UsbhAcquireApiLock @ 0x1C0048250 (UsbhAcquireApiLock.c)
 *     UsbhIoctlTraceOutput @ 0x1C004B06C (UsbhIoctlTraceOutput.c)
 *     UsbhIoctlValidateParameters @ 0x1C004B244 (UsbhIoctlValidateParameters.c)
 *     UsbhReleaseApiLock @ 0x1C004B580 (UsbhReleaseApiLock.c)
 *     UsbhException @ 0x1C004FE34 (UsbhException.c)
 */

__int64 __fastcall UsbhIoctlGetNodeConnectionName(__int64 a1, PIRP Irp, __int64 a3)
{
  unsigned __int16 *MasterIrp; // r14
  size_t v7; // r15
  _DWORD *v8; // rax
  _QWORD *v9; // r12
  int HubPdoName; // ebx
  __int64 v11; // rbp
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v15; // [rsp+28h] [rbp-60h]
  int v16; // [rsp+48h] [rbp-40h]
  char v17; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v18; // [rsp+A0h] [rbp+18h] BYREF
  int v19; // [rsp+A8h] [rbp+20h] BYREF

  v17 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)Irp,
      2u,
      0x24u,
      (__int64)&WPP_71ec4cc7b02c3748b3a59ce77a672e2e_Traceguids,
      Irp);
  MasterIrp = (unsigned __int16 *)Irp->AssociatedIrp.MasterIrp;
  v7 = *(unsigned int *)(a3 + 8);
  v19 = 261;
  Log(a1, 32, 1768898099, (__int64)Irp, (__int64)MasterIrp);
  v8 = FdoExt(a1);
  v9 = (_QWORD *)UsbhIncHubBusy(a1, (__int64)(v8 + 434), (__int64)Irp, 1430414185, 1);
  if ( v9 )
  {
    HubPdoName = UsbhAcquireApiLock(a1, 0xF00D0003, &v17);
    if ( (HubPdoName & 0xC0000000) != 0xC0000000 )
    {
      HubPdoName = UsbhIoctlValidateParameters(a1, 4, 10);
      if ( (HubPdoName & 0xC0000000) != 0xC0000000 )
      {
        v11 = UsbhLatchPdo(a1, *MasterIrp, (__int64)Irp, 0x496C3033u);
        if ( v11 )
        {
          memset(MasterIrp, 0, v7);
          HubPdoName = UsbhGetHubPdoName(a1, v11, MasterIrp + 2, (int)v7 - 4, &v18);
          v12 = v18;
          if ( v18 >= 4 )
            *((_DWORD *)MasterIrp + 1) += 4;
          Irp->IoStatus.Information = v12 + 4;
          UsbhUnlatchPdo(a1, v11, (__int64)Irp, 0x496C3033u);
        }
        else
        {
          HubPdoName = 0;
          *((_DWORD *)MasterIrp + 1) = 10;
          MasterIrp[4] = 0;
          Irp->IoStatus.Information = 10LL;
        }
      }
    }
  }
  else
  {
    HubPdoName = -1073741670;
  }
  Log(a1, 32, 1768897587, (__int64)Irp, HubPdoName);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v15) = HubPdoName;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x25u,
      (__int64)&WPP_71ec4cc7b02c3748b3a59ce77a672e2e_Traceguids,
      v15);
  }
  if ( (HubPdoName & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(HubPdoName) )
  {
    LOBYTE(v16) = 0;
    UsbhException(a1, 0, 91, (int)&v19, 4, HubPdoName, 0, usbfile_ioctl_c, 1715, v16);
  }
  if ( v17 )
    UsbhReleaseApiLock(a1, 4027383811LL);
  UsbhIoctlTraceOutput(a1, Irp);
  FdoExt(a1);
  UsbhDecHubBusy(a1, v13, v9);
  Irp->IoStatus.Status = HubPdoName;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)HubPdoName;
}
