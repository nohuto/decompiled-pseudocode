/*
 * XREFs of RtlUpcaseUnicodeToMultiByteN @ 0x18007E1B0
 * Callers:
 *     toupper @ 0x180096660 (toupper.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1800E8E70 (RtlUpcaseUnicodeStringToAnsiString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlUpcaseUnicodeToMultiByteN(
        PCHAR MultiByteString,
        ULONG MaxBytesInMultiByteString,
        PULONG BytesInMultiByteString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v6; // ebx
  __int64 v8; // r11
  PCHAR v9; // r10
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rbx
  unsigned __int16 v13; // r8
  __int64 v15; // r12
  __int64 v16; // r15
  __int64 v17; // r14
  __int64 v18; // r13
  __int64 v19; // rax
  __int16 v20; // dx
  unsigned __int16 v21; // r8
  __int16 v22; // dx
  unsigned int v23; // eax

  v6 = BytesInUnicodeString >> 1;
  v8 = MaxBytesInMultiByteString;
  v9 = MultiByteString;
  if ( NlsMbCodePageTag )
  {
    if ( v6 )
    {
      v15 = NlsAnsiToUnicodeData;
      v16 = Nls844UnicodeUpcaseTable;
      v17 = NlsUnicodeToMbAnsiData;
      v18 = NlsMbAnsiCodePageTables;
      do
      {
        if ( !(_DWORD)v8 )
          break;
        v19 = *UnicodeString++;
        v20 = *(_WORD *)(v17 + 2 * v19);
        if ( NlsLeadByteInfoTable[HIBYTE(v20)] )
          v21 = *(_WORD *)(v18
                         + 2LL
                         * ((unsigned __int8)v20 + (unsigned int)(unsigned __int16)NlsLeadByteInfoTable[HIBYTE(v20)]));
        else
          v21 = *(_WORD *)(v15 + 2LL * (unsigned __int8)v20);
        if ( v21 >= 0x61u )
        {
          if ( v21 > 0x7Au )
            v21 += *(_WORD *)(v16
                            + 2LL
                            * ((v21 & 0xF)
                             + (unsigned int)*(unsigned __int16 *)(v16
                                                                 + 2LL
                                                                 * (((v21 >> 4) & 0xF)
                                                                  + (unsigned int)*(unsigned __int16 *)(v16 + 2 * ((unsigned __int64)v21 >> 8))))));
          else
            v21 -= 32;
        }
        v22 = *(_WORD *)(v17 + 2LL * v21);
        if ( HIBYTE(v22) )
        {
          v23 = v8;
          LODWORD(v8) = v8 - 1;
          if ( v23 < 2 )
            break;
          *v9++ = HIBYTE(v22);
        }
        *v9 = v22;
        LODWORD(v8) = v8 - 1;
        ++v9;
        --v6;
      }
      while ( v6 );
    }
    if ( BytesInMultiByteString )
      *BytesInMultiByteString = (_DWORD)v9 - (_DWORD)MultiByteString;
  }
  else
  {
    if ( v6 < MaxBytesInMultiByteString )
      v8 = v6;
    if ( BytesInMultiByteString )
      *BytesInMultiByteString = v8;
    v10 = NlsUnicodeToAnsiData;
    if ( (_DWORD)v8 )
    {
      v11 = NlsAnsiToUnicodeData;
      v12 = Nls844UnicodeUpcaseTable;
      do
      {
        v13 = *(_WORD *)(v11 + 2LL * *(unsigned __int8 *)(*UnicodeString + v10));
        if ( v13 >= 0x61u )
        {
          if ( v13 > 0x7Au )
            v13 += *(_WORD *)(v12
                            + 2LL
                            * ((v13 & 0xF)
                             + (unsigned int)*(unsigned __int16 *)(v12
                                                                 + 2LL
                                                                 * (((v13 >> 4) & 0xF)
                                                                  + (unsigned int)*(unsigned __int16 *)(v12 + 2 * ((unsigned __int64)v13 >> 8))))));
          else
            v13 -= 32;
        }
        ++UnicodeString;
        *v9++ = *(_BYTE *)(v13 + v10);
        --v8;
      }
      while ( v8 );
    }
  }
  return 0;
}
