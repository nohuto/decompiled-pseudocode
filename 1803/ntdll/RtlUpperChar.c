/*
 * XREFs of RtlUpperChar @ 0x180080600
 * Callers:
 *     RtlPrefixString @ 0x1800804D0 (RtlPrefixString.c)
 *     RtlEqualString @ 0x180080560 (RtlEqualString.c)
 *     RtlCompareString @ 0x18008A000 (RtlCompareString.c)
 *     RtlUpperString @ 0x1800E52E0 (RtlUpperString.c)
 * Callees:
 *     <none>
 */

CHAR __cdecl RtlUpperChar(CHAR Character)
{
  CHAR v1; // r9
  CHAR result; // al
  unsigned __int16 v3; // r9
  unsigned __int16 v4; // r10

  v1 = Character;
  if ( Character <= 122 )
  {
    if ( Character >= 97 )
      return Character ^ 0x20;
    return v1;
  }
  if ( NlsMbCodePageTag )
  {
    if ( word_18015ADC0[Character] )
      return v1;
    v4 = *(_WORD *)(qword_18015B210 + 2LL * (unsigned __int8)Character);
    if ( v4 >= 0x61u )
    {
      if ( v4 > 0x7Au )
        v4 += *(_WORD *)(qword_18015B238
                       + 2LL
                       * ((v4 & 0xF)
                        + (unsigned int)*(unsigned __int16 *)(qword_18015B238
                                                            + 2LL
                                                            * (((v4 >> 4) & 0xF)
                                                             + (unsigned int)*(unsigned __int16 *)(qword_18015B238
                                                                                                 + 2
                                                                                                 * ((unsigned __int64)v4 >> 8))))));
      else
        v4 -= 32;
    }
    result = *(_WORD *)(qword_18015ADB8 + 2LL * v4);
    if ( HIBYTE(*(_WORD *)(qword_18015ADB8 + 2LL * v4)) )
      return v1;
  }
  else
  {
    v3 = *(_WORD *)(qword_18015B210 + 2LL * (unsigned __int8)Character);
    if ( v3 >= 0x61u )
    {
      if ( v3 > 0x7Au )
        v3 += *(_WORD *)(qword_18015B238
                       + 2LL
                       * ((v3 & 0xF)
                        + (unsigned int)*(unsigned __int16 *)(qword_18015B238
                                                            + 2LL
                                                            * (((v3 >> 4) & 0xF)
                                                             + (unsigned int)*(unsigned __int16 *)(qword_18015B238
                                                                                                 + 2
                                                                                                 * ((unsigned __int64)v3 >> 8))))));
      else
        v3 -= 32;
    }
    return *(_BYTE *)(v3 + qword_18015B218);
  }
  return result;
}
