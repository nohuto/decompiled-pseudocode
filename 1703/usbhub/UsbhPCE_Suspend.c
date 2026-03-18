/*
 * XREFs of UsbhPCE_Suspend @ 0x1C002726C
 * Callers:
 *     UsbhBusSuspend_Action @ 0x1C0008F08 (UsbhBusSuspend_Action.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C0016310 (Usbh_PCE_Suspend_Action.c)
 *     UsbhSyncSuspendPdoPort @ 0x1C0018FE4 (UsbhSyncSuspendPdoPort.c)
 *     Usbh_PCE_ResumeDone_Action @ 0x1C0041B6C (Usbh_PCE_ResumeDone_Action.c)
 * Callees:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000FBC0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhGetPortData @ 0x1C0016C70 (UsbhGetPortData.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPCE_Suspend(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 PortData; // rax
  unsigned int v8; // [rsp+70h] [rbp+18h] BYREF
  __int64 v9; // [rsp+78h] [rbp+20h]

  v8 = -1073741667;
  FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      64,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      a3);
  Log(a1, 512, 1346711856, 0LL, a3);
  PortData = UsbhGetPortData(a1, a3);
  if ( PortData )
  {
    LODWORD(v9) = 0;
    UsbhDispatch_PortChangeQueueEventEx(a1, PortData, 10, a2, v9, 0, 0LL, (__int64)&v8);
  }
  return v8;
}
