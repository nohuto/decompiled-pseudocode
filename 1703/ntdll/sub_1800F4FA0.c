/*
 * XREFs of sub_1800F4FA0 @ 0x1800F4FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_1800F4FA0(LPCGUID a1, int a2)
{
  if ( a2 == 1 )
    byte_18015C3E1 = 1;
  else
    byte_18015C3E1 = a2 != 0 ? byte_18015C3E1 : 0;
}
