/*
 * XREFs of RtlUpcaseUnicodeChar @ 0x180040920
 * Callers:
 *     sub_18003D640 @ 0x18003D640 (sub_18003D640.c)
 *     sub_180040650 @ 0x180040650 (sub_180040650.c)
 *     sub_18004D42C @ 0x18004D42C (sub_18004D42C.c)
 *     towupper @ 0x180090BD0 (towupper.c)
 *     sub_1800D81E8 @ 0x1800D81E8 (sub_1800D81E8.c)
 * Callees:
 *     <none>
 */

WCHAR __cdecl RtlUpcaseUnicodeChar(WCHAR SourceCharacter)
{
  if ( SourceCharacter < 0x61u )
    return SourceCharacter;
  if ( SourceCharacter > 0x7Au )
    return SourceCharacter
         + *(_WORD *)(qword_18015B238
                    + 2LL
                    * ((SourceCharacter & 0xF)
                     + (unsigned int)*(unsigned __int16 *)(qword_18015B238
                                                         + 2LL
                                                         * (((SourceCharacter >> 4) & 0xF)
                                                          + (unsigned int)*(unsigned __int16 *)(qword_18015B238
                                                                                              + 2
                                                                                              * ((unsigned __int64)SourceCharacter >> 8))))));
  return SourceCharacter - 32;
}
