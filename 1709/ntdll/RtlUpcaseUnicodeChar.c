/*
 * XREFs of RtlUpcaseUnicodeChar @ 0x180050700
 * Callers:
 *     RtlGetFullPathName_Ustr @ 0x180033160 (RtlGetFullPathName_Ustr.c)
 *     RtlpComputeLangListCheckSum @ 0x18005042C (RtlpComputeLangListCheckSum.c)
 *     RtlpHashStringToAtom @ 0x18007097C (RtlpHashStringToAtom.c)
 *     HashStringToDwordCaseInsensitiveLen @ 0x18008FAA4 (HashStringToDwordCaseInsensitiveLen.c)
 *     towupper @ 0x180096700 (towupper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUpcaseUnicodeChar(unsigned __int16 a1)
{
  if ( a1 < 0x61u )
    return a1;
  if ( a1 > 0x7Au )
    return (unsigned __int16)(a1
                            + *(_WORD *)(Nls844UnicodeUpcaseTable
                                       + 2LL
                                       * ((a1 & 0xF)
                                        + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                            + 2LL
                                                                            * (((a1 >> 4) & 0xF)
                                                                             + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * ((unsigned __int64)a1 >> 8)))))));
  return (unsigned int)a1 - 32;
}
