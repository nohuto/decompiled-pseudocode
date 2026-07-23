/*
 * XREFs of sub_1800F2530 @ 0x1800F2530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_1800F2530(LPCGUID a1, int a2)
{
  if ( a2 == 1 )
    byte_18015D434 = 1;
  else
    byte_18015D434 = a2 != 0 ? byte_18015D434 : 0;
}
