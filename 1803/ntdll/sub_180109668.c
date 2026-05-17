/*
 * XREFs of sub_180109668 @ 0x180109668
 * Callers:
 *     sub_18002D890 @ 0x18002D890 (sub_18002D890.c)
 *     sub_180070DBC @ 0x180070DBC (sub_180070DBC.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18003F6D0 (RtlInitUnicodeStringEx.c)
 *     LdrLoadDll @ 0x180041BB0 (LdrLoadDll.c)
 *     LdrGetDllHandleEx @ 0x180041D20 (LdrGetDllHandleEx.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     sub_1801094D4 @ 0x1801094D4 (sub_1801094D4.c)
 *     sub_1801095D4 @ 0x1801095D4 (sub_1801095D4.c)
 */

__int64 __fastcall sub_180109668(_WORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // [rsp+30h] [rbp-A38h] BYREF
  _BYTE v6[24]; // [rsp+38h] [rbp-A30h] BYREF
  _WORD v7[256]; // [rsp+50h] [rbp-A18h] BYREF
  unsigned __int16 v8[1024]; // [rsp+250h] [rbp-818h] BYREF

  v3 = 0LL;
  if ( a1
    && (unsigned int)sub_1801095D4(a1, v7, a3, v8)
    && (int)RtlInitUnicodeStringEx((__int64)v6, (__int64)v7) >= 0
    && ((int)LdrGetDllHandleEx(1, 1LL, 0LL, (__int64)v6, &v5) >= 0 || (int)LdrLoadDll(0LL, 0LL, (__int64)v6, &v5) >= 0) )
  {
    return sub_1801094D4(v5, v8);
  }
  return v3;
}
