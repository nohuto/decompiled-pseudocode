/*
 * XREFs of RtlFindMessage @ 0x180069F10
 * Callers:
 *     <none>
 * Callees:
 *     LdrAccessResource_0 @ 0x180010F9C (LdrAccessResource_0.c)
 *     sub_180032DB4 @ 0x180032DB4 (sub_180032DB4.c)
 *     sub_180069FBC @ 0x180069FBC (sub_180069FBC.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlFindMessage(unsigned __int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  __int64 result; // rax
  unsigned int *v8; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v10[4]; // [rsp+40h] [rbp-38h] BYREF

  v10[0] = a2;
  v10[2] = a3;
  v10[1] = 1LL;
  v10[3] = a4;
  result = sub_180032DB4(a1, (__int64)v10, 4u, 0x40u, (__int64 *)&v8);
  if ( (int)result >= 0 )
  {
    result = LdrAccessResource_0(a1, v8, &v9, 0LL);
    if ( (int)result >= 0 )
      return sub_180069FBC(v9, a4, a5);
  }
  return result;
}
