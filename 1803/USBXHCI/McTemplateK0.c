/*
 * XREFs of McTemplateK0 @ 0x1C00368A4
 * Callers:
 *     Etw_EnableCallback @ 0x1C0001150 (Etw_EnableCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     McGenEventWriteKM @ 0x1C000D034 (McGenEventWriteKM.c)
 */

NTSTATUS __fastcall McTemplateK0(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-28h] BYREF

  return McGenEventWriteKM(a1, a2, a3, 1u, &v4);
}
