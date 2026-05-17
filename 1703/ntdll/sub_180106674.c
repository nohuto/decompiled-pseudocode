/*
 * XREFs of sub_180106674 @ 0x180106674
 * Callers:
 *     sub_180039480 @ 0x180039480 (sub_180039480.c)
 *     sub_1800768AC @ 0x1800768AC (sub_1800768AC.c)
 * Callees:
 *     LdrLoadDll @ 0x18003AED0 (LdrLoadDll.c)
 *     LdrGetDllHandleEx @ 0x18003BF00 (LdrGetDllHandleEx.c)
 *     RtlInitUnicodeStringEx @ 0x180040170 (RtlInitUnicodeStringEx.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sub_1801064D4 @ 0x1801064D4 (sub_1801064D4.c)
 *     sub_1801065D4 @ 0x1801065D4 (sub_1801065D4.c)
 */

__int64 __fastcall sub_180106674(_WORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // [rsp+30h] [rbp-A38h] BYREF
  _BYTE v6[24]; // [rsp+38h] [rbp-A30h] BYREF
  _WORD v7[256]; // [rsp+50h] [rbp-A18h] BYREF
  unsigned __int16 v8[1024]; // [rsp+250h] [rbp-818h] BYREF

  v3 = 0LL;
  if ( a1
    && (unsigned int)sub_1801065D4(a1, v7, a3, v8)
    && (int)RtlInitUnicodeStringEx((__int64)v6, (__int64)v7) >= 0
    && ((int)LdrGetDllHandleEx(1, 1LL, 0LL, (__int64)v6, &v5) >= 0 || (int)LdrLoadDll(0LL, 0LL, (__int64)v6, &v5) >= 0) )
  {
    return sub_1801064D4(v5, v8);
  }
  return v3;
}
