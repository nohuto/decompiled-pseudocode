/*
 * XREFs of McTemplateK0j @ 0x14023B648
 * Callers:
 *     PpCheckInDriverDatabase @ 0x1405FBC08 (PpCheckInDriverDatabase.c)
 * Callees:
 *     McGenEventWriteKM @ 0x14014761C (McGenEventWriteKM.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0j(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-38h] BYREF
  __int64 v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]

  v8 = 0;
  v6 = a4;
  v7 = 16;
  return McGenEventWriteKM(MS_KernelPnP_Provider_Context, &KMPnPEvt_Driver_Blocked, 0LL, 2u, &v5);
}
