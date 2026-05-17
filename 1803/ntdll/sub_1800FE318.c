/*
 * XREFs of sub_1800FE318 @ 0x1800FE318
 * Callers:
 *     sub_18001BDD0 @ 0x18001BDD0 (sub_18001BDD0.c)
 *     sub_18002A508 @ 0x18002A508 (sub_18002A508.c)
 *     sub_18002A7C8 @ 0x18002A7C8 (sub_18002A7C8.c)
 *     sub_180059FA8 @ 0x180059FA8 (sub_180059FA8.c)
 *     sub_18005CA3C @ 0x18005CA3C (sub_18005CA3C.c)
 *     sub_18007488C @ 0x18007488C (sub_18007488C.c)
 * Callees:
 *     sub_180060CFC @ 0x180060CFC (sub_180060CFC.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 *     sub_1800FBF9C @ 0x1800FBF9C (sub_1800FBF9C.c)
 */

__int64 __fastcall sub_1800FE318(__int64 a1)
{
  __int64 v3; // [rsp+68h] [rbp+17h] BYREF
  int v4; // [rsp+70h] [rbp+1Fh] BYREF
  __int64 v5; // [rsp+74h] [rbp+23h]

  v3 = 0LL;
  v4 = 0;
  v5 = sub_180060CFC(a1);
  sub_1800FBF9C(a1, &v3, &v4);
  return ZwTraceEvent();
}
