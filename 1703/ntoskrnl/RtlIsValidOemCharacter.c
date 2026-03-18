/*
 * XREFs of RtlIsValidOemCharacter @ 0x1406EBA60
 * Callers:
 *     GetNextWchar @ 0x140437958 (GetNextWchar.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlIsValidOemCharacter(PWCHAR Char)
{
  __int64 v2; // rax
  WCHAR v3; // r9
  __int16 v4; // cx
  __int16 v5; // dx
  unsigned __int16 v6; // ax
  unsigned __int64 v7; // rcx
  __int64 v8; // rax

  v2 = *Char;
  if ( (_BYTE)NlsMbOemCodePageTag )
  {
    v5 = *(_WORD *)(NlsUnicodeToMbOemData + 2 * v2);
    v6 = NlsOemLeadByteInfoTable[HIBYTE(v5)];
    if ( v6 )
    {
      v7 = (unsigned __int8)v5 + (unsigned __int64)v6;
      v8 = NlsMbOemCodePageTables;
    }
    else
    {
      v8 = NlsOemToUnicodeData;
      v7 = (unsigned __int8)v5;
    }
    v3 = *(_WORD *)(v8 + 2 * v7);
    if ( v3 >= 0x61u )
    {
      if ( v3 > 0x7Au )
        v3 += *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v3 & 0xF)
                                                                      + 2
                                                                      * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((v3 >> 4) & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int64)v3 >> 8)]]];
      else
        v3 -= 32;
    }
    v4 = *(_WORD *)(NlsUnicodeToMbOemData + 2LL * v3);
  }
  else
  {
    v3 = *(_WORD *)(NlsOemToUnicodeData + 2LL * *(unsigned __int8 *)(v2 + NlsUnicodeToOemData));
    if ( v3 >= 0x61u )
    {
      if ( v3 > 0x7Au )
        v3 += *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v3 & 0xF)
                                                                      + 2
                                                                      * (unsigned __int64)*(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int8)v3 >> 4) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int64)v3 >> 8)]]];
      else
        v3 -= 32;
    }
    v4 = *(char *)(v3 + NlsUnicodeToOemData);
  }
  if ( v4 == OemDefaultChar )
    return 0;
  *Char = v3;
  return 1;
}
