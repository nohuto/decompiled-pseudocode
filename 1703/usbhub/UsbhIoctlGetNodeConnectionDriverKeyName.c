/*
 * XREFs of UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C0048D10
 * Callers:
 *     UsbhFdoDeviceControl @ 0x1C003A160 (UsbhFdoDeviceControl.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C0003AA4 (Usb_Disconnected.c)
 *     UsbhDecHubBusy @ 0x1C000B310 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C000BC70 (UsbhIncHubBusy.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
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

__int64 __fastcall UsbhIoctlGetNodeConnectionDriverKeyName(__int64 a1, PIRP Irp, __int64 a3)
{
  unsigned __int16 Type; // r15
  _IRP *MasterIrp; // r14
  size_t v8; // r13
  _DWORD *v9; // rax
  _QWORD *v10; // r12
  __int64 DeviceProperty; // rdi
  __int64 v12; // rax
  struct _DEVICE_OBJECT *v13; // rbp
  _DWORD *v14; // rdi
  unsigned __int64 v15; // rax
  int v16; // r10d
  __int64 v17; // rdx
  __int64 v19; // [rsp+28h] [rbp-70h]
  int v20; // [rsp+48h] [rbp-50h]
  char v21; // [rsp+A8h] [rbp+10h] BYREF
  ULONG ResultLength; // [rsp+B0h] [rbp+18h] BYREF
  int v23; // [rsp+B8h] [rbp+20h] BYREF

  Type = 0;
  v21 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x36u,
      (__int64)&WPP_71ec4cc7b02c3748b3a59ce77a672e2e_Traceguids);
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v8 = *(unsigned int *)(a3 + 8);
  v23 = 264;
  Log(a1, 32, 1768898101, (__int64)Irp, (__int64)MasterIrp);
  v9 = FdoExt(a1);
  v10 = (_QWORD *)UsbhIncHubBusy(a1, (__int64)(v9 + 434), (__int64)Irp, 1430414185, 1);
  if ( v10 )
  {
    LODWORD(DeviceProperty) = UsbhAcquireApiLock(a1, 0xF00D0005, &v21);
    if ( (DeviceProperty & 0xC0000000) != 0xC0000000 )
    {
      LODWORD(DeviceProperty) = UsbhIoctlValidateParameters(a1, 4, 10);
      if ( (DeviceProperty & 0xC0000000) != 0xC0000000 )
      {
        Type = MasterIrp->Type;
        v12 = UsbhLatchPdo(a1, MasterIrp->Type, (__int64)Irp, 0x496C3035u);
        v13 = (struct _DEVICE_OBJECT *)v12;
        if ( v12 )
        {
          v14 = PdoExt(v12);
          if ( (v14[353] & 0x400) != 0 )
          {
            memset(MasterIrp, 0, v8);
            *(_DWORD *)&MasterIrp->Type = *((unsigned __int16 *)v14 + 710);
            ResultLength = v8 - 10;
            DeviceProperty = IoGetDeviceProperty(
                               v13,
                               DevicePropertyDriverKeyName,
                               v8 - 10,
                               &MasterIrp->MdlAddress,
                               &ResultLength);
            Log(a1, 32, 1768383600, (__int64)Irp, DeviceProperty);
            if ( (_DWORD)DeviceProperty == -1073741789 )
              LODWORD(DeviceProperty) = 0;
            if ( (DeviceProperty & 0xC0000000) != 0xC0000000 )
            {
              v15 = ResultLength + 10;
              *(_DWORD *)(&MasterIrp->Size + 1) = v15;
              if ( (unsigned int)v8 < (unsigned int)v15 )
              {
                LOWORD(MasterIrp->MdlAddress) = 0;
                Irp->IoStatus.Information = 10LL;
              }
              else
              {
                Irp->IoStatus.Information = v15;
              }
            }
          }
          else
          {
            LODWORD(DeviceProperty) = -1073741436;
          }
          UsbhUnlatchPdo(a1, (__int64)v13, (__int64)Irp, 0x496C3035u);
        }
        else
        {
          LODWORD(DeviceProperty) = -1073741811;
        }
      }
    }
  }
  else
  {
    LODWORD(DeviceProperty) = -1073741670;
  }
  Log(a1, 32, 1768897589, (__int64)Irp, (int)DeviceProperty);
  if ( (DeviceProperty & 0xC0000000) == 0xC0000000 )
  {
    if ( !Usb_Disconnected(DeviceProperty) )
    {
      LOBYTE(v20) = v16;
      UsbhException(a1, Type, 91, (int)&v23, 4, DeviceProperty, v16, usbfile_ioctl_c, 2634, v20);
      LOWORD(v16) = 0;
    }
    if ( (unsigned int)v8 >= 0xA )
    {
      LOWORD(MasterIrp->MdlAddress) = v16;
      *(_DWORD *)(&MasterIrp->Size + 1) = 10;
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v16 )
  {
    LODWORD(v19) = DeviceProperty;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x37u,
      (__int64)&WPP_71ec4cc7b02c3748b3a59ce77a672e2e_Traceguids,
      v19);
    LOBYTE(v16) = 0;
  }
  if ( v21 != (_BYTE)v16 )
    UsbhReleaseApiLock(a1, 4027383813LL);
  UsbhIoctlTraceOutput(a1, Irp);
  FdoExt(a1);
  UsbhDecHubBusy(a1, v17, v10);
  Irp->IoStatus.Status = DeviceProperty;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)DeviceProperty;
}
