/*
 * XREFs of UsbhPCE_Close @ 0x1C0041328
 * Callers:
 *     UsbhBusPnpStop_Action @ 0x1C003F41C (UsbhBusPnpStop_Action.c)
 *     Usbh_PCE_Close_Action @ 0x1C00424FC (Usbh_PCE_Close_Action.c)
 * Callees:
 *     UsbhReleaseEnumBusLockEx @ 0x1C000A898 (UsbhReleaseEnumBusLockEx.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000ED90 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D4D4 (WPP_RECORDER_SF_dq.c)
 */

void __fastcall UsbhPCE_Close(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+58h] [rbp+10h]

  FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v8 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_dq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v6,
      v7,
      0x43u,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      v8,
      a3);
  }
  Log(a1, 512, 1346712114, 0LL, *(unsigned __int16 *)(a2 + 4));
  LODWORD(v9) = 0;
  UsbhDispatch_PortChangeQueueEventEx(a1, a2, 22LL, a3, v9, 0, 0LL, 0LL);
  UsbhReleaseEnumBusLockEx(a1, a2 + 24, *(_WORD *)(a2 + 4));
}
