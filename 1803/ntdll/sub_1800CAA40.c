/*
 * XREFs of sub_1800CAA40 @ 0x1800CAA40
 * Callers:
 *     <none>
 * Callees:
 *     sub_180077D2C @ 0x180077D2C (sub_180077D2C.c)
 */

__int64 __fastcall sub_1800CAA40(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  result = sub_180077D2C(a1, a2, (__int64)&v5, 4LL);
  if ( (int)result >= 0 )
  {
    *a3 = v5;
    return (unsigned int)result;
  }
  return result;
}
