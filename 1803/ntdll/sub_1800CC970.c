/*
 * XREFs of sub_1800CC970 @ 0x1800CC970
 * Callers:
 *     sub_1800CD0D8 @ 0x1800CD0D8 (sub_1800CD0D8.c)
 * Callees:
 *     RtlQueryPackageIdentity @ 0x18006D330 (RtlQueryPackageIdentity.c)
 *     sub_18006D6B4 @ 0x18006D6B4 (sub_18006D6B4.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_1800CC970(_WORD *a1)
{
  __int64 result; // rax
  __int64 v3; // [rsp+40h] [rbp-1B8h] BYREF
  __int64 v4; // [rsp+48h] [rbp-1B0h] BYREF
  _BYTE v5[144]; // [rsp+50h] [rbp-1A8h] BYREF
  _BYTE v6[256]; // [rsp+E0h] [rbp-118h] BYREF

  v3 = 132LL;
  v4 = 256LL;
  memset(v6, 0, sizeof(v6));
  memset(v5, 0, 0x84uLL);
  result = RtlQueryPackageIdentity(-4, (int)v6, (int)&v4, (int)v5, (__int64)&v3, 0LL);
  if ( (int)result >= 0 )
    return sub_18006D6B4(a1, 0x184uLL, 0LL, 0LL, 0, L"%s!%s", v6, v5, v3, v4);
  return result;
}
