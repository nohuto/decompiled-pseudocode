/*
 * XREFs of UsbhHubResetIrqPipeWorker @ 0x1C0043720
 * Callers:
 *     <none>
 * Callees:
 *     Usb_Disconnected @ 0x1C0003AA4 (Usb_Disconnected.c)
 *     UsbhPostInterrupt @ 0x1C000AE90 (UsbhPostInterrupt.c)
 *     UsbhDecHubBusy @ 0x1C000B310 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C000BC70 (UsbhIncHubBusy.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     UsbhResetIrqPipe @ 0x1C0043CE0 (UsbhResetIrqPipe.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 */

NTSTATUS __fastcall UsbhHubResetIrqPipeWorker(PDEVICE_OBJECT DeviceObject, unsigned int a2, __int64 a3)
{
  __int64 v4; // rsi
  struct _KEVENT *v6; // rbx
  _QWORD *v7; // r14
  NTSTATUS result; // eax
  __int64 v9; // rbp
  __int64 v10; // rdx
  bool v11; // al
  struct _KEVENT *v12; // rcx
  __int64 v13; // rdx
  PDEVICE_OBJECT v14; // rcx
  unsigned __int16 v15; // r9
  __int64 v16; // [rsp+28h] [rbp-50h]
  int v17; // [rsp+48h] [rbp-30h]

  v4 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x1Fu,
      (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
      a2);
  Log((__int64)DeviceObject, 4, 1769107794, a3, v4);
  v6 = (struct _KEVENT *)FdoExt((__int64)DeviceObject);
  v7 = (_QWORD *)UsbhIncHubBusy((__int64)DeviceObject, a3, (__int64)DeviceObject, 1380086643, 0);
  _InterlockedAdd(&v6[114].Header.Lock, 1u);
  result = (NTSTATUS)v6[106].Header.WaitListHead.Blink;
  if ( (result & 0x1000) != 0 )
  {
    LODWORD(v6[106].Header.WaitListHead.Blink) = result & 0xFFFFEFFF;
    Log((__int64)DeviceObject, 4, 1769107794, 0LL, 0LL);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v16) = v4;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0x20u,
        (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
        v16);
    }
    v9 = (int)UsbhResetIrqPipe(DeviceObject);
    Log((__int64)DeviceObject, 4, 1766999379, 0LL, v9);
    if ( (v9 & 0xC0000000) == 0xC0000000 )
    {
      v11 = Usb_Disconnected(v9);
      v12 = v6 + 112;
      if ( v11 )
      {
        KeSetEvent(v12, 0, 0);
        _InterlockedDecrement(&v6[114].Header.Lock);
        v14 = WPP_GLOBAL_Control;
        if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
          return UsbhDecHubBusy((__int64)DeviceObject, v13, v7);
        v15 = 33;
      }
      else
      {
        _InterlockedDecrement(&v6[114].Header.Lock);
        KeSetEvent(v12, 0, 0);
        if ( !BYTE4(v6[219].Header.WaitListHead.Flink) )
        {
          LOBYTE(v17) = 1;
          UsbhException((int)DeviceObject, 0, 7, 0, 0, v9, 0, usbfile_bus_c, 2768, v17);
        }
        v14 = WPP_GLOBAL_Control;
        if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
          return UsbhDecHubBusy((__int64)DeviceObject, v13, v7);
        v15 = 34;
      }
      LODWORD(v16) = v4;
      WPP_RECORDER_SF_d(
        (__int64)v14->DeviceExtension,
        0,
        1u,
        v15,
        (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
        v16);
      return UsbhDecHubBusy((__int64)DeviceObject, v13, v7);
    }
    _InterlockedDecrement(&v6[114].Header.Lock);
    UsbhDecHubBusy((__int64)DeviceObject, v10, v7);
    result = UsbhPostInterrupt(DeviceObject);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v16) = v4;
      return WPP_RECORDER_SF_d(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               0,
               1u,
               0x23u,
               (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
               v16);
    }
  }
  return result;
}
