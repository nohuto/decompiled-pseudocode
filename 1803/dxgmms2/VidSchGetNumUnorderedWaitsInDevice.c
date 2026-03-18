/*
 * XREFs of VidSchGetNumUnorderedWaitsInDevice @ 0x1C007AAE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchGetNumUnorderedWaitsInDevice(__int64 a1)
{
  if ( a1 )
    return *(unsigned int *)(a1 + 1228);
  else
    return 0LL;
}
