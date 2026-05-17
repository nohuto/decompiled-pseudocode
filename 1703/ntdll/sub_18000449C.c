/*
 * XREFs of sub_18000449C @ 0x18000449C
 * Callers:
 *     sub_180069760 @ 0x180069760 (sub_180069760.c)
 *     sub_18006AAE8 @ 0x18006AAE8 (sub_18006AAE8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000449C(int a1, int a2, char a3)
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
