/*
 * XREFs of UsbhDispatch_PortChangeQueueNullEventEx @ 0x1C000E190
 * Callers:
 *     UsbhHubRunPortChangeQueue @ 0x1C000F560 (UsbhHubRunPortChangeQueue.c)
 * Callees:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000FBC0 (UsbhDispatch_PortChangeQueueEventEx.c)
 */

__int64 __fastcall UsbhDispatch_PortChangeQueueNullEventEx(int a1, int a2, int a3, int a4, __int64 a5)
{
  int v6; // [rsp+40h] [rbp-18h]

  v6 = 0;
  return UsbhDispatch_PortChangeQueueEventEx(a1, a2, a3, a4, v6, 0, 0LL, a5);
}
