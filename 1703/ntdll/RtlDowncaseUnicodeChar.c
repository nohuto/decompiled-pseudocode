/*
 * XREFs of RtlDowncaseUnicodeChar @ 0x1800E9970
 * Callers:
 *     RtlFindCharInUnicodeString @ 0x1800401C0 (RtlFindCharInUnicodeString.c)
 * Callees:
 *     <none>
 */

WCHAR __cdecl RtlDowncaseUnicodeChar(WCHAR SourceCharacter)
{
  if ( SourceCharacter < 0x41u )
    return SourceCharacter;
  if ( SourceCharacter > 0x5Au )
    return SourceCharacter
         + *(_WORD *)(qword_18015A1E8
                    + 2LL
                    * ((SourceCharacter & 0xF)
                     + (unsigned int)*(unsigned __int16 *)(qword_18015A1E8
                                                         + 2LL
                                                         * (((SourceCharacter >> 4) & 0xF)
                                                          + (unsigned int)*(unsigned __int16 *)(qword_18015A1E8
                                                                                              + 2
                                                                                              * ((unsigned __int64)SourceCharacter >> 8))))));
  return SourceCharacter + 32;
}
