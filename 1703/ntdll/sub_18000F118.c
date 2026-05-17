/*
 * XREFs of sub_18000F118 @ 0x18000F118
 * Callers:
 *     sub_18000EF18 @ 0x18000EF18 (sub_18000EF18.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000F118(unsigned int a1, unsigned int a2, char a3, int a4)
{
  char v5; // dl
  char v6; // cl

  v5 = a3 - 1;
  if ( a1 >= 0x100 )
    v5 = a3;
  v6 = v5 - 1;
  if ( !a4 )
    v6 = v5;
  if ( a2 < 1 << (3 - v6) )
    a2 = 1 << (3 - v6);
  if ( a2 < 4 )
    a2 = 4;
  if ( a2 > 0x400 )
    return 1024;
  return a2;
}
