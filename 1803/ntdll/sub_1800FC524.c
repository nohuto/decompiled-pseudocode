/*
 * XREFs of sub_1800FC524 @ 0x1800FC524
 * Callers:
 *     sub_1800150A0 @ 0x1800150A0 (sub_1800150A0.c)
 *     RtlDestroyHeap @ 0x18005D440 (RtlDestroyHeap.c)
 *     sub_18005D664 @ 0x18005D664 (sub_18005D664.c)
 *     sub_180062960 @ 0x180062960 (sub_180062960.c)
 *     sub_1800631EC @ 0x1800631EC (sub_1800631EC.c)
 *     sub_180105468 @ 0x180105468 (sub_180105468.c)
 *     sub_1801055C8 @ 0x1801055C8 (sub_1801055C8.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_1800FC524(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v7[7]; // [rsp+20h] [rbp-58h] BYREF

  memset(v7, 0, sizeof(v7));
  v7[4] = a1;
  HIWORD(v7[0]) = 615;
  v7[5] = a2;
  v7[6] = a3;
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
