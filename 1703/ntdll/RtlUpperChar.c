/*
 * XREFs of RtlUpperChar @ 0x180083380
 * Callers:
 *     RtlPrefixString @ 0x180083250 (RtlPrefixString.c)
 *     RtlEqualString @ 0x1800832E0 (RtlEqualString.c)
 *     RtlCompareString @ 0x18008D9A0 (RtlCompareString.c)
 *     RtlUpperString @ 0x1800E9E80 (RtlUpperString.c)
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
    if ( word_180159D80[Character] )
      return v1;
    v4 = *(_WORD *)(qword_18015A1D0 + 2LL * (unsigned __int8)Character);
    if ( v4 >= 0x61u )
    {
      if ( v4 > 0x7Au )
        v4 += *(_WORD *)(qword_180159D68
                       + 2
                       * ((v4 & 0xF)
                        + (unsigned __int64)*(unsigned __int16 *)(qword_180159D68
                                                                + 2LL
                                                                * (((v4 >> 4) & 0xF)
                                                                 + (unsigned int)*(unsigned __int16 *)(qword_180159D68 + 2 * ((unsigned __int64)v4 >> 8))))));
      else
        v4 -= 32;
    }
    result = *(_WORD *)(qword_180159D70 + 2LL * v4);
    if ( HIBYTE(*(_WORD *)(qword_180159D70 + 2LL * v4)) )
      return v1;
  }
  else
  {
    v3 = *(_WORD *)(qword_18015A1D0 + 2LL * (unsigned __int8)Character);
    if ( v3 >= 0x61u )
    {
      if ( v3 > 0x7Au )
        v3 += *(_WORD *)(qword_180159D68
                       + 2
                       * ((v3 & 0xF)
                        + (unsigned __int64)*(unsigned __int16 *)(qword_180159D68
                                                                + 2LL
                                                                * (((v3 >> 4) & 0xF)
                                                                 + (unsigned int)*(unsigned __int16 *)(qword_180159D68 + 2 * ((unsigned __int64)v3 >> 8))))));
      else
        v3 -= 32;
    }
    return *(_BYTE *)(v3 + qword_18015A1D8);
  }
  return result;
}
