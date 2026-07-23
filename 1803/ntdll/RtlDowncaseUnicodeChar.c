/*
 * XREFs of RtlDowncaseUnicodeChar @ 0x1800E4AB0
 * Callers:
 *     RtlFindCharInUnicodeString @ 0x18003F370 (RtlFindCharInUnicodeString.c)
 * Callees:
 *     <none>
 */

WCHAR __cdecl RtlDowncaseUnicodeChar(WCHAR SourceCharacter)
{
  if ( SourceCharacter < 0x41u )
    return SourceCharacter;
  if ( SourceCharacter > 0x5Au )
    return SourceCharacter
         + *(_WORD *)(qword_18015B228
                    + 2LL
                    * ((SourceCharacter & 0xF)
                     + (unsigned int)*(unsigned __int16 *)(qword_18015B228
                                                         + 2LL
                                                         * (((SourceCharacter >> 4) & 0xF)
                                                          + (unsigned int)*(unsigned __int16 *)(qword_18015B228
                                                                                              + 2
                                                                                              * ((unsigned __int64)SourceCharacter >> 8))))));
  return SourceCharacter + 32;
}
