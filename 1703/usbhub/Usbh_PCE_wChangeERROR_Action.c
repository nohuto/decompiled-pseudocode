/*
 * XREFs of Usbh_PCE_wChangeERROR_Action @ 0x1C0042290
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000FBC0 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhSignalResumeEvent @ 0x1C0007C30 (UsbhSignalResumeEvent.c)
 *     UsbhSignalDriverResetEvent @ 0x1C0007D84 (UsbhSignalDriverResetEvent.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0008C10 (UsbhUnlockPcqWithTag.c)
 *     UsbhSignalSyncDeviceResetPdo @ 0x1C0008E44 (UsbhSignalSyncDeviceResetPdo.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhLockPcqWithTag @ 0x1C0025430 (UsbhLockPcqWithTag.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003C218 (WPP_RECORDER_SF_dq.c)
 *     UsbhSignalSuspendEvent @ 0x1C0041390 (UsbhSignalSuspendEvent.c)
 */

void __fastcall Usbh_PCE_wChangeERROR_Action(__int64 a1, __int64 a2, __int64 a3, int a4, KIRQL a5, __int64 a6)
{
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // [rsp+28h] [rbp-20h]

  FdoExt(a1);
  Log(a1, 512, 842231856, a2, *(unsigned __int16 *)(a2 + 4));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v13 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_dq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v10,
      v11,
      0x2Eu,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      v13,
      a3);
  }
  UsbhLockPcqWithTag(a1, a2, 23, &a5, 0);
  UsbhUnlockPcqWithTag(a1, a2, a5);
  if ( (a4 & 0x100000) != 0 )
    UsbhSignalResumeEvent(a1, a2);
  if ( (a4 & 0x40000) != 0 )
    UsbhSignalSuspendEvent(a1, a2);
  if ( (a4 & 0x20000) != 0 )
  {
    Log(a1, 512, 842231857, a6, *(unsigned __int16 *)(a2 + 4));
    UsbhSignalSyncDeviceResetPdo(a1, v12, -1073741810);
    UsbhSignalDriverResetEvent(a1, a2);
  }
}
