/*
 * XREFs of sub_1800973C8 @ 0x1800973C8
 * Callers:
 *     _vscwprintf @ 0x1800973B0 (_vscwprintf.c)
 * Callees:
 *     sub_180095DE0 @ 0x180095DE0 (sub_180095DE0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800973C8(__int64 (__fastcall *a1)(__int64 *), __int64 a2)
{
  __int64 v3; // [rsp+30h] [rbp-38h] BYREF
  int v4; // [rsp+38h] [rbp-30h]
  __int64 v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+48h] [rbp-20h]

  if ( a2 )
  {
    v5 = 0LL;
    v3 = 0LL;
    v4 = 0x7FFFFFFF;
    v6 = 66;
    return a1(&v3);
  }
  else
  {
    sub_180095DE0();
    return 0xFFFFFFFFLL;
  }
}
