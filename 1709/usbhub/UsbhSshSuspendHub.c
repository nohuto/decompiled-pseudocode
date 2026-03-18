/*
 * XREFs of UsbhSshSuspendHub @ 0x1C0019474
 * Callers:
 *     Usbh_SSH_Event @ 0x1C00174D0 (Usbh_SSH_Event.c)
 * Callees:
 *     UsbhDisarmHubWakeOnConnect @ 0x1C000568C (UsbhDisarmHubWakeOnConnect.c)
 *     UsbhSyncBusResume @ 0x1C0005C70 (UsbhSyncBusResume.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhArmHubForWakeDetect @ 0x1C0017140 (UsbhArmHubForWakeDetect.c)
 *     UsbhSetHubRemoteWake @ 0x1C0017278 (UsbhSetHubRemoteWake.c)
 *     Usbh_SSH_Event @ 0x1C00174D0 (Usbh_SSH_Event.c)
 *     UsbhSyncBusPause @ 0x1C00195FC (UsbhSyncBusPause.c)
 *     UsbhDisableTimerObject @ 0x1C001CC00 (UsbhDisableTimerObject.c)
 *     UsbhEnableTimerObject @ 0x1C001CF30 (UsbhEnableTimerObject.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001DAF0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhSyncSendInternalIoctl @ 0x1C0023F60 (UsbhSyncSendInternalIoctl.c)
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 *     UsbhException @ 0x1C004FE34 (UsbhException.c)
 */

__int64 __fastcall UsbhSshSuspendHub(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  struct _KEVENT *v4; // rbp
  int v5; // eax
  __int64 v6; // r11
  int v7; // r10d
  _DWORD *v8; // rdi
  _DWORD *v9; // rax
  int v10; // edi
  int v12; // r9d
  _DWORD *v13; // rax
  int v14; // [rsp+48h] [rbp-10h]
  unsigned int v15; // [rsp+70h] [rbp+18h] BYREF

  v15 = 0;
  v4 = (struct _KEVENT *)FdoExt((__int64)DeviceObject);
  v5 = UsbhSyncSendInternalIoctl(DeviceObject, 2228243LL, &v15, 0LL);
  Log((__int64)DeviceObject, 8, 1970303827, v15, v5);
  if ( (v7 & 0xC0000000) == 0xC0000000 )
  {
    Log((__int64)DeviceObject, 0x10000, 1400198008, 0LL, v6);
    LOBYTE(v4[142].Header.WaitListHead.Flink) = 1;
    Usbh_SSH_Event(DeviceObject, v12 + 3, a2);
    KeSetEvent(v4 + 141, 0, 0);
    return 3221225473LL;
  }
  else
  {
    Log((__int64)DeviceObject, 0x10000, 1400206152, a2, 0LL);
    UsbhEtwLogHubIrpEvent(DeviceObject, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_SUSPEND_START, 0, 0);
    v8 = FdoExt((__int64)DeviceObject);
    if ( (v8[640] & 0x80000) == 0 )
    {
      UsbhArmHubForWakeDetect(DeviceObject);
      if ( (int)UsbhSetHubRemoteWake((__int64)DeviceObject, 1) >= 0 )
        v8[640] |= 0x80000u;
    }
    if ( (unsigned int)UsbhSyncBusPause(DeviceObject, a2, 2LL) == 4 )
    {
      v9 = FdoExt((__int64)DeviceObject);
      if ( *((_QWORD *)v9 + 590) )
        v10 = (*((__int64 (__fastcall **)(_QWORD))v9 + 590))(*((_QWORD *)v9 + 149));
      else
        v10 = -1073741637;
      UsbhEtwLogHubIrpEvent(DeviceObject, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_SUSPEND_COMPLETE, 0, v10);
      if ( v10 < 0 )
      {
        UsbhSyncBusResume((__int64)DeviceObject, a2);
        UsbhDisarmHubWakeOnConnect((__int64)DeviceObject);
        Usbh_SSH_Event(DeviceObject, 3u, a2);
        KeSetEvent(v4 + 141, 0, 0);
        LOBYTE(v14) = 0;
        UsbhException((int)DeviceObject, 0, 136, 0, 0, v10, 0, usbfile_sshub_c, 2224, v14);
        v13 = FdoExt((__int64)DeviceObject);
        UsbhEnableTimerObject(
          (_DWORD)DeviceObject,
          (_DWORD)v4 + 3200,
          v4[219].Header.LockNV,
          0,
          (__int64)(v13 + 478),
          2001228627);
      }
      else
      {
        UsbhDisableTimerObject(DeviceObject, &v4[133].Header.WaitListHead);
        Usbh_SSH_Event(DeviceObject, 2u, a2);
      }
    }
    else
    {
      v10 = -1073741823;
      UsbhEtwLogHubIrpEvent(DeviceObject, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_SUSPEND_BUS_PAUSE_FAILED, 0, -1073741823);
      UsbhDisarmHubWakeOnConnect((__int64)DeviceObject);
      UsbhEtwLogHubIrpEvent(DeviceObject, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_SUSPEND_COMPLETE, 0, -1073741823);
      LOBYTE(v4[142].Header.WaitListHead.Flink) = 1;
      Usbh_SSH_Event(DeviceObject, 3u, a2);
      KeSetEvent(v4 + 141, 0, 0);
    }
    return (unsigned int)v10;
  }
}
