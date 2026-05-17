/*
 * XREFs of RtlInitializeSidEx @ 0x1800475B0
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x180044060 (RtlCheckTokenMembershipEx.c)
 * Callees:
 *     RtlInitializeSid @ 0x180047610 (RtlInitializeSid.c)
 */

__int64 __fastcall RtlInitializeSidEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // bl
  __int64 result; // rax
  char *v7; // rcx
  _DWORD *v8; // rdx
  __int64 v9; // r8
  char v10; // [rsp+50h] [rbp+18h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h]

  v10 = a3;
  v11 = a4;
  v4 = a3;
  result = RtlInitializeSid(a1, a2, a3);
  if ( (int)result >= 0 )
  {
    if ( v4 )
    {
      v7 = &v10;
      v8 = (_DWORD *)(a1 + 8);
      v9 = v4;
      do
      {
        v7 += 8;
        *v8++ = *(_DWORD *)v7;
        --v9;
      }
      while ( v9 );
    }
    return 0LL;
  }
  return result;
}
