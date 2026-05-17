/*
 * XREFs of RtlAnsiStringToUnicodeString @ 0x180030EF0
 * Callers:
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x18002BE98 (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     LdrpSnapKernelBaseExtensions @ 0x18002DDC8 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpLoadDependentModule @ 0x18002F160 (LdrpLoadDependentModule.c)
 *     RtlIntegerToUnicodeString @ 0x180050760 (RtlIntegerToUnicodeString.c)
 *     LdrpReportError @ 0x180052C64 (LdrpReportError.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x180074210 (RtlCreateUnicodeStringFromAsciiz.c)
 *     RtlInt64ToUnicodeString @ 0x1800EA570 (RtlInt64ToUnicodeString.c)
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x180031338 (NtdllpAllocateStringRoutine.c)
 *     NtdllpFreeStringRoutine @ 0x18004FA20 (NtdllpFreeStringRoutine.c)
 *     RtlUTF8ToUnicodeN @ 0x180068230 (RtlUTF8ToUnicodeN.c)
 *     RtlxOemStringToUnicodeSize @ 0x1800E90E0 (RtlxOemStringToUnicodeSize.c)
 */

NTSTATUS __stdcall RtlAnsiStringToUnicodeString(
        PUNICODE_STRING DestinationString,
        PCANSI_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  unsigned int v6; // r9d
  unsigned __int64 v7; // rcx
  unsigned int Length; // edx
  char *Buffer; // r9
  unsigned int v10; // r10d
  wchar_t *v11; // r11
  unsigned int v12; // r10d
  __int64 v13; // rbx
  unsigned int i; // eax
  int v15; // ebx
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rax
  unsigned __int16 v19; // r8
  wchar_t *StringRoutine; // rax
  unsigned int v22; // [rsp+B8h] [rbp+20h] BYREF

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
    StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v6);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
  }
  else
  {
    v7 = (unsigned __int16)(v6 - 2) + 2LL;
    if ( v7 > DestinationString->MaximumLength || v7 < 2 )
      return -2147483643;
  }
  Length = SourceString->Length;
  Buffer = SourceString->Buffer;
  v10 = DestinationString->Length;
  v11 = DestinationString->Buffer;
  if ( NlsActiveCodePageIsUTF8 )
  {
    if ( SourceString->Length )
      RtlUTF8ToUnicodeN((_DWORD)v11, v10, (unsigned int)&v22, (_DWORD)Buffer, Length);
    else
      v22 = 0;
  }
  else
  {
    v12 = v10 >> 1;
    if ( NlsMbCodePageTag )
    {
      v15 = (int)DestinationString->Buffer;
      v16 = NlsMbAnsiCodePageTables;
      v17 = NlsAnsiToUnicodeData;
      while ( v12 && Length )
      {
        --v12;
        --Length;
        v18 = 2LL * (unsigned __int8)*Buffer;
        v19 = *(_WORD *)((char *)&NlsLeadByteInfoTable + v18);
        if ( v19 )
        {
          if ( !Length )
          {
            *v11 = 0;
            LODWORD(v11) = (_DWORD)v11 + 2;
            break;
          }
          *v11 = *(_WORD *)(v16 + 2LL * (v19 + (unsigned int)(unsigned __int8)Buffer[1]));
          Buffer += 2;
          ++v11;
          --Length;
        }
        else
        {
          *v11++ = *(_WORD *)(v18 + v17);
          ++Buffer;
        }
      }
      v22 = (_DWORD)v11 - v15;
    }
    else
    {
      if ( v12 >= Length )
        v12 = SourceString->Length;
      v22 = 2 * v12;
      v13 = NlsAnsiToUnicodeData;
      for ( i = 0; i < v12; ++i )
        v11[i] = *(_WORD *)(v13 + 2LL * (unsigned __int8)Buffer[i]);
    }
  }
  DestinationString->Buffer[(unsigned __int64)v22 >> 1] = 0;
  return 0;
}
