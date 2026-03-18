/*
 * XREFs of RtlUpcaseUnicodeToOemN @ 0x14056DD20
 * Callers:
 *     RtlUpcaseUnicodeStringToOemString @ 0x14056D860 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x14056DBB0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUpcaseUnicodeToOemN(
        PCHAR OemString,
        ULONG MaxBytesInOemString,
        PULONG BytesInOemString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v5; // r11d
  ULONG v7; // ebx
  PCHAR v8; // r10
  ULONG v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rbp
  unsigned __int16 v12; // r9
  int i; // ebp
  __int64 v15; // rax
  __int16 v16; // dx
  unsigned __int16 v17; // ax
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int16 v20; // r9
  __int16 v21; // dx
  unsigned int v22; // eax

  v5 = BytesInUnicodeString >> 1;
  v7 = MaxBytesInOemString;
  v8 = OemString;
  if ( (_BYTE)NlsMbOemCodePageTag )
  {
    for ( i = (int)OemString; v5; --v5 )
    {
      if ( !v7 )
        break;
      v15 = *UnicodeString++;
      v16 = *(_WORD *)(NlsUnicodeToMbOemData + 2 * v15);
      v17 = NlsOemLeadByteInfoTable[HIBYTE(v16)];
      if ( v17 )
      {
        v18 = (unsigned __int8)v16 + (unsigned int)v17;
        v19 = NlsMbOemCodePageTables;
      }
      else
      {
        v19 = NlsOemToUnicodeData;
        v18 = (unsigned __int8)v16;
      }
      v20 = *(_WORD *)(v19 + 2 * v18);
      if ( v20 >= 0x61u )
      {
        if ( v20 > 0x7Au )
          v20 += *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v20 & 0xF)
                                                                         + 2
                                                                         * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((v20 >> 4) & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int64)v20 >> 8)]]];
        else
          v20 -= 32;
      }
      v21 = *(_WORD *)(NlsUnicodeToMbOemData + 2LL * v20);
      if ( HIBYTE(v21) )
      {
        v22 = v7--;
        if ( v22 < 2 )
          break;
        *v8++ = HIBYTE(v21);
      }
      *v8 = v21;
      --v7;
      ++v8;
    }
    if ( BytesInOemString )
      *BytesInOemString = (_DWORD)v8 - i;
  }
  else
  {
    v9 = MaxBytesInOemString;
    if ( v5 < MaxBytesInOemString )
      v9 = BytesInUnicodeString >> 1;
    if ( BytesInOemString )
      *BytesInOemString = v9;
    v10 = NlsUnicodeToOemData;
    if ( v9 )
    {
      v11 = v9;
      do
      {
        v12 = *(_WORD *)(NlsOemToUnicodeData + 2LL * *(unsigned __int8 *)(*UnicodeString + v10));
        if ( v12 >= 0x61u )
        {
          if ( v12 > 0x7Au )
            v12 += *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v12 & 0xF)
                                                                           + 2
                                                                           * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((v12 >> 4) & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int64)v12 >> 8)]]];
          else
            v12 -= 32;
        }
        ++UnicodeString;
        *v8++ = *(_BYTE *)(v12 + v10);
        --v11;
      }
      while ( v11 );
    }
  }
  return v7 < v5 ? 0x80000005 : 0;
}
