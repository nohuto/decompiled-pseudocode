/*
 * XREFs of sub_180003160 @ 0x180003160
 * Callers:
 *     sub_180067ACC @ 0x180067ACC (sub_180067ACC.c)
 *     sub_180068ED0 @ 0x180068ED0 (sub_180068ED0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180003160(int a1, int a2, char a3)
{
  int v3; // r9d
  int v4; // r8d
  int i; // r8d

  v3 = 0;
  if ( a3 )
    v4 = a1 / 700;
  else
    v4 = a1 / 2;
  for ( i = v4 / a2 + v4; i > 455; i /= 35 )
    v3 += 36;
  return (unsigned int)(v3 + 36 * i / (i + 38));
}
