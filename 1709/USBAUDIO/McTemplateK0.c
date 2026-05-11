/*
 * XREFs of McTemplateK0 @ 0x1C0001954
 * Callers:
 *     DeviceStart @ 0x1C0013270 (DeviceStart.c)
 *     DeviceStop @ 0x1C0013450 (DeviceStop.c)
 * Callees:
 *     McGenEventWriteKM @ 0x1C000185C (McGenEventWriteKM.c)
 *     __security_check_cookie @ 0x1C0006850 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-28h] BYREF

  return McGenEventWriteKM(a1, a2, a3, 1u, &v4);
}
