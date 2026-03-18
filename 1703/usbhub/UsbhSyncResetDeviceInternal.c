/*
 * XREFs of UsbhSyncResetDeviceInternal @ 0x1C0006D04
 * Callers:
 *     UsbhFdoSetD0Cold @ 0x1C00056B0 (UsbhFdoSetD0Cold.c)
 *     UsbhPdoPnp_QueryInterface @ 0x1C00117A0 (UsbhPdoPnp_QueryInterface.c)
 *     UsbhPdoPnp_EnablePdo @ 0x1C0027CA0 (UsbhPdoPnp_EnablePdo.c)
 *     UsbhFdoResetPdoPort @ 0x1C003DE90 (UsbhFdoResetPdoPort.c)
 *     UsbhPortResumeTimeout @ 0x1C0043A7C (UsbhPortResumeTimeout.c)
 *     UsbhFdoSetD0Warm @ 0x1C0045C78 (UsbhFdoSetD0Warm.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C00463C4 (UsbhPdoWaitForD3Reconnect.c)
 * Callees:
 *     UsbhQueueWorkItemEx @ 0x1C00022F4 (UsbhQueueWorkItemEx.c)
 *     Usb_Disconnected @ 0x1C0003AA4 (Usb_Disconnected.c)
 *     Usbh_HubRestoreDevice @ 0x1C000706C (Usbh_HubRestoreDevice.c)
 *     UsbhPCE_QueueDriverReset @ 0x1C00070F0 (UsbhPCE_QueueDriverReset.c)
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C00071B0 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhAcquireEnumBusLock @ 0x1C0009EC8 (UsbhAcquireEnumBusLock.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C000A028 (UsbhReleaseEnumBusLockEx.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x1C000B540 (UsbhWaitEventWithTimeoutEx.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x1C00165B0 (Usbh_SSH_Event.c)
 *     UsbhGetPortData @ 0x1C0016C70 (UsbhGetPortData.c)
 *     UsbhDerefPdoDeviceHandle @ 0x1C0017678 (UsbhDerefPdoDeviceHandle.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C001B654 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhLinkPdoDeviceHandle @ 0x1C00217C0 (UsbhLinkPdoDeviceHandle.c)
 *     UsbhFreeID @ 0x1C0022140 (UsbhFreeID.c)
 *     UsbhGetSerialNumber @ 0x1C0022228 (UsbhGetSerialNumber.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C0024E70 (UsbhRefPdoDeviceHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003C218 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_q @ 0x1C003C2E0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C003C59C (WPP_RECORDER_SF_qd.c)
 *     UsbhWaitForBootDevice @ 0x1C004444C (UsbhWaitForBootDevice.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 */

__int64 __fastcall UsbhSyncResetDeviceInternal(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3)
{
  char v4; // r12
  __int64 v6; // rbp
  __int64 v7; // rbx
  KSPIN_LOCK *v8; // rbx
  KIRQL v9; // si
  __int64 v10; // r15
  int v11; // r9d
  int v12; // edx
  __int64 PortData; // rax
  int v14; // edx
  int v15; // r8d
  __int64 v16; // rsi
  __int64 v17; // rbx
  KIRQL v18; // al
  int v19; // edx
  PDEVICE_OBJECT v20; // rcx
  int v22; // r8d
  int v23; // edx
  int v24; // r8d
  __int64 v25; // r9
  int v26; // edx
  int v27; // [rsp+30h] [rbp-88h]
  int v28; // [rsp+48h] [rbp-70h]
  PKSPIN_LOCK SpinLock; // [rsp+50h] [rbp-68h]
  SIZE_T Length[2]; // [rsp+58h] [rbp-60h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-50h] BYREF

  v4 = 0;
  v6 = PdoExt(a3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      71,
      (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dq(
        WPP_GLOBAL_Control->DeviceExtension,
        (unsigned int)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
        v22,
        72,
        (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
        *(_WORD *)(v6 + 1420),
        a3);
  }
  v7 = FdoExt(DeviceObject);
  UsbhEtwLogDeviceIrpEvent(v6, 0LL, &USBHUB_ETW_EVENT_DEVICE_SYNC_RESET_DEVICE_INTERNAL_START, 0LL);
  v8 = (KSPIN_LOCK *)(v7 + 5168);
  SpinLock = v8;
  v9 = KeAcquireSpinLockRaiseToDpc(v8);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  if ( *(_QWORD *)(v6 + 864) )
  {
    Log((_DWORD)DeviceObject, 4, 1380214068, 0, *(_QWORD *)(v6 + 864));
    KeReleaseSpinLock(v8, v9);
    UsbhEtwLogDeviceIrpEvent(v6, 0LL, &USBHUB_ETW_EVENT_DEVICE_SYNC_RESET_DEVICE_INTERNAL_COMPLETE, 2147483665LL);
    return 2147483665LL;
  }
  else
  {
    *(_DWORD *)(v6 + 872) = -1;
    *(_QWORD *)(v6 + 864) = &Event;
    *(_QWORD *)(v6 + 880) = KeGetCurrentThread();
    KeReleaseSpinLock(v8, v9);
    v10 = UsbhRefPdoDeviceHandle(DeviceObject, a3, a3, 1212443759LL);
    UsbhUnlinkPdoDeviceHandle(DeviceObject, a3, 2017740898LL, 0LL);
    Log((_DWORD)DeviceObject, 4, 1869374568, 0, v10);
    Usbh_SSH_Event(DeviceObject, (unsigned int)(v11 + 6), a2);
    v12 = *(unsigned __int16 *)(v6 + 1420);
    *(_DWORD *)(v6 + 1412) &= ~0x8000u;
    UsbhPCE_QueueDriverReset((_DWORD)DeviceObject, v12, 0x20000, a2, a3);
    Log((_DWORD)DeviceObject, 4, 1380218740, 0, 0LL);
    PortData = UsbhGetPortData(DeviceObject, *(unsigned __int16 *)(v6 + 1420));
    UsbhWaitEventWithTimeoutEx(DeviceObject, &Event, 0LL, 1380210548LL, 11, PortData, v27);
    v16 = *(int *)(v6 + 872);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qd(
        WPP_GLOBAL_Control->DeviceExtension,
        v14,
        v15,
        73,
        (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
        a3,
        *(_DWORD *)(v6 + 872));
    if ( (v16 & 0xC0000000) == 0xC0000000 )
    {
      Log((_DWORD)DeviceObject, 4, 1380214124, 0, v16);
      UsbhUnlinkPdoDeviceHandle(DeviceObject, a3, 2017740856LL, 1LL);
      if ( v10 )
      {
        UsbhLinkPdoDeviceHandle(DeviceObject, a3, v10);
        UsbhDerefPdoDeviceHandle(DeviceObject, v10, a3, 1212443759LL);
      }
      if ( !Usb_Disconnected(v16) )
      {
        LOBYTE(v28) = 0;
        UsbhException((int)DeviceObject, *(unsigned __int16 *)(v6 + 1420), 67, 0, 0, v16, -1, usbfile_bus_c, 6780, v28);
      }
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_qd(
          WPP_GLOBAL_Control->DeviceExtension,
          v23,
          v24,
          74,
          (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
          a3,
          v16);
    }
    else
    {
      UsbhAcquireEnumBusLock(DeviceObject, a2, *(unsigned __int16 *)(v6 + 1420));
      v17 = UsbhRefPdoDeviceHandle(DeviceObject, a3, a3, 1212446574LL);
      if ( v17 )
      {
        if ( v10 )
        {
          UsbhDerefPdoDeviceHandle(DeviceObject, v10, a3, 1212443759LL);
          Log((_DWORD)DeviceObject, 4, 1381192786, v10, v17);
          v16 = (int)Usbh_HubRestoreDevice(DeviceObject, a3, v10, v17);
          if ( *(_BYTE *)(v6 + 2716) )
          {
            if ( (int)v16 >= 0 && (*(_DWORD *)(v6 + 1412) & 0x204) == 0x200 )
            {
              Length[0] = 0LL;
              Length[1] = 0LL;
              UsbhGetSerialNumber((_DWORD)DeviceObject);
              if ( *(_DWORD *)(v6 + 2124) )
                v4 = 1;
              UsbhFreeID(Length);
            }
            if ( (_DWORD)v16 == -1073741823 )
              v4 = 1;
          }
          Log((_DWORD)DeviceObject, 4, 1380217445, 0, v16);
          UsbhDerefPdoDeviceHandle(DeviceObject, v17, a3, 1212446574LL);
          if ( (v16 & 0xC0000000) == 0xC0000000 )
          {
            LOBYTE(v28) = 0;
            UsbhException(
              (int)DeviceObject,
              *(unsigned __int16 *)(v6 + 1420),
              66,
              0,
              0,
              v16,
              -1,
              usbfile_bus_c,
              6859,
              v28);
            LOBYTE(v25) = 1;
            UsbhUnlinkPdoDeviceHandle(DeviceObject, a3, 2017740899LL, v25);
            UsbhLinkPdoDeviceHandle(DeviceObject, a3, v10);
          }
        }
        else
        {
          Log((_DWORD)DeviceObject, 4, 1380216684, 0, v16);
          LODWORD(v16) = 0;
          UsbhDerefPdoDeviceHandle(DeviceObject, v17, a3, 1212446574LL);
        }
      }
      else
      {
        Log((_DWORD)DeviceObject, 4, 1380200497, 0, v10);
        UsbhLinkPdoDeviceHandle(DeviceObject, a3, v10);
        UsbhDerefPdoDeviceHandle(DeviceObject, v10, a3, 1212443759LL);
        LODWORD(v16) = -1073741823;
      }
      if ( (int)v16 >= 0 )
      {
        if ( *(_BYTE *)(v6 + 2716) )
        {
          if ( !v4 )
          {
            if ( byte_1C0069688 )
            {
              if ( (*(_DWORD *)(v6 + 1412) & 4) == 0 )
              {
                WmiFireEvent(DeviceObject, &GUID_USB_WMI_SURPRISE_REMOVAL_NOTIFICATION, 0, 0, 0LL);
                LODWORD(v16) = UsbhQueueWorkItemEx(
                                 (__int64)DeviceObject,
                                 1u,
                                 (int)UsbhUpdateRegSurpriseRemovalCount,
                                 (__int64)&byte_1C0069688,
                                 *(unsigned __int16 *)(v6 + 1420),
                                 2001555795,
                                 0LL);
                if ( (v16 & 0xC0000000) == 0xC0000000 )
                {
                  byte_1C0069688 = 0;
                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    WPP_RECORDER_SF_d(
                      WPP_GLOBAL_Control->DeviceExtension,
                      0,
                      1,
                      75,
                      (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
                      v16);
                }
              }
            }
          }
        }
      }
      UsbhReleaseEnumBusLockEx(DeviceObject, a2, *(unsigned __int16 *)(v6 + 1420));
      v8 = SpinLock;
    }
    v18 = KeAcquireSpinLockRaiseToDpc(v8);
    *(_QWORD *)(v6 + 864) = 0LL;
    KeReleaseSpinLock(v8, v18);
    if ( v4 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          v19,
          3,
          76,
          (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
          (char)DeviceObject);
      Log((_DWORD)DeviceObject, 4, 1397905220, v16, (__int64)DeviceObject);
      UsbhWaitForBootDevice(DeviceObject, a3, 0xFFFFFFFFLL, 1LL);
      v20 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          v26,
          3,
          77,
          (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
          (char)DeviceObject);
        v20 = WPP_GLOBAL_Control;
      }
    }
    else
    {
      v20 = WPP_GLOBAL_Control;
    }
    if ( LOWORD(v20->DeviceType) )
      WPP_RECORDER_SF_d(v20->DeviceExtension, 0, 1, 78, (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids, v16);
    UsbhEtwLogDeviceIrpEvent(v6, 0LL, &USBHUB_ETW_EVENT_DEVICE_SYNC_RESET_DEVICE_INTERNAL_COMPLETE, (unsigned int)v16);
    return (unsigned int)v16;
  }
}
