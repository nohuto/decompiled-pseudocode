/*
 * XREFs of McTemplateK0p @ 0x1401FEE2C
 * Callers:
 *     PiProcessNewDeviceNode @ 0x14052E48C (PiProcessNewDeviceNode.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14054C2A0 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQueryRelease @ 0x14054CEF8 (PiDqQueryRelease.c)
 * Callees:
 *     McGenEventWriteKM @ 0x140133874 (McGenEventWriteKM.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0p(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF
  va_list v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  va_copy(v5, va);
  v7 = 0;
  v6 = 8;
  return McGenEventWriteKM(MS_KernelPnP_Provider_Context, a2, a3, 2u, &v4);
}
