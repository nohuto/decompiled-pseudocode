/*
 * XREFs of RtlUpcaseUnicodeChar @ 0x18004A690
 * Callers:
 *     sub_18003E520 @ 0x18003E520 (sub_18003E520.c)
 *     sub_18004A3B4 @ 0x18004A3B4 (sub_18004A3B4.c)
 *     sub_1800727DC @ 0x1800727DC (sub_1800727DC.c)
 *     towupper @ 0x18009B8F0 (towupper.c)
 *     sub_1800DE988 @ 0x1800DE988 (sub_1800DE988.c)
 * Callees:
 *     <none>
 */

WCHAR __cdecl RtlUpcaseUnicodeChar(WCHAR SourceCharacter)
{
  if ( SourceCharacter < 0x61u )
    return SourceCharacter;
  if ( SourceCharacter > 0x7Au )
    return SourceCharacter
         + *(_WORD *)(qword_180159D68
                    + 2LL
                    * ((SourceCharacter & 0xF)
                     + (unsigned int)*(unsigned __int16 *)(qword_180159D68
                                                         + 2LL
                                                         * (((SourceCharacter >> 4) & 0xF)
                                                          + (unsigned int)*(unsigned __int16 *)(qword_180159D68
                                                                                              + 2
                                                                                              * ((unsigned __int64)SourceCharacter >> 8))))));
  return SourceCharacter - 32;
}
