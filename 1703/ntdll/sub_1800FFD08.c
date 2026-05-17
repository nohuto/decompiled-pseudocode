/*
 * XREFs of sub_1800FFD08 @ 0x1800FFD08
 * Callers:
 *     sub_1800751BC @ 0x1800751BC (sub_1800751BC.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_1800FFD08(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD v9[8]; // [rsp+20h] [rbp-78h] BYREF

  memset(v9, 0, sizeof(v9));
  v9[4] = a1;
  HIWORD(v9[0]) = 4143;
  v9[5] = a2;
  v9[6] = a3;
  v9[7] = a4;
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
