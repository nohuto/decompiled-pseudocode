/*
 * XREFs of sub_1801041E0 @ 0x1801041E0
 * Callers:
 *     sub_18009F6B0 @ 0x18009F6B0 (sub_18009F6B0.c)
 *     RtlExecuteUmsThread @ 0x1800EF8F0 (RtlExecuteUmsThread.c)
 * Callees:
 *     sub_180086454 @ 0x180086454 (sub_180086454.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwContinue @ 0x18009B320 (ZwContinue.c)
 */

__int64 __fastcall sub_1801041E0(__int64 a1)
{
  _BYTE v2[1232]; // [rsp+20h] [rbp-4E8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  sub_180086454(a1, (__int64)v2, 1048592);
  return ZwContinue();
}
