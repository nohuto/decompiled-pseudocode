/*
 * XREFs of sub_1800FFAA8 @ 0x1800FFAA8
 * Callers:
 *     sub_18000C540 @ 0x18000C540 (sub_18000C540.c)
 *     sub_18001BE98 @ 0x18001BE98 (sub_18001BE98.c)
 *     sub_18001C138 @ 0x18001C138 (sub_18001C138.c)
 *     sub_180021DA4 @ 0x180021DA4 (sub_180021DA4.c)
 *     sub_18002CC00 @ 0x18002CC00 (sub_18002CC00.c)
 *     sub_180078E44 @ 0x180078E44 (sub_180078E44.c)
 * Callees:
 *     sub_1800062F4 @ 0x1800062F4 (sub_1800062F4.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 *     sub_1800FD9BC @ 0x1800FD9BC (sub_1800FD9BC.c)
 */

__int64 __fastcall sub_1800FFAA8(__int64 a1)
{
  __int64 v3; // [rsp+68h] [rbp+17h] BYREF
  int v4; // [rsp+70h] [rbp+1Fh] BYREF
  __int64 v5; // [rsp+74h] [rbp+23h]

  v3 = 0LL;
  v4 = 0;
  v5 = sub_1800062F4(a1);
  sub_1800FD9BC(a1, &v3, &v4);
  return ZwTraceEvent();
}
