/*
 * XREFs of itrp_SetCompositeFlag @ 0x1C02DA5B4
 * Callers:
 *     fsg_SimpleInnerGridFit @ 0x1C02C86C8 (fsg_SimpleInnerGridFit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_SetCompositeFlag(_BYTE *a1, char a2)
{
  __int64 result; // rax

  result = 0LL;
  a1[341] = a2;
  if ( a2 || !a1[396] )
    result = 1LL;
  a1[397] = result;
  return result;
}
