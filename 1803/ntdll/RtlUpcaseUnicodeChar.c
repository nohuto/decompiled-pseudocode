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

__int64 __fastcall RtlUpcaseUnicodeChar(unsigned __int16 a1)
{
  if ( a1 < 0x61u )
    return a1;
  if ( a1 > 0x7Au )
    return (unsigned __int16)(a1
                            + *(_WORD *)(qword_18015B238
                                       + 2LL
                                       * ((a1 & 0xF)
                                        + (unsigned int)*(unsigned __int16 *)(qword_18015B238
                                                                            + 2LL
                                                                            * (((a1 >> 4) & 0xF)
                                                                             + (unsigned int)*(unsigned __int16 *)(qword_18015B238 + 2 * ((unsigned __int64)a1 >> 8)))))));
  return (unsigned int)a1 - 32;
}
