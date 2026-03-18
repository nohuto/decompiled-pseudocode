/*
 * XREFs of AslImageFileToArchitecture @ 0x14061F198
 * Callers:
 *     SdbpResolveMatchingFile @ 0x14061E914 (SdbpResolveMatchingFile.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x1407D84C8 (SdbpGetProcessHostGuestArchitectures.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AslImageFileToArchitecture(__int16 a1)
{
  __int64 v1; // rax

  v1 = 0LL;
  while ( word_14039C950[2 * v1 + 1] != a1 )
  {
    if ( (unsigned __int64)++v1 >= 4 )
      return 0xFFFFLL;
  }
  return word_14039C950[2 * v1];
}
