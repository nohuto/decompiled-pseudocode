/*
 * XREFs of UsbhPCE_HW_Stop @ 0x1C0040828
 * Callers:
 *     UsbhHubProcessIsr @ 0x1C0013F10 (UsbhHubProcessIsr.c)
 *     UsbhBusPnpStop_Action @ 0x1C003E56C (UsbhBusPnpStop_Action.c)
 * Callees:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000FBC0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhGetPortData @ 0x1C0016C70 (UsbhGetPortData.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003C218 (WPP_RECORDER_SF_dq.c)
 */

void __fastcall UsbhPCE_HW_Stop(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 PortData; // rax
  int v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+68h] [rbp+20h]

  FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v9 = a2;
    WPP_RECORDER_SF_dq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v6,
      v7,
      0x44u,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      v9,
      a3);
  }
  Log(a1, 512, 1346711863, 0LL, a2);
  PortData = UsbhGetPortData(a1, a2);
  if ( PortData )
  {
    LODWORD(v10) = 0;
    UsbhDispatch_PortChangeQueueEventEx(a1, PortData, 17, a3, v10, 0, 0LL, 0LL);
  }
  UsbhReleaseEnumBusLockEx(a1, a3, a2);
}
