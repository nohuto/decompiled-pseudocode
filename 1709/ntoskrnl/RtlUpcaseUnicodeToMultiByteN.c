/*
 * XREFs of RtlUpcaseUnicodeToMultiByteN @ 0x14056AAA0
 * Callers:
 *     toupper @ 0x140160260 (toupper.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x14071DEF0 (RtlUpcaseUnicodeStringToAnsiString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUpcaseUnicodeToMultiByteN(
        PCHAR MultiByteString,
        ULONG MaxBytesInMultiByteString,
        PULONG BytesInMultiByteString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v6; // r10d
  PCHAR v8; // rbx
  __int64 v9; // r10
  __int64 v10; // rdi
  unsigned __int16 v11; // r9
  int i; // r15d
  __int64 v14; // rax
  __int16 v15; // r8
  unsigned __int16 v16; // ax
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int16 v19; // bp
  __int16 v20; // r8
  ULONG v21; // eax

  v6 = BytesInUnicodeString >> 1;
  v8 = MultiByteString;
  if ( (_BYTE)NlsMbCodePageTag )
  {
    for ( i = (int)MultiByteString; v6; --v6 )
    {
      if ( !MaxBytesInMultiByteString )
        break;
      v14 = *UnicodeString++;
      v15 = *(_WORD *)(NlsUnicodeToMbAnsiData + 2 * v14);
      v16 = NlsLeadByteInfoTable[HIBYTE(v15)];
      if ( v16 )
      {
        v17 = (unsigned __int8)v15 + (unsigned int)v16;
        v18 = NlsMbAnsiCodePageTables;
      }
      else
      {
        v18 = NlsAnsiToUnicodeData;
        v17 = (unsigned __int8)v15;
      }
      v19 = *(_WORD *)(v18 + 2 * v17);
      if ( v19 >= 0x61u )
      {
        if ( v19 > 0x7Au )
          v19 += *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v19 & 0xF)
                                                                         + 2
                                                                         * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((v19 >> 4) & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int64)v19 >> 8)]]];
        else
          v19 -= 32;
      }
      v20 = *(_WORD *)(NlsUnicodeToMbAnsiData + 2LL * v19);
      if ( HIBYTE(v20) )
      {
        v21 = MaxBytesInMultiByteString--;
        if ( v21 < 2 )
          break;
        *v8++ = HIBYTE(v20);
      }
      *v8 = v20;
      --MaxBytesInMultiByteString;
      ++v8;
    }
    if ( BytesInMultiByteString )
      *BytesInMultiByteString = (_DWORD)v8 - i;
  }
  else
  {
    if ( v6 < MaxBytesInMultiByteString )
      MaxBytesInMultiByteString = BytesInUnicodeString >> 1;
    if ( BytesInMultiByteString )
      *BytesInMultiByteString = MaxBytesInMultiByteString;
    v9 = NlsUnicodeToAnsiData;
    if ( MaxBytesInMultiByteString )
    {
      v10 = MaxBytesInMultiByteString;
      do
      {
        v11 = *(_WORD *)(NlsAnsiToUnicodeData + 2LL * *(unsigned __int8 *)(*UnicodeString + v9));
        if ( v11 >= 0x61u )
        {
          if ( v11 > 0x7Au )
            v11 += *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v11 & 0xF)
                                                                           + 2
                                                                           * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((v11 >> 4) & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int64)v11 >> 8)]]];
          else
            v11 -= 32;
        }
        ++UnicodeString;
        *v8++ = *(_BYTE *)(v11 + v9);
        --v10;
      }
      while ( v10 );
    }
  }
  return 0;
}
