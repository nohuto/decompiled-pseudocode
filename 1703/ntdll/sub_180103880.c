/*
 * XREFs of sub_180103880 @ 0x180103880
 * Callers:
 *     sub_1800A9D90 @ 0x1800A9D90 (sub_1800A9D90.c)
 *     RtlExecuteUmsThread @ 0x1800F2840 (RtlExecuteUmsThread.c)
 * Callees:
 *     sub_180068DC0 @ 0x180068DC0 (sub_180068DC0.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwContinue @ 0x1800A5B60 (ZwContinue.c)
 */

__int64 __fastcall sub_180103880(__int64 a1)
{
  _BYTE v2[1232]; // [rsp+20h] [rbp-4E8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  sub_180068DC0(a1, (__int64)v2, 1048592);
  return ZwContinue();
}
