/*
 * XREFs of RtlDowncaseUnicodeChar @ 0x1800E4AB0
 * Callers:
 *     RtlFindCharInUnicodeString @ 0x18003F370 (RtlFindCharInUnicodeString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlDowncaseUnicodeChar(unsigned __int16 a1)
{
  if ( a1 < 0x41u )
    return a1;
  if ( a1 > 0x5Au )
    return (unsigned __int16)(a1
                            + *(_WORD *)(qword_18015B228
                                       + 2LL
                                       * ((a1 & 0xF)
                                        + (unsigned int)*(unsigned __int16 *)(qword_18015B228
                                                                            + 2LL
                                                                            * (((a1 >> 4) & 0xF)
                                                                             + (unsigned int)*(unsigned __int16 *)(qword_18015B228 + 2 * ((unsigned __int64)a1 >> 8)))))));
  return (unsigned int)a1 + 32;
}
