/*
 * XREFs of sub_1800F2530 @ 0x1800F2530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall sub_1800F2530(__int64 a1, int a2)
{
  char result; // al

  if ( a2 == 1 )
  {
    byte_18015D434 = 1;
  }
  else
  {
    result = -(a2 != 0);
    byte_18015D434 &= result;
  }
  return result;
}
