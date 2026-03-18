/*
 * XREFs of UsbhPCE_psSUSPEND @ 0x1C0027594
 * Callers:
 *     UsbhHubRunPortChangeQueue @ 0x1C000E060 (UsbhHubRunPortChangeQueue.c)
 * Callees:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000ED90 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D4D4 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall UsbhPCE_psSUSPEND(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // edx
  int v7; // r8d
  __int64 v9; // [rsp+58h] [rbp+10h]

  FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      v7,
      70,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      *(_WORD *)(a2 + 4),
      a3);
  Log(a1, 512, 1346711864, 0LL, *(unsigned __int16 *)(a2 + 4));
  LODWORD(v9) = 0;
  return UsbhDispatch_PortChangeQueueEventEx(a1, a2, 18LL, a3, v9, 0, 0LL, 0LL);
}
