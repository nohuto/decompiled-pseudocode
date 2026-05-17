/*
 * XREFs of sub_1800108D8 @ 0x1800108D8
 * Callers:
 *     sub_1800106C4 @ 0x1800106C4 (sub_1800106C4.c)
 *     sub_1800DEAD4 @ 0x1800DEAD4 (sub_1800DEAD4.c)
 * Callees:
 *     sub_18001094C @ 0x18001094C (sub_18001094C.c)
 *     RtlImageNtHeaderEx @ 0x180033760 (RtlImageNtHeaderEx.c)
 */

__int64 __fastcall sub_1800108D8(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax
  _QWORD v6[7]; // [rsp+40h] [rbp-38h] BYREF

  if ( a2 || (result = RtlImageNtHeaderEx(3LL, a1, 0LL, v6), (int)result >= 0) )
  {
    sub_18001094C(a1, a3);
    return 0LL;
  }
  return result;
}
