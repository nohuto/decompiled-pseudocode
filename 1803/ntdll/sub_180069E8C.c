/*
 * XREFs of sub_180069E8C @ 0x180069E8C
 * Callers:
 *     sub_180033EB8 @ 0x180033EB8 (sub_180033EB8.c)
 *     sub_1800515C0 @ 0x1800515C0 (sub_1800515C0.c)
 * Callees:
 *     sub_180010CB4 @ 0x180010CB4 (sub_180010CB4.c)
 */

__int64 __fastcall sub_180069E8C(unsigned __int64 a1, ULONG *a2, unsigned __int64 a3, unsigned int a4, char a5)
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
    result = sub_180010CB4(a1, a2, (unsigned __int64 *)&v11, 0LL);
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
