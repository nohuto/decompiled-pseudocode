/*
 * XREFs of itrp_SetSameTransformFlag @ 0x1C02DA82C
 * Callers:
 *     fsg_CompositeInnerGridFit @ 0x1C02C694C (fsg_CompositeInnerGridFit.c)
 *     fsg_MergeGlyphData @ 0x1C02C7F5C (fsg_MergeGlyphData.c)
 *     fsg_SimpleInnerGridFit @ 0x1C02C86C8 (fsg_SimpleInnerGridFit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_SetSameTransformFlag(_BYTE *a1, char a2)
{
  __int64 result; // rax

  result = 0LL;
  a1[396] = a2;
  if ( a1[341] || !a2 )
    result = 1LL;
  a1[397] = result;
  return result;
}
