/*
 * XREFs of UsbhPdoPnp_RemoveDevice @ 0x1C0055BD0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhReleaseFdoPwrLock @ 0x1C0004944 (UsbhReleaseFdoPwrLock.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C00049D0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhSetPdoPowerState @ 0x1C000577C (UsbhSetPdoPowerState.c)
 *     UsbhDecHubBusy @ 0x1C000B930 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C0013140 (UsbhIncHubBusy.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     __security_check_cookie @ 0x1C0029310 (__security_check_cookie.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     UsbhSetPdo_FailIo @ 0x1C0044DF8 (UsbhSetPdo_FailIo.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1C0044F98 (UsbhSyncResumeDeviceInternal.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1C0045DDC (Usbh_PdoRemove_PdoEvent.c)
 *     SET_PDO_SWPNPSTATE @ 0x1C0054B48 (SET_PDO_SWPNPSTATE.c)
 *     UsbhPdoRemoveCleanup @ 0x1C0056010 (UsbhPdoRemoveCleanup.c)
 */

__int64 __fastcall UsbhPdoPnp_RemoveDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _QWORD *v4; // r15
  int v5; // r14d
  _DWORD *v6; // rax
  _DWORD *v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v14; // [rsp+40h] [rbp-48h] BYREF
  char v15; // [rsp+48h] [rbp-40h]
  int v16; // [rsp+49h] [rbp-3Fh]

  v4 = 0LL;
  v5 = PdoExt((__int64)DeviceObject)[281];
  v6 = PdoExt((__int64)DeviceObject);
  v7 = v6;
  if ( (v6[353] & 0x40000) != 0 )
    v8 = 0LL;
  else
    v8 = *((_QWORD *)v6 + 147);
  if ( v5 != 6 )
  {
    v9 = (__int64)(v6 + 236);
    if ( (v6[356] & 0x40000) != 0 )
    {
      v10 = *((_QWORD *)v6 + 380);
      v16 = 0;
      v14 = v10;
      v15 = 0;
      ZwUpdateWnfStateData(&WNF_USB_TYPE_C_PARTNER_STATE, &v14, 13LL, 0LL, 0LL, 0, 0);
      v7[356] &= ~0x40000u;
    }
    if ( v8 )
    {
      UsbhSetPdo_FailIo((__int64)DeviceObject);
      if ( v7[286] == 2 || PdoExt((__int64)DeviceObject)[197] != 1 )
        v4 = (_QWORD *)UsbhIncHubBusy(v8, v9, (__int64)DeviceObject, 1381200755, 1);
      if ( PdoExt((__int64)DeviceObject)[197] != 1 )
      {
        UsbhSyncResumeDeviceInternal(v8, v9, DeviceObject);
        UsbhAcquireFdoPwrLock(v8, v9, 137, 1148020050);
        UsbhSetPdoPowerState(v9, (__int64)DeviceObject, v11, 1, 15);
        UsbhReleaseFdoPwrLock(v8, v9);
      }
      UsbhPdoRemoveCleanup(DeviceObject);
    }
    SET_PDO_SWPNPSTATE((__int64)DeviceObject, 102, 2);
    Usbh_PdoRemove_PdoEvent(v8, (__int64)DeviceObject, v9);
    if ( v4 )
      UsbhDecHubBusy(v8, v12, v4);
  }
  if ( !Irp )
    UsbhTrapFatal_Dbg(v8, (ULONG_PTR)DeviceObject);
  Irp->IoStatus.Status = 0;
  IofCompleteRequest(Irp, 0);
  return 0LL;
}
