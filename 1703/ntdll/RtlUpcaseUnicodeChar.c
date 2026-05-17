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

__int64 __fastcall RtlUpcaseUnicodeChar(unsigned __int16 a1)
{
  if ( a1 < 0x61u )
    return a1;
  if ( a1 > 0x7Au )
    return (unsigned __int16)(a1
                            + *(_WORD *)(qword_180159D68
                                       + 2LL
                                       * ((a1 & 0xF)
                                        + (unsigned int)*(unsigned __int16 *)(qword_180159D68
                                                                            + 2LL
                                                                            * (((a1 >> 4) & 0xF)
                                                                             + (unsigned int)*(unsigned __int16 *)(qword_180159D68 + 2 * ((unsigned __int64)a1 >> 8)))))));
  return (unsigned int)a1 - 32;
}
