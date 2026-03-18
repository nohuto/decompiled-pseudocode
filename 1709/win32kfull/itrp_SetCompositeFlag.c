/*
 * XREFs of itrp_SetCompositeFlag @ 0x1C02D4274
 * Callers:
 *     fsg_SimpleInnerGridFit @ 0x1C02C24D0 (fsg_SimpleInnerGridFit.c)
 * Callees:
 *     <none>
 */

char __fastcall itrp_SetCompositeFlag(_BYTE *a1, char a2)
{
  char result; // al

  result = 0;
  a1[341] = a2;
  if ( a2 || !a1[396] )
    result = 1;
  a1[397] = result;
  return result;
}
