/*
 * XREFs of RtlOemToUnicodeN @ 0x18007B4F0
 * Callers:
 *     RtlCreateEnvironmentEx @ 0x18006B5D0 (RtlCreateEnvironmentEx.c)
 *     RtlOemStringToUnicodeString @ 0x18007B400 (RtlOemStringToUnicodeString.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x180068230 (RtlUTF8ToUnicodeN.c)
 */

NTSTATUS __cdecl RtlOemToUnicodeN(
        PWSTR UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        PCCH OemString,
        ULONG BytesInOemString)
{
  NTSTATUS v5; // ebx
  PWSTR v7; // r10
  ULONG v8; // r8d
  ULONG v9; // edx
  ULONG v10; // ecx
  __int64 v11; // rdi
  __int64 v12; // r11
  __int64 v13; // rax
  ULONG *v15; // r8
  NTSTATUS v16; // eax
  __int64 v17; // r14
  __int64 v18; // r15
  __int64 v19; // rax
  unsigned __int16 v20; // si
  char v21; // [rsp+30h] [rbp-18h] BYREF

  v5 = 0;
  v7 = UnicodeString;
  if ( NlsOemCodePageIsUTF8 )
  {
    v15 = (ULONG *)&v21;
    if ( BytesInUnicodeString )
      v15 = BytesInUnicodeString;
    if ( BytesInOemString )
    {
      v16 = RtlUTF8ToUnicodeN(UnicodeString, MaxBytesInUnicodeString, v15, OemString, BytesInOemString);
    }
    else
    {
      *v15 = 0;
      v16 = 0;
    }
    if ( v16 == -1073741789 )
      return -2147483643;
    return v5;
  }
  else
  {
    v8 = BytesInOemString;
    v9 = MaxBytesInUnicodeString >> 1;
    if ( NlsMbOemCodePageTag )
    {
      v17 = NlsMbOemCodePageTables;
      if ( v9 )
      {
        v18 = NlsOemToUnicodeData;
        while ( v8 )
        {
          v19 = *(unsigned __int8 *)OemString;
          --v9;
          --v8;
          v20 = NlsOemLeadByteInfoTable[v19];
          if ( v20 )
          {
            if ( !v8 )
            {
              *v7 = 0;
              LODWORD(v7) = (_DWORD)v7 + 2;
              break;
            }
            ++OemString;
            --v8;
            *v7 = *(_WORD *)(v17 + 2LL * (v20 + (unsigned int)*(unsigned __int8 *)OemString));
          }
          else
          {
            *v7 = *(_WORD *)(v18 + 2 * v19);
          }
          ++v7;
          ++OemString;
          if ( !v9 )
            break;
        }
      }
      if ( BytesInUnicodeString )
        *BytesInUnicodeString = (_DWORD)v7 - (_DWORD)UnicodeString;
    }
    else
    {
      v10 = BytesInOemString;
      if ( v9 < BytesInOemString )
        v10 = v9;
      if ( BytesInUnicodeString )
        *BytesInUnicodeString = 2 * v10;
      v11 = NlsOemToUnicodeData;
      if ( v10 )
      {
        v12 = v10;
        do
        {
          v13 = *(unsigned __int8 *)OemString++;
          *v7++ = *(_WORD *)(v11 + 2 * v13);
          --v12;
        }
        while ( v12 );
      }
    }
    return v9 < v8 ? 0x80000005 : 0;
  }
}
