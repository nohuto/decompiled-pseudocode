/*
 * XREFs of RtlUpperChar @ 0x140554950
 * Callers:
 *     RtlEqualString @ 0x1400AF960 (RtlEqualString.c)
 *     RtlCompareString @ 0x140554790 (RtlCompareString.c)
 *     RtlPrefixString @ 0x140554840 (RtlPrefixString.c)
 *     RtlUpperString @ 0x1405548F0 (RtlUpperString.c)
 * Callees:
 *     <none>
 */

CHAR __stdcall RtlUpperChar(CHAR Character)
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
  if ( (_BYTE)NlsMbCodePageTag )
  {
    if ( NlsLeadByteInfoTable[Character] )
      return v1;
    v4 = *(_WORD *)(NlsAnsiToUnicodeData + 2LL * (unsigned __int8)Character);
    if ( v4 >= 0x61u )
    {
      if ( v4 > 0x7Au )
        v4 += *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v4 & 0xF)
                                                                      + 2
                                                                      * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((v4 >> 4) & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int64)v4 >> 8)]]];
      else
        v4 -= 32;
    }
    result = *(_WORD *)(NlsUnicodeToMbAnsiData + 2LL * v4);
    if ( HIBYTE(*(_WORD *)(NlsUnicodeToMbAnsiData + 2LL * v4)) )
      return v1;
  }
  else
  {
    v3 = *(_WORD *)(NlsAnsiToUnicodeData + 2LL * (unsigned __int8)Character);
    if ( v3 >= 0x61u )
    {
      if ( v3 > 0x7Au )
        v3 += *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v3 & 0xF)
                                                                      + 2
                                                                      * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((v3 >> 4) & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int64)v3 >> 8)]]];
      else
        v3 -= 32;
    }
    return *(_BYTE *)(v3 + NlsUnicodeToAnsiData);
  }
  return result;
}
