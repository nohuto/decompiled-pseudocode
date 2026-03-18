/*
 * XREFs of PiDrvDbResolveSystemFilePath @ 0x14073DB74
 * Callers:
 *     PiDrvDbResolveFilePathKeyValues @ 0x14073D4AC (PiDrvDbResolveFilePathKeyValues.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14006DCF0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400BAE30 (RtlAppendUnicodeStringToString.c)
 *     _wcsnicmp @ 0x1401889A0 (_wcsnicmp.c)
 *     RtlUnicodeStringCchCopyN @ 0x14023DCB4 (RtlUnicodeStringCchCopyN.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     RtlPrefixUnicodeString @ 0x1405059D0 (RtlPrefixUnicodeString.c)
 *     ExpAllocateStringRoutine @ 0x140518FA0 (ExpAllocateStringRoutine.c)
 */

int __fastcall PiDrvDbResolveSystemFilePath(
        PCUNICODE_STRING SourceString,
        PCUNICODE_STRING Source,
        const UNICODE_STRING *a3,
        UNICODE_STRING *a4)
{
  unsigned int v8; // r15d
  BOOLEAN v9; // al
  wchar_t *Buffer; // rbx
  wchar_t *v11; // rbx
  WCHAR v12; // cx
  int result; // eax
  int v14; // edi
  __int64 v15; // rax
  unsigned int v16; // edi
  wchar_t *StringRoutine; // rax

  v8 = 0;
  v9 = RtlPrefixUnicodeString(&PiDrvDbSystemRootNt, SourceString, 1u);
  Buffer = SourceString->Buffer;
  if ( v9 )
  {
    v11 = Buffer + 11;
  }
  else
  {
    if ( RtlPrefixUnicodeString(&PiDrvDbSystemRootWin32, SourceString, 1u) )
    {
      v11 = Buffer + 12;
    }
    else
    {
      if ( *Buffer != 64 || wcsnicmp(Buffer + 1, L"%SystemRoot%", 0xCuLL) )
        return -1073741637;
      v8 = 1;
      v11 = SourceString->Buffer + 13;
    }
    Source = a3;
  }
  if ( !Source )
    return -1073741637;
  v12 = *v11;
  if ( *v11 && v12 != 92 )
    return -1073741275;
  v14 = Source->Length + 2 * v8;
  if ( v12 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( v11[v15] );
    v14 += 2 * v15;
  }
  v16 = v14 + 2;
  if ( v16 > 0xFFFE )
    return -2147483643;
  if ( v16 > a4->MaximumLength )
  {
    RtlFreeAnsiString(a4);
    a4->MaximumLength = v16;
    StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v16);
    a4->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741670;
  }
  a4->Length = 0;
  if ( !v8 || (result = RtlUnicodeStringCchCopyN(a4, SourceString, v8), result >= 0) )
  {
    result = RtlAppendUnicodeStringToString(a4, Source);
    if ( result >= 0 )
    {
      if ( *v11 )
        return RtlAppendUnicodeToString(a4, v11);
    }
  }
  return result;
}
