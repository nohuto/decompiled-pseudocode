/*
 * XREFs of sub_18003802C @ 0x18003802C
 * Callers:
 *     sub_18003697C @ 0x18003697C (sub_18003697C.c)
 *     sub_18005A0E4 @ 0x18005A0E4 (sub_18005A0E4.c)
 * Callees:
 *     sub_18002FC7C @ 0x18002FC7C (sub_18002FC7C.c)
 */

__int64 __fastcall sub_18003802C(void *a1, ULONG *a2, unsigned __int64 a3, unsigned int a4, char a5)
{
  ULONG *v7; // rax
  __int64 result; // rax
  unsigned int *v9; // r8
  __int64 v10; // rdx
  ULONG *v11; // [rsp+30h] [rbp+8h] BYREF

  v7 = a2;
  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( !a5 )
  {
    result = sub_18002FC7C(a1, a2, &v11, 0LL);
    if ( (int)result < 0 )
      return result;
    v7 = v11;
  }
  v9 = v7 + 1;
  v10 = *v7;
  if ( a5 && 12 * v10 + 4 > a3 )
    return 3221225595LL;
  while ( (_DWORD)v10 )
  {
    LODWORD(v10) = v10 - 1;
    if ( a4 >= *v9 && a4 <= v9[1] )
      return 0LL;
    v9 += 3;
  }
  return 3221225737LL;
}
