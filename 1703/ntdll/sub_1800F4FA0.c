/*
 * XREFs of sub_1800F4FA0 @ 0x1800F4FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall sub_1800F4FA0(__int64 a1, int a2)
{
  char result; // al

  if ( a2 == 1 )
  {
    byte_18015C3E1 = 1;
  }
  else
  {
    result = -(a2 != 0);
    byte_18015C3E1 &= result;
  }
  return result;
}
