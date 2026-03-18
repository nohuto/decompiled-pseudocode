/*
 * XREFs of Template_p @ 0x1401F9090
 * Callers:
 *     PiDqObjectManagerServiceActionQueue @ 0x1404B8940 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQueryRelease @ 0x1404B8DE0 (PiDqQueryRelease.c)
 *     PiProcessNewDeviceNode @ 0x1404DC8A4 (PiProcessNewDeviceNode.c)
 * Callees:
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

NTSTATUS Template_p(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+40h] [rbp-28h] BYREF
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  va_copy((va_list)v4.Ptr, va);
  v4.Reserved = 0;
  v4.Size = 8;
  return EtwWriteEx(Microsoft_Windows_Kernel_PnPHandle, a2, 0LL, 0, a3, 0LL, 1u, &v4);
}
