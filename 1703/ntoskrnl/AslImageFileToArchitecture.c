/*
 * XREFs of AslImageFileToArchitecture @ 0x1405BC00C
 * Callers:
 *     SdbpResolveMatchingFile @ 0x1405BB78C (SdbpResolveMatchingFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AslImageFileToArchitecture(__int16 a1)
{
  __int64 v1; // rax

  v1 = 0LL;
  while ( word_140340600[2 * v1 + 1] != a1 )
  {
    if ( (unsigned __int64)++v1 >= 4 )
      return 0xFFFFLL;
  }
  return word_140340600[2 * v1];
}
