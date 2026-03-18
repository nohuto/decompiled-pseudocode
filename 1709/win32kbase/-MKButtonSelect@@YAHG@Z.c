/*
 * XREFs of ?MKButtonSelect@@YAHG@Z @ 0x1C01179F0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionPostAccessibility @ 0x1C013AFC4 (ApiSetEditionPostAccessibility.c)
 */

__int64 __fastcall MKButtonSelect(__int16 a1)
{
  gwMKCurrentButton = a1;
  ApiSetEditionPostAccessibility(3LL);
  return 0LL;
}
