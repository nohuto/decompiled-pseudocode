/*
 * XREFs of RtlMultiByteToUnicodeN @ 0x18004C7B0
 * Callers:
 *     RtlCreateEnvironmentEx @ 0x18004BA60 (RtlCreateEnvironmentEx.c)
 *     mbstowcs @ 0x18008EDC0 (mbstowcs.c)
 *     RtlConsoleMultiByteToUnicodeN @ 0x1800DEBA0 (RtlConsoleMultiByteToUnicodeN.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x180063BE0 (RtlUTF8ToUnicodeN.c)
 */

NTSTATUS __cdecl RtlMultiByteToUnicodeN(
        PWCH UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        PCSTR MultiByteString,
        ULONG BytesInMultiByteString)
{
  PWCH v5; // r10
  ULONG v6; // edx
  ULONG v7; // ecx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rax
  ULONG *v12; // rax
  __int64 v13; // rsi
  __int64 v14; // r14
  ULONG v15; // r11d
  __int64 v16; // rax
  unsigned __int16 v17; // di
  char v18; // [rsp+30h] [rbp-18h] BYREF

  v5 = UnicodeString;
  if ( byte_18015ADB1 )
  {
    v12 = (ULONG *)&v18;
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
    if ( NlsMbCodePageTag )
    {
      v13 = qword_18015AFE0;
      if ( v6 )
      {
        v14 = qword_18015B210;
        v15 = BytesInMultiByteString;
        while ( v15 )
        {
          v16 = *(unsigned __int8 *)MultiByteString;
          --v6;
          --v15;
          v17 = word_18015ADC0[v16];
          if ( v17 )
          {
            if ( !v15 )
            {
              *v5 = 0;
              LODWORD(v5) = (_DWORD)v5 + 2;
              break;
            }
            ++MultiByteString;
            --v15;
            *v5 = *(_WORD *)(v13 + 2LL * (v17 + (unsigned int)*(unsigned __int8 *)MultiByteString));
          }
          else
          {
            *v5 = *(_WORD *)(v14 + 2 * v16);
          }
          ++v5;
          ++MultiByteString;
          if ( !v6 )
            break;
        }
      }
      if ( BytesInUnicodeString )
        *BytesInUnicodeString = (_DWORD)v5 - (_DWORD)UnicodeString;
    }
    else
    {
      v7 = BytesInMultiByteString;
      if ( v6 < BytesInMultiByteString )
        v7 = v6;
      if ( BytesInUnicodeString )
        *BytesInUnicodeString = 2 * v7;
      v8 = qword_18015B210;
      if ( v7 )
      {
        v9 = v7;
        do
        {
          v10 = *(unsigned __int8 *)MultiByteString++;
          *v5++ = *(_WORD *)(v8 + 2 * v10);
          --v9;
        }
        while ( v9 );
      }
    }
  }
  return 0;
}
