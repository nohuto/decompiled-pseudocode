/*
 * XREFs of RtlUnicodeStringToAnsiString @ 0x180038D10
 * Callers:
 *     sub_180077824 @ 0x180077824 (sub_180077824.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180013CA0 (RtlDeleteBoundaryDescriptor.c)
 *     sub_18003B5E0 @ 0x18003B5E0 (sub_18003B5E0.c)
 *     RtlUnicodeToUTF8N @ 0x180065170 (RtlUnicodeToUTF8N.c)
 *     RtlxUnicodeStringToOemSize @ 0x1800E51D0 (RtlxUnicodeStringToOemSize.c)
 */

NTSTATUS __stdcall RtlUnicodeStringToAnsiString(
        PANSI_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  NTSTATUS v6; // r14d
  unsigned int v7; // eax
  USHORT v8; // cx
  CHAR *v9; // rax
  ULONG UnicodeStringByteCount; // r9d
  const WCHAR *Buffer; // r11
  ULONG Length; // ecx
  CHAR *v13; // r10
  ULONG v14; // r9d
  __int64 v15; // rbx
  ULONG i; // eax
  int v17; // ebx
  __int64 v18; // rdi
  __int16 v19; // r8
  unsigned int v20; // eax
  USHORT MaximumLength; // ax
  ULONG UTF8StringActualByteCount; // [rsp+30h] [rbp-58h] BYREF
  int v24; // [rsp+34h] [rbp-54h]
  ULONG v25; // [rsp+38h] [rbp-50h]
  ULONG v26; // [rsp+40h] [rbp-48h]
  ULONG v27; // [rsp+44h] [rbp-44h]
  CHAR *v28; // [rsp+48h] [rbp-40h]
  const WCHAR *v29; // [rsp+50h] [rbp-38h]

  v6 = 0;
  if ( NlsMbCodePageTag )
    v7 = RtlxUnicodeStringToOemSize(SourceString);
  else
    v7 = ((unsigned int)SourceString->Length + 2) >> 1;
  if ( v7 > 0xFFFF )
    return -1073741584;
  v8 = v7 - 1;
  DestinationString->Length = v7 - 1;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = v7;
    v9 = (CHAR *)sub_18003B5E0(v7);
    DestinationString->Buffer = v9;
    if ( !v9 )
      return -1073741801;
  }
  else
  {
    MaximumLength = DestinationString->MaximumLength;
    if ( v8 >= MaximumLength )
    {
      if ( !MaximumLength )
        return -2147483643;
      v6 = -2147483643;
      DestinationString->Length = MaximumLength - 1;
    }
  }
  v24 = 0;
  UnicodeStringByteCount = SourceString->Length;
  Buffer = SourceString->Buffer;
  v29 = Buffer;
  Length = DestinationString->Length;
  v25 = Length;
  v13 = DestinationString->Buffer;
  v28 = v13;
  if ( byte_18015ADB1 )
  {
    if ( UnicodeStringByteCount )
      RtlUnicodeToUTF8N(v13, Length, &UTF8StringActualByteCount, Buffer, UnicodeStringByteCount);
    else
      UTF8StringActualByteCount = 0;
  }
  else
  {
    v14 = UnicodeStringByteCount >> 1;
    v27 = v14;
    if ( NlsMbCodePageTag )
    {
      v17 = (int)v13;
      v18 = qword_18015ADB8;
      while ( v14 && Length )
      {
        v19 = *(_WORD *)(v18 + 2LL * *Buffer++);
        v29 = Buffer;
        if ( HIBYTE(v19) )
        {
          v20 = Length--;
          v25 = Length;
          if ( v20 < 2 )
            break;
          *v13++ = HIBYTE(v19);
          v28 = v13;
        }
        *v13++ = v19;
        v28 = v13;
        v25 = --Length;
        v27 = --v14;
      }
      UTF8StringActualByteCount = (_DWORD)v13 - v17;
    }
    else
    {
      if ( v14 >= Length )
        v14 = Length;
      UTF8StringActualByteCount = v14;
      v15 = qword_18015B218;
      for ( i = 0; ; ++i )
      {
        v26 = i;
        if ( i >= v14 )
          break;
        v13[i] = *(_BYTE *)(Buffer[i] + v15);
      }
    }
  }
  v24 = 0;
  DestinationString->Buffer[UTF8StringActualByteCount] = 0;
  return v6;
}
