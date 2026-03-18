/*
 * XREFs of WdipSemSqmInit @ 0x1405CA43C
 * Callers:
 *     WdipSemStartTimeoutCheck @ 0x1405CA3B0 (WdipSemStartTimeoutCheck.c)
 * Callees:
 *     RtlLengthSid @ 0x140088130 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     WdipSemWriteEvent @ 0x140467B20 (WdipSemWriteEvent.c)
 */

NTSTATUS WdipSemSqmInit()
{
  ULONG v0; // eax
  __int64 v1; // rcx
  int v3; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-40h] BYREF
  PSID v5; // [rsp+48h] [rbp-30h]
  ULONG v6; // [rsp+50h] [rbp-28h]
  int v7; // [rsp+54h] [rbp-24h]

  v4.Reserved = 0;
  v4.Ptr = (ULONGLONG)&v3;
  v5 = SeLocalSystemSid;
  v3 = 1;
  v4.Size = 4;
  v0 = RtlLengthSid(SeLocalSystemSid);
  v7 = 0;
  v6 = v0;
  return WdipSemWriteEvent(v1, (const EVENT_DESCRIPTOR *)L"+", 0LL, 2u, &v4);
}
