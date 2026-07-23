/*
 * XREFs of RtlAnsiStringToUnicodeString @ 0x18003B0F0
 * Callers:
 *     sub_180039360 @ 0x180039360 (sub_180039360.c)
 *     sub_18003F7F8 @ 0x18003F7F8 (sub_18003F7F8.c)
 *     RtlIntegerToUnicodeString @ 0x180040980 (RtlIntegerToUnicodeString.c)
 *     sub_180041ACC @ 0x180041ACC (sub_180041ACC.c)
 *     sub_180042450 @ 0x180042450 (sub_180042450.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x18006DBD0 (RtlCreateUnicodeStringFromAsciiz.c)
 *     RtlInt64ToUnicodeString @ 0x1800E6730 (RtlInt64ToUnicodeString.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180013CA0 (RtlDeleteBoundaryDescriptor.c)
 *     sub_18003B5E0 @ 0x18003B5E0 (sub_18003B5E0.c)
 *     RtlUTF8ToUnicodeN @ 0x180063BE0 (RtlUTF8ToUnicodeN.c)
 *     RtlxOemStringToUnicodeSize @ 0x1800E51A0 (RtlxOemStringToUnicodeSize.c)
 */

NTSTATUS __stdcall RtlAnsiStringToUnicodeString(
        PUNICODE_STRING DestinationString,
        PCANSI_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  unsigned int v6; // edx
  unsigned __int64 v7; // rcx
  ULONG UTF8StringByteCount; // edx
  PCHAR Buffer; // r9
  ULONG Length; // r10d
  WCHAR *v11; // r11
  ULONG v12; // r10d
  __int64 v13; // rbx
  ULONG i; // eax
  int v15; // ebx
  __int64 v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rax
  unsigned __int16 v19; // di
  WCHAR *v21; // rax
  ULONG UnicodeStringActualByteCount; // [rsp+B8h] [rbp+20h] BYREF

  if ( NlsMbCodePageTag )
    v6 = RtlxOemStringToUnicodeSize(SourceString);
  else
    v6 = 2 * SourceString->Length + 2;
  if ( v6 > 0xFFFE )
    return -1073741584;
  DestinationString->Length = v6 - 2;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = v6;
    v21 = (WCHAR *)sub_18003B5E0(v6);
    DestinationString->Buffer = v21;
    if ( !v21 )
      return -1073741801;
  }
  else
  {
    v7 = (unsigned __int16)(v6 - 2) + 2LL;
    if ( v7 > DestinationString->MaximumLength || v7 < 2 )
      return -2147483643;
  }
  UTF8StringByteCount = SourceString->Length;
  Buffer = SourceString->Buffer;
  Length = DestinationString->Length;
  v11 = DestinationString->Buffer;
  if ( byte_18015ADB1 )
  {
    if ( SourceString->Length )
      RtlUTF8ToUnicodeN(v11, Length, &UnicodeStringActualByteCount, Buffer, UTF8StringByteCount);
    else
      UnicodeStringActualByteCount = 0;
  }
  else
  {
    v12 = Length >> 1;
    if ( NlsMbCodePageTag )
    {
      v15 = (int)DestinationString->Buffer;
      v16 = qword_18015AFE0;
      v17 = qword_18015B210;
      while ( v12 && UTF8StringByteCount )
      {
        --v12;
        --UTF8StringByteCount;
        v18 = 2LL * (unsigned __int8)*Buffer;
        v19 = *(_WORD *)((char *)&unk_18015ADC0 + v18);
        if ( v19 )
        {
          if ( !UTF8StringByteCount )
          {
            *v11 = 0;
            LODWORD(v11) = (_DWORD)v11 + 2;
            break;
          }
          *v11 = *(_WORD *)(v16 + 2LL * (v19 + (unsigned int)(unsigned __int8)Buffer[1]));
          Buffer += 2;
          --UTF8StringByteCount;
        }
        else
        {
          *v11 = *(_WORD *)(v18 + v17);
          ++Buffer;
        }
        ++v11;
      }
      UnicodeStringActualByteCount = (_DWORD)v11 - v15;
    }
    else
    {
      if ( v12 >= UTF8StringByteCount )
        v12 = SourceString->Length;
      UnicodeStringActualByteCount = 2 * v12;
      v13 = qword_18015B210;
      for ( i = 0; i < v12; ++i )
        v11[i] = *(_WORD *)(v13 + 2LL * (unsigned __int8)Buffer[i]);
    }
  }
  DestinationString->Buffer[(unsigned __int64)UnicodeStringActualByteCount >> 1] = 0;
  return 0;
}
