/*
 * XREFs of sub_1800FE14C @ 0x1800FE14C
 * Callers:
 *     sub_1800128F0 @ 0x1800128F0 (sub_1800128F0.c)
 *     sub_1800150A0 @ 0x1800150A0 (sub_1800150A0.c)
 *     sub_18005CC10 @ 0x18005CC10 (sub_18005CC10.c)
 * Callees:
 *     sub_180060CFC @ 0x180060CFC (sub_180060CFC.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 *     sub_1800FBF9C @ 0x1800FBF9C (sub_1800FBF9C.c)
 */

__int64 __fastcall sub_1800FE14C(__int64 a1)
{
  __int64 v3; // [rsp+68h] [rbp+7h] BYREF
  int v4; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v5; // [rsp+74h] [rbp+13h]

  v3 = 0LL;
  v4 = 0;
  v5 = sub_180060CFC(a1);
  sub_1800FBF9C(a1, &v3, &v4);
  return ZwTraceEvent();
}
