/*
 * XREFs of McTemplateK0 @ 0x1C002DD28
 * Callers:
 *     VidSchEnableLatencyToleranceTimer @ 0x1C002E7E0 (VidSchEnableLatencyToleranceTimer.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     McGenEventWriteKM @ 0x1C0023E78 (McGenEventWriteKM.c)
 */

NTSTATUS __fastcall McTemplateK0(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-28h] BYREF

  return McGenEventWriteKM(&DxgkControlGuid_Context, a2, a3, 1u, &v4);
}
