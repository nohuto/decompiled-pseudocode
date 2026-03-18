/*
 * XREFs of UsbhPdoSetD0_Finish @ 0x1C0006568
 * Callers:
 *     UsbhPdoSetD0 @ 0x1C0003620 (UsbhPdoSetD0.c)
 *     UsbhPdoUnblockPendedD0IrpWI @ 0x1C0006480 (UsbhPdoUnblockPendedD0IrpWI.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C0003AA4 (Usb_Disconnected.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0004E50 (UsbhReleaseFdoPwrLock.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C0004EE0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhSetPdoPowerState @ 0x1C0006018 (UsbhSetPdoPowerState.c)
 *     UsbhDisableDeviceForWake @ 0x1C0006A14 (UsbhDisableDeviceForWake.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhSet_Pdo_Dx @ 0x1C0018B68 (UsbhSet_Pdo_Dx.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 */

__int64 __fastcall UsbhPdoSetD0_Finish(__int64 a1, struct _DEVICE_OBJECT *a2, __int64 a3)
{
  __int64 v6; // rbp
  __int64 v7; // rdi
  POWER_STATE v8; // ebx
  __int64 v9; // r8
  int v10; // edx
  int v12; // edx
  int v13; // [rsp+48h] [rbp-20h]
  int v14; // [rsp+70h] [rbp+8h] BYREF

  v6 = PdoExt(a2);
  v7 = FdoExt(*(_QWORD *)(a1 + 8));
  v8.SystemState = *(_SYSTEM_POWER_STATE *)(*(_QWORD *)(a3 + 184) + 24LL);
  UsbhAcquireFdoPwrLock(*(_QWORD *)(a1 + 8), a1, 126, 1852401232);
  PdoExt(a2);
  UsbhSetPdoPowerState(a1, (__int64)a2, v9, 1, 8);
  Log(*(_QWORD *)(a1 + 8), 16, 1884769123, a1, (__int64)a2);
  *(_DWORD *)(v6 + 2376) = *(_DWORD *)(v7 + 4216);
  UsbhReleaseFdoPwrLock(*(_QWORD *)(a1 + 8), a1);
  if ( (*(_DWORD *)(v6 + 1412) & 0x100) != 0 )
  {
    v10 = UsbhDisableDeviceForWake(*(_QWORD *)(a1 + 8), a2, &v14);
    if ( (v10 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v10) )
    {
      LOBYTE(v13) = 0;
      UsbhException(
        *(_QWORD *)(a1 + 8),
        *(unsigned __int16 *)(v6 + 1420),
        49,
        0,
        0,
        v12,
        v14,
        usbfile_pdopwr_c,
        842,
        v13);
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      12,
      (__int64)&WPP_ee5e40984a3c387d1cb2bd9d553f663f_Traceguids,
      *(_WORD *)(v6 + 1420));
  UsbhSet_Pdo_Dx(a2, v8);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      13,
      (__int64)&WPP_ee5e40984a3c387d1cb2bd9d553f663f_Traceguids,
      *(_WORD *)(v6 + 1420));
  return 0LL;
}
