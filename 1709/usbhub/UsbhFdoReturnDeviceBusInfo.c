/*
 * XREFs of UsbhFdoReturnDeviceBusInfo @ 0x1C003F168
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0010A80 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     UsbhDecPdoIoCount @ 0x1C000A050 (UsbhDecPdoIoCount.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhGetDeviceBusInfo @ 0x1C003BFBC (UsbhGetDeviceBusInfo.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D59C (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall UsbhFdoReturnDeviceBusInfo(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  int DeviceBusInfo; // eax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      1u,
      0xAu,
      (__int64)&WPP_34fcbd4520f83f99299c6f44fc8177b4_Traceguids,
      a2);
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  PdoExt(a2);
  DeviceBusInfo = UsbhGetDeviceBusInfo(a1, a2, CurrentStackLocation->Parameters.Create.SecurityContext, 0x10u);
  a3->IoStatus.Status = DeviceBusInfo;
  LODWORD(CurrentStackLocation) = DeviceBusInfo;
  IofCompleteRequest(a3, 0);
  UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
  return (unsigned int)CurrentStackLocation;
}
