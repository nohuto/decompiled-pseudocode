/*
 * XREFs of RtlUnicodeToMultiByteN @ 0x18006CF00
 * Callers:
 *     wcstombs @ 0x180091250 (wcstombs.c)
 *     sub_180094E8C @ 0x180094E8C (sub_180094E8C.c)
 *     sub_180097788 @ 0x180097788 (sub_180097788.c)
 *     sub_180107B08 @ 0x180107B08 (sub_180107B08.c)
 * Callees:
 *     RtlUnicodeToUTF8N @ 0x180065170 (RtlUnicodeToUTF8N.c)
 */

NTSTATUS __cdecl RtlUnicodeToMultiByteN(
        PCHAR MultiByteString,
        ULONG MaxBytesInMultiByteString,
        PULONG BytesInMultiByteString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  PCHAR v5; // r10
  ULONG v6; // ecx
  __int64 v7; // r11
  __int64 v8; // r8
  __int64 v9; // rax
  ULONG *v11; // rax
  int v12; // ebx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int16 v15; // di
  ULONG v16; // eax
  char v17; // [rsp+30h] [rbp-18h] BYREF

  v5 = MultiByteString;
  if ( byte_18015ADB1 )
  {
    v11 = (ULONG *)&v17;
    if ( BytesInMultiByteString )
      v11 = BytesInMultiByteString;
    if ( BytesInUnicodeString )
      RtlUnicodeToUTF8N(MultiByteString, MaxBytesInMultiByteString, v11, UnicodeString, BytesInUnicodeString);
    else
      *v11 = 0;
  }
  else
  {
    v6 = BytesInUnicodeString >> 1;
    if ( NlsMbCodePageTag )
    {
      v12 = (int)v5;
      if ( v6 )
      {
        v13 = qword_18015ADB8;
        do
        {
          if ( !MaxBytesInMultiByteString )
            break;
          v14 = *UnicodeString++;
          v15 = *(_WORD *)(v13 + 2 * v14);
          if ( HIBYTE(v15) )
          {
            v16 = MaxBytesInMultiByteString--;
            if ( v16 < 2 )
              break;
            *v5++ = HIBYTE(v15);
          }
          *v5 = v15;
          --MaxBytesInMultiByteString;
          ++v5;
          --v6;
        }
        while ( v6 );
      }
      if ( BytesInMultiByteString )
        *BytesInMultiByteString = (_DWORD)v5 - v12;
    }
    else
    {
      if ( v6 < MaxBytesInMultiByteString )
        MaxBytesInMultiByteString = BytesInUnicodeString >> 1;
      if ( BytesInMultiByteString )
        *BytesInMultiByteString = MaxBytesInMultiByteString;
      v7 = qword_18015B218;
      if ( MaxBytesInMultiByteString )
      {
        v8 = MaxBytesInMultiByteString;
        do
        {
          v9 = *UnicodeString++;
          *v5++ = *(_BYTE *)(v9 + v7);
          --v8;
        }
        while ( v8 );
      }
    }
  }
  return 0;
}
