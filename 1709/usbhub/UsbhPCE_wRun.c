/*
 * XREFs of UsbhPCE_wRun @ 0x1C0007C44
 * Callers:
 *     UsbhWaitEventWithTimeoutEx @ 0x1C0013490 (UsbhWaitEventWithTimeoutEx.c)
 * Callees:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000ED90 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 */

LONG __fastcall UsbhPCE_wRun(__int64 a1, int a2, __int64 a3)
{
  int v5; // edi
  __int64 v7; // [rsp+60h] [rbp+18h]

  v5 = a1;
  FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      57,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      *(_WORD *)(a3 + 4));
  LODWORD(v7) = 0;
  UsbhDispatch_PortChangeQueueEventEx(v5, a3, 5, a2, v7, 0, 0LL, 0LL);
  return KeSetEvent((PRKEVENT)(a3 + 2464), 0, 0);
}
