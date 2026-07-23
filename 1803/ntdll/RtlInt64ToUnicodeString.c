/*
 * XREFs of RtlInt64ToUnicodeString @ 0x1800E6730
 * Callers:
 *     <none>
 * Callees:
 *     RtlLargeIntegerToChar @ 0x1800020E0 (RtlLargeIntegerToChar.c)
 *     RtlAnsiStringToUnicodeString @ 0x18003B0F0 (RtlAnsiStringToUnicodeString.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlInt64ToUnicodeString(ULONGLONG Value, ULONG Base, PUNICODE_STRING String)
{
  NTSTATUS result; // eax
  __int64 v5; // rax
  ANSI_STRING SourceString; // [rsp+20h] [rbp-78h] BYREF
  CHAR v7[80]; // [rsp+30h] [rbp-68h] BYREF

  *(_QWORD *)&SourceString.Length = Value;
  result = RtlLargeIntegerToChar((PLARGE_INTEGER)&SourceString, Base, 65, v7);
  if ( result >= 0 )
  {
    SourceString.MaximumLength = 65;
    SourceString.Buffer = v7;
    v5 = -1LL;
    do
      ++v5;
    while ( v7[v5] );
    SourceString.Length = v5;
    return RtlAnsiStringToUnicodeString(String, &SourceString, 0);
  }
  return result;
}
