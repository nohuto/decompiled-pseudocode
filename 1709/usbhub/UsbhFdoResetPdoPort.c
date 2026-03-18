/*
 * XREFs of UsbhFdoResetPdoPort @ 0x1C003ED40
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0010A80 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C00036E4 (Usb_Disconnected.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0004944 (UsbhReleaseFdoPwrLock.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C00049D0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhAcquirePdoStateLock @ 0x1C0005D8C (UsbhAcquirePdoStateLock.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0006C34 (UsbhSyncResetDeviceInternal.c)
 *     UsbhDecPdoIoCount @ 0x1C000A050 (UsbhDecPdoIoCount.c)
 *     UsbhLatchPdo @ 0x1C000A448 (UsbhLatchPdo.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C001C0E0 (UsbhEtwLogDeviceIrpEvent.c)
 *     Usbh__TestPoint__Ulong @ 0x1C0023280 (Usbh__TestPoint__Ulong.c)
 *     UsbhUnlatchPdo @ 0x1C00248C0 (UsbhUnlatchPdo.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 *     UsbhException @ 0x1C004FE34 (UsbhException.c)
 */

__int64 __fastcall UsbhFdoResetPdoPort(
        PDEVICE_OBJECT DeviceObject,
        ULONG_PTR BugCheckParameter3,
        IRP *BugCheckParameter4)
{
  _DWORD *v6; // rsi
  __int64 v7; // r15
  int v8; // edi
  int v9; // edx
  __int64 v10; // rcx
  bool v11; // zf
  KIRQL v12; // dl
  int v13; // eax
  bool v14; // cc
  int v16; // [rsp+48h] [rbp-30h]
  __int64 v17; // [rsp+98h] [rbp+20h]

  Log((__int64)DeviceObject, 4, 1919251233, (__int64)BugCheckParameter4, BugCheckParameter3);
  v6 = PdoExt(BugCheckParameter3);
  v7 = (__int64)(v6 + 236);
  UsbhEtwLogDeviceIrpEvent(
    (__int64)v6,
    (__int64)BugCheckParameter4,
    &USBHUB_ETW_EVENT_DEVICE_IOCTL_INTERNAL_USB_RESET_PORT_START);
  UsbhAcquireFdoPwrLock((__int64)DeviceObject, (__int64)(v6 + 236), 134, 1936028228);
  if ( PdoExt(BugCheckParameter3)[282] == 1 )
  {
    UsbhReleaseFdoPwrLock((__int64)DeviceObject, v7);
    v9 = *((unsigned __int16 *)v6 + 710);
    if ( KeGetCurrentIrql() )
    {
      LOBYTE(v16) = 0;
      v8 = -1073741811;
      UsbhException((int)DeviceObject, v9, 68, 0, 0, -1073741811, -1, usbfile_dioctl_c, 769, v16);
    }
    else
    {
      v8 = -1073741810;
      v17 = UsbhLatchPdo((__int64)DeviceObject, v9, (__int64)BugCheckParameter4, 0x64545352u);
      Log((__int64)DeviceObject, 8, 1920169068, *((unsigned __int16 *)v6 + 710), v17);
      if ( v17 )
      {
        if ( BugCheckParameter3 == v17 )
        {
          UsbhAcquirePdoStateLock(v10, v7, 13);
          v11 = PdoExt(BugCheckParameter3)[281] == 3;
          v6[270] = 0;
          WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
          v6[258] = 1734964085;
          v12 = *((_BYTE *)v6 + 1076);
          if ( v11 )
          {
            KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v12);
            Usbh__TestPoint__Ulong((__int64)DeviceObject, 0, 0xC000000E, *((unsigned __int16 *)v6 + 710));
            v13 = UsbhSyncResetDeviceInternal(DeviceObject, v7, BugCheckParameter3);
            ++v6[595];
            v8 = v13;
            v14 = v6[595] <= 0xAu;
            v6[594] = 1;
            if ( !v14 )
            {
              LOBYTE(v16) = 0;
              UsbhException(
                (int)DeviceObject,
                *((unsigned __int16 *)v6 + 710),
                76,
                0,
                0,
                v13,
                -1,
                usbfile_dioctl_c,
                803,
                v16);
              v6[595] = 0;
            }
            if ( v8 >= 0 )
              Usbh__TestPoint__Ulong((__int64)DeviceObject, 1u, v8, *((unsigned __int16 *)v6 + 710));
          }
          else
          {
            KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v12);
          }
        }
        UsbhUnlatchPdo((__int64)DeviceObject, v17, (__int64)BugCheckParameter4, 0x64545352u);
      }
      if ( (v8 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v8) )
      {
        LOBYTE(v16) = 0;
        UsbhException((int)DeviceObject, *((unsigned __int16 *)v6 + 710), 77, 0, 0, v8, -1, usbfile_dioctl_c, 828, v16);
      }
    }
  }
  else
  {
    v8 = -1073741101;
    LOBYTE(v16) = 0;
    UsbhException(
      (int)DeviceObject,
      *((unsigned __int16 *)v6 + 710),
      69,
      0,
      0,
      -1073741101,
      -1,
      usbfile_dioctl_c,
      749,
      v16);
    UsbhReleaseFdoPwrLock((__int64)DeviceObject, v7);
  }
  UsbhEtwLogDeviceIrpEvent(
    (__int64)v6,
    (__int64)BugCheckParameter4,
    &USBHUB_ETW_EVENT_DEVICE_IOCTL_INTERNAL_USB_RESET_PORT_COMPLETE);
  if ( *((_BYTE *)v6 + 2732) && v8 < 0 )
  {
    Log((__int64)DeviceObject, 8, 1920169062, (__int64)v6, v8);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        3u,
        0xBu,
        (__int64)&WPP_34fcbd4520f83f99299c6f44fc8177b4_Traceguids);
    LOBYTE(v16) = 1;
    UsbhException((int)DeviceObject, 0, 62, 0, 0, -1073741823, -1073704960, usbfile_dioctl_c, 841, v16);
    *((_QWORD *)v6 + 347) = BugCheckParameter4;
    v8 = 259;
    BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  }
  else
  {
    BugCheckParameter4->IoStatus.Status = v8;
    IofCompleteRequest(BugCheckParameter4, 0);
  }
  UsbhDecPdoIoCount(BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
  return (unsigned int)v8;
}
