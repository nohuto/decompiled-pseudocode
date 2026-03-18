/*
 * XREFs of UsbhPCE_wChangeERROR @ 0x1C0041D04
 * Callers:
 *     UsbhHubRunPortChangeQueue @ 0x1C000E060 (UsbhHubRunPortChangeQueue.c)
 * Callees:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000ED90 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D4D4 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall UsbhPCE_wChangeERROR(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v10; // rdx
  __int64 v11; // r8
  int v13; // [rsp+28h] [rbp-20h]

  FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v13 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_dq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v10,
      v11,
      0x48u,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      v13,
      a4);
  }
  Log(a1, 512, 1346712115, 0LL, *(unsigned __int16 *)(a2 + 4));
  return UsbhDispatch_PortChangeQueueEventEx(a1, a2, 23LL, a4, a3, a5, a6, 0LL);
}
