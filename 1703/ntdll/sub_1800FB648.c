/*
 * XREFs of sub_1800FB648 @ 0x1800FB648
 * Callers:
 *     sub_1800FB4E4 @ 0x1800FB4E4 (sub_1800FB4E4.c)
 * Callees:
 *     sub_1800FBD34 @ 0x1800FBD34 (sub_1800FBD34.c)
 */

__int64 __fastcall sub_1800FB648(unsigned __int16 *a1, __int64 a2, int a3, char a4)
{
  int v5; // r10d
  int v6; // r8d
  int v7; // edx
  int v8; // r8d
  int v9; // eax

  if ( a1 )
  {
    v5 = a1[2];
    v6 = 16;
    v7 = a1[3] + 1;
    if ( a3 >= 0 )
      v6 = a3;
    v8 = a1[5] + v6;
    v9 = a1[4];
    if ( v7 < v5 )
      v7 = a1[2];
    if ( v8 < v9 )
      v8 = a1[4];
    if ( a4 || v7 != v5 || v8 != v9 )
      return sub_1800FBD34(a1);
  }
  return (__int64)a1;
}
