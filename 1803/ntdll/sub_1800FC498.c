/*
 * XREFs of sub_1800FC498 @ 0x1800FC498
 * Callers:
 *     RtlDestroyHeap @ 0x18005D440 (RtlDestroyHeap.c)
 *     sub_18005F8D0 @ 0x18005F8D0 (sub_18005F8D0.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_1800FC498(__int64 a1)
{
  _QWORD v3[5]; // [rsp+20h] [rbp-38h] BYREF

  memset(v3, 0, sizeof(v3));
  v3[4] = a1;
  HIWORD(v3[0]) = 616;
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
