/*
 * XREFs of RtlMultiByteToUnicodeN @ 0x1404DEA00
 * Callers:
 *     mbstowcs @ 0x14015F270 (mbstowcs.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404DE910 (RtlAnsiStringToUnicodeString.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x1405867F0 (RtlUTF8ToUnicodeN.c)
 */

NTSTATUS __stdcall RtlMultiByteToUnicodeN(
        PWCH UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        const CHAR *MultiByteString,
        ULONG BytesInMultiByteString)
{
  ULONG v6; // r10d
  ULONG v7; // edx
  __int64 v8; // r10
  __int64 v9; // r8
  __int64 v10; // rax
  ULONG *v12; // rdx
  int v13; // ebx
  __int64 v14; // rdi
  ULONG v15; // r11d
  __int64 v16; // rdx
  unsigned __int16 v17; // ax
  int v18; // edx
  WCHAR v19; // dx
  char v20; // [rsp+30h] [rbp-18h] BYREF

  if ( NlsActiveCodePageIsUTF8 )
  {
    v12 = (ULONG *)&v20;
    if ( BytesInUnicodeString )
      v12 = BytesInUnicodeString;
    if ( BytesInMultiByteString )
      RtlUTF8ToUnicodeN(UnicodeString, MaxBytesInUnicodeString, v12, MultiByteString, BytesInMultiByteString);
    else
      *v12 = 0;
  }
  else
  {
    v6 = MaxBytesInUnicodeString >> 1;
    if ( (_BYTE)NlsMbCodePageTag )
    {
      v13 = (int)UnicodeString;
      v14 = NlsMbAnsiCodePageTables;
      if ( v6 )
      {
        v15 = BytesInMultiByteString;
        while ( v15 )
        {
          --v6;
          --v15;
          v16 = 2LL * *(unsigned __int8 *)MultiByteString;
          v17 = *(_WORD *)((char *)&NlsLeadByteInfoTable + v16);
          if ( v17 )
          {
            if ( !v15 )
            {
              *UnicodeString = 0;
              LODWORD(UnicodeString) = (_DWORD)UnicodeString + 2;
              break;
            }
            v18 = *(unsigned __int8 *)++MultiByteString;
            --v15;
            v19 = *(_WORD *)(v14 + 2LL * ((unsigned int)v17 + v18));
          }
          else
          {
            v19 = *(_WORD *)(v16 + NlsAnsiToUnicodeData);
          }
          *UnicodeString = v19;
          ++MultiByteString;
          ++UnicodeString;
          if ( !v6 )
            break;
        }
      }
      if ( BytesInUnicodeString )
        *BytesInUnicodeString = (_DWORD)UnicodeString - v13;
    }
    else
    {
      v7 = BytesInMultiByteString;
      if ( v6 < BytesInMultiByteString )
        v7 = v6;
      if ( BytesInUnicodeString )
        *BytesInUnicodeString = 2 * v7;
      v8 = NlsAnsiToUnicodeData;
      if ( v7 )
      {
        v9 = v7;
        do
        {
          v10 = *(unsigned __int8 *)MultiByteString;
          ++UnicodeString;
          ++MultiByteString;
          *(UnicodeString - 1) = *(_WORD *)(v8 + 2 * v10);
          --v9;
        }
        while ( v9 );
      }
    }
  }
  return 0;
}
