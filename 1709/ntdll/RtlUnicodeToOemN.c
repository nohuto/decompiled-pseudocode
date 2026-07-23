/*
 * XREFs of RtlUnicodeToOemN @ 0x18006CFA0
 * Callers:
 *     RtlUnicodeStringToOemString @ 0x18006CEE0 (RtlUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1800E8D20 (RtlUnicodeStringToCountedOemString.c)
 * Callees:
 *     RtlUnicodeToUTF8N @ 0x180067AA0 (RtlUnicodeToUTF8N.c)
 */

NTSTATUS __cdecl RtlUnicodeToOemN(
        PCHAR OemString,
        ULONG MaxBytesInOemString,
        PULONG BytesInOemString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  NTSTATUS v5; // ebx
  ULONG v6; // r11d
  PCHAR v7; // r10
  ULONG v8; // edx
  ULONG v9; // eax
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // rax
  ULONG *v14; // rax
  NTSTATUS v15; // eax
  __int64 v16; // r14
  __int64 v17; // rax
  __int16 v18; // si
  unsigned int v19; // eax
  char v20; // [rsp+30h] [rbp-18h] BYREF

  v5 = 0;
  v6 = MaxBytesInOemString;
  v7 = OemString;
  if ( NlsOemCodePageIsUTF8 )
  {
    v14 = (ULONG *)&v20;
    if ( BytesInOemString )
      v14 = BytesInOemString;
    if ( BytesInUnicodeString )
    {
      v15 = RtlUnicodeToUTF8N(OemString, MaxBytesInOemString, v14, UnicodeString, BytesInUnicodeString);
    }
    else
    {
      *v14 = 0;
      v15 = 0;
    }
    if ( v15 == -1073741789 )
      return -2147483643;
    return v5;
  }
  else
  {
    v8 = BytesInUnicodeString >> 1;
    if ( NlsMbOemCodePageTag )
    {
      if ( v8 )
      {
        v16 = NlsUnicodeToMbOemData;
        do
        {
          if ( !v6 )
            break;
          v17 = *UnicodeString++;
          v18 = *(_WORD *)(v16 + 2 * v17);
          if ( HIBYTE(v18) )
          {
            v19 = v6--;
            if ( v19 < 2 )
              break;
            *v7++ = HIBYTE(v18);
          }
          *v7 = v18;
          --v6;
          ++v7;
          --v8;
        }
        while ( v8 );
      }
      if ( BytesInOemString )
        *BytesInOemString = (_DWORD)v7 - (_DWORD)OemString;
    }
    else
    {
      v9 = v6;
      if ( v8 < v6 )
        v9 = BytesInUnicodeString >> 1;
      if ( BytesInOemString )
        *BytesInOemString = v9;
      v10 = NlsUnicodeToOemData;
      if ( v9 )
      {
        v11 = v9;
        do
        {
          v12 = *UnicodeString++;
          *v7++ = *(_BYTE *)(v12 + v10);
          --v11;
        }
        while ( v11 );
      }
    }
    return v6 < v8 ? 0x80000005 : 0;
  }
}
