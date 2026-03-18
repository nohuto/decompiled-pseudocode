/*
 * XREFs of McTemplateK0 @ 0x1C0007ED0
 * Callers:
 *     Etw_EnableCallback @ 0x1C0001150 (Etw_EnableCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     McGenEventWriteKM @ 0x1C00074CC (McGenEventWriteKM.c)
 */

NTSTATUS __fastcall McTemplateK0(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-28h] BYREF

  return McGenEventWriteKM(a1, a2, a3, 1u, &v4);
}
