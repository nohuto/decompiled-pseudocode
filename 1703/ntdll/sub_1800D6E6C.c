/*
 * XREFs of sub_1800D6E6C @ 0x1800D6E6C
 * Callers:
 *     sub_1800912E0 @ 0x1800912E0 (sub_1800912E0.c)
 * Callees:
 *     RtlQueryPackageIdentity @ 0x180061980 (RtlQueryPackageIdentity.c)
 *     sub_180061D0C @ 0x180061D0C (sub_180061D0C.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_1800D6E6C(_WORD *a1)
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
    return sub_180061D0C(a1, 0x184uLL, 0LL, 0LL, 0, L"%s!%s", v6, v5, v3, v4);
  return result;
}
