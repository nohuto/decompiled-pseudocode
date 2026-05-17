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
  unsigned __int16 v8; // cx
  char *v9; // rax
  unsigned int Length; // r9d
  wchar_t *Buffer; // r11
  unsigned int v12; // ecx
  char *v13; // r10
  unsigned int v14; // r9d
  __int64 v15; // rbx
  unsigned int i; // eax
  int v17; // ebx
  __int64 v18; // rdi
  __int16 v19; // r8
  unsigned int v20; // eax
  unsigned __int16 MaximumLength; // ax
  unsigned int v23; // [rsp+30h] [rbp-58h] BYREF
  int v24; // [rsp+34h] [rbp-54h]
  unsigned int v25; // [rsp+38h] [rbp-50h]
  unsigned int v26; // [rsp+40h] [rbp-48h]
  unsigned int v27; // [rsp+44h] [rbp-44h]
  char *v28; // [rsp+48h] [rbp-40h]
  wchar_t *v29; // [rsp+50h] [rbp-38h]

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
    v9 = (char *)sub_18003B5E0(v7);
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
  Length = SourceString->Length;
  Buffer = SourceString->Buffer;
  v29 = Buffer;
  v12 = DestinationString->Length;
  v25 = v12;
  v13 = DestinationString->Buffer;
  v28 = v13;
  if ( byte_18015ADB1 )
  {
    if ( Length )
      RtlUnicodeToUTF8N((_DWORD)v13, v12, (unsigned int)&v23, (_DWORD)Buffer, Length);
    else
      v23 = 0;
  }
  else
  {
    v14 = Length >> 1;
    v27 = v14;
    if ( NlsMbCodePageTag )
    {
      v17 = (int)v13;
      v18 = qword_18015ADB8;
      while ( v14 && v12 )
      {
        v19 = *(_WORD *)(v18 + 2LL * *Buffer++);
        v29 = Buffer;
        if ( HIBYTE(v19) )
        {
          v20 = v12--;
          v25 = v12;
          if ( v20 < 2 )
            break;
          *v13++ = HIBYTE(v19);
          v28 = v13;
        }
        *v13++ = v19;
        v28 = v13;
        v25 = --v12;
        v27 = --v14;
      }
      v23 = (_DWORD)v13 - v17;
    }
    else
    {
      if ( v14 >= v12 )
        v14 = v12;
      v23 = v14;
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
  DestinationString->Buffer[v23] = 0;
  return v6;
}
