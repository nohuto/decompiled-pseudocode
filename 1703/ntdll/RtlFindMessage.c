/*
 * XREFs of RtlFindMessage @ 0x180037F80
 * Callers:
 *     <none>
 * Callees:
 *     sub_180035838 @ 0x180035838 (sub_180035838.c)
 *     sub_1800380AC @ 0x1800380AC (sub_1800380AC.c)
 *     LdrAccessResource_0 @ 0x1800380F8 (LdrAccessResource_0.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 */

__int64 __fastcall RtlFindMessage(unsigned __int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v8; // [rsp+30h] [rbp-48h] BYREF
  __int64 v9; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v10[4]; // [rsp+40h] [rbp-38h] BYREF

  v10[0] = a2;
  v10[2] = a3;
  v10[1] = 1LL;
  v10[3] = a4;
  result = sub_180035838(a1, (__int64)v10, 4u, 0x40u, &v8);
  if ( (int)result >= 0 )
  {
    result = LdrAccessResource_0(a1, v8, &v9, 0LL);
    if ( (int)result >= 0 )
      return sub_1800380AC(v9, a4, a5);
  }
  return result;
}
