/*
 * XREFs of sub_18004773C @ 0x18004773C
 * Callers:
 *     sub_180047530 @ 0x180047530 (sub_180047530.c)
 *     sub_1800D8340 @ 0x1800D8340 (sub_1800D8340.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180010300 (RtlImageNtHeaderEx.c)
 *     sub_1800477EC @ 0x1800477EC (sub_1800477EC.c)
 */

__int64 __fastcall sub_18004773C(unsigned __int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax
  _QWORD v6[7]; // [rsp+40h] [rbp-38h] BYREF

  if ( a2 || (result = RtlImageNtHeaderEx(3, a1, 0LL, v6), (int)result >= 0) )
  {
    sub_1800477EC(a1, a3);
    return 0LL;
  }
  return result;
}
