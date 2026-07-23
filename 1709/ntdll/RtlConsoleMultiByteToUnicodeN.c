/*
 * XREFs of RtlConsoleMultiByteToUnicodeN @ 0x1800E3BA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlMultiByteToUnicodeN @ 0x18006B810 (RtlMultiByteToUnicodeN.c)
 */

NTSTATUS __cdecl RtlConsoleMultiByteToUnicodeN(
        PWCH UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        PCCH MultiByteString,
        ULONG BytesInMultiByteString,
        PULONG pdwSpecialChar)
{
  int v6; // r10d
  bool v7; // zf
  PWCH v8; // r11
  PCCH i; // rax
  ULONG v11; // edx
  ULONG v12; // ecx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r14
  int v17; // esi
  __int64 v18; // r15
  ULONG v19; // edi
  __int64 v20; // rax
  unsigned __int16 v21; // bp
  WCHAR v22; // cx

  v6 = 0;
  v7 = NlsActiveCodePageIsUTF8 == 0;
  v8 = UnicodeString;
  *pdwSpecialChar = 0;
  if ( v7 )
  {
    v11 = MaxBytesInUnicodeString >> 1;
    if ( NlsMbCodePageTag )
    {
      v16 = NlsMbAnsiCodePageTables;
      v17 = (int)UnicodeString;
      if ( v11 )
      {
        v18 = NlsAnsiToUnicodeData;
        v19 = BytesInMultiByteString;
        while ( v19 )
        {
          v20 = *(unsigned __int8 *)MultiByteString;
          --v11;
          --v19;
          v21 = NlsLeadByteInfoTable[v20];
          if ( v21 )
          {
            if ( !v19 )
            {
              *v8 = 0;
              LODWORD(v8) = (_DWORD)v8 + 2;
              break;
            }
            ++MultiByteString;
            --v19;
            v22 = *(_WORD *)(v16 + 2LL * (v21 + (unsigned int)*(unsigned __int8 *)MultiByteString));
          }
          else
          {
            if ( (unsigned __int8)v20 < 0x20u )
              *pdwSpecialChar = 1;
            v22 = *(_WORD *)(v18 + 2LL * *(unsigned __int8 *)MultiByteString);
          }
          *v8 = v22;
          ++MultiByteString;
          ++v8;
          if ( !v11 )
            break;
        }
      }
      if ( BytesInUnicodeString )
        *BytesInUnicodeString = (_DWORD)v8 - v17;
    }
    else
    {
      v12 = BytesInMultiByteString;
      if ( v11 < BytesInMultiByteString )
        v12 = v11;
      if ( BytesInUnicodeString )
        *BytesInUnicodeString = 2 * v12;
      v13 = NlsAnsiToUnicodeData;
      if ( v12 )
      {
        v14 = v12;
        do
        {
          if ( *MultiByteString < 0x20u )
            *pdwSpecialChar = 1;
          v15 = *(unsigned __int8 *)MultiByteString++;
          *v8++ = *(_WORD *)(v13 + 2 * v15);
          --v14;
        }
        while ( v14 );
      }
    }
    return 0;
  }
  else
  {
    if ( BytesInMultiByteString )
    {
      for ( i = MultiByteString; *i >= 0x20u; ++i )
      {
        if ( ++v6 >= BytesInMultiByteString )
          return RtlMultiByteToUnicodeN(
                   UnicodeString,
                   MaxBytesInUnicodeString,
                   BytesInUnicodeString,
                   MultiByteString,
                   BytesInMultiByteString);
      }
      *pdwSpecialChar = 1;
    }
    return RtlMultiByteToUnicodeN(
             UnicodeString,
             MaxBytesInUnicodeString,
             BytesInUnicodeString,
             MultiByteString,
             BytesInMultiByteString);
  }
}
