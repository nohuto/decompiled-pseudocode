/*
 * XREFs of sub_180067730 @ 0x180067730
 * Callers:
 *     <none>
 * Callees:
 *     sub_180067F8C @ 0x180067F8C (sub_180067F8C.c)
 */

__int64 __fastcall sub_180067730(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  result = sub_180067F8C(a1, a2, &v5, 4LL);
  if ( (int)result >= 0 )
  {
    *a3 = v5;
    return (unsigned int)result;
  }
  return result;
}
